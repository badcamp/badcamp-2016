<?php
/**
 * @file
 * badcamp_basic_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function badcamp_basic_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_59090335-f05d-42ec-ac35-f4b1918461e9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'badcamp-default',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'panels_everywhere_site_template' => '',
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_default';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'title' => NULL,
    ),
    'content' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fd9859ca-16a2-43e1-b033-5aae5bc73818';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8594bb16-fbe7-4c7d-abc1-0c12f833c257';
    $pane->panel = 'content';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8594bb16-fbe7-4c7d-abc1-0c12f833c257';
    $display->content['new-8594bb16-fbe7-4c7d-abc1-0c12f833c257'] = $pane;
    $display->panels['content'][0] = 'new-8594bb16-fbe7-4c7d-abc1-0c12f833c257';
    $pane = new stdClass();
    $pane->pid = 'new-ec9a3784-fc72-4e52-a4a8-51b2176bb1f3';
    $pane->panel = 'title';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => 'page-title',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec9a3784-fc72-4e52-a4a8-51b2176bb1f3';
    $display->content['new-ec9a3784-fc72-4e52-a4a8-51b2176bb1f3'] = $pane;
    $display->panels['title'][0] = 'new-ec9a3784-fc72-4e52-a4a8-51b2176bb1f3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8594bb16-fbe7-4c7d-abc1-0c12f833c257';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_59090335-f05d-42ec-ac35-f4b1918461e9'] = $handler;

  return $export;
}
