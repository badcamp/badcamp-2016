Stripe (https://stripe.com/) Payment Gateway integration with Drupal.

Description
-----------

This module provides API integration with the Stripe.com Payment Gateway. For
more information about the Drupal project, see the project page at
http://drupal.org/project/stripe.


Requirements
------------

- Drupal 7.x
- Libraries API


Installation
------------

Download the Stripe PHP library from
https://stripe.com/docs/libraries#php-library and place it in
sites/all/libraries so that "Stripe.php" is located at
sites/all/libraries/stripe/lib/Stripe.php.

Download the Stripe PHP library from drush
drush stripe-library-download

Working steadily with Stripe PHP Library version 3.9.0


Configuration
-------------

Log into your Stripe.com account and visit the "Account settings" area. Click
on the "API Keys" icon, and copy the values for Test Secret Key,
Test Publishable Key, Live Secret Key, and Live Publishable Key and paste them
into the module configuration under admin/config/stripe/settings.

Once your API keys are entered, you should be able to test that everything is
working by visiting the test form located at admin/config/stripe/test.


Developer instructions
----------------------
Instructions for developers can be found at https://drupal.org/node/2173795
