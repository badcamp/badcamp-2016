<?php
/**
 * @file
 * badcamp_my_schedule.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function badcamp_my_schedule_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_time_only';
  $strongarm->value = 'g:ia';
  $export['date_format_time_only'] = $strongarm;

  return $export;
}
