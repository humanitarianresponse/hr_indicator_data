<?php
/**
 * @file
 * hr_indicator_data.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_indicator_data_user_default_permissions() {
  $permissions = array();

  // Exported permission: create indicator_data content.
  $permissions['create indicator_data content'] = array(
    'name' => 'create indicator_data content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any indicator_data content.
  $permissions['delete any indicator_data content'] = array(
    'name' => 'delete any indicator_data content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own indicator_data content.
  $permissions['delete own indicator_data content'] = array(
    'name' => 'delete own indicator_data content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any indicator_data content.
  $permissions['edit any indicator_data content'] = array(
    'name' => 'edit any indicator_data content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own indicator_data content.
  $permissions['edit own indicator_data content'] = array(
    'name' => 'edit own indicator_data content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
