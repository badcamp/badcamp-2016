<?php
/**
 * @file
 * badcamp_job_opportunitiies.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function badcamp_job_opportunitiies_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__job_posting';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '8',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'rabbit_hole' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_job_posting';
  $strongarm->value = array();
  $export['menu_options_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_job_posting';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_job_posting';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_job_posting';
  $strongarm->value = '1';
  $export['node_preview_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_job_posting';
  $strongarm->value = 0;
  $export['node_submitted_job_posting'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_job_posting_pattern';
  $strongarm->value = 'job-posting/[node:field-job-opportunity-company]/[node:title]';
  $export['pathauto_node_job_posting_pattern'] = $strongarm;

  return $export;
}
