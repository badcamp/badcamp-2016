<?php
/**
 * @file
 * event_reg_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function event_reg_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'event_reg-event_reg-field_event_reg_attendee'.
  $field_instances['event_reg-event_reg-field_event_reg_attendee'] = array(
    'bundle' => 'event_reg',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'event_reg',
    'field_name' => 'field_event_reg_attendee',
    'label' => 'Attendee',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'event_reg-event_reg-field_event_reg_event'.
  $field_instances['event_reg-event_reg-field_event_reg_event'] = array(
    'bundle' => 'event_reg',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'event_reg',
    'field_name' => 'field_event_reg_event',
    'label' => 'Event',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attendee');
  t('Event');

  return $field_instances;
}
