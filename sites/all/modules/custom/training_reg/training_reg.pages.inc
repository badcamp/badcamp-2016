<?php
/**
 * @file
 * Training registration forms.
 */

/**
 * Training registration form.
 */
function training_reg_registration_form($form, &$form_state, $node) {
  global $user;

  if (training_reg_registration_remaining($node) == 0) {
    drupal_set_message(t('Sorry, the training is full.'), 'error');
    drupal_goto('node/' . $node->nid);
    return;
  }

  if (training_reg_user_registered($user, $node)) {
    drupal_set_message(t('Congratulations, you are already registered!'));
    drupal_goto('node/' . $node->nid);
    return;
  }

  $form_state['training'] = $node;

  $form['stripe'] = array(
    '#type' => 'stripe_payment',
    '#prefix' => '<div id="stripe-wrapper">',
    '#suffix' => '</div>',
  );
  $form['card_submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit payment and register'),
    '#attributes' => array(
      'class' => array('submit-button'),
    ),
  );

  return $form;
}

/**
 * Training registration form submission.
 */
function training_reg_registration_form_submit($form, &$form_state) {
  global $user;
  $node = $form_state['training'];

  if (($library = libraries_load('stripe')) && !empty($library['installed'])) {
    try {
      $charge = \Stripe\Charge::create(array(
        'amount' => variable_get('training_reg_price', '2000'),
        'currency' => 'usd',
        'card' => $form_state['values']['stripe']['stripe_token'],
        'description' => variable_get('site_name', '') . ' - Training Registration for ' . check_plain($node->title),
      ));
      $stripe_transaction_id = $charge->__get('id');
      $stripe_transaction_status = $charge->__get('status');
    }
    catch (Exception $e) {
      form_set_error('', $e->getMessage());
      $form_state['rebuild'] = TRUE;

      watchdog('training_reg', $e->getMessage(), array(), WATCHDOG_ERROR);
      return;
    }
  }
  else {
    watchdog('training_reg', 'Error loading Stripe library', array(), WATCHDOG_CRITICAL);
    $error_msg = t('There was an error processing the request. Details have been logged. Please notify the admins.');
    drupal_set_message($error_msg, 'error');
    return;
  }

  // Create a Training Registration entity for this training and user.
  // if the transaction status is successful.
  if ($stripe_transaction_status == 'succeeded') {
    drupal_set_message(t('Success! You are now registered for: @name',
      array('@name' => $node->title)));

    $entity_type = 'training_reg';
    $entity = entity_create($entity_type, array('type' => 'training_reg'));
    $wrapper = entity_metadata_wrapper($entity_type, $entity);
    $wrapper->title = check_plain($node->title . ' - ' . $user->name);
    $wrapper->field_training_reg_training = $node;
    $wrapper->field_training_reg_attendee = $user;
    $wrapper->field_training_reg_stripe_trans = $stripe_transaction_id;
    $wrapper->save();
  }

  drupal_goto('node/' . $node->nid);
}
