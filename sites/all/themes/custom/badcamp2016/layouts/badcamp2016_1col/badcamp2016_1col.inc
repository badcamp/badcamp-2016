<?php

/**
 * Implements hook_panels_layouts()
 */
function badcamp2016_badcamp2016_1col_panels_layouts() {
  $items['badcamp2016_1col'] = array(
    'title' => t('BadCamp: 1 column row'),
    'category' => t('BadCamp: 1'),
    'icon' => 'badcamp2016_1col.png',
    'theme' => 'badcamp2016_1col',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array('middle' => t('Main column')),
  );
  return $items;
}

