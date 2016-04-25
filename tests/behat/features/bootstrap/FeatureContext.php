<?php
/**
 * @file
 * Custom context.
 *
 * @link https://www.previousnext.com.au/blog/advanced-testing-drupal-emails-behat-and-testingmailsystem
 */

use Drupal\DrupalExtension\Context\RawDrupalContext;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends RawDrupalContext {
  protected $currentEmail = FALSE;

  /**
   * Enable the Drupal test email system.
   *
   * @Given /^the test email system is enabled$/
   */
  public function theTestEmailSystemIsEnabled() {
    // Set the mail system.
    variable_set('mail_system', array(
      'default-system' => 'TestingMailSystem',
    ));
    // Flush the email buffer.
    variable_set('drupal_test_email_collector', array());
  }

  /**
   * Check test emails for content in the subject or body.
   *
   * @Then /^the email to "([^"]*)" should contain "([^"]*)"$/
   */
  public function theEmailToShouldContain($to, $contents) {
    $sql_query = 'SELECT name ';
    $sql_query .= ', value ';
    $sql_query .= 'FROM {variable} ';
    $sql_query .= 'WHERE name = :name ';
    $variables = array_map('unserialize', db_query($sql_query, array(
      ':name' => 'drupal_test_email_collector',
    ))->fetchAllKeyed());
    $this->currentEmail = FALSE;
    foreach ($variables['drupal_test_email_collector'] as $message) {
      if ($message['to'] == $to) {
        $this->currentEmail = $message;
        if (strpos($message['body'], $contents) !== FALSE ||
          strpos($message['subject'], $contents) !== FALSE ||
          strpos($message['params']['body'], $contents) !== FALSE ||
          strpos($message['params']['subject'], $contents) !== FALSE) {
          return TRUE;
        }
        throw new \Exception('Did not find expected content in message body or subject.');
      }
    }
    throw new \Exception(sprintf('Did not find expected message to %s', $to));
  }

  /**
   * Check the last matched email for content.
   *
   * @Given /^the email should contain "([^"]*)"$/
   */
  public function theEmailShouldContain($contents) {
    if (!$this->currentEmail) {
      throw new \Exception('No active email');
    }
    $message = $this->currentEmail;
    if (strpos($message['body'], $contents) !== FALSE ||
      strpos($message['subject'], $contents) !== FALSE) {
      return TRUE;
    }
    throw new \Exception('Did not find expected content in message body or subject.');
  }

  /**
   * Follow a URL in an email.
   *
   * @When /^(?:|I )follow the email URL matching regex "(?P<regex>[^"]+)"$/
   */
  public function followEmailUrl($regex) {
    if (!$this->currentEmail) {
      throw new \Exception('No active email');
    }
    $message = $this->currentEmail;
    if (preg_match($regex, $message['body'], $matches)) {
      $this->visitPath($matches[0]);
    }
    else {
      throw new \Exception('Unable to find URL matching that regular expression.');
    }
  }

}
