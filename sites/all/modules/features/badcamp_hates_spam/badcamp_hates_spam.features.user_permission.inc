<?php
/**
 * @file
 * badcamp_hates_spam.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function badcamp_hates_spam_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass user restriction rules'.
  $permissions['bypass user restriction rules'] = array(
    'name' => 'bypass user restriction rules',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'user_restrictions',
  );

  // Exported permission: 'edit user restriction rules'.
  $permissions['edit user restriction rules'] = array(
    'name' => 'edit user restriction rules',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'user_restrictions',
  );

  return $permissions;
}
