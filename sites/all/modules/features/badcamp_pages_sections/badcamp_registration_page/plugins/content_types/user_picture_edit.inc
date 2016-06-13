<?php
/**
 * @file
 * Provide user picture form element.
 */

$plugin = array(
  'single' => TRUE,
  'render last' => TRUE,
  'title' => t('User Picture'),
  'description' => t('The user picture element'),
  'required context' => new ctools_context_required(t('Form'), 'form'),
  'category' => t('Form'),
);

/**
 * Render the user_picture field from the user edit form.
 */
function badcamp_registration_page_user_picture_edit_content_type_render($subtype, $conf, $panel_args, &$context) {
  $block = new stdClass();
  $block->module = 'form';

  if (isset($context->form)) {
    if (isset($context->form['picture'])) {
      $context->form['picture']['#title_display'] = 'invisible';
      $block->content = $context->form['picture'];
      unset($context->form['picture']);
      $block->content['#title'] = NULL;
    }
    $block->delta = $context->form_id;
  }
  else {
    $block->title = t('User Picture');
    $block->content = t('User picture goes here.');
    $block->delta   = 'unknown';
  }
  return $block;
}
