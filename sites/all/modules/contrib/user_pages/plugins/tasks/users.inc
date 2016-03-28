<?php

/*
 * @file
 * 
 * Plugin to allow page manager to take over the user login page.
 *
 */
function user_pages_users_page_manager_tasks() {
  return array(
    // This is a 'page' task and will fall under the page admin UI
    'task type' => 'page',
    'title' => t('User Page'),
    'admin title' => t('User Page'),
    'admin description' => t('When enabled, this overrides the default Drupal behavior for the user page at <em>/user</em>.'),
    'admin path' => 'user',
    // Menu hooks so that we can alter the node/%node menu entry to point to us.
    'hook menu alter' => 'user_pages_user_users_menu_alter',
    // This is task uses 'context' handlers and must implement these to give the
    // handler data it needs.
    'handler type' => 'context',
    // Allow this to be enabled or disabled:
    'disabled' => variable_get('user_pages_user_users_disabled', TRUE),
    'enable callback' => 'user_pages_user_users_enable',
  );
}

function user_pages_user_users_menu_alter(&$items, $task) {
  if (variable_get('user_pages_user_users_disabled', TRUE)) {
    return;
  }
  
  //Since user is by default a menu item, we need to do a little probing to find the callback.
  $is_default = ($items['user']['page callback'] == 'user_page' &&  $items['user']['menu_name'] == 'user-menu');
  
  // Override the menu item to point to our own function.
  if ($is_default || variable_get('user_pages_override_anyway', FALSE)) {
    $items['user']['page callback'] = 'user_pages_user_users';
    $items['user']['file path'] = $task['path'];
    $items['user']['file'] = $task['file'];
  }
  else {
    variable_set('user_pages_user_users_disabled', TRUE);
    if (!empty($GLOBALS['user_pages_user_enabling_users'])) {
      drupal_set_message(t('Page manager module is unable to enable this page because some other module already has overridden with %callback.', array('%callback' => $callback)), 'warning');
    }
    return;
  }

}

function user_pages_user_users() {
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
function user_pages_user_users_enable($cache, $status) {
  variable_set('user_pages_user_users_disabled', $status);
  // Set a global flag so that the menu routine knows it needs
  // to set a message if enabling cannot be done.
  if (!$status) {
    $GLOBALS['user_pages_user_enabling_users'] = TRUE;
  }
}
