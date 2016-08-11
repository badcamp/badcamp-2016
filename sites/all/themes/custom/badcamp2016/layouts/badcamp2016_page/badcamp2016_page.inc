<?php
/**
 * @file
 * Badcamp full page panel layout.
 */

/**
 * Implements hook_panels_layouts().
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
      'title' => t('Page Title'),
      'main' => t('Main content region'),
      'footer_nav' => t('Footer Navigation'),
      'footer_left' => t('Footer Left'),
      'footer_right' => t('Footer Right'),
    ),
  );
  return $items;
}

/**
 * Implements template preprocess page().
 */
function template_preprocess_badcamp2016_page(&$variables) {
  if ($page = page_manager_get_current_page()) {
    if ($page['handler']->handler === 'panel_context') {
      $display = $page['handler']->conf['display'];

      if (!empty($display->layout_settings['suppress_page_title'])) {
        $variables['content']['title'] = NULL;
      }
    }
  }
}
