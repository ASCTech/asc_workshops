<?php
/**
 * @file
 * asc_workshops.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asc_workshops_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer all signups.
  $permissions['administer all signups'] = array(
    'name' => 'administer all signups',
    'roles' => array(),
    'module' => 'signup',
  );

  // Exported permission: administer signups for own content.
  $permissions['administer signups for own content'] = array(
    'name' => 'administer signups for own content',
    'roles' => array(),
    'module' => 'signup',
  );

  // Exported permission: cancel own signups.
  $permissions['cancel own signups'] = array(
    'name' => 'cancel own signups',
    'roles' => array(),
    'module' => 'signup',
  );

  // Exported permission: cancel signups.
  $permissions['cancel signups'] = array(
    'name' => 'cancel signups',
    'roles' => array(),
    'module' => 'signup',
  );

  // Exported permission: create asc_workshop content.
  $permissions['create asc_workshop content'] = array(
    'name' => 'create asc_workshop content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create asc_workshop_course content.
  $permissions['create asc_workshop_course content'] = array(
    'name' => 'create asc_workshop_course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create asc_workshops_tutor_room content.
  $permissions['create asc_workshops_tutor_room content'] = array(
    'name' => 'create asc_workshops_tutor_room content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any asc_workshop content.
  $permissions['delete any asc_workshop content'] = array(
    'name' => 'delete any asc_workshop content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any asc_workshop_course content.
  $permissions['delete any asc_workshop_course content'] = array(
    'name' => 'delete any asc_workshop_course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any asc_workshops_tutor_room content.
  $permissions['delete any asc_workshops_tutor_room content'] = array(
    'name' => 'delete any asc_workshops_tutor_room content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own asc_workshop content.
  $permissions['delete own asc_workshop content'] = array(
    'name' => 'delete own asc_workshop content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own asc_workshop_course content.
  $permissions['delete own asc_workshop_course content'] = array(
    'name' => 'delete own asc_workshop_course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own asc_workshops_tutor_room content.
  $permissions['delete own asc_workshops_tutor_room content'] = array(
    'name' => 'delete own asc_workshops_tutor_room content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any asc_workshop content.
  $permissions['edit any asc_workshop content'] = array(
    'name' => 'edit any asc_workshop content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any asc_workshop_course content.
  $permissions['edit any asc_workshop_course content'] = array(
    'name' => 'edit any asc_workshop_course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any asc_workshops_tutor_room content.
  $permissions['edit any asc_workshops_tutor_room content'] = array(
    'name' => 'edit any asc_workshops_tutor_room content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own asc_workshop content.
  $permissions['edit own asc_workshop content'] = array(
    'name' => 'edit own asc_workshop content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own asc_workshop_course content.
  $permissions['edit own asc_workshop_course content'] = array(
    'name' => 'edit own asc_workshop_course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own asc_workshops_tutor_room content.
  $permissions['edit own asc_workshops_tutor_room content'] = array(
    'name' => 'edit own asc_workshops_tutor_room content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own signups.
  $permissions['edit own signups'] = array(
    'name' => 'edit own signups',
    'roles' => array(),
    'module' => 'signup',
  );

  // Exported permission: email all signed up users.
  $permissions['email all signed up users'] = array(
    'name' => 'email all signed up users',
    'roles' => array(),
    'module' => 'signup',
  );

  // Exported permission: email users signed up for own content.
  $permissions['email users signed up for own content'] = array(
    'name' => 'email users signed up for own content',
    'roles' => array(),
    'module' => 'signup',
  );

  // Exported permission: sign up for content.
  $permissions['sign up for content'] = array(
    'name' => 'sign up for content',
    'roles' => array(),
    'module' => 'signup',
  );

  // Exported permission: use PHP for title patterns.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: view all signups.
  $permissions['view all signups'] = array(
    'name' => 'view all signups',
    'roles' => array(),
    'module' => 'signup',
  );

  return $permissions;
}
