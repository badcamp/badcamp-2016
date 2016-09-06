<?php
/**
 * @file
 * Event registration administrative form.
 */

/**
 * Simple training registration administration form.
 */
function event_reg_admin_form($form, &$form_state) {

  $form['event_reg_message'] = array(
    '#type' => 'textfield',
    '#required' => FALSE,
    '#title' => t('Message / Information'),
    '#description' => t('This is the text that lets people know why they are registering.'),
    '#default_value' => t('Secure your seat today by registering -- openings go quickly, and events will get full.'),
  );

  return system_settings_form($form);
}
