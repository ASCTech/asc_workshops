<?php
/**
 * @file
 * asc_workshops.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function asc_workshops_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'views-77b26e76628f4b068171a0aa7963eec0' => array(
      'delta' => '77b26e76628f4b068171a0aa7963eec0',
      'module' => 'views',
    ),
    'views-asc_workshops_courses-block_1' => array(
      'delta' => 'asc_workshops_courses-block_1',
      'module' => 'views',
      'node_type' => array(
        'asc_workshop_course' => TRUE,
      ),
    ),
  );

  // q7
  $theme = array();

  $theme['views-77b26e76628f4b068171a0aa7963eec0'] = array(
    'module' => 'views',
    'delta' => '77b26e76628f4b068171a0aa7963eec0',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-21',
    'region' => 'preface_first',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => 'Upcoming Workshops',
    'cache' => -1,
  );

  $theme['views-asc_workshops_courses-block_1'] = array(
    'module' => 'views',
    'delta' => 'asc_workshops_courses-block_1',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['q7'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
