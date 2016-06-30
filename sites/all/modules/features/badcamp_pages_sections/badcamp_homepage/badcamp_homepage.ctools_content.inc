<?php
/**
 * @file
 * badcamp_homepage.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function badcamp_homepage_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'badcamp_introduction_callout';
  $content->admin_title = 'BADCamp Introduction';
  $content->admin_description = 'This is the introductory paragraph for BADCamp homepage';
  $content->category = 'BADCamp';
  $content->settings = array(
    'admin_title' => 'BADCamp Introduction',
    'title' => 'About',
    'body' => '<div class="panel-pane pane-custom pane-3 blue">
<div class="pane-content">
<p>BADCamp is a technology conference for the people, an annual celebration of the web, open-source software, and the creators who make it all possible. Join us this fall for four days of talks, trainings, summits, sprints and socials with some of the brightest minds from all over the world.</p>
</div>
</div>
',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $export['badcamp_introduction_callout'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'badcamp_main_title_callout';
  $content->admin_title = 'Main Title Callout';
  $content->admin_description = 'Name, location and date.';
  $content->category = 'BADCamp';
  $content->settings = array(
    'admin_title' => 'Main Title callout',
    'title' => 'Bay Area Drupal Camp 2016',
    'body' => '<div class="main-title-callout"><img src="sites/all/themes/custom/badcamp2016/images/badcamp-2016-logo.png" />
<div>
<p class="location"><strong>Location:</strong> Planet Earth / Berkeley, CA</p>

<p class="coordinates"><strong>Coordinates:</strong> 37°52\'18.8358"N, -122°15\'38.6388"W</p>

<p class="date"><strong>Date:</strong> 2016.10.20 - 2016.10.23</p>
</div>
<hr /> <a class="button" href="./registration">Register for BADCamp</a>',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $export['badcamp_main_title_callout'] = $content;

  return $export;
}
