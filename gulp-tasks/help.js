/**
 * @file
 * Show available tasks.
 */
/* eslint-env node */

var gulp = require('gulp');
var taskListing = require('gulp-task-listing');
gulp.task('help', taskListing);
// Setting as default for now.
gulp.task('default', ['help']);
