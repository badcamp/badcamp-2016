<?php
/**
 * @file
 * Badcamp single column page panel layout.
 */

/**
 * Implements hook_panels_layouts().
 */
function badcamp2016_badcamp2016_default_panels_layouts() {
  $items['badcamp2016_default'] = array(
    'title' => t('BadCamp Default'),
    'category' => t('BadCamp'),
    'icon' => 'badcamp2016_default.png',
    'theme' => 'badcamp2016_default',
    'admin css' => '../../dist/css/panels-admin.css',
    'settings form' => 'badcamp2016_badcamp2016_default_settings_form',
    'settings' => array(
      'suppress_page_title' => FALSE,
    ),
    'regions' => array(
      'title' => t('Title'),
      'content' => t('Content'),
      'sponsors' => t('Sponsors'),
    ),
  );
  return $items;
}



function badcamp2016_badcamp2016_default_settings_form($display, $plugin, $settings) {
  $form = array();
  $form['suppress_page_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Supress outer page title'),
    '#default_value' => $settings['suppress_page_title'],
  );
  return $form;
}
