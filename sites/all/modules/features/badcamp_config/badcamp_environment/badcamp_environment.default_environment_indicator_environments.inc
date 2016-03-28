<?php
/**
 * @file
 * badcamp_environment.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function badcamp_environment_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'dev';
  $environment->name = 'Dev';
  $environment->regexurl = 'dev-*';
  $environment->settings = array(
    'color' => '#0003fa',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['dev'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'live';
  $environment->name = 'Live';
  $environment->regexurl = '.*badcamp.net';
  $environment->settings = array(
    'color' => '#f50000',
    'text_color' => '#ffffff',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['live'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'local';
  $environment->name = 'Local';
  $environment->regexurl = '.*';
  $environment->settings = array(
    'color' => '#b602b3',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['local'] = $environment;

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'test';
  $environment->name = 'Test';
  $environment->regexurl = 'test-*';
  $environment->settings = array(
    'color' => '#fff042',
    'text_color' => '#000000',
    'weight' => '',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['test'] = $environment;

  return $export;
}
