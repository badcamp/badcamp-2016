<?php
/**
 * @file
 * badcamp_food_and_drink_page.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function badcamp_food_and_drink_page_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'food_and_drink';
  $content->admin_title = 'Berkeley Food and Drink Map';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Berkeley Food and Drink Map',
    'title' => '',
    'body' => '<p><iframe frameborder="0" height="350" marginheight="0" marginwidth="0" scrolling="no" src="https://maps.google.com/maps/ms?msa=0&amp;msid=216938187988284861548.0004ad91c388478dbf7ee&amp;ie=UTF8&amp;t=m&amp;source=embed&amp;ll=37.870178,-122.261267&amp;spn=0.011857,0.05064&amp;z=15&amp;output=embed" width="100%"></iframe></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $export['food_and_drink'] = $content;

  return $export;
}
