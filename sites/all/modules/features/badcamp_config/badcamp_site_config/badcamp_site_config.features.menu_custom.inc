<?php
/**
 * @file
 * badcamp_site_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function badcamp_site_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu');

  return $menus;
}
