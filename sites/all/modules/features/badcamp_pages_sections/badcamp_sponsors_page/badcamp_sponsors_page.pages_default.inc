<?php
/**
 * @file
 * badcamp_sponsors_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_sponsors_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'badcamp_sponsor_packages';
  $page->task = 'page';
  $page->admin_title = 'BADCamp Sponsor packages';
  $page->admin_description = 'This builds the Sponsorship packages page';
  $page->path = 'sponsorship-packages';
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
  $handler->name = 'page_badcamp_sponsor_packages__panel_context_73bc9e10-14d0-4831-b635-36348ce0f4af';
  $handler->task = 'page';
  $handler->subtask = 'badcamp_sponsor_packages';
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
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sponsor packages';
  $display->uuid = '75374682-810d-453b-8464-0cbafcc9ab8c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-563a8ecb-2d49-40d3-b31a-df5796d82a7f';
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
      'name' => 'badcamp_sponsor_packages',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '563a8ecb-2d49-40d3-b31a-df5796d82a7f';
    $display->content['new-563a8ecb-2d49-40d3-b31a-df5796d82a7f'] = $pane;
    $display->panels['middle'][0] = 'new-563a8ecb-2d49-40d3-b31a-df5796d82a7f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-563a8ecb-2d49-40d3-b31a-df5796d82a7f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['badcamp_sponsor_packages'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sponsors';
  $page->task = 'page';
  $page->admin_title = 'Sponsors';
  $page->admin_description = '';
  $page->path = 'sponsors';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Sponsors',
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
  $handler->name = 'page_sponsors__panel_context_b9d16496-ca01-4ecf-91a4-d57d43a4e871';
  $handler->task = 'page';
  $handler->subtask = 'sponsors';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'sponsors',
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
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'BADCamp Sponsors';
  $display->uuid = '5dbb2012-9bd8-4b57-9f96-5a4468127137';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd52c3b4-da17-48a9-b676-92c21fe9f489';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Sponsor Intro Text',
      'title' => '',
      'body' => '<p>BADCamp would not be possible&nbsp;without our many generous sponsors.&nbsp;If you\'d like&nbsp;to be a part of making&nbsp;BADCamp happen, check out our <a href="/sponsorship-packages">sponsorship options</a> and let Matt and Anne know how you\'d like&nbsp;to get involved.</p>
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bd52c3b4-da17-48a9-b676-92c21fe9f489';
    $display->content['new-bd52c3b4-da17-48a9-b676-92c21fe9f489'] = $pane;
    $display->panels['content'][0] = 'new-bd52c3b4-da17-48a9-b676-92c21fe9f489';
    $pane = new stdClass();
    $pane->pid = 'new-acb60212-4971-48f8-ba3f-7ef4ecc4cd7b';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'exposed' => array(
        'uuid' => '964f44c7-81c1-4b5b-b731-baf9021b1ee1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Core Level',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'core-sponsor',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'acb60212-4971-48f8-ba3f-7ef4ecc4cd7b';
    $display->content['new-acb60212-4971-48f8-ba3f-7ef4ecc4cd7b'] = $pane;
    $display->panels['content'][1] = 'new-acb60212-4971-48f8-ba3f-7ef4ecc4cd7b';
    $pane = new stdClass();
    $pane->pid = 'new-3819ca88-6526-4eae-9ce9-2a14192015d0';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'exposed' => array(
        'uuid' => '75bd789f-0bb6-45b0-b92a-b520c93f0382',
      ),
      'override_title' => 1,
      'override_title_text' => 'Contrib  Level',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3819ca88-6526-4eae-9ce9-2a14192015d0';
    $display->content['new-3819ca88-6526-4eae-9ce9-2a14192015d0'] = $pane;
    $display->panels['content'][2] = 'new-3819ca88-6526-4eae-9ce9-2a14192015d0';
    $pane = new stdClass();
    $pane->pid = 'new-18d618f9-3e3f-4c27-af94-90aea6b667cf';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'exposed' => array(
        'uuid' => 'dd6058d8-fb70-451b-bb9c-6b25f499a416',
      ),
      'override_title' => 1,
      'override_title_text' => 'Supporting Level',
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
    $pane->uuid = '18d618f9-3e3f-4c27-af94-90aea6b667cf';
    $display->content['new-18d618f9-3e3f-4c27-af94-90aea6b667cf'] = $pane;
    $display->panels['content'][3] = 'new-18d618f9-3e3f-4c27-af94-90aea6b667cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sponsors'] = $page;

  return $pages;

}
