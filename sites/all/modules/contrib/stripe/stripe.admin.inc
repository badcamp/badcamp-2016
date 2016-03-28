<?php

/**
 * @file
 * Stripe administration and module settings UI.
 */

/**
 * Menu callback: configure Stripe API Keys.
 */
function stripe_admin_keys() {
  $keys = array(
    'test_secret' => t('Test Secret Key'),
    'test_publishable' => t('Test Publishable Key'),
    'live_secret' => t('Live Secret Key'),
    'live_publishable' => t('Live Publishable Key'),
  );
  $secret = stripe_get_key("secret");
  $publishable = stripe_get_key("publishable");
  if ($secret && $publishable) {
    if (($library = libraries_load('stripe')) && !empty($library['loaded'])) {
      $info = \Stripe\Account::retrieve();
      $account_information = "<label>Email:</label> " . $info->email;
      $account_information .= "<br /><label>Statement Descriptor:</label> " . $info->statement_descriptor;
      $account_information .= "<br /><label>Details Submitted:</label> " . $info->details_submitted;
      $account_information .= "<br /><label>Charge Enabled:</label> " . $info->charge_enabled;
      $account_information .= "<br /><label>Transfer Enabled:</label> " . $info->transfer_enabled;
      $account_information .= "<br /><label>currencies_supported:</label> " . implode(", ", $info->currencies_supported);
    }
    else {
      $account_information = t("Failed to load Stripe library.");
    }
  }
  else {
    $account_information = t("Please configure the stripe keys below to see your acccount information");
  }

  $form['stripe_account_information'] = array(
    '#type' => 'fieldset',
    '#title' => t('Account Information'),
    '#collapsible' => FALSE,
  );
  $form['stripe_account_information']['info'] = array(
    '#markup' => $account_information,
  );
  $form['api_keys'] = array(
    '#type' => 'fieldset',
    '#title' => t('API Keys'),
    '#collapsible' => FALSE,
  );

  $active_key = variable_get('stripe_key_status', 'test');

  $form['api_keys']['stripe_key_status'] = array(
    '#type' => 'radios',
    '#title' => t('Stripe API Status'),
    '#default_value' => $active_key,
    '#options' => array(
      'test' => t('Test'),
      'live' => t('Live'),
    ),
    '#description' => t('This determines which set of keys you are using.'),
    '#required' => TRUE,
  );

  foreach ($keys as $machine_name => $name) {
    $form['api_keys']['stripe_' . $machine_name] = array(
      '#type' => 'textfield',
      '#title' => $name,
      '#size' => 35,
      '#default_value' => variable_get('stripe_' . $machine_name, ''),
      '#required' => TRUE,
    );
  }

  $form['stripe_log_webhooks'] = array(
    '#type' => 'checkbox',
    '#title' => t('Log Webhooks'),
    '#description' => t('This will log all valid webhook requests with their event data to the db log.'),
    '#default_value' => variable_get('stripe_log_webhooks', 0),
  );

  return system_settings_form($form);
}
