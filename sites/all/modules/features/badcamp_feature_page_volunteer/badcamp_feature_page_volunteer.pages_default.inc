<?php
/**
 * @file
 * badcamp_feature_page_volunteer.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_feature_page_volunteer_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'volunteers';
  $page->task = 'page';
  $page->admin_title = 'Volunteer';
  $page->admin_description = '';
  $page->path = 'volunteer';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Volunteers',
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
  $handler->name = 'page_volunteers__panel';
  $handler->task = 'page';
  $handler->subtask = 'volunteers';
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
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Volunteers';
  $display->uuid = '274fc0ff-b03b-4159-a876-ca8d2417d6f7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0d7a6cd4-6841-47dd-81f4-50de238fff9e';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Volunteer Form',
      'title' => 'Volunteer Form',
      'body' => '<p>Interested in volunteering?</p>

<div id="webform-20721">Fill out my <a href="https://badcamp.webform.com/form/20721">webform</a>.</div>
<script type="text/javascript">(function(d, s, id) {
var js, wjs = d.getElementsByTagName(s)[0];
if (d.getElementById(id)) return;
js = d.createElement(s); js.id = id;
js.src = \'//webform.com/external/embed.js\';
js.onload = js.onreadystatechange = function() {
  var rs = this.readyState; if (rs && rs !== \'complete\' && rs !==
\'loaded\') return;
  try { webformEmbed(\'https://badcamp.webform.com/form/20721?embed=1\',
\'webform-20721\'); } catch (e) {}
};
wjs.parentNode.insertBefore(js, wjs);
}(document, \'script\', \'webform-embed\'));</script>',
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
    $pane->uuid = '0d7a6cd4-6841-47dd-81f4-50de238fff9e';
    $display->content['new-0d7a6cd4-6841-47dd-81f4-50de238fff9e'] = $pane;
    $display->panels['content'][0] = 'new-0d7a6cd4-6841-47dd-81f4-50de238fff9e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-0d7a6cd4-6841-47dd-81f4-50de238fff9e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['volunteers'] = $page;

  return $pages;

}
