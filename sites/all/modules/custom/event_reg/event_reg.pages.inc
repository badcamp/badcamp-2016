<?php
/**
 * @file
 * Event registration submission handler.
 */

/**
 * Event registration submission.
 */
function event_reg_registration_submission($node) {
  global $user;

  // Create a Event Registration entity for this event and user.
  $entity_type = 'event_reg';
  $entity = entity_create($entity_type, array('type' => 'event_reg'));
  $wrapper = entity_metadata_wrapper($entity_type, $entity);
  $wrapper->field_event_reg_event = $node;
  $wrapper->field_event_reg_attendee = $user;
  $wrapper->save();

  drupal_set_message(t('Success! You are now registered for: @name',
    array('@name' => $node->title)));

  drupal_goto('node/' . $node->nid);
}
