<?php
/**
 * @file
 * Badcamp single column page panel layout.
 */

/**
 * Implements hook_panels_layouts().
 */
function badcamp2016_badcamp2016_narrow1col_panels_layouts() {
  $items['badcamp2016_narrow1col'] = array(
    'title' => t('BadCamp 1 Column Narrow'),
    'category' => t('BadCamp'),
    'icon' => 'badcamp2016_narrow1col.png',
    'theme' => 'badcamp2016_narrow1col',
    'admin css' => '../../dist/css/panels-admin.css',
    'regions' => array(
      'content' => t('Content'),
    ),
  );
  return $items;
}
