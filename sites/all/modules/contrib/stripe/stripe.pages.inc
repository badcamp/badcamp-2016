<?php
/**
 * @file
 * Page callbacks for the stripe module.
 */

/**
 * Handler for incoming Stripe Webhook requests.
 */
function stripe_webhooks_callback() {
  if (($library = libraries_load('stripe')) && !empty($library['loaded'])) {
    // Read in and decode the event data.
    $body = @file_get_contents('php://input');
    $event = json_decode($body);
    // Log event in watchdog.
    if (variable_get('stripe_log_webhooks', 0) == 1) {
      watchdog('stripe', 'Stripe Webhook %type: <pre>@event</pre>', array(
        '%type' => (is_object($event) && isset($event->type)) ? $event->type : t('<undefined>'),
        '@event' => print_r($event, TRUE),
      ), WATCHDOG_DEBUG);
    }
    // For additional security - retrieve event data from ID.
    if (is_object($event) && isset($event->id)) {
      $event = \Stripe\Event::retrieve($event->id);
      if (is_object($event) && isset($event->id)) {
        module_invoke_all('stripe_webhook', $event);
        return 'OK';
      }
    }
  }

  // Something went wrong if we got here so return 404. If it is in fact
  // coming from Stripe, they will attempt to resend it for 3 days.
  drupal_not_found();
}
