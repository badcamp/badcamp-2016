<?php
/**
 * @file
 * badcamp_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function badcamp_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_description|node|event|form';
  $field_group->group_name = 'group_event_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event description',
    'weight' => '9',
    'children' => array(
      0 => 'body',
      1 => 'field_event_agenda',
      2 => 'field_event_rsvp_more_info',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_description|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_files|node|event|form';
  $field_group->group_name = 'group_event_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event files',
    'weight' => '11',
    'children' => array(
      0 => 'field_event_files',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-files field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_files|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_information|node|event|form';
  $field_group->group_name = 'group_event_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event information',
    'weight' => '0',
    'children' => array(
      0 => 'field_event_type',
      1 => 'field_event_date_and_time',
      2 => 'field_event_venue',
      3 => 'field_event_location',
      4 => 'field_maximum_registration',
      5 => 'field_sold_out',
      6 => 'field_summit_leaders',
      7 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_information|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_sponsor|node|event|form';
  $field_group->group_name = 'group_event_sponsor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event sponsor(s)',
    'weight' => '10',
    'children' => array(
      0 => 'field_event_sponsor',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-sponsor field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_sponsor|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Event description');
  t('Event files');
  t('Event information');
  t('Event sponsor(s)');

  return $field_groups;
}
