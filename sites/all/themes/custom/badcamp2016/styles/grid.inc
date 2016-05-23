<?php
/**
 * @file
 * Style plugin for a pane that has grid classes.
 */

$plugin = array(
  'title' => t('Foundation Grid'),
  'description' => t('Display the pane in a foundation grid container.'),
  'render pane' => 'badcamp2016_styles_grid_pane',
  'pane settings form' => 'badcamp2016_styles_grid_pane_settings_form',
  'weight' => -100,
);

/**
 * Return a list of grid sizes, optionally with a given suffix.
 *
 * @param string $suffix
 *   Suffix to append to the size name (ex: push or pull).
 *
 * @return array
 *   The requested array of sizes.
 */
function badcamp2016_styles_grid_get_sizes($suffix = NULL) {
  return array(
    $suffix ? "small-$suffix" : 'small',
    $suffix ? "medium-$suffix" : 'medium',
    $suffix ? "large-$suffix" : 'large',
  );
}

/**
 * Style settings form.
 */
function badcamp2016_styles_grid_pane_settings_form($settings) {
  foreach (badcamp2016_styles_grid_get_sizes() as $size) {
    $form[$size] = array(
      '#type' => 'numberfield',
      // Coder ignored - this is actually valid.
      // @codingStandardsIgnoreStart
      '#title' => t(ucfirst($size) . ' Columns'),
      // @codingStandardsIgnoreEnd
      '#default_value' => isset($settings[$size]) ? $settings[$size] : NULL,
    );
  }
  foreach (badcamp2016_styles_grid_get_sizes('push') as $size) {
    $form[$size] = array(
      '#type' => 'numberfield',
      // @codingStandardsIgnoreStart
      '#title' => t(ucfirst($size) . ' columns'),
      // @codingStandardsIgnoreEnd
      '#default_value' => isset($settings[$size]) ? $settings[$size] : NULL,
    );
  }
  $form['row'] = array(
    '#type' => 'checkbox',
    '#title' => 'Add row?',
    '#default_value' => $settings['row'],
  );
  return $form;
}

/**
 * Style theme callback.
 */
function theme_badcamp2016_styles_grid_pane(&$vars) {
  $content = $vars['content'];
  $pane = $vars['pane'];
  $display = $vars['display'];

  $settings = $vars['settings'];
  $active_sizes = array_filter(array_intersect_key($settings, array_flip(badcamp2016_styles_grid_get_sizes())));
  $active_pushes = array_filter(array_intersect_key($settings, array_flip(badcamp2016_styles_grid_get_sizes('push'))));

  $size_classes = array_map(function ($size, $columns) {
    return "$size-$columns";
  }, array_keys($active_sizes), $active_sizes);

  $push_classes = array_map(function ($size, $columns) {
    return "$size-$columns";
  }, array_keys($active_pushes), $active_pushes);

  $classes = array_merge($size_classes, $push_classes, array(
    'columns',
  ));

  if ($settings['row']) {
    $classes[] = 'row';
  }
  if (isset($content->css_class)) {
    $content->css_class .= ' ' . implode(' ', $classes);
  }
  else {
    $content->css_class = implode(' ', $classes);
  }

  return theme('panels_pane', array(
    'content' => $content,
    'pane' => $pane,
    'display' => $display,
  ));
}
