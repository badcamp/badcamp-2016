<?php
/**
 * @file
 * badcamp_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_homepage__panel_context_2e6542d9-73a3-4705-87dd-5f75595515d4';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'home',
    'css' => '.core-sponsor .views-field-field-sponsor-logo {
        width: 50%;
 }',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'BADCamp 2015',
        ),
        'description' => array(
          'value' => 'BADCamp is an annual celebration of the web, open source software, and creators. Join us Oct 22-25 in Berkeley CA.',
        ),
        'itemtype' => array(
          'value' => 'Organization',
        ),
        'itemprop:name' => array(
          'value' => 'Bay Area Drupal Camp 2015',
        ),
        'itemprop:image' => array(
          'value' => '/sites/all/themes/badcamp2015/images/badcamp-2015-logo--opgr.jpg',
        ),
        'og:type' => array(
          'value' => 'website',
        ),
        'og:title' => array(
          'value' => 'Bay Area Drupal Camp 2015',
        ),
        'og:image:url' => array(
          'value' => '/sites/all/themes/badcamp2015/images/badcamp-2015-logo--opgr.jpg',
        ),
        'og:image:secure_url' => array(
          'value' => '/sites/all/themes/badcamp2015/images/badcamp-2015-logo--opgr.jpg',
        ),
        'og:image:type' => array(
          'value' => 'image/jpg',
        ),
        'twitter:title' => array(
          'value' => 'Bay Area Drupal Camp 2015',
        ),
        'twitter:image:src' => array(
          'value' => '/sites/all/themes/badcamp2015/images/badcamp-2015-logo--opgr.jpg',
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
  $display->title = 'Welcome';
  $display->uuid = 'e62a7e1e-f2cb-4f2d-84f6-0a37edafc10c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8ee2d834-99f2-446d-9108-52703411c8f3';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Main Title callout',
      'title' => '',
      'body' => '<h2 class="pane-title">Bay Area<br />
Drupal Camp</h2>

<h2 class="pane-title">2015<br />
October 22 - 25</h2>

<h2 class="pane-title">University of<br />
California,<br />
Berkeley</h2>',
      'format' => 'full_html',
      'substitute' => TRUE,
      'name' => 'badcamp_main_title_callout',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8ee2d834-99f2-446d-9108-52703411c8f3';
    $display->content['new-8ee2d834-99f2-446d-9108-52703411c8f3'] = $pane;
    $display->panels['middle'][0] = 'new-8ee2d834-99f2-446d-9108-52703411c8f3';
    $pane = new stdClass();
    $pane->pid = 'new-1a13ca67-36dd-47f3-84da-b9534b32b4ed';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'BADCamp Introduction',
      'title' => 'Bay Area Drupal Camp',
      'body' => '<div class="panel-pane pane-custom pane-3 blue">
<div class="pane-content">
<p>The Bay Area Drupal Camp is a gathering of like-minded people to discuss and learn about Drupal, an open-source content management system that is powering more of the web every year. In its 9th year, BADCamp provides four days of training, summits, sprints, sessions, BOFs, networking, career opportunities and more!</p>
</div>
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
      'name' => 'badcamp_introduction_callout',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1a13ca67-36dd-47f3-84da-b9534b32b4ed';
    $display->content['new-1a13ca67-36dd-47f3-84da-b9534b32b4ed'] = $pane;
    $display->panels['middle'][1] = 'new-1a13ca67-36dd-47f3-84da-b9534b32b4ed';
    $pane = new stdClass();
    $pane->pid = 'new-5bb0f75f-0d93-49a3-8746-62b0b0420dc5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'badcamp-sponsors-thank-you core-sponsor',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5bb0f75f-0d93-49a3-8746-62b0b0420dc5';
    $display->content['new-5bb0f75f-0d93-49a3-8746-62b0b0420dc5'] = $pane;
    $display->panels['middle'][2] = 'new-5bb0f75f-0d93-49a3-8746-62b0b0420dc5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
