/**
 * @file
 * Validate custom JavaScript with best practices and Drupal Coding Standards.
 */
/* eslint-env node */

var gulp = require('gulp');
var eslint = require('gulp-eslint');
var fs = require('fs');
var argv = require('minimist')(process.argv.slice(2));
var gulpif = require('gulp-if');

gulp.task('eslint', function () {
  'use strict';
  var sourcePatterns = [
    'gulpfile.js',
    'gulp-tasks/*.js',
    'sites/all/modules/custom/**/*.js',
    'sites/all/modules/features/**/*.js',
    'sites/all/themes/custom/**/*.js',
    '!sites/all/themes/custom/badcamp2016/dist/**',
    '!sites/all/themes/custom/badcamp2016/bower_components/**',
    '!sites/all/themes/custom/badcamp2016/node_modules/**'
  ];
  var writeOutput = argv.hasOwnProperty('outputfile');
  var wstream;
  if (writeOutput) {
    wstream = fs.createWriteStream(argv.outputfile + '/eslint.xml');
  }
  var result = gulp.src(sourcePatterns)
    .pipe(eslint({
      configFile: './.eslintrc'
    }))
    .pipe(eslint.format())
    .pipe(gulpif(writeOutput, eslint.format('junit', wstream)))
    .pipe(eslint.failAfterError());

  return result;
});
