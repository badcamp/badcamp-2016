<?php

/*
 * @file
 * 
 * Plugin to allow page manager to take over the user login page.
 *
 */
function user_pages_user_password_page_manager_tasks() {
  return array(
    // This is a 'page' task and will fall under the page admin UI
    'task type' => 'page',
    'title' => t('User Password Page'),
    'admin title' => t('User Password Page'),
    'admin description' => t('When enabled, this overrides the default Drupal behavior for the user password page at <em>/user</em>.'),
    'admin path' => 'user/password',
    // Menu hooks so that we can alter the node/%node menu entry to point to us.
    'hook menu alter' => 'user_pages_user_user_password_menu_alter',
    // This is task uses 'context' handlers and must implement these to give the
    // handler data it needs.
    'handler type' => 'context',
    // Allow this to be enabled or disabled:
    'disabled' => variable_get('user_pages_user_user_password_disabled', TRUE),
    'enable callback' => 'user_pages_user_user_password_enable',
  );
}

function user_pages_user_user_password_menu_alter(&$items, $task) {
  if (variable_get('user_pages_user_user_password_disabled', TRUE)) {
    return;
  }
  
  //Since user/password is by default a local task, we need to do a little probing to find the callback.
  $is_default = ($items['user/password']['page callback'] == 'drupal_get_form' &&  $items['user/password']['page arguments'] == array('user_pass'));
  
  // Override the menu item to point to our own function.
  if ($is_default || variable_get('user_pages_override_anyway', FALSE)) {
    $items['user/password']['page callback'] = 'user_pages_user_user_password';
    unset($items['user/password']['page arguments']);
    $items['user/password']['file path'] = $task['path'];
    $items['user/password']['file'] = $task['file'];
  }
  else {
    variable_set('user_pages_user_user_password_disabled', TRUE);
    if (!empty($GLOBALS['user_pages_user_enabling_user_password'])) {
      drupal_set_message(t('Page manager module is unable to enable this page because some other module already has overridden with %callback.', array('%callback' => $callback)), 'warning');
    }
    return;
  }

}

function user_pages_user_user_password() {
   // If we aren't admin but already logged on, go to the user page instead.
  global $user;
  $admin = user_access('administer users');
  if (!$admin && $user->uid) {
    drupal_goto('user/'. $user->uid);
  }
  // Load my task plugin
  $task = page_manager_get_task('user_password');

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
    if (($rc = $call('user_password')) && function_exists($rc)) {
      $function = $rc;
      break;
    }
  }
  
  if($function) {
    return $function();
  }

  // Otherwise, fall back.
  return drupal_get_form('user_pass');
}

/**
 * Callback to enable/disable the page from the UI.
 */
function user_pages_user_user_password_enable($cache, $status) {
  variable_set('user_pages_user_user_password_disabled', $status);
  // Set a global flag so that the menu routine knows it needs
  // to set a message if enabling cannot be done.
  if (!$status) {
    $GLOBALS['user_pages_user_enabling_user_password'] = TRUE;
  }
}
