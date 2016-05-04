<?php

/**
 * Implements hook_panels_layouts()
 */
function badcamp2016_badcamp2016_1col_panels_layouts() {
  $items['badcamp2016_1col'] = array(
    'title' => t('BadCamp Page Layout'),
    'category' => t('BadCamp Page'),
    'icon' => 'badcamp2016_1col.png',
    'theme' => 'badcamp2016_1col',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'top' => t('Header'),
      'middle' => t('Main content region'),
      'bottom' => t('Footer'),
    ),
  );
  return $items;
}

