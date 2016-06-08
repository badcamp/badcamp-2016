<?php
/**
 * @file
 * badcamp_food_and_drink_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_food_and_drink_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'food_and_drink';
  $page->task = 'page';
  $page->admin_title = 'Food and Drink';
  $page->admin_description = '';
  $page->path = 'food-drink';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_food_and_drink__panel_context_cd678d31-9293-4394-9bc4-e4f751be8a23';
  $handler->task = 'page';
  $handler->subtask = 'food_and_drink';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Food and Drink',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Food and Drink';
  $display->uuid = 'add49d66-09f5-4427-9ca4-e919df1c64a2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3ff15d40-6cdb-4ee9-95a8-c40d4a8ac5e5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'There are hundreds of places to get lunch on and near the UC Berkeley campus.  Walk off campus in any direction and you\'re bound to find something delicious.  We\'ve also made you a map of our favorite places to eat.',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3ff15d40-6cdb-4ee9-95a8-c40d4a8ac5e5';
    $display->content['new-3ff15d40-6cdb-4ee9-95a8-c40d4a8ac5e5'] = $pane;
    $display->panels['middle'][0] = 'new-3ff15d40-6cdb-4ee9-95a8-c40d4a8ac5e5';
    $pane = new stdClass();
    $pane->pid = 'new-3ab4c949-8488-4dc7-8ee6-fe176afb0523';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
      'name' => 'food_and_drink',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3ab4c949-8488-4dc7-8ee6-fe176afb0523';
    $display->content['new-3ab4c949-8488-4dc7-8ee6-fe176afb0523'] = $pane;
    $display->panels['middle'][1] = 'new-3ab4c949-8488-4dc7-8ee6-fe176afb0523';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3ab4c949-8488-4dc7-8ee6-fe176afb0523';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['food_and_drink'] = $page;

  return $pages;

}
