#!/usr/bin/env bash
cwd=$(pwd)

echo "Downloading latest version of Drupal VM to temporary directory..."
cd /tmp
rm -Rf drupal-vm
git clone git@github.com:geerlingguy/drupal-vm.git

echo "Erasing old provisioning directory..."
rm -Rf $cwd/provisioning

echo "Copying provisioning..."
cp -R drupal-vm/provisioning $cwd/provisioning

echo "Overwriting Vagrantfile..."

cp drupal-vm/Vagrantfile $cwd/Vagrantfile

echo "Updating example configuration..."
cp drupal-vm/example.config.yml $cwd/example.config.yml

if [ ! -f "$cwd/config.yml" ]
then
  echo "Copying configuration, you'll want to modify the config.yml"
  cp drupal-vm/example.config.yml $cwd/config.yml
else
  echo "Configuration differences:"
  diff drupal-vm/example.config.yml $cwd/config.yml
fi
