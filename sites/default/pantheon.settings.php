<?php
/**
 * @file
 * Pantheon settings.
 */

// Web requests.
if (isset($_SERVER['PANTHEON_ENVIRONMENT'])) {
  // Live.
  if ($_SERVER['PANTHEON_ENVIRONMENT'] === 'live') {
    // Require SSL and/or redirect the live environment domain.
    if (FALSE && (!isset($_SERVER['HTTP_X_SSL']) ||
      (isset($_SERVER['HTTP_X_SSL']) && $_SERVER['HTTP_X_SSL'] != 'ON') ||
      $_SERVER['HTTP_HOST'] == "live-badcamp-2016-artifact.pantheonsite.io")) {
      header('HTTP/1.0 301 Moved Permanently');
      header('Location: https://2016.badcamp.net'. $_SERVER['REQUEST_URI']);
      exit();
    }
    // Stripe.
    $conf['stripe_key_status'] = 'live';
  }
  // Test.
  elseif ($_SERVER['PANTHEON_ENVIRONMENT'] === 'test') {
    // Stripe.
    $conf['stripe_key_status'] = 'test';
  }
  // Development.
  else {
    // Stripe.
    $conf['stripe_key_status'] = 'test';
  }
}

$conf['master_current_scope'] = PANTHEON_ENVIRONMENT;

// Use Redis for caching.
$conf['redis_client_interface'] = 'PhpRedis';
$conf['cache_backends'][] = 'sites/all/modules/contrib/redis/redis.autoload.inc';
$conf['cache_default_class'] = 'Redis_Cache';
$conf['cache_prefix'] = array('default' => 'pantheon-redis');
// Do not use Redis for cache_form (no performance difference).
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
// Use Redis for Drupal locks (semaphore).
$conf['lock_inc'] = 'sites/all/modules/contrib/redis/redis.lock.inc';
