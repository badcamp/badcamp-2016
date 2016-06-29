<?php
/**
 * @file
 * badcamp_code_of_conduct_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_code_of_conduct_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'code_of_conduct';
  $page->task = 'page';
  $page->admin_title = 'Code of Conduct';
  $page->admin_description = '';
  $page->path = 'code-of-conduct';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Code of Conduct',
    'name' => 'main-menu',
    'weight' => '100',
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
  $handler->name = 'page_code_of_conduct__panel_context_f15b145d-0322-4424-811e-ca7ed4124024';
  $handler->task = 'page';
  $handler->subtask = 'code_of_conduct';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Code of Conduct',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = 'BADCamp Code of Conduct';
  $display->uuid = '471b4e01-c022-4920-9657-96394984e0de';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3d922bf6-d0c0-4878-907a-af3f032ddc65';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'BADCamp Code of Conduct',
      'body' => '<p>All attendees, speakers, sponsors and volunteers at our conference are required to agree with the following code of conduct. Organizers will enforce this code throughout the event. We expect cooperation from all participants to help ensuring a safe and welcoming environment for everybody.</p>

<p>tl;dr: Be excellent with each other</p>

<p>Need Help?</p>

<p>You have our contact details in the emails we\'ve sent.</p>

<h2>The Quick Version</h2>

<p>BADCamp is dedicated to providing a harassment-free conference experience for everyone, regardless of gender, gender identity and expression, age, sexual orientation, disability, physical appearance, body size, race, or religion (or lack thereof). We do not tolerate harassment of conference participants in any form. Sexual language and imagery is not appropriate for any conference venue, including talks, workshops, parties, Twitter and other online media. Conference participants violating these rules may be sanctioned or expelled from the conference at the discretion of the conference organisers.</p>

<h2>The Less Quick Version</h2>

<p>Harassment includes offensive verbal comments related to gender, gender identity and expression, age, sexual orientation, disability, physical appearance, body size, race, religion, sexual images in public spaces, deliberate intimidation, stalking, following, harassing photography or recording, sustained disruption of talks or other events, inappropriate physical contact, and unwelcome sexual attention.</p>

<p>Participants asked to stop any harassing behavior are expected to comply immediately.</p>

<p>Sponsors are also subject to the anti-harassment policy. In particular, sponsors should not use sexualized images, activities, or other material. Booth staff (including volunteers) should not use sexualized clothing/uniforms/costumes, or otherwise create a sexualized environment.</p>

<p>If a participant engages in harassing behavior, the conference organizers may take any action they deem appropriate, including warning the offender or expulsion from the conference with no refund.</p>

<p>If you are being harassed, notice that someone else is being harassed, or have any other concerns, please contact a member of conference organizing team immediately. Conference team members can be identified as they\'ll be wearing branded t-shirts with highly visible identifying marks.</p>

<p>Conference team members will be happy to help participants contact hotel/venue security or local law enforcement, provide escorts, or otherwise assist those experiencing harassment to feel safe for the duration of the conference. We value your attendance.</p>

<p>We expect participants to follow these rules at conference and workshop venues and conference-related social events.</p>

<p><em>This document is based on <a href="http://confcodeofconduct.com">http://confcodeofconduct.com</a> under a <a href="http://creativecommons.org/licenses/by/3.0/deed.en_US">Creative Commons 3.0 Unported License</a>. See it at&nbsp;<a href="https://github.com/badcamp/codeofconduct">https://github.com/badcamp/codeofconduct</a></em></p>
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
    $pane->uuid = '3d922bf6-d0c0-4878-907a-af3f032ddc65';
    $display->content['new-3d922bf6-d0c0-4878-907a-af3f032ddc65'] = $pane;
    $display->panels['content'][0] = 'new-3d922bf6-d0c0-4878-907a-af3f032ddc65';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['code_of_conduct'] = $page;

  return $pages;

}
