<?php
/**
 * @file
 * event_reg_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function event_reg_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer event registration'.
  $permissions['administer event registration'] = array(
    'name' => 'administer event registration',
    'roles' => array(
      'administrator' => 'administrator',
      'summit leader' => 'summit leader',
    ),
    'module' => 'event_reg',
  );

  // Exported permission: 'eck add event_reg bundles'.
  $permissions['eck add event_reg bundles'] = array(
    'name' => 'eck add event_reg bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add event_reg event_reg entities'.
  $permissions['eck add event_reg event_reg entities'] = array(
    'name' => 'eck add event_reg event_reg entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer event_reg bundles'.
  $permissions['eck administer event_reg bundles'] = array(
    'name' => 'eck administer event_reg bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer event_reg event_reg entities'.
  $permissions['eck administer event_reg event_reg entities'] = array(
    'name' => 'eck administer event_reg event_reg entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete event_reg bundles'.
  $permissions['eck delete event_reg bundles'] = array(
    'name' => 'eck delete event_reg bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete event_reg event_reg entities'.
  $permissions['eck delete event_reg event_reg entities'] = array(
    'name' => 'eck delete event_reg event_reg entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit event_reg bundles'.
  $permissions['eck edit event_reg bundles'] = array(
    'name' => 'eck edit event_reg bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit event_reg event_reg entities'.
  $permissions['eck edit event_reg event_reg entities'] = array(
    'name' => 'eck edit event_reg event_reg entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list event_reg bundles'.
  $permissions['eck list event_reg bundles'] = array(
    'name' => 'eck list event_reg bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list event_reg event_reg entities'.
  $permissions['eck list event_reg event_reg entities'] = array(
    'name' => 'eck list event_reg event_reg entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view event_reg bundles'.
  $permissions['eck view event_reg bundles'] = array(
    'name' => 'eck view event_reg bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view event_reg event_reg entities'.
  $permissions['eck view event_reg event_reg entities'] = array(
    'name' => 'eck view event_reg event_reg entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'manage event_reg properties'.
  $permissions['manage event_reg properties'] = array(
    'name' => 'manage event_reg properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'register for event'.
  $permissions['register for event'] = array(
    'name' => 'register for event',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'event_reg',
  );

  return $permissions;
}
