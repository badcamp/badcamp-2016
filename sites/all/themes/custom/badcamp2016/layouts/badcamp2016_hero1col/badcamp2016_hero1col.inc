<?php
/**
 * @file
 * Badcamp stacked single column page panel layout.
 */

/**
 * Implements hook_panels_layouts().
 */
function badcamp2016_badcamp2016_hero1col_panels_layouts() {
  $items['badcamp2016_hero1col'] = array(
    'title' => t('BadCamp 1 Column Hero'),
    'category' => t('BadCamp'),
    'icon' => 'badcamp2016_hero1col.png',
    'theme' => 'badcamp2016_hero1col',
    'admin css' => '../../dist/css/panels-admin.css',
    'settings form' => 'badcamp2016_layouts_hero1col_settings_form',
    'settings validate' => 'badcamp2016_layouts_hero1col_settings_form_validate',
    'settings' => array(
      'background' => NULL,
      'opaque' => FALSE,
    ),
    'regions' => array(
      'hero' => t('Hero'),
      'content' => t('Content'),
    ),
  );
  return $items;
}

/**
 * Layout settings form.
 */
function badcamp2016_layouts_hero1col_settings_form($display, $plugin, $settings) {
  return array(
    'background' => array(
      '#title' => t('Path to Hero Background'),
      '#type' => 'textfield',
      '#default_value' => $settings['background'],
      '#description' => t('Enter the path to the image.  The %theme token will be replaced with the path to the badcamp 2016 theme.')
    ),
    'opaque' => array(
      '#title' => t('Opaque background'),
      '#type' => 'checkbox',
      '#default_value' => $settings['opaque'],
    )
  );
}

/**
 * Layout settings validation callback.
 */
function badcamp2016_layouts_hero1col_settings_form_validate(&$settings, &$element) {
  if (!empty($settings['background'])) {
    $path = badcamp2016_hero_image_path($settings['background']);
    if (file_exists($path)) {
      if ($info = image_get_info($path)) {
        $settings['height'] = $info['height'];
        $settings['width'] = $info['width'];
      }
    }
    else {
      form_error($element, 'Invalid image path');
    }
  }
}


/**
 * Implements hook_preprocess_HOOK().
 */
function template_preprocess_badcamp2016_hero1col(&$vars) {
  $vars['hero_attributes_array'] = array();
  $settings = $vars['settings'];
  if (!empty($settings['background'])) {
    $path = badcamp2016_hero_image_path($settings['background']);
    $styles = array(
      'background-image: url(' . file_create_url($path) . ')',
      'min-height:' . $settings['height'] . 'px',
    );
    $vars['hero_attributes_array'] = array(
      'class' => array('region-hero'),
      'style' => implode(';', $styles),
    );
  }
  if ($settings['opaque']) {
    $vars['opaque_class'] = 'opaque';
  }
  else {
    $vars['opaque_class'] = '';
  }
}

/**
 * Implements hook_process_HOOK().
 */
function template_process_badcamp2016_hero1col(&$vars) {
  $vars['hero_attributes'] = drupal_attributes($vars['hero_attributes_array']);
}

/**
 * Custom helper function to get an image path, allowing theme dir replacement.
 *
 * @param string $tokenized_url
 *   A url, that may contain the %theme token, which will be replaced.
 *
 * @return string
 *   The converted path to the image.
 */
function badcamp2016_hero_image_path($tokenized_url) {
  return strtr($tokenized_url, array(
    '%theme' => drupal_get_path('theme', 'badcamp2016'),
  ));
}
