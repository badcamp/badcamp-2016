<?php

/*
 * @file
 * 
 * Plugin to allow page manager to take over the user login page.
 *
 */

function user_pages_user_login_page_manager_tasks() {
  return array(
    'task type' => 'page',
    'title' => t('User Login Page'),
    'admin title' => t('User Login Page'),
    'admin description' => t('When enabled, this overrides the default Drupal behavior for the user login page at <em>/user/login</em>.'),
    'admin path' => 'user/login',
    // Menu hooks so that we can alter the user/login menu entry to point to us.
    'hook menu alter' => 'user_pages_user_user_login_menu_alter',
    'handler type' => 'context',
    // Allow this to be enabled or disabled:
    'disabled' => variable_get('user_pages_user_user_login_disabled', TRUE),
    'enable callback' => 'user_pages_user_user_login_enable',
  );
}

function user_pages_user_user_login_menu_alter(&$items, $task) {
  if (variable_get('user_pages_user_user_login_disabled', TRUE)) {
    return;
  }

  //Since user/login is by default a local task, we need to do a little probing to find the callback.
  $is_default = ($items['user/login']['type'] == MENU_DEFAULT_LOCAL_TASK &&  $items['user/login']['access callback'] == 'user_is_anonymous');
  
  // Override the menu item to point to our own function.
  if ($is_default || variable_get('user_pages_override_anyway', FALSE)) {
    $items['user/login']['page callback'] = 'user_pages_user_user_login';
    $items['user/login']['file path'] = $task['path'];
    $items['user/login']['file'] = $task['file'];
  }
  else {
    variable_set('user_pages_user_user_login_disabled', TRUE);
    if (!empty($GLOBALS['user_pages_user_enabling_user_login'])) {
      drupal_set_message(t('Page manager module is unable to enable this page because some other module already has overridden with %callback.', array('%callback' => $callback)), 'warning');
    }
    return;
  }
}

function user_pages_user_user_login() {
  // Load my task plugin
  $task = page_manager_get_task('user_login');

  ctools_include('context');
  ctools_include('context-task-handler');
  $output = ctools_context_handler_render($task, '', array(), array());
  
  if ($output !== FALSE) {
    return $output;
  }

  
  module_load_include('inc', 'user', 'user.pages');
  $function = 'user_page';
  foreach (module_implements('page_manager_override') as $module) {
    $call = $module . '_page_manager_override';
    if (($rc = $call('user_login')) && function_exists($rc)) {
      $function = $rc;
      break;
    }
  }

  // Otherwise, fall back.
  return $function();
}

/**
 * Callback to enable/disable the page from the UI.
 */
function user_pages_user_user_login_enable($cache, $status) {
  variable_set('user_pages_user_user_login_disabled', $status);
  // Set a global flag so that the menu routine knows it needs
  // to set a message if enabling cannot be done.
  if (!$status) {
    $GLOBALS['user_pages_user_enabling_user_login'] = TRUE;
  }
}
