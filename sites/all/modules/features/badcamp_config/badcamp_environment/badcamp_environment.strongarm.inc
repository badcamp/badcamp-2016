<?php
/**
 * @file
 * badcamp_environment.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function badcamp_environment_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_environment_indicator_environment';
  $strongarm->value = array(
    'default_environment' => TRUE,
  );
  $export['default_environment_indicator_environment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'environment_indicator_favicon_overlay';
  $strongarm->value = 0;
  $export['environment_indicator_favicon_overlay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'environment_indicator_git_support';
  $strongarm->value = 0;
  $export['environment_indicator_git_support'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'environment_indicator_integration';
  $strongarm->value = array(
    'toolbar' => 'toolbar',
    'admin_menu' => 'admin_menu',
    'navbar' => 'navbar',
  );
  $export['environment_indicator_integration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'environment_indicator_suppress_pages';
  $strongarm->value = '';
  $export['environment_indicator_suppress_pages'] = $strongarm;

  return $export;
}
