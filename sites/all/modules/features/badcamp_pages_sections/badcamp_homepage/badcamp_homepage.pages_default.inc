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
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 1,
          2 => 'main-row',
          3 => 3,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'second_row_hero_',
          1 => 'second_row_right',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'first_left',
          1 => 'callout',
          2 => 'first_row_third',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'callout' => array(
        'type' => 'region',
        'title' => 'First Row Center',
        'width' => '33.40041236911911',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'what_is_badcamp',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'what_is_badcamp' => array(
        'type' => 'region',
        'title' => 'Callout',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'first_left' => array(
        'type' => 'region',
        'title' => 'First Left',
        'width' => '33.3021225704147',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'first_row_third' => array(
        'type' => 'region',
        'title' => 'First Row Third',
        'width' => '33.29746506046617',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'second_row_hero',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'second_row_hero' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'second_row_hero_' => array(
        'type' => 'region',
        'title' => 'Second Row Hero',
        'width' => '66.69674154273744',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'second_row_right' => array(
        'type' => 'region',
        'title' => 'Second Row Right',
        'width' => '33.303258457262565',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
      'callout' => NULL,
      'what_is_badcamp' => NULL,
      'first_left' => NULL,
      'first_row_third' => NULL,
      'second_row_hero' => NULL,
      'second_row_hero_' => NULL,
      'second_row_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Welcome';
  $display->uuid = 'e62a7e1e-f2cb-4f2d-84f6-0a37edafc10c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a1c20e94-76c9-4cc4-a1a2-fd4ec97f9965';
    $pane->panel = 'callout';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Placeholder First Row Center',
      'title' => 'Placeholder First Row Center',
      'body' => '<p>Probably an image.</p>
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
    $pane->uuid = 'a1c20e94-76c9-4cc4-a1a2-fd4ec97f9965';
    $display->content['new-a1c20e94-76c9-4cc4-a1a2-fd4ec97f9965'] = $pane;
    $display->panels['callout'][0] = 'new-a1c20e94-76c9-4cc4-a1a2-fd4ec97f9965';
    $pane = new stdClass();
    $pane->pid = 'new-825c2953-5bc6-411c-b31f-8eb06d72f29c';
    $pane->panel = 'first_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Fact or Statement about BADCamp',
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
    $pane->uuid = '825c2953-5bc6-411c-b31f-8eb06d72f29c';
    $display->content['new-825c2953-5bc6-411c-b31f-8eb06d72f29c'] = $pane;
    $display->panels['first_left'][0] = 'new-825c2953-5bc6-411c-b31f-8eb06d72f29c';
    $pane = new stdClass();
    $pane->pid = 'new-b63d591c-d698-4171-8aae-46efe075fcae';
    $pane->panel = 'first_row_third';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Placeholder First Row Right',
      'title' => 'Placeholder First Row Right',
      'body' => '<p>Also probably an image.</p>
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
    $pane->uuid = 'b63d591c-d698-4171-8aae-46efe075fcae';
    $display->content['new-b63d591c-d698-4171-8aae-46efe075fcae'] = $pane;
    $display->panels['first_row_third'][0] = 'new-b63d591c-d698-4171-8aae-46efe075fcae';
    $pane = new stdClass();
    $pane->pid = 'new-8229d6aa-3cab-45af-a135-3e8e7417377e';
    $pane->panel = 'second_row_hero';
    $pane->type = 'views_panes';
    $pane->subtype = 'badcamp_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8229d6aa-3cab-45af-a135-3e8e7417377e';
    $display->content['new-8229d6aa-3cab-45af-a135-3e8e7417377e'] = $pane;
    $display->panels['second_row_hero'][0] = 'new-8229d6aa-3cab-45af-a135-3e8e7417377e';
    $pane = new stdClass();
    $pane->pid = 'new-e5d5f747-809c-49e4-a3d7-49ca29c5369e';
    $pane->panel = 'second_row_hero';
    $pane->type = 'views';
    $pane->subtype = 'sponsors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '30',
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
    $pane->uuid = 'e5d5f747-809c-49e4-a3d7-49ca29c5369e';
    $display->content['new-e5d5f747-809c-49e4-a3d7-49ca29c5369e'] = $pane;
    $display->panels['second_row_hero'][1] = 'new-e5d5f747-809c-49e4-a3d7-49ca29c5369e';
    $pane = new stdClass();
    $pane->pid = 'new-7d5e9655-ef79-47d2-a66f-6870c77996ac';
    $pane->panel = 'second_row_hero_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Big Hero Image',
      'title' => 'Big Hero Image',
      'body' => '<p>This is a big image.</p>
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
    $pane->uuid = '7d5e9655-ef79-47d2-a66f-6870c77996ac';
    $display->content['new-7d5e9655-ef79-47d2-a66f-6870c77996ac'] = $pane;
    $display->panels['second_row_hero_'][0] = 'new-7d5e9655-ef79-47d2-a66f-6870c77996ac';
    $pane = new stdClass();
    $pane->pid = 'new-187dfc11-bd96-4c0d-8c38-897c52806477';
    $pane->panel = 'second_row_hero_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Attendee testimonial/quote',
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
    $pane->uuid = '187dfc11-bd96-4c0d-8c38-897c52806477';
    $display->content['new-187dfc11-bd96-4c0d-8c38-897c52806477'] = $pane;
    $display->panels['second_row_hero_'][1] = 'new-187dfc11-bd96-4c0d-8c38-897c52806477';
    $pane = new stdClass();
    $pane->pid = 'new-33000f31-d199-4036-b929-f8f5853b3232';
    $pane->panel = 'second_row_right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Fact or Statement about BADCamp',
      'body' => '<p>Did you know?</p>
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
    $pane->uuid = '33000f31-d199-4036-b929-f8f5853b3232';
    $display->content['new-33000f31-d199-4036-b929-f8f5853b3232'] = $pane;
    $display->panels['second_row_right'][0] = 'new-33000f31-d199-4036-b929-f8f5853b3232';
    $pane = new stdClass();
    $pane->pid = 'new-a678dd11-a34e-4d9b-94b8-a466306245c2';
    $pane->panel = 'second_row_right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Placeholder Second Row Bottom Right',
      'title' => 'Placeholder Second Row Bottom Right',
      'body' => '<p>Image.</p>
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
    $pane->uuid = 'a678dd11-a34e-4d9b-94b8-a466306245c2';
    $display->content['new-a678dd11-a34e-4d9b-94b8-a466306245c2'] = $pane;
    $display->panels['second_row_right'][1] = 'new-a678dd11-a34e-4d9b-94b8-a466306245c2';
    $pane = new stdClass();
    $pane->pid = 'new-8ee2d834-99f2-446d-9108-52703411c8f3';
    $pane->panel = 'what_is_badcamp';
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
    $display->panels['what_is_badcamp'][0] = 'new-8ee2d834-99f2-446d-9108-52703411c8f3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
