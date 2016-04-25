/**
 * @file
 * Validate custom files with Drupal Coding Standards.
 */
/* eslint-env node */
/* eslint no-console:0 */

var gulp = require('gulp');
var phpcs = require('gulp-phpcs');
var through2 = require('through2');
var gutil = require('gulp-util');
var argv = require('minimist')(process.argv.slice(2));
var exec = require('sync-exec');

gulp.task('drupalcs', function () {
  'use strict';
  // Source file defaults to a pattern.
  var extensions = '{php,module,inc,install,test,profile,theme}';
  var sourcePatterns = [
    'sites/all/modules/custom/**/*.' + extensions,
    'sites/all/modules/features/**/*.' + extensions,
    'sites/all/themes/custom/**/*.' + extensions,
    'settings/**/*.' + extensions,
    'tests/**/*.' + extensions,
    '!sites/all/modules/features/**/*.ctools_content.inc',
    '!sites/all/modules/features/**/*.default_environment_indicator_environments.inc',
    '!sites/all/modules/features/**/*.features.*',
    '!sites/all/modules/features/**/*.strongarm.*',
    '!sites/all/modules/features/**/*.field_group.inc',
    '!sites/all/modules/features/**/*.pages_default.inc',
    '!sites/all/modules/features/**/*.views_default.inc'
  ];

  return gulp.src(sourcePatterns)
    .pipe(phpcs({
      bin: './vendor/bin/phpcs',
      standard: './vendor/drupal/coder/coder_sniffer/Drupal'
    }))
    // Determine relative path for each file.
    .pipe(through2.obj(function (file, enc, callback) {
      file.relative_path = file.path
        // Replace current working directory.
        .replace(file.cwd, '')
        // Remove leading slash.
        .substr(1);
      this.push(file);
      callback();
    }))
    // Log to screen.
    .pipe(through2.obj(function (file, enc, callback) {
      var report = file.phpcsReport || {};

      if (report.error) {
        // Skip FILE: STDIN.
        var report_output = report.output.substring(
          report.output.indexOf("FILE STDIN") + 15
        );

        // Remove advertisement.
        var advertisement = report.output.indexOf('PHPCBF CAN FIX');
        if (advertisement > 0) {
          report_output = report_output.substr(0, advertisement - 15);
        }
        // Remove debugging.
        else {
          report_output = report_output.substr(0, report_output.indexOf('Time: ') - 5);
        }

        // Get the summary.
        var summary_match = report_output.match(new RegExp('FOUND .* LINES\?'));
        var summary = summary_match[summary_match.length - 1];
        // Remove the summary from the report.
        report_output = report_output.substr(report_output.lastIndexOf(summary) + summary.length);

        // Parse summary.
        var errors_match = summary.match(new RegExp('(\\d+) ERRORS?'));
        var warnings_match = summary.match(new RegExp('(\\d+) WARNING?'));
        var lines_match = summary.match(new RegExp('(\\d+) LINES?'));

        var intro = gutil.colors.cyan(file.relative_path) + ':';
        if (errors_match) {
          intro += ' ' + gutil.colors.red(errors_match[0]);
        }
        if (warnings_match) {
          intro += ' ' + gutil.colors.yellow(warnings_match[0]);
        }
        if (lines_match) {
          intro += ' AFFECTING ' + gutil.colors.magenta(lines_match[0]);
        }

        // Colorize.
        report_output = report_output.replace(/ERROR/g, gutil.colors.red('ERROR'));
        report_output = report_output.replace(/WARNING/g, gutil.colors.yellow('WARNING'));

        // Cleanup.
        report_output = report_output.trim();

        gutil.log(intro, "\n" + report_output);
      }
      this.push(file);
      callback();
    }))
    // Write to file.
    .pipe(through2.obj(function (file, enc, callback) {
      if (argv.hasOwnProperty('report') && argv.hasOwnProperty('reportfile')) {
        var report_name = file.relative_path
          // Replace slashes.
          .replace(new RegExp('/', 'g'), '__')
          // Add extension.
          + '.xml';

        var report_file = argv.reportfile + report_name;

        var command = 'vendor/bin/phpcs '
          + '--standard="vendor/drupal/coder/coder_sniffer/Drupal" '
          + '--report=' + argv.report + ' '
          + file.path + ' '
          + '--report-file=' + report_file;

        exec(command);
      }

      this.push(file);
      callback();
    }))
    // Fail on errors.
    .pipe(through2.obj(function (file, enc, callback) {
      var report = file.phpcsReport || {};
      if (report.error) {
        this.emit('error', new gutil.PluginError({
          plugin: 'drupalcs',
          message: 'PHP_CodeSniffer found problem(s) in ' + file.relative_path
        }));
      }
      this.push(file);
      callback();
    }));
});
