<?php
/**
 * @file
 * badcamp_contact_form.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function badcamp_contact_form_taxonomy_default_vocabularies() {
  return array(
    'contact_admin_category' => array(
      'name' => 'Contact admin category',
      'machine_name' => 'contact_admin_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
    ),
  );
}
