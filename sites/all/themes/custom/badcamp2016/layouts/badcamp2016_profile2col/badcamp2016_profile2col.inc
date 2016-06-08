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
    'regions' => array(
      'image' => t('Image'),
      'main' => t('Main Content'),
    ),
  );
  return $items;
}
