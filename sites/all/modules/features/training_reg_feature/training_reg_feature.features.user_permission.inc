<?php
/**
 * @file
 * training_reg_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function training_reg_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer training registration'.
  $permissions['administer training registration'] = array(
    'name' => 'administer training registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'training_reg',
  );

  // Exported permission: 'register for training'.
  $permissions['register for training'] = array(
    'name' => 'register for training',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'training_reg',
  );

  return $permissions;
}
