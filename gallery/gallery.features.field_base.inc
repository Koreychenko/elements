<?php
/**
 * @file
 * gallery.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function gallery_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_gallery'.
  $field_bases['field_gallery'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gallery',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_gallery_size'.
  $field_bases['field_gallery_size'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gallery_size',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        3 => 'Три в ряд',
        4 => 'Четыре в ряд',
        6 => 'Шесть в ряд',
        12 => 'Двенадцать в ряд',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );


  return $field_bases;
}
