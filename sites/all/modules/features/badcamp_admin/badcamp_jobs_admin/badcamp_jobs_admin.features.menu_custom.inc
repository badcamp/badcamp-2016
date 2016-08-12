<?php
/**
 * @file
 * badcamp_jobs_admin.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function badcamp_jobs_admin_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-jobs-admin-menu.
  $menus['menu-jobs-admin-menu'] = array(
    'menu_name' => 'menu-jobs-admin-menu',
    'title' => 'Jobs Admin Menu',
    'description' => 'Provides links for adding jobs',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Jobs Admin Menu');
  t('Provides links for adding jobs');

  return $menus;
}
