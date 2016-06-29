<?php
/**
 * @file
 * badcamp_trainings_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_trainings_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'trainings';
  $page->task = 'page';
  $page->admin_title = 'Trainings';
  $page->admin_description = '';
  $page->path = 'training';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Trainings',
    'name' => 'main-menu',
    'weight' => '0',
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
  $handler->name = 'page_trainings__panel_context_ec009ebb-bed5-4eb4-9416-8402212a1fe6';
  $handler->task = 'page';
  $handler->subtask = 'trainings';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'details',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Free Drupal Trainings';
  $display->uuid = '06080947-0eb3-4b63-8ad1-a10579342113';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-aff1eaaf-bfe0-4fa6-a66e-cbedb1cc920d';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Training Description',
      'title' => '',
      'body' => '<p>For two full days on Thursday and Friday, BADCamp offers world-class training from some of the best Drupal teachers in the world. Whether you are looking to level up your front end, back end, devops, marketing automation or CRM skills, we have classes for you.</p>',
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
    $pane->uuid = 'aff1eaaf-bfe0-4fa6-a66e-cbedb1cc920d';
    $display->content['new-aff1eaaf-bfe0-4fa6-a66e-cbedb1cc920d'] = $pane;
    $display->panels['content'][0] = 'new-aff1eaaf-bfe0-4fa6-a66e-cbedb1cc920d';
    $pane = new stdClass();
    $pane->pid = 'new-354bb14c-a000-4971-aba3-0e2063aa304b';
    $pane->panel = 'content';
    $pane->type = 'views';
    $pane->subtype = 'badcamp_trainings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '354bb14c-a000-4971-aba3-0e2063aa304b';
    $display->content['new-354bb14c-a000-4971-aba3-0e2063aa304b'] = $pane;
    $display->panels['content'][1] = 'new-354bb14c-a000-4971-aba3-0e2063aa304b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['trainings'] = $page;

  return $pages;

}
