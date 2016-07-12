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
    'title' => 'Title Test xxx',
    'body' => '<p>Our entire Bay Area Drupal community is looking forward to our most magical BADCamp ever and hope you can join the all-star lineup of luminary developers and business leaders.</p>

<h2><b>Contrib+</b> Sponsorship: $4,000 [up to 8]</h2>

<ul>
	<li class="li2">Summits
	<ul>
		<li class="li2">Your choice of sponsorship of one of the following summits: Non Profit, Higher Education, Config Management, Core Development, and Security &amp; Privacy</li>
		<li>Top tier logo placement on summit webpage and signage</li>
		<li>Ability to speak to summit attendees for 5-10 minutes</li>
		<li>Promotion at the event on Twitter/Facebook</li>
		<li>Badge for website</li>
	</ul>
	</li>
	<li>Publicity
	<ul>
		<li>Second tier logo placement on website, event banner, printed program</li>
		<li>6 foot &nbsp;table/booth at the event</li>
		<li>Promotion at the event on Twitter/Facebook</li>
		<li>Badge for website</li>
	</ul>
	</li>
	<li>Recruitment
	<ul>
		<li>Unlimited postings on the job board &nbsp;</li>
		<li>Promoted job opportunities to attendees</li>
	</ul>
	</li>
	<li>Unlimited tickets to BADCamp</li>
</ul>

<h2><b>Contrib</b>&nbsp;Sponsorship: $2,000 [up to 16]</h2>

<ul>
	<li>Publicity
	<ul>
		<li>Second tier logo placement on website, event banner, printed program</li>
		<li>6 foot &nbsp;table/booth at the event</li>
		<li>Promotion at the event on Twitter/Facebook</li>
		<li>Badge for website</li>
	</ul>
	</li>
	<li>Recruitment
	<ul>
		<li>Unlimited postings on the job board &nbsp;</li>
		<li>Promoted job opportunities to attendees</li>
	</ul>
	</li>
	<li>Unlimited tickets to BADCamp</li>
</ul>

<h2><b>Supporting</b> Sponsorship: $350</h2>

<ul>
	<li>Logo placement on website</li>
	<li>1 postings on the job board &nbsp;</li>
	<li>Badge for website</li>
	<li>Warm fuzzies</li>
	<li>Unlimited tickets to BADCamp</li>
</ul>

<h2><a href="/registration/sponsorship" target="_self"><strong>Individual</strong> Sponsorship: $25, $50, $100</a></h2>

<ul>
	<li>BADcamp T-shirt, water bottle or hoodie (depending on level, pick up at registration)</li>
	<li>Name on website</li>
	<li>Unlimited tickets to BADCamp</li>
	<li>Warm fuzzies</li>
</ul>

<p>Interested? Please contact <a href="mailto:anne@badcamp.net">anne@badcamp.net</a> or <a href="mailto:matt@badcamp.net">matt@badcamp.net</a></p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['badcamp_sponsor_packages'] = $content;

  return $export;
}
