<?php
/**
 * @file
 * badcamp_site_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function badcamp_site_config_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: site editor.
  $roles['site editor'] = array(
    'name' => 'site editor',
    'weight' => 4,
  );

  // Exported role: summit leader.
  $roles['summit leader'] = array(
    'name' => 'summit leader',
    'weight' => 3,
  );

  return $roles;
}
