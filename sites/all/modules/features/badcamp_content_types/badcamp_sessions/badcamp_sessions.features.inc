<?php
/**
 * @file
 * badcamp_sessions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function badcamp_sessions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function badcamp_sessions_node_info() {
  $items = array(
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('<em>Sessions</em> are talks given by individuals.'),
      'has_title' => '1',
      'title_label' => t('Session title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
