<?php
/**
 * @file
 * todo.features.inc
 */

/**
 * Implements hook_node_info().
 */
function todo_node_info() {
  $items = array(
    'todo_task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('Task to add to to do list.'),
      'has_title' => '1',
      'title_label' => t('Task'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
