<?php
/**
 * @file
 * Badcamp single column page panel layout.
 */

/**
 * Implements hook_panels_layouts().
 */
function badcamp2016_badcamp2016_simple2col_panels_layouts() {
  $items['badcamp2016_simple2col'] = array(
    'title' => t('BadCamp 2 Column Simple'),
    'category' => t('BadCamp'),
    'icon' => 'badcamp2016_simple2col.png',
    'theme' => 'badcamp2016_simple2col',
    'admin css' => '../../dist/css/panels-admin.css',
    'regions' => array(
      'column_left' => t('Left Column'),
      'column_right' => t('Right Column'),
    ),
    'settings form' => 'badcamp2016_badcamp2016_simple2col_settings_form',
    'settings' => array(
      'suppress_page_title' => FALSE,
    ),
  );
  return $items;
}


function badcamp2016_badcamp2016_simple2col_settings_form($display, $plugin, $settings) {
  $form = array();
  $form['suppress_page_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Supress outer page title'),
    '#default_value' => $settings['suppress_page_title'],
  );
  return $form;
}
