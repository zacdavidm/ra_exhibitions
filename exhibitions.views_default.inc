<?php
/**
 * @file
 * exhibitions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function exhibitions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'exhibitions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Exhibitions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exhibitions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row padded">
<div class="medium-6 column">
[field_image]
</div>
<div class="medium-6 column">
<h2>[title]</h2>
[field_summary]
[view_node]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'exhibition' => 'exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Exhibition Span -  start date (field_exhibition_span) */
  $handler->display->display_options['filters']['field_exhibition_span_value']['id'] = 'field_exhibition_span_value';
  $handler->display->display_options['filters']['field_exhibition_span_value']['table'] = 'field_data_field_exhibition_span';
  $handler->display->display_options['filters']['field_exhibition_span_value']['field'] = 'field_exhibition_span_value';
  $handler->display->display_options['filters']['field_exhibition_span_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_exhibition_span_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_exhibition_span_value']['default_date'] = 'now';
  /* Filter criterion: Content: Exhibition Span - end date (field_exhibition_span:value2) */
  $handler->display->display_options['filters']['field_exhibition_span_value2']['id'] = 'field_exhibition_span_value2';
  $handler->display->display_options['filters']['field_exhibition_span_value2']['table'] = 'field_data_field_exhibition_span';
  $handler->display->display_options['filters']['field_exhibition_span_value2']['field'] = 'field_exhibition_span_value2';
  $handler->display->display_options['filters']['field_exhibition_span_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_exhibition_span_value2']['default_date'] = 'now';
  /* Filter criterion: Field: Run Dates -  start date (field_run_dates) */
  $handler->display->display_options['filters']['field_run_dates_value']['id'] = 'field_run_dates_value';
  $handler->display->display_options['filters']['field_run_dates_value']['table'] = 'field_data_field_run_dates';
  $handler->display->display_options['filters']['field_run_dates_value']['field'] = 'field_run_dates_value';
  $handler->display->display_options['filters']['field_run_dates_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_run_dates_value']['default_date'] = 'now';
  /* Filter criterion: Field: Run Dates - end date (field_run_dates:value2) */
  $handler->display->display_options['filters']['field_run_dates_value2']['id'] = 'field_run_dates_value2';
  $handler->display->display_options['filters']['field_run_dates_value2']['table'] = 'field_data_field_run_dates';
  $handler->display->display_options['filters']['field_run_dates_value2']['field'] = 'field_run_dates_value2';
  $handler->display->display_options['filters']['field_run_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_run_dates_value2']['default_date'] = 'now';

  /* Display: Current */
  $handler = $view->new_display('page', 'Current', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Current';
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
    'exhibition' => 'exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Run Dates -  start date (field_run_dates) */
  $handler->display->display_options['filters']['field_run_dates_value']['id'] = 'field_run_dates_value';
  $handler->display->display_options['filters']['field_run_dates_value']['table'] = 'field_data_field_run_dates';
  $handler->display->display_options['filters']['field_run_dates_value']['field'] = 'field_run_dates_value';
  $handler->display->display_options['filters']['field_run_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_run_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_run_dates_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_run_dates_value']['default_date'] = 'now';
  /* Filter criterion: Field: Run Dates - end date (field_run_dates:value2) */
  $handler->display->display_options['filters']['field_run_dates_value2']['id'] = 'field_run_dates_value2';
  $handler->display->display_options['filters']['field_run_dates_value2']['table'] = 'field_data_field_run_dates';
  $handler->display->display_options['filters']['field_run_dates_value2']['field'] = 'field_run_dates_value2';
  $handler->display->display_options['filters']['field_run_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_run_dates_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_run_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_run_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'exhibitions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Exhibitions';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Upcoming */
  $handler = $view->new_display('page', 'Upcoming', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming';
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
    'exhibition' => 'exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Run Dates -  start date (field_run_dates) */
  $handler->display->display_options['filters']['field_run_dates_value']['id'] = 'field_run_dates_value';
  $handler->display->display_options['filters']['field_run_dates_value']['table'] = 'field_data_field_run_dates';
  $handler->display->display_options['filters']['field_run_dates_value']['field'] = 'field_run_dates_value';
  $handler->display->display_options['filters']['field_run_dates_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_run_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_run_dates_value']['default_date'] = 'now';
  /* Filter criterion: Field: Run Dates - end date (field_run_dates:value2) */
  $handler->display->display_options['filters']['field_run_dates_value2']['id'] = 'field_run_dates_value2';
  $handler->display->display_options['filters']['field_run_dates_value2']['table'] = 'field_data_field_run_dates';
  $handler->display->display_options['filters']['field_run_dates_value2']['field'] = 'field_run_dates_value2';
  $handler->display->display_options['filters']['field_run_dates_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_run_dates_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_run_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'exhibitions/upcoming';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Upcoming';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Archive */
  $handler = $view->new_display('page', 'Archive', 'page_2');
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
    'exhibition' => 'exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Run Dates -  start date (field_run_dates) */
  $handler->display->display_options['filters']['field_run_dates_value']['id'] = 'field_run_dates_value';
  $handler->display->display_options['filters']['field_run_dates_value']['table'] = 'field_data_field_run_dates';
  $handler->display->display_options['filters']['field_run_dates_value']['field'] = 'field_run_dates_value';
  $handler->display->display_options['filters']['field_run_dates_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_run_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_run_dates_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_run_dates_value']['default_date'] = 'now';
  /* Filter criterion: Field: Run Dates - end date (field_run_dates:value2) */
  $handler->display->display_options['filters']['field_run_dates_value2']['id'] = 'field_run_dates_value2';
  $handler->display->display_options['filters']['field_run_dates_value2']['table'] = 'field_data_field_run_dates';
  $handler->display->display_options['filters']['field_run_dates_value2']['field'] = 'field_run_dates_value2';
  $handler->display->display_options['filters']['field_run_dates_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_run_dates_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_run_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_run_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'exhibitions/archive';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Archive';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Current Block */
  $handler = $view->new_display('block', 'Current Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Current Exhibitions';
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
    'exhibition' => 'exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Run Dates -  start date (field_run_dates) */
  $handler->display->display_options['filters']['field_run_dates_value']['id'] = 'field_run_dates_value';
  $handler->display->display_options['filters']['field_run_dates_value']['table'] = 'field_data_field_run_dates';
  $handler->display->display_options['filters']['field_run_dates_value']['field'] = 'field_run_dates_value';
  $handler->display->display_options['filters']['field_run_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_run_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_run_dates_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_run_dates_value']['default_date'] = 'now';
  /* Filter criterion: Field: Run Dates - end date (field_run_dates:value2) */
  $handler->display->display_options['filters']['field_run_dates_value2']['id'] = 'field_run_dates_value2';
  $handler->display->display_options['filters']['field_run_dates_value2']['table'] = 'field_data_field_run_dates';
  $handler->display->display_options['filters']['field_run_dates_value2']['field'] = 'field_run_dates_value2';
  $handler->display->display_options['filters']['field_run_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_run_dates_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_run_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_run_dates_value2']['default_date'] = 'now';
  $export['exhibitions'] = $view;

  return $export;
}
