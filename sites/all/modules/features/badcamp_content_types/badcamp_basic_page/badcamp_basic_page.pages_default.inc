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
    'panels_page_title_state' => 1,
    'panels_page_title' => '%node:title',
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_default';
  $display->layout_settings = array(
    'suppress_page_title' => 0,
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'title' => NULL,
      'sponsors' => NULL,
    ),
    'content' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fd9859ca-16a2-43e1-b033-5aae5bc73818';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_59090335-f05d-42ec-ac35-f4b1918461e9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1b0fadba-104b-4bb3-a5e1-95e9a2893e63';
  $pane->panel = 'content';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:flag_my_schedule';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
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
  $pane->uuid = '1b0fadba-104b-4bb3-a5e1-95e9a2893e63';
  $display->content['new-1b0fadba-104b-4bb3-a5e1-95e9a2893e63'] = $pane;
  $display->panels['content'][0] = 'new-1b0fadba-104b-4bb3-a5e1-95e9a2893e63';
  $pane = new stdClass();
  $pane->pid = 'new-7e0ef841-6953-47d8-b4c7-adf058ba4138';
  $pane->panel = 'content';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7e0ef841-6953-47d8-b4c7-adf058ba4138';
  $display->content['new-7e0ef841-6953-47d8-b4c7-adf058ba4138'] = $pane;
  $display->panels['content'][1] = 'new-7e0ef841-6953-47d8-b4c7-adf058ba4138';
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
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_59090335-f05d-42ec-ac35-f4b1918461e9'] = $handler;

  return $export;
}
