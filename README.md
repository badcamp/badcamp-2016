# Bay Area Drupal Camp 2016

Build status: ![CircleCI](https://circleci.com/gh/badcamp/badcamp-2016-artifact.png)

## Development

BADCamp continues its commitment to open-source development by open-sourcing
itself!

Submit pull requests to https://github.com/badcamp/badcamp-2016-artifact

Visit http://editorconfig.org/ for instructions on how to configure your IDE or
editor to use the included `.editorconfig` file.

You are welcome to use any local development environment you'd like, but a
DrupalVM configuration is included for your convenience and is preferred.

### DrupalVM

http://www.drupalvm.com/

#### Dependencies

* VirtualBox: 5.x
* Vagrant: 1.7.x
* Ansible (optional, but recommended): 1.9.x

##### Mac

```bash
brew cask install virtualbox
brew cask install vagrant
brew install ansible
```

#### Vagrant

Two plugins are required.

```bash
vagrant plugin install vagrant-hostsupdater
vagrant plugin install vagrant-auto_network
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

Edit config.yml and update the local path to wherever you cloned the repo:

```yml
vagrant_synced_folders:
  - local_path: CHANGEME
```

Mac or Linux only:

```bash
# Install Ansible Galaxy roles required for this VM.
sudo ansible-galaxy install -r provisioning/requirements.yml --force
```

Complete the installation:

```bash
# Copy Drush aliases.
cp ./drush/badcamp2016.aliases.drushrc.php ~/.drush
# Clear Drush cache.
drush cc drush
# Turn on Drupal VM.
vagrant up
```

Configure Drush to use the site:

```bash
drush site-set @badcamp2016.local
```

#### Testing

Uses the [Drupal Extension](http://behat-drupal-extension.readthedocs.org/en/3.1/index.html) to Behat and Mink.

```bash
./scripts/behat.sh
```

#### Turning it off

```bash
vagrant halt
```
