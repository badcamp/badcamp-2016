<?php
/**
 * @file
 * badcamp_sessions_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function badcamp_sessions_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_cb42f235-97ab-42af-abee-893edf635845';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Tracks',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'tracks' => 'tracks',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_default';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'title' => NULL,
      'content' => NULL,
      'sponsors' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '11cfa47d-90ac-412c-8a4f-69e0278f730a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c978563a-161b-4dd0-8a4d-56b0496a6229';
    $pane->panel = 'content';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
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
    $pane->uuid = 'c978563a-161b-4dd0-8a4d-56b0496a6229';
    $display->content['new-c978563a-161b-4dd0-8a4d-56b0496a6229'] = $pane;
    $display->panels['content'][0] = 'new-c978563a-161b-4dd0-8a4d-56b0496a6229';
    $pane = new stdClass();
    $pane->pid = 'new-3131ca06-83fc-4f1f-b790-ce286cc8c043';
    $pane->panel = 'title';
    $pane->type = 'term_name';
    $pane->subtype = 'term_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'argument_term_1',
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
    $pane->uuid = '3131ca06-83fc-4f1f-b790-ce286cc8c043';
    $display->content['new-3131ca06-83fc-4f1f-b790-ce286cc8c043'] = $pane;
    $display->panels['title'][0] = 'new-3131ca06-83fc-4f1f-b790-ce286cc8c043';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c978563a-161b-4dd0-8a4d-56b0496a6229';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_cb42f235-97ab-42af-abee-893edf635845'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_sessions_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'propose_session';
  $page->task = 'page';
  $page->admin_title = 'Propose Session';
  $page->admin_description = '';
  $page->path = 'sessions/propose';
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
  $handler->name = 'page_propose_session__panel_context_13f4c8e4-a96a-46f1-a930-6cedeb12aa05';
  $handler->task = 'page';
  $handler->subtask = 'propose_session';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-propose-session',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Node add form',
        'keyword' => 'node_add',
        'name' => 'node_add_form',
        'type' => 'session',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_simple2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'column_left' => NULL,
      'column_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6309a771-93f0-44ec-974b-2b96c18a193b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-540b4687-e7fc-4a81-9d22-21163e547a8f';
    $pane->panel = 'column_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Session Proposal Info Pane',
      'title' => 'Submit a session',
      'body' => '<p>Here are some tips about how to maximise the potential for your session acceptance.</p>

<ul>
	<li><strong>Tell a Story</strong>

	<ul>
		<li>A high quality speaking proposal isn’t just about what information you are going to share, it’s about how you plan to share it. Telling a story can make a conference proposal very powerful as it changes the perspective from “I’m an expert telling you how to do your job” to “I’ve been where you are and have felt your pain. Let me share what I learned.”</li>
	</ul>
	</li>
	<li><strong>Share the Takeaways You Will Be Presenting</strong>
	<ul>
		<li>Often, talks answer questions that start with “how”, “why”, “when” and so on. Make sure that you demonstrate what your audience will walk away having learned.</li>
	</ul>
	</li>
	<li><strong>Proofread your Proposal</strong>
	<ul>
		<li>This may sound like an easy and silly thing to call out, but it is in fact a very important step that many don\'t pay too much attention to. Double-check your spelling, your links, your grammar - you\'re presenting yourself with these words, so make sure you put your best foot forward.</li>
	</ul>
	</li>
</ul>
',
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
    $pane->uuid = '540b4687-e7fc-4a81-9d22-21163e547a8f';
    $display->content['new-540b4687-e7fc-4a81-9d22-21163e547a8f'] = $pane;
    $display->panels['column_left'][0] = 'new-540b4687-e7fc-4a81-9d22-21163e547a8f';
    $pane = new stdClass();
    $pane->pid = 'new-632abf06-6ee5-4955-8179-72510271ac49';
    $pane->panel = 'column_left';
    $pane->type = 'views';
    $pane->subtype = 'tracks';
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
    $pane->uuid = '632abf06-6ee5-4955-8179-72510271ac49';
    $display->content['new-632abf06-6ee5-4955-8179-72510271ac49'] = $pane;
    $display->panels['column_left'][1] = 'new-632abf06-6ee5-4955-8179-72510271ac49';
    $pane = new stdClass();
    $pane->pid = 'new-20107545-c7ee-40b2-83c0-7fb4f48afcbc';
    $pane->panel = 'column_right';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_node_add_form_1',
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
    $pane->uuid = '20107545-c7ee-40b2-83c0-7fb4f48afcbc';
    $display->content['new-20107545-c7ee-40b2-83c0-7fb4f48afcbc'] = $pane;
    $display->panels['column_right'][0] = 'new-20107545-c7ee-40b2-83c0-7fb4f48afcbc';
    $pane = new stdClass();
    $pane->pid = 'new-7b20ba5d-87d9-4c52-a6d4-a27f76e33af0';
    $pane->panel = 'column_right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_session_speaker';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'context_node_add_form_1',
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
    $pane->uuid = '7b20ba5d-87d9-4c52-a6d4-a27f76e33af0';
    $display->content['new-7b20ba5d-87d9-4c52-a6d4-a27f76e33af0'] = $pane;
    $display->panels['column_right'][1] = 'new-7b20ba5d-87d9-4c52-a6d4-a27f76e33af0';
    $pane = new stdClass();
    $pane->pid = 'new-e33b2432-033f-4752-b25d-b6ef9d7e6f7c';
    $pane->panel = 'column_right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_session_track';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'context_node_add_form_1',
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
    $pane->uuid = 'e33b2432-033f-4752-b25d-b6ef9d7e6f7c';
    $display->content['new-e33b2432-033f-4752-b25d-b6ef9d7e6f7c'] = $pane;
    $display->panels['column_right'][2] = 'new-e33b2432-033f-4752-b25d-b6ef9d7e6f7c';
    $pane = new stdClass();
    $pane->pid = 'new-b55abfa9-465a-4892-85d4-f17500e3e737';
    $pane->panel = 'column_right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_session_skill_level';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'context_node_add_form_1',
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
    $pane->uuid = 'b55abfa9-465a-4892-85d4-f17500e3e737';
    $display->content['new-b55abfa9-465a-4892-85d4-f17500e3e737'] = $pane;
    $display->panels['column_right'][3] = 'new-b55abfa9-465a-4892-85d4-f17500e3e737';
    $pane = new stdClass();
    $pane->pid = 'new-65a2506a-0976-4b9f-bb6f-0d82e0a8cb58';
    $pane->panel = 'column_right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'context_node_add_form_1',
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
    $pane->uuid = '65a2506a-0976-4b9f-bb6f-0d82e0a8cb58';
    $display->content['new-65a2506a-0976-4b9f-bb6f-0d82e0a8cb58'] = $pane;
    $display->panels['column_right'][4] = 'new-65a2506a-0976-4b9f-bb6f-0d82e0a8cb58';
    $pane = new stdClass();
    $pane->pid = 'new-cca4c59d-b825-420c-937d-cc7c28c17771';
    $pane->panel = 'column_right';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_node_add_form_1',
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
    $pane->uuid = 'cca4c59d-b825-420c-937d-cc7c28c17771';
    $display->content['new-cca4c59d-b825-420c-937d-cc7c28c17771'] = $pane;
    $display->panels['column_right'][5] = 'new-cca4c59d-b825-420c-937d-cc7c28c17771';
    $pane = new stdClass();
    $pane->pid = 'new-5b8c5563-cd8d-4248-b2bd-2748ca770128';
    $pane->panel = 'column_right';
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
      'admin_title' => 'NLIV Call to Action',
      'title' => '',
      'body' => '<p><a class="button" href="user/login?destination=sessions/propose">Login to proceed »</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '5b8c5563-cd8d-4248-b2bd-2748ca770128';
    $display->content['new-5b8c5563-cd8d-4248-b2bd-2748ca770128'] = $pane;
    $display->panels['column_right'][6] = 'new-5b8c5563-cd8d-4248-b2bd-2748ca770128';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-20107545-c7ee-40b2-83c0-7fb4f48afcbc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['propose_session'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sessions';
  $page->task = 'page';
  $page->admin_title = 'Sessions';
  $page->admin_description = '';
  $page->path = 'sessions';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Sessions',
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
  $handler->name = 'page_sessions__panel_context_6d277625-4609-4549-a81c-7ea674e743b4';
  $handler->task = 'page';
  $handler->subtask = 'sessions';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'sessions',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'BADCamp Sessions | [site:name]',
        ),
      ),
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
  $display->title = 'BADCamp Proposed Sessions';
  $display->uuid = '7d79d4b8-f6bc-4b94-892c-11230fa45901';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-10003192-39c7-40c7-bb18-6ca0db75414d';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'badcamp_sessions-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '10003192-39c7-40c7-bb18-6ca0db75414d';
    $display->content['new-10003192-39c7-40c7-bb18-6ca0db75414d'] = $pane;
    $display->panels['content'][0] = 'new-10003192-39c7-40c7-bb18-6ca0db75414d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sessions'] = $page;

  return $pages;

}
