<?php

/**
 * @file
 * Describe hooks provided by the Stripe module.
 */

/**
 * Handle incoming Stripe webhook.
 *
 * Stripe sends requests to a URL defined in the Stripe webhooks manager.
 * When a single request is received from Stripe, this hook is invoked.
 *
 * You can reference https://stripe.com/docs/webhooks to learn more
 * about webhooks.
 *
 * Event types and descriptions are listed here: https://stripe.com/docs/api#event_types
 *
 * @param object $event
 *   An object of event data sent in from Stripe.
 */
function hook_stripe_webhook($event) {
  switch ($event->type) {
    case 'invoice.payment_succeeded':
      // You could send a custom invoice paid email here.
      break;

    case 'charge.refunded':
      // You could send an email with details about the refund here.
      break;
  }
}
