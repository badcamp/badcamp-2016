<?php
/**
 * @file
 * badcamp_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function badcamp_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'summit leader' => 'summit leader',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_event_date_and_time'.
  $permissions['create field_event_date_and_time'] = array(
    'name' => 'create field_event_date_and_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_event_files'.
  $permissions['create field_event_files'] = array(
    'name' => 'create field_event_files',
    'roles' => array(
      'summit leader' => 'summit leader',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_event_sponsor'.
  $permissions['create field_event_sponsor'] = array(
    'name' => 'create field_event_sponsor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_event_venue'.
  $permissions['create field_event_venue'] = array(
    'name' => 'create field_event_venue',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'summit leader' => 'summit leader',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in venue'.
  $permissions['delete terms in venue'] = array(
    'name' => 'delete terms in venue',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit field_event_date_and_time'.
  $permissions['edit field_event_date_and_time'] = array(
    'name' => 'edit field_event_date_and_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_event_files'.
  $permissions['edit field_event_files'] = array(
    'name' => 'edit field_event_files',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_event_sponsor'.
  $permissions['edit field_event_sponsor'] = array(
    'name' => 'edit field_event_sponsor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_event_venue'.
  $permissions['edit field_event_venue'] = array(
    'name' => 'edit field_event_venue',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'summit leader' => 'summit leader',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_event_date_and_time'.
  $permissions['edit own field_event_date_and_time'] = array(
    'name' => 'edit own field_event_date_and_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_event_files'.
  $permissions['edit own field_event_files'] = array(
    'name' => 'edit own field_event_files',
    'roles' => array(
      'summit leader' => 'summit leader',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_event_sponsor'.
  $permissions['edit own field_event_sponsor'] = array(
    'name' => 'edit own field_event_sponsor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_event_venue'.
  $permissions['edit own field_event_venue'] = array(
    'name' => 'edit own field_event_venue',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit terms in venue'.
  $permissions['edit terms in venue'] = array(
    'name' => 'edit terms in venue',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view field_event_date_and_time'.
  $permissions['view field_event_date_and_time'] = array(
    'name' => 'view field_event_date_and_time',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_event_files'.
  $permissions['view field_event_files'] = array(
    'name' => 'view field_event_files',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_event_sponsor'.
  $permissions['view field_event_sponsor'] = array(
    'name' => 'view field_event_sponsor',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_event_venue'.
  $permissions['view field_event_venue'] = array(
    'name' => 'view field_event_venue',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_event_date_and_time'.
  $permissions['view own field_event_date_and_time'] = array(
    'name' => 'view own field_event_date_and_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_event_files'.
  $permissions['view own field_event_files'] = array(
    'name' => 'view own field_event_files',
    'roles' => array(
      'summit leader' => 'summit leader',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_event_sponsor'.
  $permissions['view own field_event_sponsor'] = array(
    'name' => 'view own field_event_sponsor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_event_venue'.
  $permissions['view own field_event_venue'] = array(
    'name' => 'view own field_event_venue',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
