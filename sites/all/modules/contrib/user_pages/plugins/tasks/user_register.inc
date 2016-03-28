<?php

/*
 * @file
 * 
 * Plugin to allow page manager to take over the user register page.
 *
 */

function user_pages_user_register_page_manager_tasks() {
  return array(
    'task type' => 'page',
    'title' => t('User Register Page'),
    'admin title' => t('User Register Page'),
    'admin description' => t('When enabled, this overrides the default Drupal behavior for the user login page at <em>/user/register</em>.'),
    'admin path' => 'user/register',
    // Menu hooks so that we can alter the user/register menu entry to point to us.
    'hook menu alter' => 'user_pages_user_user_register_menu_alter',
    'handler type' => 'context',
    // Allow this to be enabled or disabled:
    'disabled' => variable_get('user_pages_user_user_register_disabled', TRUE),
    'enable callback' => 'user_pages_user_user_register_enable',
  );
}

function user_pages_user_user_register_menu_alter(&$items, $task) {
  if (variable_get('user_pages_user_user_register_disabled', TRUE)) {
    return;
  }
  
  //Since user/register is by default a local task, we need to do a little probing to find the callback.
  $is_default = ($items['user/register']['page callback'] == 'drupal_get_form' &&  $items['user/register']['page arguments'] == array('user_register_form'));
  // Override the menu item to point to our own function.
  if ($is_default || variable_get('user_pages_override_anyway', FALSE)) {
    $items['user/register']['page callback'] = 'user_pages_user_user_register';
    unset($items['user/register']['page arguments']);
    $items['user/register']['file path'] = $task['path'];
    $items['user/register']['file'] = $task['file'];
  }
  else {
    variable_set('user_pages_user_user_register_disabled', TRUE);
    if (!empty($GLOBALS['page_manager_user_enabling_user_register'])) {
      drupal_set_message(t('Page manager module is unable to enable this page because some other module already has overridden with %callback.', array('%callback' => $callback)), 'warning');
    }
    return;
  }
}


function user_pages_user_user_register() {
  // If we aren't admin but already logged on, go to the user page instead.
  global $user;
  $admin = user_access('administer users');
  if (!$admin && $user->uid) {
    drupal_goto('user/'. $user->uid);
  }
  // Load my task plugin
  $task = page_manager_get_task('user_register');

  ctools_include('context');
  ctools_include('context-task-handler');
  $output = ctools_context_handler_render($task, '', array(), array());

  if ($output !== FALSE) {
    return $output;
  }

  module_load_include('inc', 'user', 'user.pages'); 
  $function = NULL;
  foreach (module_implements('page_manager_override') as $module) {
    $call = $module . '_page_manager_override';
    if (($rc = $call('user_register')) && function_exists($rc)) {
      $function = $rc;
      break;
    }
  }
  
  if($function) {
    return $function();
  }

  // Otherwise, fall back.
  return drupal_get_form('user_register_form');
}

/**
 * Callback to enable/disable the page from the UI.
 */
function user_pages_user_user_register_enable($cache, $status) {
  variable_set('user_pages_user_user_register_disabled', $status);
  // Set a global flag so that the menu routine knows it needs
  // to set a message if enabling cannot be done.
  if (!$status) {
    $GLOBALS['user_pages_user_enabling_user_register'] = TRUE;
  }
}