<?php
/**
 * @file
 * Stripe Payment controller class and helper code (classes and function).
 */

class StripePaymentValidationException extends PaymentValidationException {}

class StripePaymentMethodController extends PaymentMethodController {

  /**
   * The function name of the payment configuration form elements.
   */
  public $payment_configuration_form_elements_callback = 'stripe_payment_configuration_form_elements';

  /**
   * The function name of the payment method configuration form elements.
   */
  public $payment_method_configuration_form_elements_callback = 'stripe_payment_method_configuration_form_elements';

  /**
   * Default values for the controller_data property of a PaymentMethod that
   * uses this controller.
   */
  public $controller_data_defaults = array(
    'keys' => array(
      'mode' => 0,
      'secret' => '',
      'publishable' => '',
    ),
  );

  /**
   * Public constructor.
   */
  public function __construct() {
    static::loadLibrary();
    $this->currencies = array_fill_keys(array('CAD', 'USD'), array('minimum' => 0.5));
    $this->title = t('Stripe Payment');
  }

  /**
   * Wakeup.
   */
  public function __wakeup() {
    static::loadLibrary();
  }

  /**
   * Ensure the Stripe API library is loaded.
   *
   * This method is intended to be invoked fron __constructor() and __wakeup()
   * to ensure the Stripe API is loaded before the controller is used. Avoiding
   * the need to load the Stripe API in every method.
   *
   * @throws Exception
   *   If the Stripe API library can not be loaded.
   */
  protected static function loadLibrary() {
    if (!($library = libraries_load('stripe')) || empty($library['loaded'])) {
      throw new Exception('Cannot load Stripe PHP Library.');
    }
  }

  /**
   * Validate a payment against a payment method and this controller.
   *
   * Don't call directly. Use PaymentMethod::validate() instead.
   *
   * @see PaymentMethod::validate()
   *
   * @param Payment $payment
   *   The validated payment.
   * @param PaymentMethod $payment_method
   *   The payment method for the validated payment.
   * @param boolean $strict
   *   Whether to validate everything a payment method needs or to validate the
   *   most important things only. Useful when finding available payment
   *   methods, for instance, which does not require unimportant things to be a
   *   100% valid.
   *
   * @throws PaymentValidationException
   */
  public function validate(Payment $payment, PaymentMethod $payment_method, $strict) {
    parent::validate($payment, $payment_method, $strict);
    // Confirm the payment's currency is supported (for the Stripe account).
    if ($stripe_account = $this->retrieveAccount($payment_method)) {
      if (!in_array($payment->currency_code, $stripe_account->currencies_supported)) {
        throw new PaymentValidationUnsupportedCurrencyException(t('The currency is not supported by this payment method.'));
      }
    }
    // Confirm we have a token, a customer or a card information.
    if ($strict && !isset($payment->method_data['token'])
      && !isset($payment->method_data['card'])
      && !isset($payment->method_data['customer'])) {
      throw new StripePaymentValidationException("A Stripe payment must have card or a customer to charge.");
    }
  }

  /**
   * Execute a payment.
   *
   * @param Payment $payment
   *   The executed payment.
   *
   * @return boolean
   *   Whether the payment was successfully executed or not.
   */
  public function execute(Payment $payment) {
    $api_key = !empty($payment->method->controller_data['keys']['mode']) ? $payment->method->controller_data['keys']['secret'] : stripe_get_key('secret');
    try {
      if (empty($payment->method_data['charge'])) {
        // Create the Stripe Charge for the payment.
        $data = array(
          'amount' => $payment->totalAmount(TRUE) * 100,
          'currency' => $payment->currency_code,
          'description' => t($payment->description, $payment->description_arguments),
        );
        // Charge a token...
        if (isset($payment->method_data['token'])) {
          $data['card'] = $payment->method_data['token'];
        }
        // ... or a customer ...
        elseif (isset($payment->method_data['customer'])) {
          $data['customer'] = $payment->method_data['customer'];
        }
        // ... or a card.
        elseif (isset($payment->method_data['card'])) {
          $data['card'] = $payment->method_data['card'];
        }
        // Support execution of Payment with a non-captured charge. Currently
        // not provided in the UI. Probably not usable without more work.
        if (isset($payment->method_data['capture'])) {
          $data['capture'] = $payment->method_data['capture'];
        }
        // Support for application fee. Currently not provided in the UI.
        // Probably not usable without more work.
        if (isset($payment->method_data['application_fee'])) {
          $data['capture'] = $payment->method_data['application_fee'];
        }
        $charge = \Stripe\Charge::create($data, $api_key);
        $payment->setStatus($this->statusFromCharge($charge));
        $payment->method_data['charge'] = $charge->id;
        watchdog(
          'stripe_payment',
          'Stripe Charge [id=@charge_id] created for Payment [pid=@pid].',
          array(
            '@charge_id' => $payment->method_data['charge'],
            '@pid' => $payment->pid,
          ),
          WATCHDOG_DEBUG, l(t('view'), "payment/{$payment->pid}", array('absolute' => TRUE))
        );
      }
      else {
        // The Payment is already linked to a Stripe Charge. This should not
        // happen. Let's update the payment status and pretend everything went
        // fine.
        watchdog('stripe_payment', 'Executing a payment already linked to a Stripe Charge [id=@charge_id].', array(
          '@charge_id' => $payment->method_data['charge'],
        ), WATCHDOG_WARNING, url("payment/{$payment->pid}"));
        // Do not use the StripePaymentMethodController::retrieveCharge() method
        // since we want to catch Stripe exception.
        $charge = \Stripe\Charge::retrieve($payment->method_data['charge'], $api_key);
        $payment->setStatus($this->statusFromCharge($charge));
      }
      // If we get to this LoC, then the payment execution has succeeded.
      return TRUE;
    }
    // TODO: Change Stripe_CardError to \Stripe\Error\Card.
    catch (Stripe_CardError $e) {
      $payment->setStatus($this->statusFromCardErrorCode($e->getCode()));
      // Display human-readable message.
      if ($e->getMessage()) {
        drupal_set_message($e->getMessage(), 'error');
      }
      // Log error.
      watchdog(
        'stripe_payment',
        'Stripe Card Error for Payment [pid=@pid]: @message.',
        array(
          '@pid' => $payment->pid,
          '@message' => $e->getMessage(),
        ),
        WATCHDOG_ERROR,
        l(t('view'), "payment/{$payment->pid}")
      );
    }
    // TODO: Change Stripe_InvalidRequestError to \Stripe\Error\...
    catch (Stripe_InvalidRequestError $e) {
      $payment->setStatus(new PaymentStatusItem(STRIPE_PAYMENT_STATUS_INVALID_REQUEST));
      watchdog(
        'stripe_payment',
        'Invalid Stripe Request for Payment [pid=@pid]: @message.<br/>!json_body',
        array(
          '@pid' => $payment->pid,
          '@message' => $e->getMessage(),
          '!json_body' => '<?php ' . highlight_string(var_export($e->getJsonBody(), TRUE), TRUE),
        ),
        WATCHDOG_ERROR,
        l(t('view'), "payment/{$payment->pid}")
      );
    }
    // TODO: Change Stripe_AuthenticationError to \Stripe\Error\Authentication
    catch (Stripe_AuthenticationError $e) {
      $payment->setStatus(new PaymentStatusItem(STRIPE_PAYMENT_STATUS_AUTHENTICATION_ERROR));
      if (payment_method_access('update', $payment->method)) {
        drupal_set_message(
          t("Stripe Authentication Error for Payment [pid=@pid]: @message.",
            array(
              '@pid' => $payment->pid,
              '@message' => $e->getMessage(),
            )
          ) . t("Please review <a href='@url'>configuration</a>.", array('@url' => url("admin/config/services/payment/method/{$payment->method->pmid}"))),
        'error');
      }
      watchdog(
        'stripe_payment',
        "Stripe Authentication Error for Payment [pid=@pid]: @message.",
        array(
          '@pid' => $payment->pid,
          '@message' => $e->getMessage(),
        ),
        WATCHDOG_ERROR,
        l(t('edit'), "admin/config/services/payment/method/{$payment->method->pmid}")
      );
    }
    // TODO: Change Stripe_ApiError to \Stripe\Error\Api
    catch (Stripe_ApiError $e) {
      $payment->setStatus(new PaymentStatusItem(STRIPE_PAYMENT_STATUS_API_ERROR));
      watchdog(
        'stripe_payment',
        'Stripe API Error for Payment [pid=@pid]: @message.<br/>!json_body',
        array(
          '@pid' => $payment->pid,
          '@message' => $e->getMessage(),
          '!json_body' => '<?php ' . highlight_string(var_export($e->getJsonBody(), TRUE), TRUE),
        ),
        WATCHDOG_ERROR,
        l(t('view'), "payment/{$payment->pid}")
      );
    }
    catch (Exception $e) {
      $payment->setStatus(new PaymentStatusItem(STRIPE_PAYMENT_STATUS_UNKNOWN_ERROR));
      watchdog(
        'stripe_payment',
        'Unknown Exception for Payment [pid=@pid]: @message.<br/><pre>!trace</pre>',
        array(
          '@pid' => $payment->pid,
          '@message' => $e->getMessage(),
          '!trace' => $e->getTraceAsString(),
        ),
        WATCHDOG_ERROR,
        l(t('view'), "payment/{$payment->pid}")
      );
    }
    // The only way to reach this LoC is to exit the try block with an
    // exception. Thus, the payment execution has failed.
    return FALSE;
  }

  /**
   * Retrieve the Stripe Account object for a given Payment Method.
   *
   * This method handles Stripe errors and logs them to Drupal's watchdog.
   *
   * Result for a given Payment Method is cached both statically and temporarily
   * in Drupal's cache.
   *
   * @param PaymentMethod $payment_method
   *   A Payment Method.
   *
   * @return \Stripe\Account
   *   The Stripe Account object for the given payment method. Or NULL if the
   *   account could not be retrieved (errors are logged to Drupal's watchdog).
   *   TODO: Change Stripe_Error to new \Stripe\Error\...
   */
  public function retrieveAccount(PaymentMethod $payment_method) {
    if ($payment_method->controller->name === 'StripePaymentMethodController') {
      $accounts[] = &drupal_static(__METHOD__, array());
      if (!isset($accounts[$payment_method->pmid])) {
        $cid = "stripe_payment:{$payment_method->pmid}:account";
        $cache = cache_get($cid);
        if ($cache && !empty($cache->data)) {
          $accounts[$payment_method->pmid] = $cache->data;
        }
        else {
          $api_key = !empty($payment_method->controller_data['keys']['mode']) ? $payment_method->controller_data['keys']['secret'] : stripe_get_key('secret');
          try {
            $stripe_account = \Stripe\Account::retrieve($api_key);
            cache_set($cid, $stripe_account, 'cache', CACHE_TEMPORARY);
            $accounts[$payment_method->pmid] = $stripe_account;
          }
          // TODO: Change Stripe_Error to \Stripe\Error\...
          catch (Stripe_Error $e) {
            if (payment_method_access('update', $payment_method)) {
              drupal_set_message(
                t("Unable to retrieve Stripe Account for <a href='@url'>Payment Method</a>: @message.",
                  array(
                    '@message' => $e->getMessage(),
                    '@url' => url("admin/config/services/payment/method/{$payment_method->pmid}"),
                  )
                ), 'error');
            }
            watchdog(
              'stripe_payment',
              "Unable to retrieve Stripe Account for <a href='@url'>Payment Method</a>: @message.",
              array(
                '@message' => $e->getMessage(),
                '@url' => url("admin/config/services/payment/method/{$payment_method->pmid}"),
              ),
              WATCHDOG_ERROR,
              l(t('edit'), "admin/config/services/payment/method/{$payment_method->pmid}")
            );
            $accounts[$payment_method->pmid] = NULL;
          }
        }
      }
      return $accounts[$payment_method->pmid];
    }
    else {
      return NULL;
    }
  }

  /**
   * Retrieve the Stripe Charge object for a given Payment.
   *
   * This method handles Stripe errors and logs them to Drupal's watchdog. If
   * the user has view access to the Payment object, errors are also displayed
   * as error message.
   *
   * Result for a given Payment and its Payment Method is cached temporarily in
   * Drupal's cache.
   *
   * @param Payment $payment
   *   A Payment object.
   *
   * @return \Stripe\Charge
   *   The Stripe Charge object for the given Payment. Or NULL if no Stripe
   *   Charge could be retrieved (errors are logged to Drupal's watchdog) or
   *   if the Payment does not use Stripe.
   *   TODO: Change Stripe_Error to new \Stripe\Error\...
   */
  public function retrieveCharge(Payment $payment) {
    if ($payment->method->controller->name === 'StripePaymentMethodController' && isset($payment->method_data['charge'])) {
      $cid = "stripe_payment:{$payment->method->pmid}:charge:{$payment->method_data['charge']}";
      $cache = cache_get($cid);
      if ($cache && !empty($cache->data)) {
        return $cache->data;
      }
      else {
        $api_key = !empty($payment->method->controller_data['keys']['mode']) ? $payment->method->controller_data['keys']['secret'] : stripe_get_key('secret');
        try {
          $charge = \Stripe\Charge::retrieve($payment->method_data['charge'], $api_key);
          cache_set($cid, $charge, 'cache', CACHE_TEMPORARY);
          return $charge;
        }
        // TODO: Change Stripe_Error to \Stripe\Error\...
        catch (Stripe_Error $e) {
          if (payment_access('view', $payment)) {
            drupal_set_message(
              t('Unable to retrieve Stripe Charge for <a href="@url">Payment</a>: @message.',
                array(
                  '@url' => url("payment/{$payment->pid}"),
                  '@message' => $e->getMessage(),
                )
              ), 'error');
          }
          watchdog(
            'stripe_payment',
            'Unable to retrieve Stripe Charge for <a href="@url">Payment</a>: @message.',
            array(
              '@url' => url("payment/{$payment->pid}"),
              '@message' => $e->getMessage(),
            ),
            WATCHDOG_ERROR,
            l(t('view'), "payment/{$payment->pid}")
          );
        }
      }
    }
    return NULL;
  }

  /**
   * Retrieve the Stripe Token object for a given Payment.
   *
   * This method handles Stripe errors and logs them to Drupal's watchdog. If
   * the user as view access to the Payment object, errors are also displayed
   * as error message.
   *
   * @param Payment $payment
   *   A Payment object.
   *
   * @return \Stripe\Token
   *   The Stripe Token object for the given Payment. Or NULL if no Stripe
   *   Token could be retrieved (errors are logged to Drupal's watchdog) or if
   *   the Payment does not use Stripe.
   */
  public function retrieveToken(Payment $payment) {
    if ($payment->method->controller->name === 'StripePaymentMethodController' && $payment->method_data['token']) {
      $api_key = !empty($payment->method->controller_data['keys']['mode']) ? $payment->method->controller_data['keys']['secret'] : stripe_get_key('secret');
      try {
        return \Stripe\Token::retrieve($payment->method_data['token'], $api_key);
      }
      // TODO: Change Stripe_Error to \Stripe\Error\...
      catch (Stripe_Error $e) {
        if (payment_access('view', $payment)) {
          drupal_set_message(
            t('Unable to retrieve Stripe Token for <a href="@url">Payment</a>: @message.',
              array(
                '@url' => url("payment/{$payment->pid}"),
                '@message' => $e->getMessage(),
              )
            ), 'error');
        }
        watchdog(
          'stripe_payment',
          'Unable to retrieve Stripe Token for <a href="@url">Payment</a>: @message.',
          array(
            '@url' => url("payment/{$payment->pid}"),
            '@message' => $e->getMessage(),
          ),
          WATCHDOG_ERROR,
          l(t('view'), "payment/{$payment->pid}")
        );
      }
    }
    return NULL;
  }

  /**
   * Map a card error code to a Payment status.
   *
   * @paran string $code
   *   A Stripe card error code.
   *
   * @return PaymentStatusItem
   *   The Payment status matching the error code.
   */
  protected function statusFromCardErrorCode($code) {
    if (empty($code)) {
      return new PaymentStatusItem(STRIPE_PAYMENT_STATUS_UNKNOWN_ERROR);
    }
    $status = 'STRIPE_PAYMENT_STATUS_' . drupal_strtoupper($code);
    if (defined($status)) {
      return new PaymentStatusItem(constant($status));
    }
    else {
      return new PaymentStatusItem(STRIPE_PAYMENT_STATUS_UNKNOWN_ERROR);
    }
  }

  /**
   * Map a Strip Charge object to a Payment status.
   *
   * @param \Stripe\Charge $charge
   *   A stripe charge object.
   *
   * TODO: Add support for refunded charge.
   *
   * @return PaymentStatusItem
   *   The Payment status matching the charge object.
   */
  protected function statusFromCharge(\Stripe\Charge $charge) {
    if ($charge->paid) {
      return new PaymentStatusItem(STRIPE_PAYMENT_STATUS_PAID);
    }
    elseif (!$charge->captured) {
      return new PaymentStatusItem(STRIPE_PAYMENT_STATUS_UNCAPTURED);
    }
    else {
      return new PaymentStatusItem(PAYMENT_STATUS_UNKNOWN);
    }
  }

  /**
   * Builder for the method configuration form elements.
   *
   * @param array $element
   *   The parent element.
   * @param array $form_state
   *   The form states.
   *
   * TODO: Allow admin to configure a payment method WITHOUT Stripe.js.
   *       The card information for the method's Payment will then be be stored
   *       in the Payment::method_data. Provide clear and visible warning with
   *       information regarding the security risk and PCI compliance.
   * TODO: Add option to (not) collect card holder's name.
   * TODO: Add option to collect card holder's address.
   *
   * @return array
   *   The forms elements to configure a payment method.
   */
  public function payment_method_configuration_form_elements(array $element, array &$form_state) {
    $controller_data = $form_state['payment_method']->controller_data + $this->controller_data_defaults;
    $elements = array();
    $elements['keys'] = array(
      '#type' => 'fieldset',
      '#title' => t('Authentication'),
      '#tree' => TRUE,
      'mode' => array(
        '#type' => 'select',
        '#options' => array(
          0 => t('Use site-wide keys'),
          1 => t('Use specific keys'),
        ),
        '#attributes' => array('class' => array('keys-mode')),
        '#default_value' => $controller_data['keys']['mode'],
      ),
      'site-wide' => array(
        '#type' => 'item',
        '#markup' => t('Using site-wide %status keys as configured on the <a href="@url">Stripe settings page</a>.', array(
            '%status' => variable_get('stripe_key_status', 'test'),
            '@url' => url('admin/config/stripe/settings'),
          )),
        '#states' => array(
          'visible' => array(
            ':input.keys-mode' => array('value' => 0),
          ),
        ),
      ),
      'secret' => array(
        '#type' => 'textfield',
        '#title' => t('Secret Key'),
        '#states' => array(
          'visible' => array(
            ':input.keys-mode' => array('value' => 1),
          ),
          'required' => array(
            ':input.keys-mode' => array('value' => 1),
          ),
        ),
        '#default_value' => $controller_data['keys']['secret'],
      ),
      'publishable' => array(
        '#type' => 'textfield',
        '#title' => t('Publishable Key'),
        '#states' => array(
          'visible' => array(
            ':input.keys-mode' => array('value' => 1),
          ),
          'required' => array(
            ':input.keys-mode' => array('value' => 1),
          ),
        ),
        '#default_value' => $controller_data['keys']['publishable'],
      ),
    );
    return $elements;
  }

  /**
   * Validate callback for the method configuration form elements.
   *
   * @param array $element
   *   The parent element.
   * @param array $form_state
   *   The form states.
   */
  public function payment_method_configuration_form_elements_validate(array $element, array &$form_state) {
    $values = drupal_array_get_nested_value($form_state['values'], $element['#parents']);
    if ($values['keys']['mode']) {
      foreach (array('secret' => 'sk', 'publishable' => 'pk') as $type => $prefix) {
        if (empty($values['keys'][$type])) {
          form_error($element['keys'][$type], t('!name field is required.', array('!name' => $element['keys'][$type]['#title'])));
        }
        elseif (strpos($values['keys'][$type], $prefix) !== 0) {
          form_error($element['keys'][$type], t('!name should start with %prefix.', array(
            '!name' => $element['keys'][$type]['#title'],
            '%prefix' => $prefix,
          )));
        }
      }
    }
    $form_state['payment_method']->controller_data['keys'] = $values['keys'];
  }

  /**
   * Builder callback for the payment configuration form elements.
   *
   * TODO: Support form WITHOUT Stripe.js.
   *      (see TODO for payment_method_configuration_form_elements)
   * TODO: Support option to (not) collect card holder's name.
   * TODO: Support option to collect card holder's address.
   *
   * @param array $element
   *   The parent element.
   * @param array $form_state
   *   The form states.
   *
   * @return array
   *   The forms elements to configure a payment.
   */
  public function payment_configuration_form_elements(array $element, array &$form_state) {
    $payment = $form_state['payment'];
    $publishable_key = !empty($payment->method->controller_data['keys']['mode']) ? $payment->method->controller_data['keys']['publishable'] : stripe_get_key('publishable');
    $element = array(
      '#type' => 'stripe_payment',
      '#publishable_key' => $publishable_key,
    );
    return array('stripe' => $element);
  }

  /**
   * Validate callback for the payment configuration form elements.
   *
   * @param array $element
   *   The parent element.
   * @param array $form_state
   *   The form states.
   */
  public function payment_configuration_form_elements_validate(array $element, array &$form_state) {
    $values = drupal_array_get_nested_value($form_state['values'], $element['#parents']);
    $payment = &$form_state['payment'];
    $payment->method_data['token'] = $values['stripe']['stripe_token'];
  }
}