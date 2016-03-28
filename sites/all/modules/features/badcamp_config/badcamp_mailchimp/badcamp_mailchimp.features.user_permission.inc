<?php
/**
 * @file
 * badcamp_mailchimp.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function badcamp_mailchimp_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access mailchimp signup pages'.
  $permissions['access mailchimp signup pages'] = array(
    'name' => 'access mailchimp signup pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_signup',
  );

  // Exported permission: 'administer mailchimp'.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp',
  );

  // Exported permission: 'administer mailchimp campaigns'.
  $permissions['administer mailchimp campaigns'] = array(
    'name' => 'administer mailchimp campaigns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_campaign',
  );

  // Exported permission: 'administer mailchimp signup entities'.
  $permissions['administer mailchimp signup entities'] = array(
    'name' => 'administer mailchimp signup entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_signup',
  );

  return $permissions;
}
