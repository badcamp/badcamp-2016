<?php
/**
 * @file
 * badcamp_attendees_admin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function badcamp_attendees_admin_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'attendees_admin';
  $view->description = '';
  $view->tag = 'admin';
  $view->base_table = 'users';
  $view->human_name = 'Attendees admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attendees';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'uid' => 'uid',
    'name' => 'name',
    'field_user_first_name' => 'field_user_first_name',
    'field_user_last_name' => 'field_user_first_name',
    'field_user_organization' => 'field_user_organization',
    'mail' => 'mail',
    'field_user_featured_attendee' => 'field_user_featured_attendee',
    'field_user_interest_volunteering' => 'field_user_interest_volunteering',
    'field_user_services' => 'field_user_services',
    'field_user_training_interest' => 'field_user_training_interest',
    'view_user' => 'view_user',
    'edit_node' => 'view_user',
  );
  $handler->display->display_options['style_options']['default'] = 'uid';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '&nbsp;',
      'empty_column' => 0,
    ),
    'field_user_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_organization' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_featured_attendee' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_interest_volunteering' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_services' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_training_interest' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_user' => array(
      'align' => 'views-align-left',
      'separator' => '&nbsp;&nbsp;&nbsp;',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No attendees exist';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'ID';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'User Name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = 'Full Name';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Featured attendee */
  $handler->display->display_options['fields']['field_user_featured_attendee']['id'] = 'field_user_featured_attendee';
  $handler->display->display_options['fields']['field_user_featured_attendee']['table'] = 'field_data_field_user_featured_attendee';
  $handler->display->display_options['fields']['field_user_featured_attendee']['field'] = 'field_user_featured_attendee';
  $handler->display->display_options['fields']['field_user_featured_attendee']['label'] = 'Featured';
  /* Field: User: I would like to volunteer at BADCamp */
  $handler->display->display_options['fields']['field_user_interest_volunteering']['id'] = 'field_user_interest_volunteering';
  $handler->display->display_options['fields']['field_user_interest_volunteering']['table'] = 'field_data_field_user_interest_volunteering';
  $handler->display->display_options['fields']['field_user_interest_volunteering']['field'] = 'field_user_interest_volunteering';
  $handler->display->display_options['fields']['field_user_interest_volunteering']['label'] = 'Volunteering';
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = 'Operations';
  $handler->display->display_options['fields']['view_user']['text'] = 'view';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
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

  /* Display: Attendees admin */
  $handler = $view->new_display('page', 'Attendees admin', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Count';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'ID';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'User Name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = 'Full Name';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Featured attendee */
  $handler->display->display_options['fields']['field_user_featured_attendee']['id'] = 'field_user_featured_attendee';
  $handler->display->display_options['fields']['field_user_featured_attendee']['table'] = 'field_data_field_user_featured_attendee';
  $handler->display->display_options['fields']['field_user_featured_attendee']['field'] = 'field_user_featured_attendee';
  $handler->display->display_options['fields']['field_user_featured_attendee']['label'] = 'Featured';
  $handler->display->display_options['fields']['field_user_featured_attendee']['exclude'] = TRUE;
  /* Field: User: I would like to volunteer at BADCamp */
  $handler->display->display_options['fields']['field_user_interest_volunteering']['id'] = 'field_user_interest_volunteering';
  $handler->display->display_options['fields']['field_user_interest_volunteering']['table'] = 'field_data_field_user_interest_volunteering';
  $handler->display->display_options['fields']['field_user_interest_volunteering']['field'] = 'field_user_interest_volunteering';
  $handler->display->display_options['fields']['field_user_interest_volunteering']['label'] = 'Volunteering';
  $handler->display->display_options['fields']['field_user_interest_volunteering']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_interest_volunteering']['alter']['text'] = 'Volunteer';
  $handler->display->display_options['fields']['field_user_interest_volunteering']['element_label_colon'] = FALSE;
  /* Field: User: I'm interested in information about Drupal development services */
  $handler->display->display_options['fields']['field_user_services']['id'] = 'field_user_services';
  $handler->display->display_options['fields']['field_user_services']['table'] = 'field_data_field_user_services';
  $handler->display->display_options['fields']['field_user_services']['field'] = 'field_user_services';
  $handler->display->display_options['fields']['field_user_services']['label'] = 'Services';
  $handler->display->display_options['fields']['field_user_services']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_services']['alter']['text'] = 'Services';
  $handler->display->display_options['fields']['field_user_services']['element_label_colon'] = FALSE;
  /* Field: User: I would like Drupal training at BADCamp */
  $handler->display->display_options['fields']['field_user_training_interest']['id'] = 'field_user_training_interest';
  $handler->display->display_options['fields']['field_user_training_interest']['table'] = 'field_data_field_user_training_interest';
  $handler->display->display_options['fields']['field_user_training_interest']['field'] = 'field_user_training_interest';
  $handler->display->display_options['fields']['field_user_training_interest']['label'] = 'Training';
  $handler->display->display_options['fields']['field_user_training_interest']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_training_interest']['alter']['text'] = 'Training';
  $handler->display->display_options['fields']['field_user_training_interest']['element_label_colon'] = FALSE;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = 'Operations';
  $handler->display->display_options['fields']['view_user']['text'] = 'view';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
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
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
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
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['label'] = 'Volunteering';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['operator'] = 'field_user_interest_volunteering_value_op';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['identifier'] = 'field_user_interest_volunteering_value';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/badcamp/registered-attendees/all';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'All';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Attendees';
  $handler->display->display_options['tab_options']['description'] = 'Administrative listings of all attendees.';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Volunteers admin */
  $handler = $view->new_display('page', 'Volunteers admin', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Volunteers';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No volunteers exist';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  /* Filter criterion: User: I would like to volunteer at BADCamp (field_user_interest_volunteering) */
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['id'] = 'field_user_interest_volunteering_value';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['table'] = 'field_data_field_user_interest_volunteering';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['field'] = 'field_user_interest_volunteering_value';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['operator_id'] = 'field_user_interest_volunteering_value_op';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['label'] = 'Volunteering';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['operator'] = 'field_user_interest_volunteering_value_op';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['identifier'] = 'field_user_interest_volunteering_value';
  $handler->display->display_options['filters']['field_user_interest_volunteering_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/badcamp/registered-attendees/volunteers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Volunteers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Featured attendees admin */
  $handler = $view->new_display('page', 'Featured attendees admin', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Attendees';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No featured attendees exist';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  $handler->display->display_options['path'] = 'admin/badcamp/registered-attendees/featured';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Featured';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attendees job seekers */
  $handler = $view->new_display('page', 'Attendees job seekers', 'page_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = 'Full Name';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: I&#039;m interested in information about Drupal job opportunities (field_user_interest_jobs) */
  $handler->display->display_options['filters']['field_user_interest_jobs_value']['id'] = 'field_user_interest_jobs_value';
  $handler->display->display_options['filters']['field_user_interest_jobs_value']['table'] = 'field_data_field_user_interest_jobs';
  $handler->display->display_options['filters']['field_user_interest_jobs_value']['field'] = 'field_user_interest_jobs_value';
  $handler->display->display_options['filters']['field_user_interest_jobs_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'admin/badcamp/registered-attendees/jobs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Jobs Seekers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Attendees';
  $handler->display->display_options['tab_options']['description'] = 'Administrative listings of all attendees.';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Attendees job seekers */
  $handler = $view->new_display('page', 'Attendees job seekers', 'page_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['label'] = 'Full Name';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_user_organization']['id'] = 'field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['table'] = 'field_data_field_user_organization';
  $handler->display->display_options['fields']['field_user_organization']['field'] = 'field_user_organization';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: I&#039;m interested in information about Drupal development services (field_user_services) */
  $handler->display->display_options['filters']['field_user_services_value']['id'] = 'field_user_services_value';
  $handler->display->display_options['filters']['field_user_services_value']['table'] = 'field_data_field_user_services';
  $handler->display->display_options['filters']['field_user_services_value']['field'] = 'field_user_services_value';
  $handler->display->display_options['filters']['field_user_services_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_user_services_value']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/badcamp/registered-attendees/services';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Service Seekers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Attendees';
  $handler->display->display_options['tab_options']['description'] = 'Administrative listings of all attendees.';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';
  $export['attendees_admin'] = $view;

  return $export;
}
