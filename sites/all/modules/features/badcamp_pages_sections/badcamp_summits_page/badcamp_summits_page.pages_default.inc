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
  $display->layout = 'badcamp2016_default';
  $display->layout_settings = array(
    'suppress_page_title' => 1,
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'links' => NULL,
      'main_' => NULL,
      'bottom_graphic' => NULL,
      'title' => NULL,
      'content' => NULL,
      'sponsors' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b26f24aa-529a-4a09-af4a-4f3af86dbd4e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__event';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4bb6005d-84a3-470a-8a0e-f8d1a13cc9de';
  $pane->panel = 'content';
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
  $display->panels['content'][0] = 'new-4bb6005d-84a3-470a-8a0e-f8d1a13cc9de';
  $pane = new stdClass();
  $pane->pid = 'new-43e35d9d-3f2e-4b8f-beec-90cb3a9ee70b';
  $pane->panel = 'content';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '43e35d9d-3f2e-4b8f-beec-90cb3a9ee70b';
  $display->content['new-43e35d9d-3f2e-4b8f-beec-90cb3a9ee70b'] = $pane;
  $display->panels['content'][1] = 'new-43e35d9d-3f2e-4b8f-beec-90cb3a9ee70b';
  $pane = new stdClass();
  $pane->pid = 'new-c67bdb78-c9a0-462f-993d-4ebf726adfc5';
  $pane->panel = 'content';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c67bdb78-c9a0-462f-993d-4ebf726adfc5';
  $display->content['new-c67bdb78-c9a0-462f-993d-4ebf726adfc5'] = $pane;
  $display->panels['content'][2] = 'new-c67bdb78-c9a0-462f-993d-4ebf726adfc5';
  $pane = new stdClass();
  $pane->pid = 'new-2c7d70b0-a222-4cfb-ac62-07366ec867f7';
  $pane->panel = 'content';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2c7d70b0-a222-4cfb-ac62-07366ec867f7';
  $display->content['new-2c7d70b0-a222-4cfb-ac62-07366ec867f7'] = $pane;
  $display->panels['content'][3] = 'new-2c7d70b0-a222-4cfb-ac62-07366ec867f7';
  $pane = new stdClass();
  $pane->pid = 'new-2f148a75-3c61-49f6-83ff-f1661552e228';
  $pane->panel = 'content';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2f148a75-3c61-49f6-83ff-f1661552e228';
  $display->content['new-2f148a75-3c61-49f6-83ff-f1661552e228'] = $pane;
  $display->panels['content'][4] = 'new-2f148a75-3c61-49f6-83ff-f1661552e228';
  $pane = new stdClass();
  $pane->pid = 'new-92dbde88-f7b7-43f5-b89b-6b29913e1f0a';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_maximum_registration';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => '',
      'prefix_suffix' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Maximum Registrations',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '92dbde88-f7b7-43f5-b89b-6b29913e1f0a';
  $display->content['new-92dbde88-f7b7-43f5-b89b-6b29913e1f0a'] = $pane;
  $display->panels['content'][5] = 'new-92dbde88-f7b7-43f5-b89b-6b29913e1f0a';
  $pane = new stdClass();
  $pane->pid = 'new-c6b5fbcd-cc0e-47ae-b800-a1fd77a07fc8';
  $pane->panel = 'content';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:register_remaining';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'c6b5fbcd-cc0e-47ae-b800-a1fd77a07fc8';
  $display->content['new-c6b5fbcd-cc0e-47ae-b800-a1fd77a07fc8'] = $pane;
  $display->panels['content'][6] = 'new-c6b5fbcd-cc0e-47ae-b800-a1fd77a07fc8';
  $pane = new stdClass();
  $pane->pid = 'new-e01b9bc9-7c65-4bf2-bf59-40322a7f63be';
  $pane->panel = 'content';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:register_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'e01b9bc9-7c65-4bf2-bf59-40322a7f63be';
  $display->content['new-e01b9bc9-7c65-4bf2-bf59-40322a7f63be'] = $pane;
  $display->panels['content'][7] = 'new-e01b9bc9-7c65-4bf2-bf59-40322a7f63be';
  $pane = new stdClass();
  $pane->pid = 'new-8b9875db-1549-4980-98a8-d9ab9353daca';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_event_sponsor';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'teaser',
      'links' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Summit Sponsors',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '8b9875db-1549-4980-98a8-d9ab9353daca';
  $display->content['new-8b9875db-1549-4980-98a8-d9ab9353daca'] = $pane;
  $display->panels['content'][8] = 'new-8b9875db-1549-4980-98a8-d9ab9353daca';
  $pane = new stdClass();
  $pane->pid = 'new-2ee96ce6-008e-4460-ba06-120a4b15f314';
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
  $pane->uuid = '2ee96ce6-008e-4460-ba06-120a4b15f314';
  $display->content['new-2ee96ce6-008e-4460-ba06-120a4b15f314'] = $pane;
  $display->panels['title'][0] = 'new-2ee96ce6-008e-4460-ba06-120a4b15f314';
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
    'suppress_page_title' => 1,
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_summits__panel_context_0147343f-dd6c-4a4a-a8bb-e4a60183982d';
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
