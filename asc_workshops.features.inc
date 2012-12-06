<?php
/**
 * @file
 * asc_workshops.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function asc_workshops_block_class_features_default_class() {
  return array(
    0 => array(
      'module' => 'views',
      'delta' => '77b26e76628f4b068171a0aa7963eec0',
      'css_classes' => 'feautres',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_workshops_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function asc_workshops_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function asc_workshops_node_info() {
  $items = array(
    'asc_workshop' => array(
      'name' => t('Workshop'),
      'base' => 'node_content',
      'description' => t('A learning workshop or review. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'asc_workshop_course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('A Course served by the MSLC'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'asc_workshops_tutor_room' => array(
      'name' => t('Tutor Room'),
      'base' => 'node_content',
      'description' => t('A tutor room page for a given term.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
