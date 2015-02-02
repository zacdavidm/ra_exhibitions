<?php
/**
 * @file
 * exhibitions.features.inc
 */

/**
 * Implements hook_views_api().
 */
function exhibitions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function exhibitions_node_info() {
  $items = array(
    'exhibition' => array(
      'name' => t('Exhibition'),
      'base' => 'node_content',
      'description' => t('List an exhibition that covers a span of time.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
