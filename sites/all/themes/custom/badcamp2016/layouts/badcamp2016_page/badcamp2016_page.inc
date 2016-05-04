<?php

/**
 * Implements hook_panels_layouts()
 */
function badcamp2016_badcamp2016_page_panels_layouts() {
  $items['badcamp2016_page'] = array(
    'title' => t('BadCamp General Page Layout'),
    'category' => t('BadCamp'),
    'icon' => 'badcamp2016_page.png',
    'theme' => 'badcamp2016_page',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'header' => t('Header'),
      'main' => t('Main content region'),
      'footer' => t('Footer'),
    ),
  );
  return $items;
}

