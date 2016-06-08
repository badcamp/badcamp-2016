<?php
/**
 * @file
 * badcamp_user_profile.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function badcamp_user_profile_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'ckeditor' => array(
          'weight' => '3',
        ),
        'googleanalytics' => array(
          'weight' => '27',
        ),
        'metatags' => array(
          'weight' => '29',
        ),
        'rabbit_hole' => array(
          'weight' => '26',
        ),
        'redirect' => array(
          'weight' => '28',
        ),
        'account' => array(
          'weight' => '1',
        ),
        'timezone' => array(
          'weight' => '2',
        ),
        'picture' => array(
          'weight' => '37',
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_interests_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_interests_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_action_interests';
  $strongarm->value = '2';
  $export['rh_taxonomy_term_action_interests'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_override_interests';
  $strongarm->value = 0;
  $export['rh_taxonomy_term_override_interests'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_redirect_interests';
  $strongarm->value = '';
  $export['rh_taxonomy_term_redirect_interests'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_redirect_response_interests';
  $strongarm->value = '301';
  $export['rh_taxonomy_term_redirect_response_interests'] = $strongarm;

  return $export;
}
