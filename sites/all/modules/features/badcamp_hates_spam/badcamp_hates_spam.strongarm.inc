<?php
/**
 * @file
 * badcamp_hates_spam.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function badcamp_hates_spam_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_element_name';
  $strongarm->value = 'url';
  $export['honeypot_element_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_basic_page_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_basic_page_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_blog_post_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_blog_post_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_event_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_event_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_job_posting_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_job_posting_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_panel_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_panel_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_session_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_session_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_sponsor_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_sponsor_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_training_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_training_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_user_pass';
  $strongarm->value = 1;
  $export['honeypot_form_user_pass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_user_register_form';
  $strongarm->value = 1;
  $export['honeypot_form_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_log';
  $strongarm->value = 1;
  $export['honeypot_log'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_protect_all_forms';
  $strongarm->value = 0;
  $export['honeypot_protect_all_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_time_limit';
  $strongarm->value = '5';
  $export['honeypot_time_limit'] = $strongarm;

  return $export;
}
