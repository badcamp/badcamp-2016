<?php

$plugin = array(
  'title' => 'Hero',
  'description' => 'Render with a large background',
  'render region' => 'badcamp_panels_hero_region',
  'settings form' => 'badcamp_panels_hero_settings_form',
);

function theme_badcamp_panels_hero_region($vars) {
  $panes = $vars['panes'];
  $settings = $vars['settings'];
  $content = '';
  foreach($panes as $pane_id => $item) {
    $content.= $item;
  }

  $attrs = array(
    'class' => array(
      'region-hero'
    )
  );

  if(!empty($settings['background']) && $info = image_get_info($settings['background'])) {
    $style = 'background-image: url(' . file_create_url($settings['background']) . ');';
    $style.= 'min-height:' . $info['height'] .'px';
    $attrs['style'] = $style;
    $attrs['class'][] = 'with-background';
  }

  return '<div' . drupal_attributes($attrs) . '>' . implode('', $panes) . '</div>';
}

function badcamp_panels_hero_settings_form($style_settings) {
  $form['background'] = array(
    '#type' => 'textfield',
    '#title' => t('Image Path'),
    '#default_value' => isset($style_settings['background']) ? $style_settings['background'] : '',
  );
  return $form;
}
