<?php
/**
 * @file
 * badcamp_community.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function badcamp_community_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'attendees';
  $view->description = '';
  $view->tag = 'admin';
  $view->base_table = 'users';
  $view->human_name = 'Attendees';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attendees';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'attendee';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no attendees that match your search.  Please try again.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'attendee-photo';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<img src="/sites/all/themes/badcamp2015/logo.png" class="attendee-photo" />';
  $handler->display->display_options['fields']['picture']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'borealis_large_respondmedium';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_last_name']['alter']['text'] = '[field_user_first_name] [field_user_last_name]';
  $handler->display->display_options['fields']['field_user_last_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_last_name']['element_class'] = 'attendee-display-name';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_last_name']['element_default_classes'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_class'] = 'attendee-username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['label'] = '';
  $handler->display->display_options['fields']['field_user_organization']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_organization']['element_class'] = 'attendee-organization';
  $handler->display->display_options['fields']['field_user_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_organization']['element_default_classes'] = FALSE;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: First name (field_user_first_name) */
  $handler->display->display_options['filters']['field_user_first_name_value']['id'] = 'field_user_first_name_value';
  $handler->display->display_options['filters']['field_user_first_name_value']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['filters']['field_user_first_name_value']['field'] = 'field_user_first_name_value';
  $handler->display->display_options['filters']['field_user_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['operator_id'] = 'field_user_first_name_value_op';
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['operator'] = 'field_user_first_name_value_op';
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['identifier'] = 'field_user_first_name_value';
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Last name (field_user_last_name) */
  $handler->display->display_options['filters']['field_user_last_name_value']['id'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['filters']['field_user_last_name_value']['field'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator_id'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['identifier'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Organization (field_user_organization) */
  $handler->display->display_options['filters']['field_user_organization_value']['id'] = 'field_user_organization_value';
  $handler->display->display_options['filters']['field_user_organization_value']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['filters']['field_user_organization_value']['field'] = 'field_user_organization_value';
  $handler->display->display_options['filters']['field_user_organization_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_organization_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_organization_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_organization_value']['expose']['operator_id'] = 'field_user_organization_value_op';
  $handler->display->display_options['filters']['field_user_organization_value']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_user_organization_value']['expose']['operator'] = 'field_user_organization_value_op';
  $handler->display->display_options['filters']['field_user_organization_value']['expose']['identifier'] = 'field_user_organization_value';
  $handler->display->display_options['filters']['field_user_organization_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Featured attendee (field_user_featured_attendee) */
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['id'] = 'field_user_featured_attendee_value';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['table'] = 'field_data_field_user_featured_attendee';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['field'] = 'field_user_featured_attendee_value';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['expose']['operator_id'] = 'field_user_featured_attendee_value_op';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['expose']['label'] = 'Featured';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['expose']['operator'] = 'field_user_featured_attendee_value_op';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['expose']['identifier'] = 'field_user_featured_attendee_value';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: I would like to volunteer at BADCamp (field_user_interest_volunteering) */
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['id'] = 'field_user_interest_volunteering_value';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['table'] = 'field_data_field_user_interest_volunteering';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['field'] = 'field_user_interest_volunteering_value';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['operator_id'] = 'field_user_interest_volunteering_value_op';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['label'] = 'I would like to volunteer at BADCamp (field_user_interest_volunteering)';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['operator'] = 'field_user_interest_volunteering_value_op';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['identifier'] = 'field_user_interest_volunteering_value';

  /* Display: Attendees Content pane */
  $handler = $view->new_display('panel_pane', 'Attendees Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'all-attendees';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'attendee-photo';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<img src="/sites/all/themes/badcamp2015/logo.png" class="attendee-photo" width="220px" height="220px" />';
  $handler->display->display_options['fields']['picture']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'headshot';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_last_name']['alter']['text'] = '[field_user_first_name] [field_user_last_name]';
  $handler->display->display_options['fields']['field_user_last_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_last_name']['element_class'] = 'attendee-display-name';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_last_name']['element_default_classes'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[field_user_first_name]<br />
    [field_user_last_name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_class'] = 'attendee-name link green';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Last name (field_user_last_name) */
  $handler->display->display_options['sorts']['field_user_last_name_value']['id'] = 'field_user_last_name_value';
  $handler->display->display_options['sorts']['field_user_last_name_value']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['sorts']['field_user_last_name_value']['field'] = 'field_user_last_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: First name (field_user_first_name) */
  $handler->display->display_options['filters']['field_user_first_name_value']['id'] = 'field_user_first_name_value';
  $handler->display->display_options['filters']['field_user_first_name_value']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['filters']['field_user_first_name_value']['field'] = 'field_user_first_name_value';
  $handler->display->display_options['filters']['field_user_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['operator_id'] = 'field_user_first_name_value_op';
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['operator'] = 'field_user_first_name_value_op';
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['identifier'] = 'field_user_first_name_value';
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Last name (field_user_last_name) */
  $handler->display->display_options['filters']['field_user_last_name_value']['id'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['filters']['field_user_last_name_value']['field'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator_id'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['identifier'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Organization (field_user_organization) */
  $handler->display->display_options['filters']['field_user_organization_value']['id'] = 'field_user_organization_value';
  $handler->display->display_options['filters']['field_user_organization_value']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['filters']['field_user_organization_value']['field'] = 'field_user_organization_value';
  $handler->display->display_options['filters']['field_user_organization_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_organization_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_organization_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_organization_value']['expose']['operator_id'] = 'field_user_organization_value_op';
  $handler->display->display_options['filters']['field_user_organization_value']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_user_organization_value']['expose']['operator'] = 'field_user_organization_value_op';
  $handler->display->display_options['filters']['field_user_organization_value']['expose']['identifier'] = 'field_user_organization_value';
  $handler->display->display_options['filters']['field_user_organization_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => '9',
  );
  $handler->display->display_options['pane_title'] = 'Attendees Content Pane View';

  /* Display: Featured Attendees Content Pane */
  $handler = $view->new_display('panel_pane', 'Featured Attendees Content Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Attendees';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'featured-attendees';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'attendee';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a name="featured-attendees"></a>';
  $handler->display->display_options['header']['area']['format'] = 'no_filter';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'attendee-photo';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<img src="/sites/all/themes/badcamp2015/logo.png" class="attendee-photo" />';
  $handler->display->display_options['fields']['picture']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'headshot_thumbnail';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_last_name']['alter']['text'] = '[field_user_first_name] [field_user_last_name]';
  $handler->display->display_options['fields']['field_user_last_name']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['field_user_last_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_user_last_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_last_name']['element_class'] = 'attendee-display-name link green';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_last_name']['element_default_classes'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_class'] = 'attendee-username link green';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['label'] = '';
  $handler->display->display_options['fields']['field_user_organization']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_user_organization']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_user_organization']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_organization']['element_class'] = 'attendee-organization';
  $handler->display->display_options['fields']['field_user_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_organization']['element_default_classes'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Uid */
  $handler->display->display_options['sorts']['uid']['id'] = 'uid';
  $handler->display->display_options['sorts']['uid']['table'] = 'users';
  $handler->display->display_options['sorts']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Featured attendee (field_user_featured_attendee) */
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['id'] = 'field_user_featured_attendee_value';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['table'] = 'field_data_field_user_featured_attendee';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['field'] = 'field_user_featured_attendee_value';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['expose']['operator_id'] = 'field_user_featured_attendee_value_op';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['expose']['label'] = 'Featured';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['expose']['operator'] = 'field_user_featured_attendee_value_op';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['expose']['identifier'] = 'field_user_featured_attendee_value';
  $handler->display->display_options['filters']['field_user_featured_attendee_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Volunteers Content Pane */
  $handler = $view->new_display('panel_pane', 'Volunteers Content Pane', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Volunteers';
  $handler->display->display_options['display_description'] = 'List of all of the attendees that are volunteers';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: I would like to volunteer at BADCamp (field_user_interest_volunteering) */
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['id'] = 'field_user_interest_volunteering_value';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['table'] = 'field_data_field_user_interest_volunteering';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['field'] = 'field_user_interest_volunteering_value';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['operator_id'] = 'field_user_interest_volunteering_value_op';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['label'] = 'I would like to volunteer at BADCamp (field_user_interest_volunteering)';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['operator'] = 'field_user_interest_volunteering_value_op';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['identifier'] = 'field_user_interest_volunteering_value';

  /* Display: Speakers Content Pane */
  $handler = $view->new_display('panel_pane', 'Speakers Content Pane', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Speakers';
  $handler->display->display_options['display_description'] = 'List of all of the attendees that are speakers associated with an accepted seession';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_session_speaker_node']['id'] = 'reverse_field_session_speaker_node';
  $handler->display->display_options['relationships']['reverse_field_session_speaker_node']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_session_speaker_node']['field'] = 'reverse_field_session_speaker_node';
  $handler->display->display_options['relationships']['reverse_field_session_speaker_node']['label'] = 'Session Speaker';
  $handler->display->display_options['relationships']['reverse_field_session_speaker_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'attendee-photo';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_last_name']['alter']['text'] = '[field_user_first_name] [field_user_last_name]';
  $handler->display->display_options['fields']['field_user_last_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_last_name']['element_class'] = 'attendee-display-name';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_last_name']['element_default_classes'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_class'] = 'attendee-username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['label'] = '';
  $handler->display->display_options['fields']['field_user_organization']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_organization']['element_class'] = 'attendee-organization';
  $handler->display->display_options['fields']['field_user_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_organization']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_session_speaker_node';
  $handler->display->display_options['fields']['title']['label'] = 'Session';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Session status (field_session_status) */
  $handler->display->display_options['filters']['field_session_status_value']['id'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['filters']['field_session_status_value']['field'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['relationship'] = 'reverse_field_session_speaker_node';
  $handler->display->display_options['filters']['field_session_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_session_status_value']['reduce_duplicates'] = TRUE;

  /* Display: All Attendees Page */
  $handler = $view->new_display('page', 'All Attendees Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'attendee';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['picture']['element_class'] = 'attendee-photo';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['empty'] = '<a><img width="220" height="220" src="/sites/all/themes/badcamp2015/logo.png" class="attendee-photo" /></a>';
  $handler->display->display_options['fields']['picture']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'headshot';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_last_name']['alter']['text'] = '[field_user_first_name] [field_user_last_name]';
  $handler->display->display_options['fields']['field_user_last_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_last_name']['element_class'] = 'attendee-display-name';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_last_name']['element_default_classes'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_class'] = 'attendee-username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['label'] = '';
  $handler->display->display_options['fields']['field_user_organization']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_organization']['element_class'] = 'attendee-organization';
  $handler->display->display_options['fields']['field_user_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_organization']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Last name (field_user_last_name) */
  $handler->display->display_options['sorts']['field_user_last_name_value']['id'] = 'field_user_last_name_value';
  $handler->display->display_options['sorts']['field_user_last_name_value']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['sorts']['field_user_last_name_value']['field'] = 'field_user_last_name_value';
  /* Sort criterion: User: First name (field_user_first_name) */
  $handler->display->display_options['sorts']['field_user_first_name_value']['id'] = 'field_user_first_name_value';
  $handler->display->display_options['sorts']['field_user_first_name_value']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['sorts']['field_user_first_name_value']['field'] = 'field_user_first_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: User: First name (field_user_first_name) */
  $handler->display->display_options['filters']['field_user_first_name_value']['id'] = 'field_user_first_name_value';
  $handler->display->display_options['filters']['field_user_first_name_value']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['filters']['field_user_first_name_value']['field'] = 'field_user_first_name_value';
  $handler->display->display_options['filters']['field_user_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['operator_id'] = 'field_user_first_name_value_op';
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['operator'] = 'field_user_first_name_value_op';
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['identifier'] = 'field_user_first_name_value';
  $handler->display->display_options['filters']['field_user_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Last name (field_user_last_name) */
  $handler->display->display_options['filters']['field_user_last_name_value']['id'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['filters']['field_user_last_name_value']['field'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator_id'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['identifier'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'attendees';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Attendees';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['attendees'] = $view;

  return $export;
}
