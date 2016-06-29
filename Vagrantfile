# Require plugins.
required_plugins = %w(vagrant-hostsupdater vagrant-auto_network vagrant-cachier)
plugin_installed = false
required_plugins.each do |plugin|
  unless Vagrant.has_plugin?(plugin)
    system "vagrant plugin install #{plugin}"
    plugin_installed = true
  end
end

# If new plugins installed, restart Vagrant process
if plugin_installed === true
  exec "vagrant #{ARGV.join' '}"
end

require 'pathname'
require 'fileutils'
if File.exist?('./config.yml')
  FileUtils.cp('./config.yml', './vendor/geerlingguy/drupal-vm/config.yml');
end
if File.exist?('./Vagrantfile.local')
  FileUtils.cp('./Vagrantfile.local', './vendor/geerlingguy/drupal-vm/Vagrantfile.local');
end

dir = File.dirname(__FILE__) + '/'
load dir + "vendor/geerlingguy/drupal-vm/Vagrantfile"
