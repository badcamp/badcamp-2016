<?php
/**
 * @file
 * badcamp_registration_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function badcamp_registration_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function badcamp_registration_page_eck_bundle_info() {
  $items = array(
    'donation_donation' => array(
      'machine_name' => 'donation_donation',
      'entity_type' => 'donation',
      'name' => 'donation',
      'label' => 'Donation',
    ),
    'donation_type_donation_type' => array(
      'machine_name' => 'donation_type_donation_type',
      'entity_type' => 'donation_type',
      'name' => 'donation_type',
      'label' => 'Donation Type',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function badcamp_registration_page_eck_entity_type_info() {
  $items = array(
    'donation' => array(
      'name' => 'donation',
      'label' => 'Donation',
      'properties' => array(
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
      ),
    ),
    'donation_type' => array(
      'name' => 'donation_type',
      'label' => 'Donation Type',
      'properties' => array(
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}
