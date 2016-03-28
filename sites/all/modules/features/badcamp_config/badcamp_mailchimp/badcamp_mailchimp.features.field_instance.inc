<?php
/**
 * @file
 * badcamp_mailchimp.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function badcamp_mailchimp_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_user_mailchimp'
  $field_instances['user-user-field_user_mailchimp'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'subscribe' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_mailchimp',
    'label' => 'Get event emails',
    'required' => 0,
    'settings' => array(
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => '[user:mail]',
        'MMERGE1' => '[user:field-user-first-name]',
        'MMERGE2' => '[user:field-user-last-name]',
        'MMERGE3' => '',
        'advanced' => 0,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Get event emails');

  return $field_instances;
}
