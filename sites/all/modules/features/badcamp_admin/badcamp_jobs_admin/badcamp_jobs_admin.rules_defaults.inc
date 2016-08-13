<?php
/**
 * @file
 * badcamp_jobs_admin.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function badcamp_jobs_admin_default_rules_configuration() {
  $items = array();
  $items['rules_show_sponsorship_message_to_unqualified_job_posters'] = entity_import('rules_config', '{ "rules_show_sponsorship_message_to_unqualified_job_posters" : {
      "LABEL" : "Show sponsorship message to unqualified job posters",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "jobs" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "init" : [] },
      "IF" : [
        { "text_matches" : {
            "text" : [ "site:current-page:path" ],
            "match" : "node\\/add\\/job-posting",
            "operation" : "ends"
          }
        },
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1", "3" : "3", "4" : "4", "6" : "6" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "You must be at least a Supporting Sponsor of BADCamp to post a job. If you are a sponsor and are still seeing this message, please email Anne Stefanyk (anne@badcamp.net). She will upgrade your account to give you the correct permissions. \\r\\nThank you!",
            "type" : "error"
          }
        }
      ]
    }
  }');
  return $items;
}
