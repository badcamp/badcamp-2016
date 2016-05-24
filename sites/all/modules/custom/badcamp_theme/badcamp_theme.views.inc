<?php
/**
 * @file
 * Views plugin declarations.
 */

/**
 * Implements hook_views_plugins().
 */
function badcamp_theme_views_plugins() {
  return array(
    'style' => array(
      'block_grid' => array(
        'title' => t('Block Grid'),
        'help' => t('Displays rows in a Foundation Grid.'),
        'handler' => 'badcamp_theme_views_plugin_block_grid',
        'theme' => 'views_view_block_grid',
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses grouping' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'help topic' => 'style-unformatted',
      ),
    ),
  );
}
