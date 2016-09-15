<?php
/**
 * @file
 * Badcamp 2016 theme overrides and preprocess functions.
 */

/**
 * Implements hook_theme_registry_alter().
 *
 * Do not use template_preprocess_menu_tree() to build menu trees.
 * Necessary so we can access data about the menu links in theme and preprocess
 * functions.
 *
 * @see template_preprocess_menu_tree()
 */
function badcamp2016_theme_registry_alter(&$registry) {
  $idx = array_search('template_preprocess_menu_tree', $registry['menu_tree']['preprocess functions']);
  if ($idx !== FALSE) {
    unset($registry['menu_tree']['preprocess functions'][$idx]);
  }
}

/**
 * Override of theme_menu_tree().
 *
 * Print out $variables['tree']['#children'] instead of $variables['tree'].
 * Necessary so we can access data about the menu links in theme and preprocess
 * functions.
 *
 * @see badcamp2016_theme_registry_alter()
 */
function badcamp2016_menu_tree(&$variables) {
  return '<ul class="menu">' . $variables['tree']['#children'] . '</ul>';
}

/**
 * Implements hook_preprocess_HOOK().
 *
 * Add a has_children variable to trees of the main menu.
 */
function badcamp2016_preprocess_menu_tree__main_menu(&$variables) {
  $variables['has_children'] = TRUE;
  $variables['top_level'] = TRUE;
  foreach (element_children($variables['tree']) as $cid) {
    // Check whether we're at the top level by inspecting the
    // depth of the first link.
    if ($variables['tree'][$cid]['#original_link']['depth'] > 1) {
      $variables['top_level'] = FALSE;
    }
    if (!empty($variables['tree'][$cid]['#below'])) {
      $variables['has_children'] = TRUE;
    }
  }
}

/**
 * Overrides theme_menu_tree() for the main menu.
 *
 * Add foundation dropdown attributes if this tree has children.
 */
function badcamp2016_menu_tree__main_menu(&$variables) {
  $attributes = array(
    'class' => array('menu'),
  );
  if ($variables['has_children']) {
    $attributes['class'][] = 'drilldown medium-dropdown';
    $attributes['data-parent-link'] = 'true';
  }
  if ($variables['top_level']) {
    $attributes['data-responsive-menu'] = 'drilldown medium-dropdown';
    $attributes['class'][] = 'vertical medium-horizontal';
  }
  return '<ul' . drupal_attributes($attributes) . '>' . $variables['tree']['#children'] . '</ul>';

}

/**
 * Implements hook_preprocess_HOOK().
 *
 * Add foundation grid classes to the main page content if this is not
 * a page manager page.
 */
function badcamp2016_preprocess_panels_pane(&$vars) {
  if ($vars['pane']->type == 'page_content') {
    $pm_page = module_invoke('page_manager', 'get_current_page');
    if (!$pm_page) {
      $vars['classes_array'][] = 'row column';
    }
  }
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
    $guide[$type . '-message']['content'] = '<div class="callout messages ' . "{$class} {$type}" . '">' . styleguide_sentence() . '</div>';
  }
}

/**
 * Implements hook_preprocess_node().
 */
function badcamp2016_preprocess_node(&$variables) {
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];
  if($variables['type'] === 'training' && $variables['teaser']) {
    if(isset($variables['content']['links'], $variables['content']['links']['node'])) {
      $variables['content']['links']['#attributes']['class'][] = 'no-bullet';
    }
  }
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
      $output .= "<div data-alert data-closable class=\"callout messages {$status_mapping[$type]} {$type}\">\n";
    }
    else {
      $output .= "<div data-alert data-closable class=\"callout messages alert\">\n";
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

    $output .= '<button class="close-button" data-close><span aria-hidden="true">&times;</span></button>';

    $output .= "</div>\n";
  }

  return $output;
}

/**
 * Implements hook_html_head_alter().
 */
function badcamp2016_html_head_alter(&$head_elements) {
  // Optimize mobile viewport.
  $head_elements['mobile_viewport'] = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width, maximum-scale = 1.0',
    ),
  );
}
