<?php
/**
 * @file
 * badcamp_registration_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function badcamp_registration_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer stripe donations'.
  $permissions['administer stripe donations'] = array(
    'name' => 'administer stripe donations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'stripe_donation',
  );

  // Exported permission: 'create field_user_interest_jobs'.
  $permissions['create field_user_interest_jobs'] = array(
    'name' => 'create field_user_interest_jobs',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_user_interest_volunteering'.
  $permissions['create field_user_interest_volunteering'] = array(
    'name' => 'create field_user_interest_volunteering',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_user_interest_jobs'.
  $permissions['edit field_user_interest_jobs'] = array(
    'name' => 'edit field_user_interest_jobs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_user_interest_volunteering'.
  $permissions['edit field_user_interest_volunteering'] = array(
    'name' => 'edit field_user_interest_volunteering',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
      'summit leader' => 'summit leader',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_user_interest_jobs'.
  $permissions['edit own field_user_interest_jobs'] = array(
    'name' => 'edit own field_user_interest_jobs',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_user_interest_volunteering'.
  $permissions['edit own field_user_interest_volunteering'] = array(
    'name' => 'edit own field_user_interest_volunteering',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'make a stripe donation'.
  $permissions['make a stripe donation'] = array(
    'name' => 'make a stripe donation',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'stripe_donation',
  );

  // Exported permission: 'view field_user_interest_jobs'.
  $permissions['view field_user_interest_jobs'] = array(
    'name' => 'view field_user_interest_jobs',
    'roles' => array(
      'administrator' => 'administrator',
      'job posting editor' => 'job posting editor',
      'site editor' => 'site editor',
      'summit leader' => 'summit leader',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_user_interest_volunteering'.
  $permissions['view field_user_interest_volunteering'] = array(
    'name' => 'view field_user_interest_volunteering',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
      'summit leader' => 'summit leader',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_user_interest_jobs'.
  $permissions['view own field_user_interest_jobs'] = array(
    'name' => 'view own field_user_interest_jobs',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_user_interest_volunteering'.
  $permissions['view own field_user_interest_volunteering'] = array(
    'name' => 'view own field_user_interest_volunteering',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
