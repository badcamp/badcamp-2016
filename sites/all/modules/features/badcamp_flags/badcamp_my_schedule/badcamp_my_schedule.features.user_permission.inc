<?php
/**
 * @file
 * badcamp_my_schedule.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function badcamp_my_schedule_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag my_schedule'.
  $permissions['flag my_schedule'] = array(
    'name' => 'flag my_schedule',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag my_schedule'.
  $permissions['unflag my_schedule'] = array(
    'name' => 'unflag my_schedule',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
