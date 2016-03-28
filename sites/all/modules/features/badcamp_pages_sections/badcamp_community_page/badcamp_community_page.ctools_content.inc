<?php
/**
 * @file
 * badcamp_community_page.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function badcamp_community_page_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'badcamp_coding_lounge_callout';
  $content->admin_title = 'BADCamp coding lounge callout';
  $content->admin_description = 'This is a Callout for the Coding lounge';
  $content->category = 'BADCamp';
  $content->settings = array(
    'admin_title' => 'BADCamp coding lounge callout',
    'title' => 'Coding lounge',
    'body' => '<p>BADCamp will be providing a coder lounge with internet access, and an ample supply of coffee, snacks, and water.&nbsp;The BADCamp Coder Lounge is available for anyone who wants to work on Drupal or Drupal projects at any time. BADCamp will also be hosting several code sprints in the coder lounge. You do not need to be participating in a sprint to work in the coder lounge.</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['badcamp_coding_lounge_callout'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'badcamp_sponsoring_callout';
  $content->admin_title = 'BADCamp sponsoring callout';
  $content->admin_description = 'This is a Callout to sponsor BADCamp individually or corporately';
  $content->category = 'BADCamp';
  $content->settings = array(
    'admin_title' => 'Sponsoring BADCamp Callout',
    'title' => 'Sponsoring BADCamp',
    'body' => '<p>Thank you to all our sponsors who\'ve made BADCamp possible for the many past years! We couldn\'t do it without everyone\'s support.</p>

<p><a class="button buttercup" href="/individual/sponsorship">Individual Sponsorship</a> <a class="button buttercup" href="/sponsorship-packages">Corporate Sponsorship</a></p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['badcamp_sponsoring_callout'] = $content;

  return $export;
}
