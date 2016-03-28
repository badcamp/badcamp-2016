<?php
/**
 * @file
 * badcamp_sessions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function badcamp_sessions_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_administration|node|session|form';
  $field_group->group_name = 'group_session_administration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Session administration',
    'weight' => '3',
    'children' => array(
      0 => 'field_session_room',
      1 => 'field_session_status',
      2 => 'field_session_time_slot',
      3 => 'field_session_date_and_time',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-session-administration field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_session_administration|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_description|node|session|form';
  $field_group->group_name = 'group_session_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Session description',
    'weight' => '1',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-session-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_session_description|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_files_video|node|session|form';
  $field_group->group_name = 'group_session_files_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Session files/video',
    'weight' => '2',
    'children' => array(
      0 => 'field_session_files',
      1 => 'field_youtube',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-session-files-video field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_session_files_video|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_information|node|session|form';
  $field_group->group_name = 'group_session_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Session information',
    'weight' => '0',
    'children' => array(
      0 => 'field_session_skill_level',
      1 => 'field_session_speaker',
      2 => 'field_session_track',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-session-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_session_information|node|session|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Session administration');
  t('Session description');
  t('Session files/video');
  t('Session information');

  return $field_groups;
}
