<?php
/**
 * @file
 * training_reg_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function training_reg_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'training_registration_admin';
  $view->description = 'Provides reporting for training registrations';
  $view->tag = 'admin';
  $view->base_table = 'eck_training_reg';
  $view->human_name = 'Training Registration Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Training Registration Admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer training registration';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_training_date_time',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'edit_node' => 'edit_node',
    'title' => 'title',
    'field_training_date_time' => 'field_training_date_time',
    'field_training_location' => 'field_training_location',
    'field_training_room' => 'field_training_room',
    'field_room_capacity' => 'field_room_capacity',
    'nid' => 'nid',
    'field_training_max_registrations' => 'field_training_max_registrations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_date_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room_capacity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_max_registrations' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_training_reg_training_target_id']['id'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['relationships']['field_training_reg_training_target_id']['table'] = 'field_data_field_training_reg_training';
  $handler->display->display_options['relationships']['field_training_reg_training_target_id']['field'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['relationships']['field_training_reg_training_target_id']['label'] = 'Training';
  $handler->display->display_options['relationships']['field_training_reg_training_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_training_reg_attendee_target_id']['id'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['relationships']['field_training_reg_attendee_target_id']['table'] = 'field_data_field_training_reg_attendee';
  $handler->display->display_options['relationships']['field_training_reg_attendee_target_id']['field'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['relationships']['field_training_reg_attendee_target_id']['label'] = 'User';
  $handler->display->display_options['relationships']['field_training_reg_attendee_target_id']['required'] = TRUE;
  /* Relationship: Content: Room (field_training_room) */
  $handler->display->display_options['relationships']['field_training_room_tid']['id'] = 'field_training_room_tid';
  $handler->display->display_options['relationships']['field_training_room_tid']['table'] = 'field_data_field_training_room';
  $handler->display->display_options['relationships']['field_training_room_tid']['field'] = 'field_training_room_tid';
  $handler->display->display_options['relationships']['field_training_room_tid']['relationship'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['relationships']['field_training_room_tid']['label'] = 'room';
  /* Field: Training Registration: Attendee */
  $handler->display->display_options['fields']['field_training_reg_attendee']['id'] = 'field_training_reg_attendee';
  $handler->display->display_options['fields']['field_training_reg_attendee']['table'] = 'field_data_field_training_reg_attendee';
  $handler->display->display_options['fields']['field_training_reg_attendee']['field'] = 'field_training_reg_attendee';
  $handler->display->display_options['fields']['field_training_reg_attendee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Training';
  /* Field: Training Registration: Stripe Transaction */
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['id'] = 'field_training_reg_stripe_trans';
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['table'] = 'field_data_field_training_reg_stripe_trans';
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['field'] = 'field_training_reg_stripe_trans';
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['alter']['path'] = 'https://dashboard.stripe.com/test/payments/[field_training_reg_stripe_trans]';
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['alter']['target'] = '_blank';
  /* Field: Training Registration: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Training Registration: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Dates */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Dates';
  $handler->display->display_options['fields']['nothing']['label'] = 'Dates';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>Created:</strong> [created]<br />
<strong>Changed:</strong> [changed]';
  /* Field: Training Registration: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Field: Training Registration: Delete link */
  $handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['text'] = 'Delete';
  /* Field: Training Registration: Training Registration Fee Refunded */
  $handler->display->display_options['fields']['field_training_reg_refunded']['id'] = 'field_training_reg_refunded';
  $handler->display->display_options['fields']['field_training_reg_refunded']['table'] = 'field_data_field_training_reg_refunded';
  $handler->display->display_options['fields']['field_training_reg_refunded']['field'] = 'field_training_reg_refunded';
  $handler->display->display_options['fields']['field_training_reg_refunded']['label'] = 'Refunded?';
  $handler->display->display_options['fields']['field_training_reg_refunded']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_refunded']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_training_reg_refunded']['empty'] = 'NO';
  $handler->display->display_options['fields']['field_training_reg_refunded']['empty_zero'] = TRUE;
  /* Sort criterion: Training Registration: Attendee (field_training_reg_attendee) */
  $handler->display->display_options['sorts']['field_training_reg_attendee_target_id']['id'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['sorts']['field_training_reg_attendee_target_id']['table'] = 'field_data_field_training_reg_attendee';
  $handler->display->display_options['sorts']['field_training_reg_attendee_target_id']['field'] = 'field_training_reg_attendee_target_id';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_training_reg_attendee_target_id';
  /* Filter criterion: Training Registration: training_reg type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_training_reg';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_reg' => 'training_reg',
  );
  /* Filter criterion: Training Registration: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'eck_training_reg';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  /* Filter criterion: User: Last name (field_user_last_name) */
  $handler->display->display_options['filters']['field_user_last_name_value']['id'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['filters']['field_user_last_name_value']['field'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['relationship'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['filters']['field_user_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator_id'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['identifier'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );

  /* Display: All Training Registrations Page */
  $handler = $view->new_display('page', 'All Training Registrations Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Training Registration */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Mark as Refunded',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'training_reg::field_training_reg_refunded' => 'training_reg::field_training_reg_refunded',
        ),
      ),
    ),
  );
  /* Field: Training Registration: Attendee */
  $handler->display->display_options['fields']['field_training_reg_attendee']['id'] = 'field_training_reg_attendee';
  $handler->display->display_options['fields']['field_training_reg_attendee']['table'] = 'field_data_field_training_reg_attendee';
  $handler->display->display_options['fields']['field_training_reg_attendee']['field'] = 'field_training_reg_attendee';
  $handler->display->display_options['fields']['field_training_reg_attendee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Training';
  /* Field: Training Registration: Stripe Transaction */
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['id'] = 'field_training_reg_stripe_trans';
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['table'] = 'field_data_field_training_reg_stripe_trans';
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['field'] = 'field_training_reg_stripe_trans';
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['alter']['path'] = 'https://dashboard.stripe.com/test/payments/[field_training_reg_stripe_trans]';
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['alter']['target'] = '_blank';
  /* Field: Training Registration: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Training Registration: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Dates */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Dates';
  $handler->display->display_options['fields']['nothing']['label'] = 'Dates';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>Created:</strong> [created]<br />
<strong>Changed:</strong> [changed]';
  /* Field: Training Registration: Training Registration Fee Refunded */
  $handler->display->display_options['fields']['field_training_reg_refunded']['id'] = 'field_training_reg_refunded';
  $handler->display->display_options['fields']['field_training_reg_refunded']['table'] = 'field_data_field_training_reg_refunded';
  $handler->display->display_options['fields']['field_training_reg_refunded']['field'] = 'field_training_reg_refunded';
  $handler->display->display_options['fields']['field_training_reg_refunded']['label'] = 'Refunded?';
  $handler->display->display_options['fields']['field_training_reg_refunded']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_refunded']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_training_reg_refunded']['empty'] = 'NO';
  $handler->display->display_options['fields']['field_training_reg_refunded']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_refunded']['type'] = 'list_key';
  /* Field: Training Registration: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Field: Training Registration: Delete link */
  $handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['text'] = 'Delete';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Training Registration: training_reg type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_training_reg';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_reg' => 'training_reg',
  );
  /* Filter criterion: Training Registration: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'eck_training_reg';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Training';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last name (field_user_last_name) */
  $handler->display->display_options['filters']['field_user_last_name_value']['id'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['filters']['field_user_last_name_value']['field'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['relationship'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['filters']['field_user_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator_id'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['identifier'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = '!=';
  $handler->display->display_options['filters']['title_1']['value'] = 'Cancelled Registration';
  $handler->display->display_options['path'] = 'admin/badcamp/training/registrations/all';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Training Registrations';
  $handler->display->display_options['menu']['description'] = 'All training registrations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Training Registrations';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Training Cancellations */
  $handler = $view->new_display('page', 'Training Cancellations', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Training Registration */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Mark as Refunded',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'training_reg::field_training_reg_refunded' => 'training_reg::field_training_reg_refunded',
        ),
      ),
    ),
  );
  /* Field: Training Registration: Attendee */
  $handler->display->display_options['fields']['field_training_reg_attendee']['id'] = 'field_training_reg_attendee';
  $handler->display->display_options['fields']['field_training_reg_attendee']['table'] = 'field_data_field_training_reg_attendee';
  $handler->display->display_options['fields']['field_training_reg_attendee']['field'] = 'field_training_reg_attendee';
  $handler->display->display_options['fields']['field_training_reg_attendee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Training Registration: Training Registration Fee Refunded */
  $handler->display->display_options['fields']['field_training_reg_refunded']['id'] = 'field_training_reg_refunded';
  $handler->display->display_options['fields']['field_training_reg_refunded']['table'] = 'field_data_field_training_reg_refunded';
  $handler->display->display_options['fields']['field_training_reg_refunded']['field'] = 'field_training_reg_refunded';
  $handler->display->display_options['fields']['field_training_reg_refunded']['label'] = 'Refunded?';
  $handler->display->display_options['fields']['field_training_reg_refunded']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_refunded']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_training_reg_refunded']['empty'] = 'NO';
  $handler->display->display_options['fields']['field_training_reg_refunded']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_refunded']['type'] = 'list_key';
  /* Field: Training Registration: Stripe Transaction */
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['id'] = 'field_training_reg_stripe_trans';
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['table'] = 'field_data_field_training_reg_stripe_trans';
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['field'] = 'field_training_reg_stripe_trans';
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['alter']['path'] = 'https://dashboard.stripe.com/test/payments/[field_training_reg_stripe_trans]';
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_stripe_trans']['alter']['target'] = '_blank';
  /* Field: Training Registration: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Training Registration: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Dates */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Dates';
  $handler->display->display_options['fields']['nothing']['label'] = 'Dates';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>Created:</strong> [created]<br />
<strong>Changed:</strong> [changed]';
  /* Field: Training Registration: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Training Registration: training_reg type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_training_reg';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_reg' => 'training_reg',
  );
  /* Filter criterion: User: Last name (field_user_last_name) */
  $handler->display->display_options['filters']['field_user_last_name_value']['id'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['filters']['field_user_last_name_value']['field'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['relationship'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['filters']['field_user_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator_id'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['identifier'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['filters']['title']['value'] = 'Cancelled Registration';
  $handler->display->display_options['path'] = 'admin/badcamp/training/registrations/cancellations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Cancellations';
  $handler->display->display_options['menu']['description'] = 'Training  registrations that were cancelled';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Registration Counts */
  $handler = $view->new_display('page', 'Registration Counts', 'page_2');
  $handler->display->display_options['display_description'] = 'Training registration max limits and actual counts';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_training_date_time',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_training_date_time' => 'field_training_date_time',
    'title' => 'title',
    'field_training_location' => 'field_training_location',
    'field_training_room' => 'field_training_room',
    'field_room_capacity' => 'field_room_capacity',
    'field_training_max_registrations' => 'field_training_max_registrations',
    'id' => 'id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_training_date_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_room_capacity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_training_max_registrations' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_training_date_time']['id'] = 'field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['table'] = 'field_data_field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['field'] = 'field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['relationship'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['fields']['field_training_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_training_date_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_date_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Training';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_training_location']['id'] = 'field_training_location';
  $handler->display->display_options['fields']['field_training_location']['table'] = 'field_data_field_training_location';
  $handler->display->display_options['fields']['field_training_location']['field'] = 'field_training_location';
  $handler->display->display_options['fields']['field_training_location']['relationship'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['fields']['field_training_location']['label'] = 'Building';
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_training_room']['id'] = 'field_training_room';
  $handler->display->display_options['fields']['field_training_room']['table'] = 'field_data_field_training_room';
  $handler->display->display_options['fields']['field_training_room']['field'] = 'field_training_room';
  $handler->display->display_options['fields']['field_training_room']['relationship'] = 'field_training_reg_training_target_id';
  /* Field: Taxonomy term: Room capacity */
  $handler->display->display_options['fields']['field_room_capacity']['id'] = 'field_room_capacity';
  $handler->display->display_options['fields']['field_room_capacity']['table'] = 'field_data_field_room_capacity';
  $handler->display->display_options['fields']['field_room_capacity']['field'] = 'field_room_capacity';
  $handler->display->display_options['fields']['field_room_capacity']['relationship'] = 'field_training_room_tid';
  $handler->display->display_options['fields']['field_room_capacity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Max Registrations */
  $handler->display->display_options['fields']['field_training_max_registrations']['id'] = 'field_training_max_registrations';
  $handler->display->display_options['fields']['field_training_max_registrations']['table'] = 'field_data_field_training_max_registrations';
  $handler->display->display_options['fields']['field_training_max_registrations']['field'] = 'field_training_max_registrations';
  $handler->display->display_options['fields']['field_training_max_registrations']['relationship'] = 'field_training_reg_training_target_id';
  /* Field: Training Registration: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['group_type'] = 'count';
  $handler->display->display_options['fields']['id']['label'] = 'Registered';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Training Registration: training_reg type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_training_reg';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_reg' => 'training_reg',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Training Registration: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'eck_training_reg';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => 'contains',
      'value' => '',
    ),
  );
  $handler->display->display_options['path'] = 'admin/badcamp/training/registrations/registration_counts';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Registration Counts';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attendee by training */
  $handler = $view->new_display('page', 'Attendee by training', 'atendee_by_training_view');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Atendee by training';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Training Registration */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Mark as Refunded',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'training_reg::field_training_reg_refunded' => 'training_reg::field_training_reg_refunded',
        ),
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Training';
  /* Field: Training Registration: Attendee */
  $handler->display->display_options['fields']['field_training_reg_attendee']['id'] = 'field_training_reg_attendee';
  $handler->display->display_options['fields']['field_training_reg_attendee']['table'] = 'field_data_field_training_reg_attendee';
  $handler->display->display_options['fields']['field_training_reg_attendee']['field'] = 'field_training_reg_attendee';
  $handler->display->display_options['fields']['field_training_reg_attendee']['settings'] = array(
    'link' => 1,
  );
  /* Field: User: Drupal.org username */
  $handler->display->display_options['fields']['field_user_drupalorg_username']['id'] = 'field_user_drupalorg_username';
  $handler->display->display_options['fields']['field_user_drupalorg_username']['table'] = 'field_data_field_user_drupalorg_username';
  $handler->display->display_options['fields']['field_user_drupalorg_username']['field'] = 'field_user_drupalorg_username';
  $handler->display->display_options['fields']['field_user_drupalorg_username']['relationship'] = 'field_training_reg_attendee_target_id';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_user_first_name']['id'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['table'] = 'field_data_field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['field'] = 'field_user_first_name';
  $handler->display->display_options['fields']['field_user_first_name']['relationship'] = 'field_training_reg_attendee_target_id';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_last_name']['id'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['field'] = 'field_user_last_name';
  $handler->display->display_options['fields']['field_user_last_name']['relationship'] = 'field_training_reg_attendee_target_id';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_training_reg_attendee_target_id';
  /* Field: Training Registration: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Training Registration: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_training_reg';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Training Registration: Training Registration Fee Refunded */
  $handler->display->display_options['fields']['field_training_reg_refunded']['id'] = 'field_training_reg_refunded';
  $handler->display->display_options['fields']['field_training_reg_refunded']['table'] = 'field_data_field_training_reg_refunded';
  $handler->display->display_options['fields']['field_training_reg_refunded']['field'] = 'field_training_reg_refunded';
  $handler->display->display_options['fields']['field_training_reg_refunded']['label'] = 'Refunded?';
  $handler->display->display_options['fields']['field_training_reg_refunded']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_refunded']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_training_reg_refunded']['empty'] = 'NO';
  $handler->display->display_options['fields']['field_training_reg_refunded']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_training_reg_refunded']['type'] = 'list_key';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_training_location']['id'] = 'field_training_location';
  $handler->display->display_options['fields']['field_training_location']['table'] = 'field_data_field_training_location';
  $handler->display->display_options['fields']['field_training_location']['field'] = 'field_training_location';
  $handler->display->display_options['fields']['field_training_location']['relationship'] = 'field_training_reg_training_target_id';
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_training_room']['id'] = 'field_training_room';
  $handler->display->display_options['fields']['field_training_room']['table'] = 'field_data_field_training_room';
  $handler->display->display_options['fields']['field_training_room']['field'] = 'field_training_room';
  $handler->display->display_options['fields']['field_training_room']['relationship'] = 'field_training_reg_training_target_id';
  /* Field: User: I would like to volunteer at BADCamp */
  $handler->display->display_options['fields']['field_user_interest_volunteering']['id'] = 'field_user_interest_volunteering';
  $handler->display->display_options['fields']['field_user_interest_volunteering']['table'] = 'field_data_field_user_interest_volunteering';
  $handler->display->display_options['fields']['field_user_interest_volunteering']['field'] = 'field_user_interest_volunteering';
  $handler->display->display_options['fields']['field_user_interest_volunteering']['relationship'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time (field_training_date_time) */
  $handler->display->display_options['sorts']['field_training_date_time_value']['id'] = 'field_training_date_time_value';
  $handler->display->display_options['sorts']['field_training_date_time_value']['table'] = 'field_data_field_training_date_time';
  $handler->display->display_options['sorts']['field_training_date_time_value']['field'] = 'field_training_date_time_value';
  $handler->display->display_options['sorts']['field_training_date_time_value']['relationship'] = 'field_training_reg_training_target_id';
  /* Sort criterion: Training Registration: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'eck_training_reg';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: User: Last name (field_user_last_name) */
  $handler->display->display_options['sorts']['field_user_last_name_value']['id'] = 'field_user_last_name_value';
  $handler->display->display_options['sorts']['field_user_last_name_value']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['sorts']['field_user_last_name_value']['field'] = 'field_user_last_name_value';
  $handler->display->display_options['sorts']['field_user_last_name_value']['relationship'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Training Registration: training_reg type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_training_reg';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_reg' => 'training_reg',
  );
  /* Filter criterion: Training Registration: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'eck_training_reg';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Training';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Last name (field_user_last_name) */
  $handler->display->display_options['filters']['field_user_last_name_value']['id'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['table'] = 'field_data_field_user_last_name';
  $handler->display->display_options['filters']['field_user_last_name_value']['field'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['relationship'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['filters']['field_user_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator_id'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['operator'] = 'field_user_last_name_value_op';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['identifier'] = 'field_user_last_name_value';
  $handler->display->display_options['filters']['field_user_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = '!=';
  $handler->display->display_options['filters']['title_1']['value'] = 'Cancelled Registration';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['relationship'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['filters']['title_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_2']['expose']['operator_id'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_2']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title_2']['expose']['operator'] = 'title_2_op';
  $handler->display->display_options['filters']['title_2']['expose']['identifier'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'admin/badcamp/training/registrations/registration_by_training';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Training Attendees by Training';
  $handler->display->display_options['menu']['description'] = 'Training Attendees by Training';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Training Registrations';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';
  $export['training_registration_admin'] = $view;

  $view = new view();
  $view->name = 'user_trainings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_training_reg';
  $view->human_name = 'User Trainings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Trainings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_training_reg_training' => 'field_training_reg_training',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_training_reg_training' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_training_reg_training_target_id']['id'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['relationships']['field_training_reg_training_target_id']['table'] = 'field_data_field_training_reg_training';
  $handler->display->display_options['relationships']['field_training_reg_training_target_id']['field'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['relationships']['field_training_reg_training_target_id']['required'] = TRUE;
  /* Field: Training Registration: Training */
  $handler->display->display_options['fields']['field_training_reg_training']['id'] = 'field_training_reg_training';
  $handler->display->display_options['fields']['field_training_reg_training']['table'] = 'field_data_field_training_reg_training';
  $handler->display->display_options['fields']['field_training_reg_training']['field'] = 'field_training_reg_training';
  $handler->display->display_options['fields']['field_training_reg_training']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_training_date_time']['id'] = 'field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['table'] = 'field_data_field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['field'] = 'field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['relationship'] = 'field_training_reg_training_target_id';
  $handler->display->display_options['fields']['field_training_date_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_training_location']['id'] = 'field_training_location';
  $handler->display->display_options['fields']['field_training_location']['table'] = 'field_data_field_training_location';
  $handler->display->display_options['fields']['field_training_location']['field'] = 'field_training_location';
  $handler->display->display_options['fields']['field_training_location']['relationship'] = 'field_training_reg_training_target_id';
  /* Contextual filter: Training Registration: Attendee (field_training_reg_attendee) */
  $handler->display->display_options['arguments']['field_training_reg_attendee_target_id']['id'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['arguments']['field_training_reg_attendee_target_id']['table'] = 'field_data_field_training_reg_attendee';
  $handler->display->display_options['arguments']['field_training_reg_attendee_target_id']['field'] = 'field_training_reg_attendee_target_id';
  $handler->display->display_options['arguments']['field_training_reg_attendee_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_training_reg_attendee_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_training_reg_attendee_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_training_reg_attendee_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_training_reg_attendee_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_training_reg_attendee_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'My Trainings';
  $export['user_trainings'] = $view;

  return $export;
}
