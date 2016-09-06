<?php
/**
 * @file
 * event_reg_feature.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function event_reg_feature_eck_bundle_info() {
  $items = array(
    'event_reg_event_reg' => array(
      'machine_name' => 'event_reg_event_reg',
      'entity_type' => 'event_reg',
      'name' => 'event_reg',
      'label' => 'Event Registration',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function event_reg_feature_eck_entity_type_info() {
  $items = array(
    'event_reg' => array(
      'name' => 'event_reg',
      'label' => 'Event Registration',
      'properties' => array(
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}
