<?php
/**
 * @file
 * Stripe test form building callback and handlers.
 */

/**
 * Test/example implementation of the stripe form with the stripe_payment element.
 */
function stripe_admin_test($form, $form_state) {
  if (!stripe_get_key("secret") || !stripe_get_key("publishable")) {
    $form['error_markup'] = array(
      '#markup' => t("Please configure your Stripe API keys before attempting any test charges"),
    );
    return $form;
  }

  $form['stripe'] = array(
    '#type' => 'stripe_payment',
    '#address' => isset($form_state['values']['toggle_address']) ? (boolean) $form_state['values']['toggle_address'] : FALSE,
    '#prefix' => '<div id="stripe-wrapper">',
    '#suffix' => '</div>',
    '#weight' => 10,
  );
  $form['toggle_address'] = array(
    '#type' => 'checkbox',
    '#title' => t('Ask for address'),
    '#ajax' => array(
      'callback' => 'stripe_admin_test_ajax',
      'wrapper' => 'stripe-wrapper',
    ),
    '#default_value' => (boolean) $form['stripe']['#address'],
  );
  $form['amount'] = array(
    '#type' => 'textfield',
    '#title' => t('Amount:'),
    '#description' => '<em>cents</em>',
    '#default_value' => 99,
    '#size' => 6,
  );
  $form['card_submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit Payment'),
    '#attributes' => array(
      'class' => array('submit-button'),

    ),
    '#weight' => 100,
  );
  return $form;
}

/**
 * AJAX callback for dynamic address.
 */
function stripe_admin_test_ajax($form, &$form_state) {
  $form_state['rebuild'] = TRUE;
  return $form['stripe'];
}

/**
 * Submit callback for the stripe_admin_test form.
 */
function stripe_admin_test_submit($form, &$form_state) {
  if (($library = libraries_load('stripe')) && !empty($library['loaded'])) {
    try {
      $charge = \Stripe\Charge::create(array(
      // Amount in cents, again.
        "amount" => $form_state['values']['amount'],
        "currency" => "usd",
        "card" => $form_state['values']['stripe']['stripe_token'],
        "description" => "Test Charge from " . variable_get('site_name', 'My Drupal Site'),
      )
      );
      drupal_set_message("Success! Card was successfully charged for the amount of " . check_plain($form_state['values']['amount']));
    }
    catch (Exception $e) {
      form_set_error('', $e->getMessage());
      $form_state['rebuild'] = TRUE;
      return;
    }
  }
}
