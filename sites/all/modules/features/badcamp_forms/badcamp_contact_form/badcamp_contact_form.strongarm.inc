<?php
/**
 * @file
 * badcamp_contact_form.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function badcamp_contact_form_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_contact_admin_category_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_contact_admin_category_pattern'] = $strongarm;

  return $export;
}
