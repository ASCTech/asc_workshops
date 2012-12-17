<?php
/**
 * @file
 * asc_workshops.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function asc_workshops_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_asc_workshop';
  $strongarm->value = 'edit-signup';
  $export['additional_settings__active_tab_asc_workshop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_asc_workshops_tutor_room';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_asc_workshops_tutor_room'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_asc_workshop_course';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_asc_workshop_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_asc_workshop';
  $strongarm->value = '1';
  $export['ant_asc_workshop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_asc_workshops_tutor_room';
  $strongarm->value = '1';
  $export['ant_asc_workshops_tutor_room'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_asc_workshop_course';
  $strongarm->value = '1';
  $export['ant_asc_workshop_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_asc_workshop';
  $strongarm->value = '[node:field_asc_workshop_course] [node:field_asc_workshop_worksho_title]';
  $export['ant_pattern_asc_workshop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_asc_workshops_tutor_room';
  $strongarm->value = '[node:field_evening] - [node:field_asc_workshop_location] - [node:field_term]';
  $export['ant_pattern_asc_workshops_tutor_room'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_asc_workshop_course';
  $strongarm->value = '[node:field_asc_workshops_subject] [node:field_asc_workshops_c_number]: [node:field_asc_workshops_course_name]';
  $export['ant_pattern_asc_workshop_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_asc_workshop';
  $strongarm->value = 0;
  $export['ant_php_asc_workshop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_asc_workshops_tutor_room';
  $strongarm->value = 0;
  $export['ant_php_asc_workshops_tutor_room'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_asc_workshop_course';
  $strongarm->value = 0;
  $export['ant_php_asc_workshop_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_workshops';
  $strongarm->value = 'D M d, g:ia';
  $export['date_format_workshops'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__asc_workshop';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'front_quick_text' => array(
        'custom_settings' => FALSE,
      ),
      'front_rotor_short' => array(
        'custom_settings' => FALSE,
      ),
      'front_rotor_tall' => array(
        'custom_settings' => FALSE,
      ),
      'front_text' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'signup' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__asc_workshop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__asc_workshops_tutor_room';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'front_rotor_short' => array(
        'custom_settings' => FALSE,
      ),
      'front_rotor_tall' => array(
        'custom_settings' => FALSE,
      ),
      'front_text' => array(
        'custom_settings' => FALSE,
      ),
      'front_quick_text' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'signup' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__asc_workshops_tutor_room'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__asc_workshop_course';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'front_rotor_short' => array(
        'custom_settings' => FALSE,
      ),
      'front_rotor_tall' => array(
        'custom_settings' => FALSE,
      ),
      'front_text' => array(
        'custom_settings' => FALSE,
      ),
      'front_quick_text' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(
        'signup' => array(
          'default' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__asc_workshop_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_asc_workshop';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_asc_workshop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_asc_workshops_tutor_room';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_asc_workshops_tutor_room'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_asc_workshop_course';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_asc_workshop_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_asc_workshop';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_asc_workshop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_asc_workshops_tutor_room';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_asc_workshops_tutor_room'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_asc_workshop_course';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_asc_workshop_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_asc_workshop';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_asc_workshop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_asc_workshops_tutor_room';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_asc_workshops_tutor_room'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_asc_workshop_course';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_asc_workshop_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_asc_workshop';
  $strongarm->value = '1';
  $export['node_preview_asc_workshop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_asc_workshops_tutor_room';
  $strongarm->value = '1';
  $export['node_preview_asc_workshops_tutor_room'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_asc_workshop_course';
  $strongarm->value = '1';
  $export['node_preview_asc_workshop_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_asc_workshop';
  $strongarm->value = 0;
  $export['node_submitted_asc_workshop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_asc_workshops_tutor_room';
  $strongarm->value = 0;
  $export['node_submitted_asc_workshops_tutor_room'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_asc_workshop_course';
  $strongarm->value = 0;
  $export['node_submitted_asc_workshop_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_asc_workshops_tutor_room_pattern';
  $strongarm->value = '';
  $export['pathauto_node_asc_workshops_tutor_room_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_asc_workshop_course_pattern';
  $strongarm->value = 'courses/[node:field_asc_workshops_subject]/[node:field_asc_workshops_c_number]';
  $export['pathauto_node_asc_workshop_course_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_asc_workshop_pattern';
  $strongarm->value = 'workshops/[node:nid]';
  $export['pathauto_node_asc_workshop_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_admin_list_view';
  $strongarm->value = 'signup_user_admin_list:default';
  $export['signup_admin_list_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_close_early';
  $strongarm->value = '1';
  $export['signup_close_early'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_date_field_asc_workshop';
  $strongarm->value = 'field_date';
  $export['signup_date_field_asc_workshop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_date_field_asc_workshops_tutor_room';
  $strongarm->value = '0';
  $export['signup_date_field_asc_workshops_tutor_room'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_date_field_asc_workshop_course';
  $strongarm->value = '0';
  $export['signup_date_field_asc_workshop_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_date_format';
  $strongarm->value = 'small';
  $export['signup_date_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_display_signup_admin_list';
  $strongarm->value = 'embed-view';
  $export['signup_display_signup_admin_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_display_signup_user_list';
  $strongarm->value = 'embed-view';
  $export['signup_display_signup_user_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_fieldset_collapsed';
  $strongarm->value = '1';
  $export['signup_fieldset_collapsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_form_location';
  $strongarm->value = 'node';
  $export['signup_form_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_ignore_default_fields';
  $strongarm->value = 1;
  $export['signup_ignore_default_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_node_default_state_asc_workshop';
  $strongarm->value = 'enabled_on';
  $export['signup_node_default_state_asc_workshop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_node_default_state_asc_workshops_tutor_room';
  $strongarm->value = 'disabled';
  $export['signup_node_default_state_asc_workshops_tutor_room'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_node_default_state_asc_workshop_course';
  $strongarm->value = 'disabled';
  $export['signup_node_default_state_asc_workshop_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_user_list_view';
  $strongarm->value = 'signup_user_list:default';
  $export['signup_user_list_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'signup_user_reg_form';
  $strongarm->value = 0;
  $export['signup_user_reg_form'] = $strongarm;

  return $export;
}
