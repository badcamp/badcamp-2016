<?php
/**
 * @file
 * badcamp_contact_form.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function badcamp_contact_form_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_admin|entityform|contact_form|form';
  $field_group->group_name = 'group_contact_admin';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administration',
    'weight' => '33',
    'children' => array(
      0 => 'field_contact_status',
      1 => 'field_contact_admin_category',
      2 => 'field_contact_admin_notes',
      3 => 'field_contact_admin_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Administration',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact-admin field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_contact_admin|entityform|contact_form|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Administration');

  return $field_groups;
}
