<?php
/**
 * @file
 * badcamp_stripe_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function badcamp_stripe_config_strongarm() {
  $export = array();
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stripe_log_webhooks';
  $strongarm->value = 1;
  $export['stripe_log_webhooks'] = $strongarm;

  return $export;
}
