<?php
/**
 * @file
 * Badcamp 2016 theme overrides and preprocess functions.
 */

/**
 * Implements hook_preprocess_html().
 */
function badcamp2016_preprocess_html(&$variables) {
}

/**
 * Implements hook_preprocess_page().
 */
function badcamp2016_preprocess_page(&$variables) {
}

/**
 * Implements hook_styleguide_alter().
 */
function badcamp2016_styleguide_alter(&$guide) {
  $messages = array(
    'status' => 'success',
    'warning' => 'warning',
    'error' => 'alert',
  );
  foreach ($messages as $type => $class) {
    $guide[$type . '-message']['content'] = '<div class="callout ' . $class . '">' . styleguide_sentence() . '</div>';
  }
}

/**
 * Implements hook_preprocess_node().
 */
function badcamp2016_preprocess_node(&$variables) {
}

/**
 * Implements hook_preprocess_button().
 */
function badcamp2016_preprocess_button(&$variables) {
  $variables['element']['#attributes']['class'][] = 'button';
}

/**
 * Override of theme_status_messages().
 */
function badcamp2016_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'error' => t('Error message'),
    'status' => t('Status message'),
    'warning' => t('Warning message'),
  );

  $status_mapping = array(
    'error' => 'alert',
    'status' => 'success',
    'warning' => 'warning',
  );

  foreach (drupal_get_messages($display) as $type => $messages) {
    if (isset($status_mapping[$type])) {
      $output .= "<div data-alert class=\"callout messages {$status_mapping[$type]}\">\n";
    }
    else {
      $output .= "<div data-alert class=\"callout messages alert\">\n";
    }

    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 1) {
      $output .= " <ul class=\"no-bullet\">\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= $messages[0];
    }

    $output .= '<button class="close-button"><span aria-hidden="true">&times;</span></button>';

    $output .= "</div>\n";
  }

  return $output;
}
