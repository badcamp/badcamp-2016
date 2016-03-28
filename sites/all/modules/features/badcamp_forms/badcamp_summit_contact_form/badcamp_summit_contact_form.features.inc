<?php
/**
 * @file
 * badcamp_summit_contact_form.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function badcamp_summit_contact_form_default_entityform_type() {
  $items = array();
  $items['summit_contact_form'] = entity_import('entityform_type', '{
    "type" : "summit_contact_form",
    "label" : "Summit contact form",
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
      "preview_page" : 1,
      "submission_page_title" : "Thank you",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for submitting a talk for a BADCamp Summit!\\u0026nbsp; One of the summit organizers will follow up with you about your application.\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "3" : "3", "1" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
