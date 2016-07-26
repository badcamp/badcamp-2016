<?php
/**
 * @file
 * badcamp_sessions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function badcamp_sessions_taxonomy_default_vocabularies() {
  return array(
    'rooms' => array(
      'name' => 'Rooms',
      'machine_name' => 'rooms',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
    ),
    'skill_level' => array(
      'name' => 'Skill level',
      'machine_name' => 'skill_level',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
    ),
    'time_slot' => array(
      'name' => 'Time slot',
      'machine_name' => 'time_slot',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
    ),
    'tracks' => array(
      'name' => 'Tracks',
      'machine_name' => 'tracks',
      'description' => 'Terms for categorizing sessions',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
    ),
  );
}
