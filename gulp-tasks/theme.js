/**
 * @file
 * Build the theme and watch for changes.
 */
/* eslint-env node */

var gulp = require('gulp');
var del = require('del');
var sourcemaps = require('gulp-sourcemaps');
var autoprefixer = require('gulp-autoprefixer');
var concat = require('gulp-concat');
var sass = require('gulp-sass');
var mergeStream = require('merge-stream');
var uglify = require('gulp-uglify');
var bower = require('gulp-bower');

var paths = {
  styles: ['sites/all/themes/custom/badcamp2016/scss/**/*.scss'],
  fonts: ['sites/all/themes/custom/badcamp2016//bower_components/foundation-icon-fonts/*.{eot,svg,ttf,woff}'],
  scripts: {
    libs: [
      'sites/all/themes/custom/badcamp2016/bower_components/foundation-sites/dist/foundation.js',
      'sites/all/themes/custom/badcamp2016/js/libs/*.js'
    ],
    theme: ['sites/all/themes/custom/badcamp2016/js/*.js']
  },
  dist: 'sites/all/themes/custom/badcamp2016/dist'
};

gulp.task('theme', ['theme:bower', 'theme:fonts', 'theme:scripts', 'theme:styles'], function () {
  'use strict';
  gulp.watch(paths.styles, ['theme:styles']);
  gulp.watch(paths.scripts.libs, ['theme:scripts']);
  gulp.watch(paths.scripts.theme, ['theme:scripts']);
});

gulp.task('theme:bower', function () {
  'use strict';
  return bower({cwd: 'sites/all/themes/custom/badcamp2016'});
});

gulp.task('theme:clean:styles', function () {
  'use strict';
  return del([paths.dist + '/css']);
});
gulp.task('theme:clean:fonts', function () {
  'use strict';
  return del([paths.dist + '/fonts']);
});
gulp.task('theme:clean:scripts', function () {
  'use strict';
  return del([paths.dist + '/js']);
});

gulp.task('theme:fonts', ['theme:clean:fonts'], function () {
  'use strict';
  return gulp.src(paths.fonts)
    .pipe(gulp.dest(paths.dist + '/fonts'));
});

gulp.task('theme:scripts', ['theme:clean:scripts'], function () {
  'use strict';
  var libs = gulp.src(paths.scripts.libs)
    .pipe(sourcemaps.init())
    .pipe(concat('libs.js'))
    .pipe(uglify())
    .pipe(sourcemaps.write('maps'));

  var theme = gulp.src(paths.scripts.theme);

  return mergeStream(libs, theme)
    .pipe(gulp.dest(paths.dist + '/js'));
});

gulp.task('theme:styles', ['theme:clean:styles'], function () {
  'use strict';
  return gulp.src(paths.styles)
    .pipe(sourcemaps.init())
    .pipe(sass().on('error', sass.logError))
    .pipe(autoprefixer({
      browsers: ['last 2 versions'],
      cascade: false
    }))
    .pipe(sourcemaps.write('maps'))
    .pipe(gulp.dest(paths.dist + '/css'));
});
