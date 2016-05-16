<?php
/**
 * @file
 * badcamp_site_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function badcamp_site_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
