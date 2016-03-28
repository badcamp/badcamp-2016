<?php
/**
 * @file
 * training_reg_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function training_reg_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function training_reg_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function training_reg_feature_eck_bundle_info() {
  $items = array(
    'training_reg_training_reg' => array(
      'machine_name' => 'training_reg_training_reg',
      'entity_type' => 'training_reg',
      'name' => 'training_reg',
      'label' => 'Training Registration',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function training_reg_feature_eck_entity_type_info() {
  $items = array(
    'training_reg' => array(
      'name' => 'training_reg',
      'label' => 'Training Registration',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
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

/**
 * Implements hook_node_info().
 */
function training_reg_feature_node_info() {
  $items = array(
    'training' => array(
      'name' => t('Training'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
