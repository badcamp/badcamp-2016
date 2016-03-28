<?php
/**
 * @file
 * badcamp_sponsors.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function badcamp_sponsors_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sponsor_description|node|sponsor|form';
  $field_group->group_name = 'group_sponsor_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sponsor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sponsor description',
    'weight' => '1',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sponsor-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sponsor_description|node|sponsor|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sponsor_information|node|sponsor|form';
  $field_group->group_name = 'group_sponsor_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sponsor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sponsor information',
    'weight' => '0',
    'children' => array(
      0 => 'field_sponsor_logo',
      1 => 'field_sponsor_url',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sponsor-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sponsor_information|node|sponsor|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sponsor_level|node|sponsor|form';
  $field_group->group_name = 'group_sponsor_level';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sponsor';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sponsor level',
    'weight' => '3',
    'children' => array(
      0 => 'field_sponsor_level',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sponsor-level field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sponsor_level|node|sponsor|form'] = $field_group;

  return $export;
}
