<?php
/**
 * @file
 * feature_badcamp_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_badcamp_users_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_identity|user|user|form';
  $field_group->group_name = 'group_identity';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Identity',
    'weight' => '0',
    'children' => array(
      0 => 'field_name_first',
      1 => 'field_name_last',
      2 => 'account',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Identity',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-identity field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_identity|user|user|form'] = $field_group;

  return $export;
}
