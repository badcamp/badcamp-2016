<?php
/**
 * @file
 * badcamp_summits_page.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function badcamp_summits_page_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'badcamp_summits_intro';
  $content->admin_title = 'BADCamp Drupal Summits';
  $content->admin_description = 'This sets the introductory header text on the summits page';
  $content->category = 'BADCamp';
  $content->settings = array(
    'admin_title' => 'Drupal Summits',
    'title' => 'Drupal Summits',
    'body' => '<p>Summits allow people in specific industries or with specific skills to dive deep into the issues that matter and collaborate freely. Registration is first come, first served and party of the BADCamp registration process, so sign up today!</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['badcamp_summits_intro'] = $content;

  return $export;
}
