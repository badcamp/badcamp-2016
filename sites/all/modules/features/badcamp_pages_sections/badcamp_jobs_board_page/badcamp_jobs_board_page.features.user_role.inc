<?php
/**
 * @file
 * badcamp_jobs_board_page.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function badcamp_jobs_board_page_user_default_roles() {
  $roles = array();

  // Exported role: job posting editor.
  $roles['job posting editor'] = array(
    'name' => 'job posting editor',
    'weight' => 5,
  );

  return $roles;
}
