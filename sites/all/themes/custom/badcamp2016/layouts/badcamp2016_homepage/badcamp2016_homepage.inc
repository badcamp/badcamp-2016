<?php

/**
 * Implements hook_panels_layouts()
 */
function badcamp2016_badcamp2016_homepage_panels_layouts() {
  $items['badcamp2016_homepage'] = array(
    'title' => t('BadCamp Homepage Layout'),
    'category' => t('BadCamp'),
    'icon' => 'badcamp2016_homepage.png',
    'theme' => 'badcamp2016_homepage',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'hud' => t('Heads Up display'),
      'about' => t('About'),
      'news' => t('News'),
      'sponsors' => t('Sponsors'),
    ),
  );
  return $items;
}
