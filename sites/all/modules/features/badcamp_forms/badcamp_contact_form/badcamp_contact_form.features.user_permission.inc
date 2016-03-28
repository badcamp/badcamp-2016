<?php
/**
 * @file
 * badcamp_contact_form.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function badcamp_contact_form_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_contact_admin_category'.
  $permissions['create field_contact_admin_category'] = array(
    'name' => 'create field_contact_admin_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contact_admin_notes'.
  $permissions['create field_contact_admin_notes'] = array(
    'name' => 'create field_contact_admin_notes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contact_admin_status'.
  $permissions['create field_contact_admin_status'] = array(
    'name' => 'create field_contact_admin_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete terms in contact_admin_category'.
  $permissions['delete terms in contact_admin_category'] = array(
    'name' => 'delete terms in contact_admin_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit field_contact_admin_category'.
  $permissions['edit field_contact_admin_category'] = array(
    'name' => 'edit field_contact_admin_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contact_admin_notes'.
  $permissions['edit field_contact_admin_notes'] = array(
    'name' => 'edit field_contact_admin_notes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contact_admin_status'.
  $permissions['edit field_contact_admin_status'] = array(
    'name' => 'edit field_contact_admin_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contact_admin_category'.
  $permissions['edit own field_contact_admin_category'] = array(
    'name' => 'edit own field_contact_admin_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contact_admin_notes'.
  $permissions['edit own field_contact_admin_notes'] = array(
    'name' => 'edit own field_contact_admin_notes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contact_admin_status'.
  $permissions['edit own field_contact_admin_status'] = array(
    'name' => 'edit own field_contact_admin_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit terms in contact_admin_category'.
  $permissions['edit terms in contact_admin_category'] = array(
    'name' => 'edit terms in contact_admin_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view field_contact_admin_category'.
  $permissions['view field_contact_admin_category'] = array(
    'name' => 'view field_contact_admin_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contact_admin_notes'.
  $permissions['view field_contact_admin_notes'] = array(
    'name' => 'view field_contact_admin_notes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contact_admin_status'.
  $permissions['view field_contact_admin_status'] = array(
    'name' => 'view field_contact_admin_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contact_admin_category'.
  $permissions['view own field_contact_admin_category'] = array(
    'name' => 'view own field_contact_admin_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contact_admin_notes'.
  $permissions['view own field_contact_admin_notes'] = array(
    'name' => 'view own field_contact_admin_notes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contact_admin_status'.
  $permissions['view own field_contact_admin_status'] = array(
    'name' => 'view own field_contact_admin_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
