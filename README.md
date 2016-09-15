# Bay Area Drupal Camp 2016

## Development

BADCamp continues its commitment to open-source development by open-sourcing
itself!

Submit pull requests to https://github.com/badcamp/badcamp-2016-artifact

Visit http://editorconfig.org/ for instructions on how to configure your IDE or
editor to use the included `.editorconfig` file.

You are welcome to use any local development environment you'd like, but a
DrupalVM configuration is included for your convenience and is preferred.

### Drupal VM

http://www.drupalvm.com/

#### Dependencies

* VirtualBox: 5.x
* Vagrant: 1.7.x
* Ansible: 1.9.x

##### Mac

```bash
brew cask install virtualbox
brew cask install vagrant
brew install ansible
```

#### Getting started

Prepare the local site:

```bash
composer install
npm install
```

Configure:

```bash
cp custom.config.yml config.yml
```

Complete the installation:

```bash
# Copy Drush aliases.
cp ./drush/badcamp2016.aliases.drushrc.php ~/.drush
# Clear Drush cache.
drush cc drush
# Turn on Drupal VM.
vagrant up
# Create local settings.
./scripts/local_settings.sh
# Install.
./scripts/install.sh
```

Configure Drush to use the site:

```bash
drush site-set @badcamp2016.local
```

#### Turning it off

```bash
vagrant halt
```
