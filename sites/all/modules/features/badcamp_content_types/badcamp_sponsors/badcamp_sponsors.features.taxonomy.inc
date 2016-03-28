<?php
/**
 * @file
 * badcamp_sponsors.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function badcamp_sponsors_taxonomy_default_vocabularies() {
  return array(
    'sponsor_level' => array(
      'name' => 'Sponsor level',
      'machine_name' => 'sponsor_level',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
