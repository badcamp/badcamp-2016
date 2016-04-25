<?php
/**
 * @file
 * Secret configuration settings for the site.
 */

// Database.
$databases = array(
  'default' => array(
    'default' => array(
      'database' => 'drupal',
      'username' => 'drupal',
      'password' => 'drupal',
      'host' => 'localhost',
      'driver' => 'mysql',
    ),
  ),
);

$drupal_hash_salt = '';
