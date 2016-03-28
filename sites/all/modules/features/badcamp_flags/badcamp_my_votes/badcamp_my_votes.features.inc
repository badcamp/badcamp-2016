<?php
/**
 * @file
 * badcamp_my_votes.features.inc
 */

/**
 * Implements hook_views_api().
 */
function badcamp_my_votes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function badcamp_my_votes_flag_default_flags() {
  $flags = array();
  // Exported flag: "My Votes".
  $flags['session_vote'] = array(
    'entity_type' => 'node',
    'title' => 'My Votes',
    'global' => 0,
    'types' => array(
      0 => 'session',
    ),
    'flag_short' => 'Vote for this session',
    'flag_long' => 'Vote for this session to improve its chances of being approved.',
    'flag_message' => 'Thank you. Your vote has been recorded.',
    'unflag_short' => 'Remove vote',
    'unflag_long' => 'Remove my vote from this session.',
    'unflag_message' => 'Your vote has been removed.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -7,
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
    'module' => 'badcamp_my_votes',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
