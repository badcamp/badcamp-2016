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
    'regions' => array(
      'title' => t('Title'),
      'content' => t('Content'),
    ),
  );
  return $items;
}
