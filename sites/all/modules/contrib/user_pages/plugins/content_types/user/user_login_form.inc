<?php

/**
 * @file
 * Plugin to handle the login form content type.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('User Login Form'),
  // Icon goes in the directory with the content type.
  'icon' => 'icon_user.png',
  'description' => t('The user login form.'),
  // Name of a function which will render the block.
  'render callback' => 'ctools_user_login_form_content_type_render',
  'edit form' => 'ctools_user_login_form_content_type_edit_form',
  'category' => array(t('User Pages'), -9),
  // presents a block which is used in the preview of the data.
  // Panels this is the preview pane shown on the panels building page.
  'admin info' => 'ctools_user_login_admin_info',
);

/**
 * Outputs the login form.
 */
function ctools_user_login_form_content_type_render($subtype, $conf, $panel_args) {
  module_load_include('inc', 'user', 'user.pages');
  
  $block = new stdClass();
  $block->title = t('User Login');
  $block->content = drupal_get_form('user_login');
  return $block;
}

function ctools_user_login_form_content_type_edit_form($form, &$form_state) {
  // provide a blank form so we have a place to have context setting.
  $conf = $form_state['conf'];
  return $form;
}

function ctools_user_login_form_content_type_edit_form_submit($form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

function ctools_user_login_admin_info($subtype, $conf, $context = NULL) {
  $block = new stdClass();
  $block->title = t('User Login');
  return $block;
}
