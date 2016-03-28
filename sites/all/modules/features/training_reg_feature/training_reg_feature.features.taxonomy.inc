<?php
/**
 * @file
 * training_reg_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function training_reg_feature_taxonomy_default_vocabularies() {
  return array(
    'training_locations' => array(
      'name' => 'Training Locations',
      'machine_name' => 'training_locations',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
