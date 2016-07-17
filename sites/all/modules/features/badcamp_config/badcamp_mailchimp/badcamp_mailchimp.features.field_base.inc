<?php
/**
 * @file
 * badcamp_mailchimp.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function badcamp_mailchimp_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_user_mailchimp'.
  $field_bases['field_user_mailchimp'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_mailchimp',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 1,
      'mc_list_id' => '6bd2811fef',
      'send_welcome' => 1,
      'unsubscribe_action' => 'remove',
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  return $field_bases;
}
