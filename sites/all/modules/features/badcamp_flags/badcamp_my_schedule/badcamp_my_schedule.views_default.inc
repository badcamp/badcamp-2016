<?php
/**
 * @file
 * badcamp_my_schedule.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function badcamp_my_schedule_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'my_schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Schedule';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Schedule';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'user_and_role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['access']['contextual_match'] = 1;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: my_schedule */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'my_schedule';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'flagging';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'flag_content_rel';
  /* Field: Content: Session time slot */
  $handler->display->display_options['fields']['field_session_time_slot']['id'] = 'field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['table'] = 'field_data_field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['field'] = 'field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['label'] = '';
  $handler->display->display_options['fields']['field_session_time_slot']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_session_time_slot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time_slot']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Event display date and time */
  $handler->display->display_options['fields']['field_event_date_and_time']['id'] = 'field_event_date_and_time';
  $handler->display->display_options['fields']['field_event_date_and_time']['table'] = 'field_data_field_event_date_and_time';
  $handler->display->display_options['fields']['field_event_date_and_time']['field'] = 'field_event_date_and_time';
  $handler->display->display_options['fields']['field_event_date_and_time']['ui_name'] = 'Event display date and time';
  $handler->display->display_options['fields']['field_event_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_and_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Session room */
  $handler->display->display_options['fields']['field_session_room']['id'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['fields']['field_session_room']['field'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['label'] = 'Room';
  $handler->display->display_options['fields']['field_session_room']['alter']['text'] = 'Room: [field_session_room]';
  $handler->display->display_options['fields']['field_session_room']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_session_room']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_session_room']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_session_room']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_room']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_room']['empty_zero'] = TRUE;
  /* Field: Content: Event venue */
  $handler->display->display_options['fields']['field_event_venue']['id'] = 'field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['table'] = 'field_data_field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['field'] = 'field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['label'] = 'Venue';
  $handler->display->display_options['fields']['field_event_venue']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_event_venue']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_event_venue']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_venue']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_venue']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_venue']['empty_zero'] = TRUE;
  /* Field: Event grouping date */
  $handler->display->display_options['fields']['field_event_date_and_time_1']['id'] = 'field_event_date_and_time_1';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['table'] = 'field_data_field_event_date_and_time';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['field'] = 'field_event_date_and_time';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['ui_name'] = 'Event grouping date';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_and_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_and_time_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Session grouping date */
  $handler->display->display_options['fields']['field_session_date_and_time_1']['id'] = 'field_session_date_and_time_1';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['table'] = 'field_data_field_session_date_and_time';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['field'] = 'field_session_date_and_time';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['ui_name'] = 'Session grouping date';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_date_and_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_date_and_time_1']['empty'] = 'Date/Time TBD';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_event_date_and_time_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['empty'] = '[field_session_date_and_time_1]';
  /* Sort criterion: Content: Session date and time (field_session_date_and_time) */
  $handler->display->display_options['sorts']['field_session_date_and_time_value']['id'] = 'field_session_date_and_time_value';
  $handler->display->display_options['sorts']['field_session_date_and_time_value']['table'] = 'field_data_field_session_date_and_time';
  $handler->display->display_options['sorts']['field_session_date_and_time_value']['field'] = 'field_session_date_and_time_value';
  /* Sort criterion: Content: Event date and time -  start date (field_event_date_and_time) */
  $handler->display->display_options['sorts']['field_event_date_and_time_value']['id'] = 'field_event_date_and_time_value';
  $handler->display->display_options['sorts']['field_event_date_and_time_value']['table'] = 'field_data_field_event_date_and_time';
  $handler->display->display_options['sorts']['field_event_date_and_time_value']['field'] = 'field_event_date_and_time_value';
  /* Contextual filter: Flags: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'flagging';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: My Schedule */
  $handler = $view->new_display('page', 'My Schedule', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_session_time_slot',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Event grouping date */
  $handler->display->display_options['fields']['field_event_date_and_time_1']['id'] = 'field_event_date_and_time_1';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['table'] = 'field_data_field_event_date_and_time';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['field'] = 'field_event_date_and_time';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['ui_name'] = 'Event grouping date';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_and_time_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_and_time_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_event_date_and_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_and_time_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_and_time_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_and_time_1']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Session grouping date */
  $handler->display->display_options['fields']['field_session_date_and_time_1']['id'] = 'field_session_date_and_time_1';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['table'] = 'field_data_field_session_date_and_time';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['field'] = 'field_session_date_and_time';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['ui_name'] = 'Session grouping date';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_date_and_time_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_date_and_time_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_session_date_and_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_date_and_time_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_date_and_time_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_session_date_and_time_1']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Session Time Slot */
  $handler->display->display_options['fields']['field_session_time_slot']['id'] = 'field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['table'] = 'field_data_field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['field'] = 'field_session_time_slot';
  $handler->display->display_options['fields']['field_session_time_slot']['ui_name'] = 'Session Time Slot';
  $handler->display->display_options['fields']['field_session_time_slot']['label'] = '';
  $handler->display->display_options['fields']['field_session_time_slot']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_time_slot']['element_type'] = '0';
  $handler->display->display_options['fields']['field_session_time_slot']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_session_time_slot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time_slot']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_session_time_slot']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_time_slot']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_time_slot']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_session_time_slot']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Event display date and time */
  $handler->display->display_options['fields']['field_event_date_and_time']['id'] = 'field_event_date_and_time';
  $handler->display->display_options['fields']['field_event_date_and_time']['table'] = 'field_data_field_event_date_and_time';
  $handler->display->display_options['fields']['field_event_date_and_time']['field'] = 'field_event_date_and_time';
  $handler->display->display_options['fields']['field_event_date_and_time']['ui_name'] = 'Event display date and time';
  $handler->display->display_options['fields']['field_event_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_and_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_and_time']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_and_time']['settings'] = array(
    'format_type' => 'time_only',
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Session room */
  $handler->display->display_options['fields']['field_session_room']['id'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['table'] = 'field_data_field_session_room';
  $handler->display->display_options['fields']['field_session_room']['field'] = 'field_session_room';
  $handler->display->display_options['fields']['field_session_room']['label'] = 'Room';
  $handler->display->display_options['fields']['field_session_room']['alter']['text'] = 'Room: [field_session_room]';
  $handler->display->display_options['fields']['field_session_room']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_session_room']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_session_room']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_session_room']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_session_room']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_session_room']['empty_zero'] = TRUE;
  /* Field: Content: Event venue */
  $handler->display->display_options['fields']['field_event_venue']['id'] = 'field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['table'] = 'field_data_field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['field'] = 'field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['label'] = 'Venue';
  $handler->display->display_options['fields']['field_event_venue']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_event_venue']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_event_venue']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_venue']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_venue']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_venue']['empty_zero'] = TRUE;
  /* Field: Combined Event and Session grouping date */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Combined Event and Session grouping date';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_event_date_and_time_1][field_session_date_and_time_1]';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['empty'] = '[field_session_date_and_time_1]';
  $handler->display->display_options['path'] = 'user/%/my-schedule';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Schedule';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trainings';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_training_date_time',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_training_reg_training_training_reg']['id'] = 'reverse_field_training_reg_training_training_reg';
  $handler->display->display_options['relationships']['reverse_field_training_reg_training_training_reg']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_training_reg_training_training_reg']['field'] = 'reverse_field_training_reg_training_training_reg';
  $handler->display->display_options['relationships']['reverse_field_training_reg_training_training_reg']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_training_date_time_1']['id'] = 'field_training_date_time_1';
  $handler->display->display_options['fields']['field_training_date_time_1']['table'] = 'field_data_field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time_1']['field'] = 'field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_training_date_time_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_date_time_1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_training_date_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_date_time_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_training_date_time_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_training_date_time_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_training_date_time_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_training_date_time_1']['settings'] = array(
    'format_type' => 'time_only',
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
  $handler->display->display_options['fields']['title']['label'] = 'Training';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: grouping date */
  $handler->display->display_options['fields']['field_training_date_time']['id'] = 'field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['table'] = 'field_data_field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['field'] = 'field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['ui_name'] = 'grouping date';
  $handler->display->display_options['fields']['field_training_date_time']['label'] = '';
  $handler->display->display_options['fields']['field_training_date_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_date_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_date_time']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_training_date_time']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_training_date_time']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_training_location']['id'] = 'field_training_location';
  $handler->display->display_options['fields']['field_training_location']['table'] = 'field_data_field_training_location';
  $handler->display->display_options['fields']['field_training_location']['field'] = 'field_training_location';
  $handler->display->display_options['fields']['field_training_location']['label'] = '';
  $handler->display->display_options['fields']['field_training_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_training_location']['empty_zero'] = TRUE;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_training_room']['id'] = 'field_training_room';
  $handler->display->display_options['fields']['field_training_room']['table'] = 'field_data_field_training_room';
  $handler->display->display_options['fields']['field_training_room']['field'] = 'field_training_room';
  $handler->display->display_options['fields']['field_training_room']['label'] = '';
  $handler->display->display_options['fields']['field_training_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_training_room']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_training_room']['alter']['text'] = ' Room: [field_training_room]';
  $handler->display->display_options['fields']['field_training_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_room']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_training_room']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_training_room']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Combined Location and Room */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Combined Location and Room';
  $handler->display->display_options['fields']['nothing']['label'] = 'Venue';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_training_location][field_training_room]';
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date and Time -  start date (field_training_date_time) */
  $handler->display->display_options['sorts']['field_training_date_time_value']['id'] = 'field_training_date_time_value';
  $handler->display->display_options['sorts']['field_training_date_time_value']['table'] = 'field_data_field_training_date_time';
  $handler->display->display_options['sorts']['field_training_date_time_value']['field'] = 'field_training_date_time_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Training Registration: Author */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'eck_training_reg';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_field_training_reg_training_training_reg';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = '!=';
  $handler->display->display_options['filters']['title']['value'] = 'Cancelled Registration';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['my_schedule'] = $view;

  return $export;
}
