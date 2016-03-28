<?php
/**
 * @file
 * badcamp_stripe_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function badcamp_stripe_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer stripe'.
  $permissions['administer stripe'] = array(
    'name' => 'administer stripe',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'stripe',
  );

  return $permissions;
}
