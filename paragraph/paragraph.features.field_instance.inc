<?php
/**
 * @file
 * paragraph.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function paragraph_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'fieldable_panels_pane-paragraph-field_paragraph_image'.
  $field_instances['fieldable_panels_pane-paragraph-field_paragraph_image'] = array(
    'bundle' => 'paragraph',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'colorbox',
        'settings' => array(
          'colorbox_caption' => 'auto',
          'colorbox_caption_custom' => '',
          'colorbox_gallery' => 'post',
          'colorbox_gallery_custom' => '',
          'colorbox_image_style' => '',
          'colorbox_multivalue_index' => NULL,
          'colorbox_node_style' => 'paragraph_image',
          'colorbox_node_style_first' => '',
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'colorbox',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_paragraph_image',
    'label' => 'Изображение',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 'clipboard',
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 'remote',
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-paragraph-field_paragraph_image_position'.
  $field_instances['fieldable_panels_pane-paragraph-field_paragraph_image_position'] = array(
    'bundle' => 'paragraph',
    'default_value' => array(
      0 => array(
        'value' => 'left',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_paragraph_image_position',
    'label' => 'Положение картинки',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-paragraph-field_paragraph_text'.
  $field_instances['fieldable_panels_pane-paragraph-field_paragraph_text'] = array(
    'bundle' => 'paragraph',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_paragraph_text',
    'label' => 'Текст',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-paragraph-title_field'.
  $field_instances['fieldable_panels_pane-paragraph-title_field'] = array(
    'bundle' => 'paragraph',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A field replacing fieldable panel pane title.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => FALSE,
    'settings' => array(
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A field replacing fieldable panel pane title.');
  t('Title');
  t('Изображение');
  t('Положение картинки');
  t('Текст');

  return $field_instances;
}
