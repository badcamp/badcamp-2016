<?php
/**
 * @file
 * Stripe Donation payment form and handling.
 */

/**
 * Stripe payment form.
 */
function stripe_donation_payment_form($form, &$form_state, $selected_type) {
  global $user;

  $selected_type = check_plain($selected_type);

  $form = array();

  if (!isset($selected_type) || !is_numeric($selected_type)) {
    watchdog('stripe_donation', "The Stripe Donation Payment form was unable to
    be loaded for User: @uid - @username because the the selected donation type passed in
    was not available or was not numeric.",
      array('@uid' => $user->uid, '@username' => $user->name));
    return FALSE;
  }

  $form['stripe_donation_type_selected'] = array(
    '#type' => 'value',
    '#value' => $selected_type,
  );

  $form['stripe'] = array(
    '#type' => 'stripe_payment',
    '#prefix' => '<div id="stripe-wrapper">',
    '#suffix' => '</div>',
  );

  $form['stripe_donation_payment_submit'] = array(
    '#type' => 'submit',
    '#value' => t('Next'),
  );

  return $form;
}

/**
 * Stripe payment form submission handler.
 */
function stripe_donation_payment_form_submit($form, &$form_state) {
  global $user;

  // Get the selected donation type's value.
  $selected_donation_id = $form_state['values']['stripe_donation_type_selected'];
  $donation_type = _donation_options_get_donation_type($selected_donation_id);
  $donation_value = $donation_type->field_donation_type_amount->value();
  $donation_title = $donation_type->title->value();
  $recipient = variable_get('site_name', '');

  if (($library = libraries_load('stripe')) && !empty($library['installed'])) {
    try {
      $makescents = (int) $donation_value * 100;
      $charge = \Stripe\Charge::create(array(
        "amount" => $makescents,
        "currency" => "usd",
        "card" => $form_state['values']['stripe']['stripe_token'],
        "description" => $recipient .
          ' - Donation ' .
          check_plain($donation_title) . " - " . $user->name,
      ));
      $stripe_transaction_id = $charge->__get('id');
      $stripe_transaction_status = $charge->__get('status');
    }
    catch (Exception $e) {
      form_set_error('', $e->getMessage());
      $form_state['rebuild'] = TRUE;

      watchdog('stripe_donation', $e->getMessage(), array(), WATCHDOG_ERROR);
      return;
    }
  }
  else {
    watchdog('stripe_donation', 'Error loading Stripe library', array(), WATCHDOG_CRITICAL);
    $error_msg = t('There was an error processing the request. Details have been logged. Please notify the admins.');
    drupal_set_message($error_msg, 'error');
    return;
  }

  if ($stripe_transaction_status == 'succeeded') {
    drupal_set_message(t('Thanks! You have made a $@amt donation (@type_name) to @recipient', array(
      '@amt' => $donation_value,
      '@type_name' => $donation_title,
      '@recipient' => $recipient,
    )));

    // Create a Donation entity for this type and user.
    $entity_type = 'donation';
    $entity = entity_create($entity_type, array('type' => 'donation'));
    $wrapper = entity_metadata_wrapper($entity_type, $entity);
    $wrapper->field_donation_type = $selected_donation_id;
    $wrapper->field_donation_user = $user->uid;
    $wrapper->field_donation_stripe_trans = $stripe_transaction_id;
    $wrapper->save();
  }

  drupal_goto('/user');
}
