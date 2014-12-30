<?php
/**
 * @file
 * exhibitions.features.inc
 */

/**
 * Implements hook_node_info().
 */
function exhibitions_node_info() {
  $items = array(
    'exhibition' => array(
      'name' => t('Exhibition'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
