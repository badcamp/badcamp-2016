<?php

/**
 * @file
 * Drush commands for Stripe module.
 */

/**
 * Implements hook_drush_help().
 */
function stripe_drush_help($section) {
  switch ($section) {
    case 'drush:stripe-library-download':
      return dt('Download the latest stable Stripe PHP Library.');
  }
}

/**
 * Implements hook_drush_command().
 */
function stripe_drush_command() {
  $items['stripe-library-download'] = array(
    'description' => 'Download the latest stable Stripe PHP Library.',
  );

  return $items;
}

/**
 * Command callback for drush_stripe_library_download.
 */
function drush_stripe_library_download() {
  $destination = DRUPAL_ROOT . '/sites/all/libraries';
  drush_log($destination);

  // Create sites/all/libraries if necessary.
  if (!is_dir($destination)) {
    drush_log(dt('The sites/all/libraries directory does not exist.'), 'warning');
    $confirm = drush_confirm(dt('Would you like to create it?'));
    if (!$confirm || !drush_mkdir($destination)) {
      drush_log(dt('Unable to download Stripe to sites/all/libraries.'), 'error');
      return FALSE;
    }
  }

  $path = drush_download_file('https://code.stripe.com/stripe-php-latest.tar.gz');
  drush_log($path);

  $file_list = drush_tarball_extract($path, $destination, TRUE);
  dlm($file_list);
  if (empty($file_list)) {
    drush_log(dt('Unable to extract the Stripe PHP Library.'), 'error');
    return FALSE;
  }

  // Now move the directory to sites/all/libraries/stripe.
  $directory = reset($file_list);
  if (!drush_move_dir("$destination/$directory", "$destination/stripe", TRUE)) {
    drush_log(dt('Unable to move the Stripe PHP Library to sites/all/libraries/stripe'), 'error');
    return FALSE;
  }

  // Parse the version number from the original directory.
  $version = str_replace('stripe-php-', '', $directory);
  $dt_args = array('@version' => rtrim($version, '/'));
  $message = dt('Copied the Stripe PHP Library version @version to sites/all/libraries/stripe.', $dt_args);
  drush_log($message, 'success');
}
