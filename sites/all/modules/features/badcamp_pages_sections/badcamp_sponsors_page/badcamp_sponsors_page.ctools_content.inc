<?php
/**
 * @file
 * badcamp_sponsors_page.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function badcamp_sponsors_page_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'badcamp_sponsor_packages';
  $content->admin_title = 'BADCamp Sponsor packages';
  $content->admin_description = 'Main content for the BADCamp Sponsor packages page';
  $content->category = 'BADCamp';
  $content->settings = array(
    'admin_title' => 'BADCamp Sponsor packages',
    'title' => 'Sponsor packages',
    'body' => '<p>Our entire Bay Area Drupal community is looking forward to our most magical BADCamp ever and hope you can join the all-star lineup of luminary developers and business leaders.</p>

<h2><strong>BADCamp</strong> Sponsorship: $2,500 [up to 22]</h2>

<ul>
	<li>Publicity + Marketing
	<ul>
		<li>Access to all BADCamp attendees through our prominent sponsorship space (6 foot table/booth) from Friday afternoon (4pm) to Sunday afternoon (4pm).</li>
		<li>Prominent brand visibility on the website, event banner, and printed program thanking you for helping to make BADCamp free and awesome.</li>
		<li>Promotion of your company’s brand or products through BADCamp’s social media channels (Twitter, Facebook)</li>
		<li>Ability to showcase sponsorship through a custom designed badge you can use on your website or marketing communication.</li>
	</ul>
	</li>
	<li>Jobs + Recruitment
	<ul>
		<li>Ability to post open unlimited jobs to our online BADCamp job board (last year’s board:<a href="https://2015.badcamp.net/jobs"> https://2015.badcamp.net/jobs</a>)</li>
		<li>Ability to be included in an email to all attendees who checked “I\'m interested in information about Drupal job opportunities” during registration.</li>
	</ul>
	</li>
	<li>Unlimited tickets to BADCamp &amp; much BADCamp love for your many fans and followers.</li>
</ul>

<h2><strong>Summit</strong> Sponsorship: +$1,500</h2>

<p><em>Non Profit, Higher Education, Content Authoring, Security &amp; Privacy, Config Management, Core Dev and Front-end </em></p>

<ul>
	<li>Prominent brand visibility on summit website, summit signage, &amp; printed program.</li>
	<li>Ability to speak to summit attendees for 5-10 minutes on a topic of your choosing.</li>
	<li>Access to summit attendees via sponsorship table space during the summit event.</li>
</ul>

<h2><strong>Supporting</strong> Sponsorship: $350 [unlimited]</h2>

<ul>
	<li>Brand visibility on the website, event banner, and printed program thanking you for helping to make BADCamp free and awesome.</li>
	<li>Ability to post 1 job to our online BADCamp job board (last year’s board:&nbsp;<a href="https://2015.badcamp.net/jobs">https://2015.badcamp.net/jobs</a>)</li>
	<li>Ability to showcase sponsorship through a custom designed badge you can use on your website or marketing communication.</li>
	<li>Warm fuzzies and BADCamp love</li>
	<li>Unlimited tickets to BADCamp &amp; much BADCamp love for your many fans and followers.</li>
</ul>

<h2><a href="/registration/sponsorship">Individual Sponsorship: $25, $50, $100</a></h2>

<ul>
	<li>BADcamp T-shirt, water bottle or hoodie (depending on level, pick up at registration)</li>
	<li>Name on website</li>
	<li>Unlimited tickets to BADCamp</li>
	<li>Warm fuzzies</li>
</ul>

<p>Our entire Bay Area Drupal community is looking forward to our most magical BADCamp ever and hope you can join the all-star lineup of luminary developers and business leaders. Everyone involved with BADCamp will appreciate your sponsorship and let us know what we can do to get you involved.</p>

<p>Interested? Please contact <a href="mailto:anne@badcamp.net">anne@badcamp.net</a> or <a href="mailto:matt@badcamp.net">matt@badcamp.net</a></p>
',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $export['badcamp_sponsor_packages'] = $content;

  return $export;
}
