<?php
/**
 * @file
 * badcamp_summits_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function badcamp_summits_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__event';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Summit',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Sponsor 1',
        'keyword' => 'sponsor_1',
        'name' => 'entity_from_field:field_event_sponsor-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Sponsor 2',
        'keyword' => 'sponsor_2',
        'name' => 'entity_from_field:field_event_sponsor-node-node',
        'delta' => '1',
        'context' => 'argument_entity_id:node_1',
        'id' => 2,
      ),
      2 => array(
        'identifier' => 'Sponsor 3',
        'keyword' => 'sponsor_3',
        'name' => 'entity_from_field:field_event_sponsor-node-node',
        'delta' => '2',
        'context' => 'argument_entity_id:node_1',
        'id' => 3,
      ),
    ),
    'name' => 'event',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:event:field_event_type',
          'settings' => array(
            'field_event_type' => array(
              'und' => array(
                0 => array(
                  'tid' => '12',
                ),
              ),
            ),
            'field_event_type_tid' => array(
              0 => '12',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
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
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'links',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Overview',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'links' => array(
        'type' => 'region',
        'title' => 'Links',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_graphic',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'bottom_graphic' => array(
        'type' => 'region',
        'title' => 'Bottom Graphic',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'bottom-graphic',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'links' => NULL,
      'main_' => NULL,
      'bottom_graphic' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b26f24aa-529a-4a09-af4a-4f3af86dbd4e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4bb6005d-84a3-470a-8a0e-f8d1a13cc9de';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'NLIV call-to-action',
      'title' => '',
      'body' => '<p>You are not logged in!</p>
<p><span class="flag-wrapper flag-my-schedule"><a class="flag flag-action flag-link-toggle button buttercup" href="/user/register" rel="nofollow" title="Add this Event to my schedule">REGISTER FOR BADCAMP</a><span class="flag-throbber">&nbsp;</span> </span></p>

<p>After registering, return to this page to sign up for the summit.</p>

<hr />',
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
    $pane->uuid = '4bb6005d-84a3-470a-8a0e-f8d1a13cc9de';
    $display->content['new-4bb6005d-84a3-470a-8a0e-f8d1a13cc9de'] = $pane;
    $display->panels['center'][0] = 'new-4bb6005d-84a3-470a-8a0e-f8d1a13cc9de';
    $pane = new stdClass();
    $pane->pid = 'new-4b3c9694-4d1f-4d4f-b575-7fd721a5d83e';
    $pane->panel = 'center';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'my_schedule',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4b3c9694-4d1f-4d4f-b575-7fd721a5d83e';
    $display->content['new-4b3c9694-4d1f-4d4f-b575-7fd721a5d83e'] = $pane;
    $display->panels['center'][1] = 'new-4b3c9694-4d1f-4d4f-b575-7fd721a5d83e';
    $pane = new stdClass();
    $pane->pid = 'new-43e35d9d-3f2e-4b8f-beec-90cb3a9ee70b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43e35d9d-3f2e-4b8f-beec-90cb3a9ee70b';
    $display->content['new-43e35d9d-3f2e-4b8f-beec-90cb3a9ee70b'] = $pane;
    $display->panels['center'][2] = 'new-43e35d9d-3f2e-4b8f-beec-90cb3a9ee70b';
    $pane = new stdClass();
    $pane->pid = 'new-02428047-e053-4b60-b4cd-04af283ac3bd';
    $pane->panel = 'links';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_view-panel_pane_3';
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
    $pane->uuid = '02428047-e053-4b60-b4cd-04af283ac3bd';
    $display->content['new-02428047-e053-4b60-b4cd-04af283ac3bd'] = $pane;
    $display->panels['links'][0] = 'new-02428047-e053-4b60-b4cd-04af283ac3bd';
    $pane = new stdClass();
    $pane->pid = 'new-c67bdb78-c9a0-462f-993d-4ebf726adfc5';
    $pane->panel = 'main_';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_date_and_time';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
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
    $pane->uuid = 'c67bdb78-c9a0-462f-993d-4ebf726adfc5';
    $display->content['new-c67bdb78-c9a0-462f-993d-4ebf726adfc5'] = $pane;
    $display->panels['main_'][0] = 'new-c67bdb78-c9a0-462f-993d-4ebf726adfc5';
    $pane = new stdClass();
    $pane->pid = 'new-2c7d70b0-a222-4cfb-ac62-07366ec867f7';
    $pane->panel = 'main_';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
      ),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2c7d70b0-a222-4cfb-ac62-07366ec867f7';
    $display->content['new-2c7d70b0-a222-4cfb-ac62-07366ec867f7'] = $pane;
    $display->panels['main_'][1] = 'new-2c7d70b0-a222-4cfb-ac62-07366ec867f7';
    $pane = new stdClass();
    $pane->pid = 'new-2f148a75-3c61-49f6-83ff-f1661552e228';
    $pane->panel = 'main_';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_agenda';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2f148a75-3c61-49f6-83ff-f1661552e228';
    $display->content['new-2f148a75-3c61-49f6-83ff-f1661552e228'] = $pane;
    $display->panels['main_'][2] = 'new-2f148a75-3c61-49f6-83ff-f1661552e228';
    $pane = new stdClass();
    $pane->pid = 'new-9b81d044-b78b-4513-a53c-ea14abfb8e6b';
    $pane->panel = 'main_';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sponsor_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'medium',
        'image_link' => 'content',
      ),
      'context' => 'relationship_entity_from_field:field_event_sponsor-node-node_1',
      'override_title' => 1,
      'override_title_text' => 'Summit Sponsors',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9b81d044-b78b-4513-a53c-ea14abfb8e6b';
    $display->content['new-9b81d044-b78b-4513-a53c-ea14abfb8e6b'] = $pane;
    $display->panels['main_'][3] = 'new-9b81d044-b78b-4513-a53c-ea14abfb8e6b';
    $pane = new stdClass();
    $pane->pid = 'new-eda8d884-2795-423a-bd3b-c0f3b60334d3';
    $pane->panel = 'main_';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sponsor_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'medium',
        'image_link' => 'content',
      ),
      'context' => 'relationship_entity_from_field:field_event_sponsor-node-node_2',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'eda8d884-2795-423a-bd3b-c0f3b60334d3';
    $display->content['new-eda8d884-2795-423a-bd3b-c0f3b60334d3'] = $pane;
    $display->panels['main_'][4] = 'new-eda8d884-2795-423a-bd3b-c0f3b60334d3';
    $pane = new stdClass();
    $pane->pid = 'new-319081b3-a42f-4df3-bd33-b28b5e71d645';
    $pane->panel = 'main_';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sponsor_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'medium',
        'image_link' => 'content',
      ),
      'context' => 'relationship_entity_from_field:field_event_sponsor-node-node_3',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '319081b3-a42f-4df3-bd33-b28b5e71d645';
    $display->content['new-319081b3-a42f-4df3-bd33-b28b5e71d645'] = $pane;
    $display->panels['main_'][5] = 'new-319081b3-a42f-4df3-bd33-b28b5e71d645';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__event'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_summits_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'summits';
  $page->task = 'page';
  $page->admin_title = 'Summits';
  $page->admin_description = '';
  $page->path = 'summits';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Summits',
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
  $handler->name = 'page_summits__panel_context_0147343f-dd6c-4a4a-a8bb-e4a60183982d';
  $handler->task = 'page';
  $handler->subtask = 'summits';
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
      'metatags' => array(
        'title' => array(
          'value' => 'BADCamp Summits | [site:name]',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_hero1col';
  $display->layout_settings = array(
    'background' => '%theme/images/Hero/Summits-Hero.png',
    'opaque' => 1,
    'height' => 552,
    'width' => 1440,
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
      'content' => NULL,
      'hero' => NULL,
    ),
    'hero' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'BADCamp Summits';
  $display->uuid = 'e62a7e1e-f2cb-4f2d-84f6-0a37edafc10c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-978c5496-66a9-4f8d-b1f8-fa47747aeafa';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_view-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'small' => '',
        'medium' => '8',
        'large' => '',
        'small-push' => '',
        'medium-push' => '2',
        'large-push' => '',
        'row' => 0,
      ),
      'style' => 'grid',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '978c5496-66a9-4f8d-b1f8-fa47747aeafa';
    $display->content['new-978c5496-66a9-4f8d-b1f8-fa47747aeafa'] = $pane;
    $display->panels['content'][0] = 'new-978c5496-66a9-4f8d-b1f8-fa47747aeafa';
    $pane = new stdClass();
    $pane->pid = 'new-e0d133b8-5a76-4498-9628-bf7fb4dcd956';
    $pane->panel = 'hero';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Summits Intro',
      'title' => 'Summits',
      'body' => '<p>Summits allow people in specific industries or with specific skills to dive deep into the issues that matter and collaborate freely. Registration is first come, first served and part of the BADCamp registration process, so sign up today!</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e0d133b8-5a76-4498-9628-bf7fb4dcd956';
    $display->content['new-e0d133b8-5a76-4498-9628-bf7fb4dcd956'] = $pane;
    $display->panels['hero'][0] = 'new-e0d133b8-5a76-4498-9628-bf7fb4dcd956';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['summits'] = $page;

  return $pages;

}
