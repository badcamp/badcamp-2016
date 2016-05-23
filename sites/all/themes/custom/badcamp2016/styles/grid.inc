<?php

// Plugin definition
$plugin = array(
  'title' => t('Foundation Grid'),
  'description' => t('Display the pane in a foundation grid container.'),
  'render pane' => 'badcamp_panels_foundation_pane',
  'settings form' => 'badcamp_panels_foundation_settings_form',
  'pane settings form' => 'badcamp_panels_foundation_settings_form',
  'weight' => -100,
);

function badcamp_panels_foundation_settings_form($settings) {
  $form['small'] = array(
    '#type' => 'numberfield',
    '#title' => t('Small Grid Rows'),
    '#default_value' => $settings['small'],
  );
  $form['medium'] = array(
    '#type' => 'numberfield',
    '#title' => t('Medium Grid Rows'),
    '#default_value' => $settings['medium'],
  );
  $form['large'] = array(
    '#type' => 'numberfield',
    '#title' => t('Large Grid Rows'),
    '#default_value' => $settings['large'],
  );
  $form['row'] = array(
    '#type' => 'checkbox',
    '#title' => 'Add row?',
    '#default_value' => $settings['row'],
  );
  return $form;
}

function theme_badcamp_panels_foundation_pane(&$vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];

  $settings = $vars['settings'];
  $active_sizes = array_filter(array_intersect_key($settings, array(
    'small' => NULL, 'medium'=> NULL, 'large' => NULL
  )));

  $classes = array(
    'columns',
  );
  $classes = array_merge(array_map(function($size, $columns) {
    return "$size-$columns";
  }, array_keys($active_sizes), $active_sizes), $classes);

  if($settings['row']) {
    $classes[] = 'row';
  }
  if(isset($content->css_class)) {
    $content->css_class .= ' ' . implode(' ', $classes);
  }
  else {
    $content->css_class = implode(' ', $classes);
  }

  return theme('panels_pane', array('content' => $content, 'pane' => $pane, 'display' => $display));
}
