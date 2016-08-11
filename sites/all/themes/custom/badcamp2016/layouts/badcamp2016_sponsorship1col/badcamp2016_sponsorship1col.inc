<?php
/**
 * @file
 * Badcamp single column page panel layout.
 */

/**
 * Implements hook_panels_layouts().
 */
function badcamp2016_badcamp2016_sponsorship1col_panels_layouts() {
  $items['badcamp2016_sponsorship1col'] = array(
    'title' => t('BadCamp 1 Column Sponsorship'),
    'category' => t('BadCamp'),
    'icon' => 'badcamp2016_sponsorship1col.png',
    'theme' => 'badcamp2016_sponsorship1col',
    'admin css' => '../../dist/css/panels-admin.css',
    'regions' => array(
      'header' => t('Header area'),
      'main' => t('Main Content'),
    ),
    'settings form' => 'badcamp2016_badcamp2016_sponsorship1col_settings_form',
    'settings' => array(
      'suppress_page_title' => FALSE,
    ),
  );
  return $items;
}


function badcamp2016_badcamp2016_sponsorship1col_settings_form($display, $plugin, $settings) {
  $form = array();
  $form['suppress_page_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Suppress outer page title'),
    '#default_value' => $settings['suppress_page_title'],
  );
  return $form;
}
