<?php
/**
 * @file
 * badcamp_registration_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function badcamp_registration_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_edit__panel_context_6f7b0fdb-1f5c-44ed-b06a-938b66cd639d';
  $handler->task = 'user_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Edit Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_profile2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'image' => NULL,
      'name1' => NULL,
      'name2' => NULL,
      'bio' => NULL,
      'social_medial_1' => NULL,
      'social_medial_2' => NULL,
      'interests' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '385ec5a5-55c6-49d4-a10a-c9d2547dfbf6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e45bd29f-fb58-42dd-8a90-6ddf03a4a6cf';
    $pane->panel = 'bio';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_bio';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = 'e45bd29f-fb58-42dd-8a90-6ddf03a4a6cf';
    $display->content['new-e45bd29f-fb58-42dd-8a90-6ddf03a4a6cf'] = $pane;
    $display->panels['bio'][0] = 'new-e45bd29f-fb58-42dd-8a90-6ddf03a4a6cf';
    $pane = new stdClass();
    $pane->pid = 'new-8aa2465c-019f-4560-9d0e-4fea52088a14';
    $pane->panel = 'image';
    $pane->type = 'user_picture_edit';
    $pane->subtype = 'user_picture_edit';
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
    $pane->uuid = '8aa2465c-019f-4560-9d0e-4fea52088a14';
    $display->content['new-8aa2465c-019f-4560-9d0e-4fea52088a14'] = $pane;
    $display->panels['image'][0] = 'new-8aa2465c-019f-4560-9d0e-4fea52088a14';
    $pane = new stdClass();
    $pane->pid = 'new-8231b791-ecaf-4867-be5d-ce58e377b99e';
    $pane->panel = 'interests';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_interests';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = '8231b791-ecaf-4867-be5d-ce58e377b99e';
    $display->content['new-8231b791-ecaf-4867-be5d-ce58e377b99e'] = $pane;
    $display->panels['interests'][0] = 'new-8231b791-ecaf-4867-be5d-ce58e377b99e';
    $pane = new stdClass();
    $pane->pid = 'new-deaec71c-b599-47dc-9a4a-eff278664074';
    $pane->panel = 'main';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = 'deaec71c-b599-47dc-9a4a-eff278664074';
    $display->content['new-deaec71c-b599-47dc-9a4a-eff278664074'] = $pane;
    $display->panels['main'][0] = 'new-deaec71c-b599-47dc-9a4a-eff278664074';
    $pane = new stdClass();
    $pane->pid = 'new-c3356a24-dfa1-4b92-b2e4-fcd6982bccbb';
    $pane->panel = 'name1';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_first_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = 'c3356a24-dfa1-4b92-b2e4-fcd6982bccbb';
    $display->content['new-c3356a24-dfa1-4b92-b2e4-fcd6982bccbb'] = $pane;
    $display->panels['name1'][0] = 'new-c3356a24-dfa1-4b92-b2e4-fcd6982bccbb';
    $pane = new stdClass();
    $pane->pid = 'new-efce586c-6475-4361-ad9d-09b4d0924d89';
    $pane->panel = 'name1';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_title_role';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = 'efce586c-6475-4361-ad9d-09b4d0924d89';
    $display->content['new-efce586c-6475-4361-ad9d-09b4d0924d89'] = $pane;
    $display->panels['name1'][1] = 'new-efce586c-6475-4361-ad9d-09b4d0924d89';
    $pane = new stdClass();
    $pane->pid = 'new-3ddf4d49-ea72-46b9-8b4a-b9c810e7e5b3';
    $pane->panel = 'name2';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_last_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = '3ddf4d49-ea72-46b9-8b4a-b9c810e7e5b3';
    $display->content['new-3ddf4d49-ea72-46b9-8b4a-b9c810e7e5b3'] = $pane;
    $display->panels['name2'][0] = 'new-3ddf4d49-ea72-46b9-8b4a-b9c810e7e5b3';
    $pane = new stdClass();
    $pane->pid = 'new-a7a08253-dc72-4372-84a0-cbfa5ce75623';
    $pane->panel = 'name2';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_organization';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = 'a7a08253-dc72-4372-84a0-cbfa5ce75623';
    $display->content['new-a7a08253-dc72-4372-84a0-cbfa5ce75623'] = $pane;
    $display->panels['name2'][1] = 'new-a7a08253-dc72-4372-84a0-cbfa5ce75623';
    $pane = new stdClass();
    $pane->pid = 'new-0cc75387-bd45-426b-a888-26e4f94ad155';
    $pane->panel = 'social_medial_1';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_drupalorg_username';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = '0cc75387-bd45-426b-a888-26e4f94ad155';
    $display->content['new-0cc75387-bd45-426b-a888-26e4f94ad155'] = $pane;
    $display->panels['social_medial_1'][0] = 'new-0cc75387-bd45-426b-a888-26e4f94ad155';
    $pane = new stdClass();
    $pane->pid = 'new-1c4d1f11-d8af-4fec-a618-8e491836517c';
    $pane->panel = 'social_medial_1';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_facebook_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = '1c4d1f11-d8af-4fec-a618-8e491836517c';
    $display->content['new-1c4d1f11-d8af-4fec-a618-8e491836517c'] = $pane;
    $display->panels['social_medial_1'][1] = 'new-1c4d1f11-d8af-4fec-a618-8e491836517c';
    $pane = new stdClass();
    $pane->pid = 'new-a5798f12-921d-48a3-b6f6-dc203ef543a6';
    $pane->panel = 'social_medial_2';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_twitter_handle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = 'a5798f12-921d-48a3-b6f6-dc203ef543a6';
    $display->content['new-a5798f12-921d-48a3-b6f6-dc203ef543a6'] = $pane;
    $display->panels['social_medial_2'][0] = 'new-a5798f12-921d-48a3-b6f6-dc203ef543a6';
    $pane = new stdClass();
    $pane->pid = 'new-a5313cbb-91d5-450e-a71d-885721bc8582';
    $pane->panel = 'social_medial_2';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_flickr_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = 'a5313cbb-91d5-450e-a71d-885721bc8582';
    $display->content['new-a5313cbb-91d5-450e-a71d-885721bc8582'] = $pane;
    $display->panels['social_medial_2'][1] = 'new-a5313cbb-91d5-450e-a71d-885721bc8582';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8aa2465c-019f-4560-9d0e-4fea52088a14';
  $handler->conf['display'] = $display;
  $export['user_edit__panel_context_6f7b0fdb-1f5c-44ed-b06a-938b66cd639d'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_registration_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'badcamp_registration';
  $page->task = 'page';
  $page->admin_title = 'Registration Step 1';
  $page->admin_description = 'Register for camp!';
  $page->path = 'registration';
  $page->access = array(
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
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Register',
    'name' => 'user-menu',
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
  $handler->name = 'page_badcamp_registration__panel_context_20a7095a-37f4-44bc-b03b-588504eb45bd';
  $handler->task = 'page';
  $handler->subtask = 'badcamp_registration';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'registration',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
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
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Register to Attend | [site:name]',
        ),
        'description' => array(
          'value' => 'Register to attend BADCamp (it\'s free!) and sign up for trainings, summits, and more!',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_narrow1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Registration';
  $display->uuid = '262cbe19-f5b7-4352-9b1c-a8b8391e55b9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9f9872b7-f2a7-4d33-89d9-43f5a51afc2f';
    $pane->panel = 'content';
    $pane->type = 'reg_progress_step1';
    $pane->subtype = 'reg_progress_step1';
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
    $pane->uuid = '9f9872b7-f2a7-4d33-89d9-43f5a51afc2f';
    $display->content['new-9f9872b7-f2a7-4d33-89d9-43f5a51afc2f'] = $pane;
    $display->panels['content'][0] = 'new-9f9872b7-f2a7-4d33-89d9-43f5a51afc2f';
    $pane = new stdClass();
    $pane->pid = 'new-7dc1a3e4-4775-410e-8332-7baaf14536e2';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Heads up!',
      'title' => 'Heads up!',
      'body' => '<p>Registration is not saved from year-to-year; even if you\'ve attended before, you\'ll still need to register.</p>
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
    $pane->uuid = '7dc1a3e4-4775-410e-8332-7baaf14536e2';
    $display->content['new-7dc1a3e4-4775-410e-8332-7baaf14536e2'] = $pane;
    $display->panels['content'][1] = 'new-7dc1a3e4-4775-410e-8332-7baaf14536e2';
    $pane = new stdClass();
    $pane->pid = 'new-4c1a2641-af66-4b7b-ae00-d6c3a8fa713f';
    $pane->panel = 'content';
    $pane->type = 'user_register_form';
    $pane->subtype = 'user_register_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title_heading' => 'h2',
      'form_build_id' => 'form-WDHNMSpb1AgHaQMHbgQxG5702_4x-Iuin1shi00QWvU',
      'form_token' => 'Lxr5D3PZqjaGT_fvk_Pz8xX49gkxp63qaSlyL6nKWrM',
      'form_id' => 'ctools_user_register_form_content_type_edit_form',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4c1a2641-af66-4b7b-ae00-d6c3a8fa713f';
    $display->content['new-4c1a2641-af66-4b7b-ae00-d6c3a8fa713f'] = $pane;
    $display->panels['content'][2] = 'new-4c1a2641-af66-4b7b-ae00-d6c3a8fa713f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4c1a2641-af66-4b7b-ae00-d6c3a8fa713f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['badcamp_registration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'profile_edit_page';
  $page->task = 'page';
  $page->admin_title = 'Registration Step 3: Profile Edit Page';
  $page->admin_description = '';
  $page->path = 'registration/profile';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
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
  $handler->name = 'page_profile_edit_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'profile_edit_page';
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
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'User category edit form from user (fixed)',
        'keyword' => 'user_category_form',
        'name' => 'user_category_edit_form_from_user_fixed',
        'category' => '',
        'context' => 'context_user_1',
        'id' => 1,
      ),
    ),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_profile2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'image' => NULL,
      'main' => NULL,
      'header' => NULL,
      'name1' => NULL,
      'name2' => NULL,
      'bio' => NULL,
      'social_medial_1' => NULL,
      'social_medial_2' => NULL,
      'interests' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '132456bd-ac5b-4881-bfc4-35623b5f2056';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c0612d84-d8d8-47bb-b0c5-ec0193e12bfc';
    $pane->panel = 'bio';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_bio';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'relationship_user_category_edit_form_from_user_fixed_1',
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
    $pane->uuid = 'c0612d84-d8d8-47bb-b0c5-ec0193e12bfc';
    $display->content['new-c0612d84-d8d8-47bb-b0c5-ec0193e12bfc'] = $pane;
    $display->panels['bio'][0] = 'new-c0612d84-d8d8-47bb-b0c5-ec0193e12bfc';
    $pane = new stdClass();
    $pane->pid = 'new-c1ffd19e-709a-4a08-9d7e-8ab18d1cdf77';
    $pane->panel = 'header';
    $pane->type = 'reg_progress_step3';
    $pane->subtype = 'reg_progress_step3';
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
    $pane->uuid = 'c1ffd19e-709a-4a08-9d7e-8ab18d1cdf77';
    $display->content['new-c1ffd19e-709a-4a08-9d7e-8ab18d1cdf77'] = $pane;
    $display->panels['header'][0] = 'new-c1ffd19e-709a-4a08-9d7e-8ab18d1cdf77';
    $pane = new stdClass();
    $pane->pid = 'new-8b167625-cdb2-4025-ba76-3d31cd7dbbc0';
    $pane->panel = 'image';
    $pane->type = 'user_picture_edit';
    $pane->subtype = 'user_picture_edit';
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
    $pane->uuid = '8b167625-cdb2-4025-ba76-3d31cd7dbbc0';
    $display->content['new-8b167625-cdb2-4025-ba76-3d31cd7dbbc0'] = $pane;
    $display->panels['image'][0] = 'new-8b167625-cdb2-4025-ba76-3d31cd7dbbc0';
    $pane = new stdClass();
    $pane->pid = 'new-959c67e4-a3ce-4e6f-881e-2b8aa719b84c';
    $pane->panel = 'interests';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_interests';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'relationship_user_category_edit_form_from_user_fixed_1',
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
    $pane->uuid = '959c67e4-a3ce-4e6f-881e-2b8aa719b84c';
    $display->content['new-959c67e4-a3ce-4e6f-881e-2b8aa719b84c'] = $pane;
    $display->panels['interests'][0] = 'new-959c67e4-a3ce-4e6f-881e-2b8aa719b84c';
    $pane = new stdClass();
    $pane->pid = 'new-378633d1-dd8d-4040-ac8e-6a001deba04b';
    $pane->panel = 'main';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'relationship_user_category_edit_form_from_user_fixed_1',
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
    $pane->uuid = '378633d1-dd8d-4040-ac8e-6a001deba04b';
    $display->content['new-378633d1-dd8d-4040-ac8e-6a001deba04b'] = $pane;
    $display->panels['main'][0] = 'new-378633d1-dd8d-4040-ac8e-6a001deba04b';
    $pane = new stdClass();
    $pane->pid = 'new-189ad595-2f75-49cf-9620-d588fc5c7cac';
    $pane->panel = 'name1';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_first_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'relationship_user_category_edit_form_from_user_fixed_1',
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
    $pane->uuid = '189ad595-2f75-49cf-9620-d588fc5c7cac';
    $display->content['new-189ad595-2f75-49cf-9620-d588fc5c7cac'] = $pane;
    $display->panels['name1'][0] = 'new-189ad595-2f75-49cf-9620-d588fc5c7cac';
    $pane = new stdClass();
    $pane->pid = 'new-d0aeed07-f90c-45f8-88f9-1158f2990059';
    $pane->panel = 'name1';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_title_role';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'relationship_user_category_edit_form_from_user_fixed_1',
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
    $pane->uuid = 'd0aeed07-f90c-45f8-88f9-1158f2990059';
    $display->content['new-d0aeed07-f90c-45f8-88f9-1158f2990059'] = $pane;
    $display->panels['name1'][1] = 'new-d0aeed07-f90c-45f8-88f9-1158f2990059';
    $pane = new stdClass();
    $pane->pid = 'new-3606e7f7-dbce-40f6-8538-85758a7cc743';
    $pane->panel = 'name2';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_last_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'relationship_user_category_edit_form_from_user_fixed_1',
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
    $pane->uuid = '3606e7f7-dbce-40f6-8538-85758a7cc743';
    $display->content['new-3606e7f7-dbce-40f6-8538-85758a7cc743'] = $pane;
    $display->panels['name2'][0] = 'new-3606e7f7-dbce-40f6-8538-85758a7cc743';
    $pane = new stdClass();
    $pane->pid = 'new-8535375b-b592-416f-9a31-37fdc83b9bc3';
    $pane->panel = 'name2';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_organization';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'relationship_user_category_edit_form_from_user_fixed_1',
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
    $pane->uuid = '8535375b-b592-416f-9a31-37fdc83b9bc3';
    $display->content['new-8535375b-b592-416f-9a31-37fdc83b9bc3'] = $pane;
    $display->panels['name2'][1] = 'new-8535375b-b592-416f-9a31-37fdc83b9bc3';
    $pane = new stdClass();
    $pane->pid = 'new-8ba8c7f0-08d1-446b-9a8c-aad932baa307';
    $pane->panel = 'social_medial_1';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_drupalorg_username';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'relationship_user_category_edit_form_from_user_fixed_1',
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
    $pane->uuid = '8ba8c7f0-08d1-446b-9a8c-aad932baa307';
    $display->content['new-8ba8c7f0-08d1-446b-9a8c-aad932baa307'] = $pane;
    $display->panels['social_medial_1'][0] = 'new-8ba8c7f0-08d1-446b-9a8c-aad932baa307';
    $pane = new stdClass();
    $pane->pid = 'new-fa5ab97f-c7a2-4496-8c51-77e5b1ec7fa5';
    $pane->panel = 'social_medial_1';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_facebook_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'relationship_user_category_edit_form_from_user_fixed_1',
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
    $pane->uuid = 'fa5ab97f-c7a2-4496-8c51-77e5b1ec7fa5';
    $display->content['new-fa5ab97f-c7a2-4496-8c51-77e5b1ec7fa5'] = $pane;
    $display->panels['social_medial_1'][1] = 'new-fa5ab97f-c7a2-4496-8c51-77e5b1ec7fa5';
    $pane = new stdClass();
    $pane->pid = 'new-6d1ab2cc-557e-4576-b2fc-efea09c0e254';
    $pane->panel = 'social_medial_2';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_twitter_handle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'relationship_user_category_edit_form_from_user_fixed_1',
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
    $pane->uuid = '6d1ab2cc-557e-4576-b2fc-efea09c0e254';
    $display->content['new-6d1ab2cc-557e-4576-b2fc-efea09c0e254'] = $pane;
    $display->panels['social_medial_2'][0] = 'new-6d1ab2cc-557e-4576-b2fc-efea09c0e254';
    $pane = new stdClass();
    $pane->pid = 'new-d1463a66-14d5-405e-9d24-08ddab6d57b3';
    $pane->panel = 'social_medial_2';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_user_flickr_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'relationship_user_category_edit_form_from_user_fixed_1',
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
    $pane->uuid = 'd1463a66-14d5-405e-9d24-08ddab6d57b3';
    $display->content['new-d1463a66-14d5-405e-9d24-08ddab6d57b3'] = $pane;
    $display->panels['social_medial_2'][1] = 'new-d1463a66-14d5-405e-9d24-08ddab6d57b3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['profile_edit_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'registration_step_2';
  $page->task = 'page';
  $page->admin_title = 'Registration Step 2';
  $page->admin_description = 'The second step of registration, individual sponsorship.';
  $page->path = 'registration/sponsorship';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'make a stripe donation',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
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
  $handler->name = 'page_registration_step_2__panel_context_5196f101-92d8-428a-bfca-28fbfc9676f2';
  $handler->task = 'page';
  $handler->subtask = 'registration_step_2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Registration Sponsorship Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_sponsorship1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'content' => NULL,
      'header' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Registration - Step 2';
  $display->uuid = '3857cf82-8323-4c0c-984e-253843673a61';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cd401352-55f0-4d0a-bb14-803eb0d55d15';
    $pane->panel = 'header';
    $pane->type = 'reg_progress_step2';
    $pane->subtype = 'reg_progress_step2';
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
    $pane->uuid = 'cd401352-55f0-4d0a-bb14-803eb0d55d15';
    $display->content['new-cd401352-55f0-4d0a-bb14-803eb0d55d15'] = $pane;
    $display->panels['header'][0] = 'new-cd401352-55f0-4d0a-bb14-803eb0d55d15';
    $pane = new stdClass();
    $pane->pid = 'new-9f8939c0-f3ca-4619-b881-5e2024c1d4dc';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Reg Sponsorship Copy',
      'title' => '',
      'body' => '<p class="p1"><span class="s1">Do you think BADCamp is awesome? Would you be willing to pay for your ticket?</span></p>

<p class="p1"><span class="s1">If so, then you can give back to the camp by purchasing an individual sponsorship level most comfortable for you.</span></p>

<p class="p1"><span class="s1">As a bonus, all individual sponsor will recieve BADCamp T-shirt.</span></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sponsorship-overview',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9f8939c0-f3ca-4619-b881-5e2024c1d4dc';
    $display->content['new-9f8939c0-f3ca-4619-b881-5e2024c1d4dc'] = $pane;
    $display->panels['main'][0] = 'new-9f8939c0-f3ca-4619-b881-5e2024c1d4dc';
    $pane = new stdClass();
    $pane->pid = 'new-6b15a30f-98a0-4942-8bc7-aec60d4dbfeb';
    $pane->panel = 'main';
    $pane->type = 'donation_options';
    $pane->subtype = 'donation_options';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'stripe_donation_payment_page_title' => NULL,
      'stripe_donation_zero_amt_donation_redirect_path' => '/registration/profile',
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
    $pane->uuid = '6b15a30f-98a0-4942-8bc7-aec60d4dbfeb';
    $display->content['new-6b15a30f-98a0-4942-8bc7-aec60d4dbfeb'] = $pane;
    $display->panels['main'][1] = 'new-6b15a30f-98a0-4942-8bc7-aec60d4dbfeb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['registration_step_2'] = $page;

  return $pages;

}
