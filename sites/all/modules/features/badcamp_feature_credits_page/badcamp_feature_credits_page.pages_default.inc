<?php
/**
 * @file
 * badcamp_feature_credits_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_feature_credits_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'credits';
  $page->task = 'page';
  $page->admin_title = 'Credits';
  $page->admin_description = '';
  $page->path = 'credits';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_credits__panel';
  $handler->task = 'page';
  $handler->subtask = 'credits';
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
  $display->title = '';
  $display->uuid = '42a357c1-f90f-4c11-a1c4-fff4bb0cdba9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a16061a9-2ca6-41e5-b9cb-42bd1fd3f3e2';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Credits',
      'body' => '<p>BADCamp is 100% volunteer organized. The following people are part of the core organzing team and donate their time and love to make this event happen.</p>

<ul>
	<li><a href="http://champsee.com">Manish Champsee</a></li>
	<li><a href="https://www.getpantheon.com/about/team/matt-cheney" target="_blank">Matt Cheney</a></li>
	<li><a href="http://www.hook42.com/team/aimee-degnan" target="_blank">Aimee Degnan</a></li>
	<li><a href="http://www.clikburn.com/portfolio/" target="_blank">Darius Garza</a></li>
	<li><a href="https://twitter.com/eatings" target="_blank">David Hwang</a></li>
	<li><a href="http://profiles.ucsf.edu/john.kealy">John Kealey</a></li>
	<li><a href="http://www.jeneration.com/" target="_blank">Jen Lampton </a></li>
	<li><a href="http://www.kalamuna.com/about" target="_blank">Andrew Mallis</a></li>
	<li><a href="https://www.linkedin.com/in/jonpeck" target="_blank">Jon Peck</a></li>
	<li><a href="https://twitter.com/hrodrig">Heather Rodriguez</a></li>
	<li><a href="http://www.kanopistudios.com/why-us/anne-stefanyk" target="_blank">Anne Stefanyk</a></li>
</ul>

<p>​<span style="line-height: 1.6;">BADCamp theme implementation&nbsp;by </span><a href="https://lastcallmedia.com/" style="line-height: 1.6;">Last Call Media</a><span style="line-height: 1.6;">.</span></p>
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
    $pane->uuid = 'a16061a9-2ca6-41e5-b9cb-42bd1fd3f3e2';
    $display->content['new-a16061a9-2ca6-41e5-b9cb-42bd1fd3f3e2'] = $pane;
    $display->panels['content'][0] = 'new-a16061a9-2ca6-41e5-b9cb-42bd1fd3f3e2';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-a16061a9-2ca6-41e5-b9cb-42bd1fd3f3e2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['credits'] = $page;

  return $pages;

}
