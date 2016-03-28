<?php
/**
 * @file
 * badcamp_job_opportunitiies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function badcamp_job_opportunitiies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function badcamp_job_opportunitiies_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function badcamp_job_opportunitiies_node_info() {
  $items = array(
    'job_posting' => array(
      'name' => t('Job posting'),
      'base' => 'node_content',
      'description' => t('Sponsors may post <em>Job postings</em>.'),
      'has_title' => '1',
      'title_label' => t('Job title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
