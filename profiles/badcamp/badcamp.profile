<?php
/**
 * @file
 * Default form values.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function badcamp_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'BADCamp';
  $form['site_information']['site_mail']['#default_value'] = 'info@badcamp.net';
  $form['admin_account']['account']['name']['#default_value'] = 'BADCamp';
  $form['admin_account']['account']['mail']['#default_value'] = 'info@badcamp.net';
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
}
