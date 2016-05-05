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
    'admin css' => '../../dist/css/panels-admin.css',
    'regions' => array(
      'branding' => t('Branding'),
      'user_nav' => t('User navigation'),
      'main_nav' => t('Main Navigation'),
      'main' => t('Main content region'),
      'footer_nav' => t('Footer Navigation'),
      'footer_left' => t('Footer Left'),
      'footer_right' => t('Footer Right'),
    ),
  );
  return $items;
}

