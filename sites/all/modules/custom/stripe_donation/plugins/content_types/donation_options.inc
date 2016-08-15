<?php
/**
 * @file
 * Donation options.
 *
 * Lists the donation options form in a panels content type pane that will give
 * the site visitor a choice of how much they would like to donate based on the
 * existing donation type entities.
 */

/**
 * Plugins are described by creating a $plugin array.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Donation Form'),
  'no title override' => FALSE,
  'description' => t('Donation options and payment form'),
  'category' => t('Donations'),
  'edit form' => 'stripe_donation_donation_options_edit_form',
);

/**
 * Returns the administrative title for a type.
 */
function stripe_donation_donation_options_content_type_admin_title($subtype, $conf, $context) {
  return t('Donation Form');
}

/**
 * Edit form for panel pane settings.
 */
function stripe_donation_donation_options_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  /*
   * @todo: make this title setting have an effect - Will have to make the
   * selection to payment form a multi-step form instead of using hook_menu
   * to get to payment form.
   */
  $form['stripe_donation_zero_amt_donation_redirect_path'] = array(
    '#type' => 'textfield',
    '#required' => FALSE,
    '#title' => t('Zero Amount Donation Redirect'),
    '#description' => t('What path should users be redirected to when they select a donation amount that is zero?'),
    '#default_value' => !empty($conf['stripe_donation_zero_amt_donation_redirect_path']) ? $conf['stripe_donation_zero_amt_donation_redirect_path'] : '/user',
  );

  return $form;
}

/**
 * Configuration edit form submit handler.
 */
function stripe_donation_donation_options_edit_form_submit($form, &$form_state) {
  foreach (array('stripe_donation_payment_page_title') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
  foreach (array('stripe_donation_zero_amt_donation_redirect_path') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

/**
 * Render the ctools content type.
 */
function stripe_donation_donation_options_content_type_render($subtype, $conf, $panel_args, $context) {
  global $user;
  // Redirect if they already have a donation.
  if (_donation_options_check_existing_donation($user)) {
    drupal_set_message(t("You've already donated, thank you!"));
    drupal_goto('/user');
  }

  // Build the content type block.
  $block = new stdClass();
  $block->module = 'stripe_donation';
  $block->delta = 'stripe_donation_form';
  $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
  $block->content = drupal_get_form('stripe_donation_options_form', $conf);
  return $block;
}

/**
 * Donation options form.
 */
function stripe_donation_options_form($form, &$form_state) {
  $form = array();

  $default_donation_option = FALSE;
  if (isset($form_state['values']['stripe_donation_options'])) {
    $default_donation_option = $form_state['values']['stripe_donation_options'];
  }

  $donation_types = entity_load('donation_type');

  foreach ($donation_types as $key => $donation_type) {
    $donation_type_view = entity_view('donation_type', array($donation_type), 'teaser');
    $donation_options[$key] = render($donation_type_view);
    // Set the default value to the option that is zero dollars if the donation
    // selected has not already been selected.
    $wrapped_donation_type = entity_metadata_wrapper('donation_type', $donation_type);
    if (!isset($form_state['values']['stripe_donation_options'])
      && $wrapped_donation_type->field_donation_type_amount->value() == '0'
    ) {
      $default_donation_option = $key;
    }
  }
  $form['stripe_donation_options'] = array(
    '#type' => 'radios',
    '#required' => TRUE,
    '#default_value' => $default_donation_option,
    '#options' => $donation_options,
    '#prefix' => '<div class="row">',
    '#suffix' => '</div>',
  );

  $form['stripe_donation_submit'] = array(
    '#type' => 'submit',
    '#value' => t('Next'),
    '#prefix' => '<div class="form-actions form-wrapper"><div class="form-submit-wrapper button">',
    '#suffix' => '</div></div>',
  );

  return $form;
}

/**
 * Validate donation options.
 */
function stripe_donation_options_form_validate($form, &$form_state) {
  // Make sure the donation option is a numeric value
  // (the key of the donation type entity).
  if (isset($form_state['values']['stripe_donation_options'])
    && !is_numeric($form_state['values']['stripe_donation_options'])
  ) {
    form_set_error('stripe_donation_options', 'You need to select the option you want from the provided options.');
    return FALSE;
  }
}

/**
 * Donation option form submission.
 */
function stripe_donation_options_form_submit($form, &$form_state) {
  $conf = $form_state['build_info']['args'][0];

  // Get the selected donation type's value.
  $selected_donation_id = $form_state['values']['stripe_donation_options'];
  $donation_value = _donation_options_get_amount($selected_donation_id);

  // If the value of the selected action is $0, move on.
  if ($donation_value == '0') {
    $path = !empty($conf['stripe_donation_zero_amt_donation_redirect_path']) ?
      $conf['stripe_donation_zero_amt_donation_redirect_path'] : '/user';
    $form_state['redirect'] = $path;
  }
  else {
    // @TODO: Make the payment form a second step in a multi-step form instead
    // of going through hook menu.
    $form_state['redirect'] = 'donation/payment/' . $selected_donation_id;
  }

}
