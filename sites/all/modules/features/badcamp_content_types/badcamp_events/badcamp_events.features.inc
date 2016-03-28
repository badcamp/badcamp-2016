<?php
/**
 * @file
 * badcamp_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function badcamp_events_ctools_plugin_api($module = NULL, $api = NULL) {
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
function badcamp_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function badcamp_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An <em>Event</em> is a summit, training, party, or other non-session activity.'),
      'has_title' => '1',
      'title_label' => t('Event title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
