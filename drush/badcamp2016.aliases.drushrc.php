<?php

// Drupal VM.
$aliases['local'] = array(
  'uri' => 'badcamp2016.dev',
  'root' => '/var/www',
  'remote-host' => 'badcamp2016.dev',
  'remote-user' => 'vagrant',
  'ssh-options' => '-o PasswordAuthentication=no -i ' . drush_server_home() . '/.vagrant.d/insecure_private_key',
);

// CircleCI.
$aliases['circle'] = array(
  'uri' => 'badcamp2016.dev',
  'root' => '/home/ubuntu/badcamp-2016-artifact',
);
