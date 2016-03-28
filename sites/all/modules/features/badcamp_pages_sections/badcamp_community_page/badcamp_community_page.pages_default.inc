<?php
/**
 * @file
 * badcamp_community_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_community_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'community';
  $page->task = 'page';
  $page->admin_title = 'Community';
  $page->admin_description = '';
  $page->path = 'community';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Community',
    'name' => 'main-menu',
    'weight' => '90',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_community__panel_context_493367a7-dcea-4937-9997-43d7acdcc292';
  $handler->task = 'page';
  $handler->subtask = 'community';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'community',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'BADCamp Community | [site:name]',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'BADCamp Community';
  $display->uuid = 'e62a7e1e-f2cb-4f2d-84f6-0a37edafc10c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ff213325-d4c6-4857-9f64-34297bb31998';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'badcamp_coding_lounge_callout';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
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
    $pane->uuid = 'ff213325-d4c6-4857-9f64-34297bb31998';
    $display->content['new-ff213325-d4c6-4857-9f64-34297bb31998'] = $pane;
    $display->panels['middle'][0] = 'new-ff213325-d4c6-4857-9f64-34297bb31998';
    $pane = new stdClass();
    $pane->pid = 'new-fc767717-5e33-48c1-b40c-9c7c46ef48f7';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'badcamp_sponsoring_callout';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fc767717-5e33-48c1-b40c-9c7c46ef48f7';
    $display->content['new-fc767717-5e33-48c1-b40c-9c7c46ef48f7'] = $pane;
    $display->panels['middle'][1] = 'new-fc767717-5e33-48c1-b40c-9c7c46ef48f7';
    $pane = new stdClass();
    $pane->pid = 'new-f7cc43b6-7975-4c8c-a2cd-369b364a2e72';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'badcamp_individual_sponsors-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f7cc43b6-7975-4c8c-a2cd-369b364a2e72';
    $display->content['new-f7cc43b6-7975-4c8c-a2cd-369b364a2e72'] = $pane;
    $display->panels['middle'][2] = 'new-f7cc43b6-7975-4c8c-a2cd-369b364a2e72';
    $pane = new stdClass();
    $pane->pid = 'new-f9eddc1c-e212-41c3-a2b5-136f53f65ca4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'exposed' => array(
        'field_sponsor_level_tid' => array(
          1 => '1',
        ),
      ),
      'override_title' => 1,
      'override_title_text' => 'Corporate Sponsors',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f9eddc1c-e212-41c3-a2b5-136f53f65ca4';
    $display->content['new-f9eddc1c-e212-41c3-a2b5-136f53f65ca4'] = $pane;
    $display->panels['middle'][3] = 'new-f9eddc1c-e212-41c3-a2b5-136f53f65ca4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['community'] = $page;

  return $pages;

}
