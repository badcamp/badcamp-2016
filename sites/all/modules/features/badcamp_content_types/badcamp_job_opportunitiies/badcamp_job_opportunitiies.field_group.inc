<?php
/**
 * @file
 * badcamp_job_opportunitiies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function badcamp_job_opportunitiies_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_information|node|job_posting|form';
  $field_group->group_name = 'group_job_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job_posting';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job information',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_job_opportunity_company',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-job-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_job_information|node|job_posting|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Job information');

  return $field_groups;
}
