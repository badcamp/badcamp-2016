<?php
/**
 * @file
 * badcamp_sessions_page.pages_default.inc
 */

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
  $page->path = 'propose-session';
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
    'body_classes_to_add' => '',
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
      'body' => '<p>Post-ironic gluten-free plaid flexitarian. Pork belly jean shorts synth DIY art party, flannel artisan sustainable messenger bag gentrify pickled keffiyeh irony trust fund freegan. Deep v ramps chillwave, ennui post-ironic sriracha health goth normcore kombucha jean shorts locavore. Narwhal ramps tofu banh mi quinoa scenester. Bushwick migas salvia chillwave affogato try-hard poutine. Biodiesel 3 wolf moon tote bag bespoke, bitters typewriter brooklyn mixtape pop-up microdosing twee hella lomo. Try-hard kitsch humblebrag hella flexitarian, raw denim celiac godard single-origin coffee mumblecore heirloom 8-bit fixie.</p>

<p>Ugh tumblr franzen, fanny pack you probably haven\'t heard of them forage small batch pour-over heirloom knausgaard readymade. Street art 90\'s banjo four loko bitters twee flannel, distillery tilde venmo lomo. Hammock venmo pinterest, dreamcatcher forage meh polaroid sustainable organic bitters waistcoat bushwick art party butcher. Craft beer aesthetic next level, health goth echo park mustache raw denim ennui dreamcatcher truffaut brunch banjo. You probably haven\'t heard of them chartreuse seitan lo-fi austin. Chartreuse slow-carb plaid, chicharrones heirloom echo park bitters. You probably haven\'t heard of them tattooed yuccie, brunch pitchfork pabst seitan asymmetrical.</p>
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
    ),
  );
  $display->cache = array();
  $display->title = 'BADCamp Sessions';
  $display->uuid = '7d79d4b8-f6bc-4b94-892c-11230fa45901';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-89ecd5c8-75cf-4310-9b2f-a5b00ddf8673';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'badcamp_sessions-panel_pane_3';
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
    $pane->uuid = '89ecd5c8-75cf-4310-9b2f-a5b00ddf8673';
    $display->content['new-89ecd5c8-75cf-4310-9b2f-a5b00ddf8673'] = $pane;
    $display->panels['content'][0] = 'new-89ecd5c8-75cf-4310-9b2f-a5b00ddf8673';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sessions'] = $page;

  return $pages;

}
