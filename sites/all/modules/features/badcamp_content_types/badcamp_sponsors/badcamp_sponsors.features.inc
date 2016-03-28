<?php
/**
 * @file
 * badcamp_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function badcamp_sponsors_ctools_plugin_api($module = NULL, $api = NULL) {
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
function badcamp_sponsors_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function badcamp_sponsors_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Use <em>Sponsors</em> to list Individuals, Groups, Organizations and Companies that donate to BADCamp.'),
      'has_title' => '1',
      'title_label' => t('Sponsor name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
