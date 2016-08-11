<?php
/**
 * @file
 * Badcamp single column page panel layout.
 */

/**
 * Implements hook_panels_layouts().
 */
function badcamp2016_badcamp2016_profile2col_panels_layouts() {
  $items['badcamp2016_profile2col'] = array(
    'title' => t('BadCamp 2 Column Profile'),
    'category' => t('BadCamp'),
    'icon' => 'badcamp2016_profile2col.png',
    'theme' => 'badcamp2016_profile2col',
    'admin css' => '../../dist/css/panels-admin.css',
    'settings form' => 'badcamp2016_badcamp2016_profile2col_settings_form',
    'settings' => array(
      'suppress_page_title' => FALSE,
    ),
    'regions' => array(
      'header' => t('Header area'),
      'image' => t('Profile Image'),
      'name1' => t('Name and Job Info Left'),
      'name2' => t('Name and Job Info Right'),
      'bio' => t('Bio'),
      'social_medial_1' => t('Social Media Left'),
      'social_medial_2' => t('Social Media Right'),
      'interests' => t('Interests'),
      'main' => t('Main Content'),
    ),
  );
  return $items;
}

function badcamp2016_badcamp2016_profile2col_settings_form($display, $plugin, $settings) {
  $form = array();
  $form['suppress_page_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Suppress outer page title'),
    '#default_value' => $settings['suppress_page_title'],
  );
  return $form;
}
