<?php
/**
 * @file
 * badcamp_job_opportunitiies.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function badcamp_job_opportunitiies_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create job_opportunity content'.
  $permissions['create job_opportunity content'] = array(
    'name' => 'create job_opportunity content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'site editor' => 'site editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any job_opportunity content'.
  $permissions['delete any job_opportunity content'] = array(
    'name' => 'delete any job_opportunity content',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own job_opportunity content'.
  $permissions['delete own job_opportunity content'] = array(
    'name' => 'delete own job_opportunity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any job_opportunity content'.
  $permissions['edit any job_opportunity content'] = array(
    'name' => 'edit any job_opportunity content',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own job_opportunity content'.
  $permissions['edit own job_opportunity content'] = array(
    'name' => 'edit own job_opportunity content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
