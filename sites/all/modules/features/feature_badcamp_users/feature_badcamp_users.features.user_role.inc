<?php
/**
 * @file
 * feature_badcamp_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_badcamp_users_user_default_roles() {
  $roles = array();

  // Exported role: organizer.
  $roles['organizer'] = array(
    'name' => 'organizer',
    'weight' => 3,
  );

  return $roles;
}
