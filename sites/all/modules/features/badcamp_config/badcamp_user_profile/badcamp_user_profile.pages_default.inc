<?php
/**
 * @file
 * badcamp_user_profile.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function badcamp_user_profile_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_c05f3359-6392-4aec-9826-e0cfc9605533';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_default';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'image' => NULL,
      'name1' => NULL,
      'name2' => NULL,
      'bio' => NULL,
      'social_medial_1' => NULL,
      'social_medial_2' => NULL,
      'interests' => NULL,
      'main' => NULL,
      'title' => NULL,
      'content' => NULL,
      'sponsors' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:realname';
  $display->uuid = '7e4fc73f-719f-467f-ab8d-7dccab07f78e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-becdaefd-a29f-46f3-bc08-490111913ad7';
    $pane->panel = 'content';
    $pane->type = 'user_profile';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = 'becdaefd-a29f-46f3-bc08-490111913ad7';
    $display->content['new-becdaefd-a29f-46f3-bc08-490111913ad7'] = $pane;
    $display->panels['content'][0] = 'new-becdaefd-a29f-46f3-bc08-490111913ad7';
    $pane = new stdClass();
    $pane->pid = 'new-168c3f01-29f0-4866-a6d4-53462a167450';
    $pane->panel = 'title';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Username',
      'title' => '',
      'body' => '<h1 class="page-title">%user:name</h1>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '168c3f01-29f0-4866-a6d4-53462a167450';
    $display->content['new-168c3f01-29f0-4866-a6d4-53462a167450'] = $pane;
    $display->panels['title'][0] = 'new-168c3f01-29f0-4866-a6d4-53462a167450';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_c05f3359-6392-4aec-9826-e0cfc9605533'] = $handler;

  return $export;
}
