<?php
/**
 * @file
 * badcamp_sessions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function badcamp_sessions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_session_date_and_time'.
  $permissions['create field_session_date_and_time'] = array(
    'name' => 'create field_session_date_and_time',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_session_room'.
  $permissions['create field_session_room'] = array(
    'name' => 'create field_session_room',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_session_status'.
  $permissions['create field_session_status'] = array(
    'name' => 'create field_session_status',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_session_time_slot'.
  $permissions['create field_session_time_slot'] = array(
    'name' => 'create field_session_time_slot',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create session content'.
  $permissions['create session content'] = array(
    'name' => 'create session content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any session content'.
  $permissions['delete any session content'] = array(
    'name' => 'delete any session content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own session content'.
  $permissions['delete own session content'] = array(
    'name' => 'delete own session content',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in rooms'.
  $permissions['delete terms in rooms'] = array(
    'name' => 'delete terms in rooms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in skill_level'.
  $permissions['delete terms in skill_level'] = array(
    'name' => 'delete terms in skill_level',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in time_slot'.
  $permissions['delete terms in time_slot'] = array(
    'name' => 'delete terms in time_slot',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tracks'.
  $permissions['delete terms in tracks'] = array(
    'name' => 'delete terms in tracks',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any session content'.
  $permissions['edit any session content'] = array(
    'name' => 'edit any session content',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_session_date_and_time'.
  $permissions['edit field_session_date_and_time'] = array(
    'name' => 'edit field_session_date_and_time',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_session_room'.
  $permissions['edit field_session_room'] = array(
    'name' => 'edit field_session_room',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_session_status'.
  $permissions['edit field_session_status'] = array(
    'name' => 'edit field_session_status',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_session_time_slot'.
  $permissions['edit field_session_time_slot'] = array(
    'name' => 'edit field_session_time_slot',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_session_date_and_time'.
  $permissions['edit own field_session_date_and_time'] = array(
    'name' => 'edit own field_session_date_and_time',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_session_room'.
  $permissions['edit own field_session_room'] = array(
    'name' => 'edit own field_session_room',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_session_status'.
  $permissions['edit own field_session_status'] = array(
    'name' => 'edit own field_session_status',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_session_time_slot'.
  $permissions['edit own field_session_time_slot'] = array(
    'name' => 'edit own field_session_time_slot',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own session content'.
  $permissions['edit own session content'] = array(
    'name' => 'edit own session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in rooms'.
  $permissions['edit terms in rooms'] = array(
    'name' => 'edit terms in rooms',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in skill_level'.
  $permissions['edit terms in skill_level'] = array(
    'name' => 'edit terms in skill_level',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in time_slot'.
  $permissions['edit terms in time_slot'] = array(
    'name' => 'edit terms in time_slot',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tracks'.
  $permissions['edit terms in tracks'] = array(
    'name' => 'edit terms in tracks',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view field_session_date_and_time'.
  $permissions['view field_session_date_and_time'] = array(
    'name' => 'view field_session_date_and_time',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_session_room'.
  $permissions['view field_session_room'] = array(
    'name' => 'view field_session_room',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_session_status'.
  $permissions['view field_session_status'] = array(
    'name' => 'view field_session_status',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_session_time_slot'.
  $permissions['view field_session_time_slot'] = array(
    'name' => 'view field_session_time_slot',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_session_date_and_time'.
  $permissions['view own field_session_date_and_time'] = array(
    'name' => 'view own field_session_date_and_time',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_session_room'.
  $permissions['view own field_session_room'] = array(
    'name' => 'view own field_session_room',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_session_status'.
  $permissions['view own field_session_status'] = array(
    'name' => 'view own field_session_status',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_session_time_slot'.
  $permissions['view own field_session_time_slot'] = array(
    'name' => 'view own field_session_time_slot',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
