<?php
/**
 * @file
 * badcamp_scholarship_application.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function badcamp_scholarship_application_default_entityform_type() {
  $items = array();
  $items['scholarship_application'] = entity_import('entityform_type', '{
    "type" : "scholarship_application",
    "label" : "Scholarship application",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for applying for a scholarship! We will be making a decision regarding the recipients shortly and will be in contact with you if you are selected.\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThanks,\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EThe BADCamp team\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3", "5" : 0, "4" : 0, "6" : 0 },
      "resubmit_action" : "disallow",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EWe realize that many members of our community may not have the resources to attend BADCamp. For those facing significant hardship, we are proud to offer scholarships to reward those who contribute to the Drupal project. Whether you\\u0027ve contributed code, documentation, community organization or are an active member of your local users group, we\\u0027re interested in hearing your story.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EBADCamp scholarships will cover expenses towards airfare and lodgings.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EIf you\\u0027d like to contribute to our scholarship fund, please consider becoming an \\u003Ca href=\\u0022\\/registration\\/sponsorship\\u0022\\u003Eindividual sponsor\\u003C\\/a\\u003E as part of your registration.\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/scholarship-application",
        "alias" : "community\\/scholarship-application",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/scholarship-application\\/confirm",
        "alias" : "community\\/scholarship-application-confirm",
        "language" : "und"
      }
    }
  }');
  return $items;
}
