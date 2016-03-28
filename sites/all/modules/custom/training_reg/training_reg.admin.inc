<?php
/**
 * @file
 * Training registration administrative form.
 */

/**
 * Simple training registration administration form.
 */
function training_reg_admin_form($form, &$form_state) {
  $form['training_reg_price'] = array(
    '#type' => 'textfield',
    '#title' => t('Training price'),
    '#description' => t('The cost of training registration in CENTS, not DOLLARS.'),
    '#default_value' => variable_get('training_reg_price', '2000'),
    '#size' => 60,
    '#maxlength' => 60,
    '#required' => TRUE,
  );

  $form['training_reg_message'] = array(
    '#type' => 'textfield',
    '#required' => FALSE,
    '#title' => t('Message / Information'),
    '#description' => t('This is the text that lets people know what they are paying for and how much they are paying before they click the register button that takes them to the payment screen.'),
    '#default_value' => t('Secure your seat today with a $20 fully-refundable deposit -- openings go quickly, and classes will fill up fast.'),
  );

  $form['training_payment_message'] = array(
    '#type' => 'textarea',
    '#required' => FALSE,
    '#title' => t('Payment page message'),
    '#description' => t('This is the text that lets people know what they are paying for and how much they are paying on the payment screen.'),
    '#default_value' => t('<ul><li>You will be charged $20 for a deposit to save your seat.</li><li>This amount is <strong>fully-refundable</strong> upon attendance.</li></ul>'),
  );

  return system_settings_form($form);
}
