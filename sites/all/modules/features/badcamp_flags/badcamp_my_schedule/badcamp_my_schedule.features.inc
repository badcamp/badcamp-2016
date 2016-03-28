<?php
/**
 * @file
 * badcamp_my_schedule.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function badcamp_my_schedule_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function badcamp_my_schedule_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function badcamp_my_schedule_flag_default_flags() {
  $flags = array();
  // Exported flag: "My Schedule".
  $flags['my_schedule'] = array(
    'entity_type' => 'node',
    'title' => 'My Schedule',
    'global' => 0,
    'types' => array(
      0 => 'event',
      1 => 'session',
    ),
    'flag_short' => 'Sign up to attend this [node:content-type:name]!',
    'flag_long' => 'Add this [node:content-type:name] to my schedule',
    'flag_message' => 'This [node:content-type:name] has been added to your schedule',
    'unflag_short' => 'Remove this [node:content-type:name] from my schedule :-(',
    'unflag_long' => 'Remove this [node:content-type:name] from my schedule',
    'unflag_message' => 'This [node:content-type:name] has been removed from your schedule',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -6,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'badcamp_my_schedule',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
