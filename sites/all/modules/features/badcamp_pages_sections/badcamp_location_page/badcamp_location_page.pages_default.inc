<?php
/**
 * @file
 * badcamp_location_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_location_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'location';
  $page->task = 'page';
  $page->admin_title = 'Location';
  $page->admin_description = '';
  $page->path = 'location';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Location',
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
  $handler->name = 'page_location__panel_context_726caf75-78c9-409c-848f-b1bd58a27103';
  $handler->task = 'page';
  $handler->subtask = 'location';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'location',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'BADCamp Location | [site:name]',
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
  $display->title = 'BADCamp Location';
  $display->uuid = 'e62a7e1e-f2cb-4f2d-84f6-0a37edafc10c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bf320bf6-4fbe-4332-aa7c-dce48b6ba626';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
      'name' => 'badcamp_location_callout',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bf320bf6-4fbe-4332-aa7c-dce48b6ba626';
    $display->content['new-bf320bf6-4fbe-4332-aa7c-dce48b6ba626'] = $pane;
    $display->panels['middle'][0] = 'new-bf320bf6-4fbe-4332-aa7c-dce48b6ba626';
    $pane = new stdClass();
    $pane->pid = 'new-da1f4fa5-8b2f-4613-90a4-a1e8689daa7b';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'BADCamp location map',
      'title' => '',
      'body' => '<p class="p1" style="line-height: 20.8px;"><span class="s1"><strong>Registration</strong>&nbsp;is at UC Berkeley\'s&nbsp;<a href="https://www.google.com/maps/place/Martin+Luther+King+Student+Union/@37.8692653,-122.2596223,19z/data=!3m1!4b1!4m2!3m1!1s0x80857c25fd15163f:0xd8ee08380d3e2d14">MLK Student Union</a>&nbsp;near Bancroft Way and Telegraph Avenue. &nbsp;</span></p>

<p class="p1" style="line-height: 20.8px;"><span class="s1"><strong>Summits, trainings and sessions</strong>:&nbsp;check the event\'s page for location details.</span></p>

<p><iframe allowfullscreen="" frameborder="0" height="450" src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3211.363639122248!2d-122.2585539130164!3d37.87186900912187!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x808f7718c522d7c1%3A0xda8034ea3b6b3289!2sUniversity+of+California%2C+Berkeley!5e0!3m2!1sen!2sus!4v1444183998326" style="border:0" width="600"></iframe></p>
',
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
    $pane->uuid = 'da1f4fa5-8b2f-4613-90a4-a1e8689daa7b';
    $display->content['new-da1f4fa5-8b2f-4613-90a4-a1e8689daa7b'] = $pane;
    $display->panels['middle'][1] = 'new-da1f4fa5-8b2f-4613-90a4-a1e8689daa7b';
    $pane = new stdClass();
    $pane->pid = 'new-d5afdf48-463b-4fc0-b1d1-6243018fb043';
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
      'name' => 'badcamp_lodging_callout',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd5afdf48-463b-4fc0-b1d1-6243018fb043';
    $display->content['new-d5afdf48-463b-4fc0-b1d1-6243018fb043'] = $pane;
    $display->panels['middle'][2] = 'new-d5afdf48-463b-4fc0-b1d1-6243018fb043';
    $pane = new stdClass();
    $pane->pid = 'new-208cc640-36a8-440a-982a-e5140f082de2';
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
      'name' => 'badcamp_food_libations_callout',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '208cc640-36a8-440a-982a-e5140f082de2';
    $display->content['new-208cc640-36a8-440a-982a-e5140f082de2'] = $pane;
    $display->panels['middle'][3] = 'new-208cc640-36a8-440a-982a-e5140f082de2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['location'] = $page;

  return $pages;

}
