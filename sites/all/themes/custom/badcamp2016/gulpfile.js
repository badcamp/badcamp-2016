var gulp = require('gulp'),
  del  = require('del'),
  sourcemaps = require('gulp-sourcemaps'),
  autoprefixer = require('gulp-autoprefixer'),
  concat = require('gulp-concat'),
  sass = require('gulp-sass'),
  mergeStream = require('merge-stream'),
  Promise = require('es6-promise').Promise;
// ^ needed this to fix "ReferenceError: Promise is not defined" in
// gulp-autoprefixer

var paths = {
  styles: ['./scss/**/*.scss'],
  fonts: ['./bower_components/foundation-icon-fonts/*.{eot,svg,ttf,woff}'],
  scripts: {
    libs: ['./bower_components/foundation-sites/dist/foundation.js'],
    theme: ['./js/*.js'],
  }
};

gulp.task('clean', function() {
  return del(['dist']);
});

gulp.task('fonts', ['clean'], function() {
  return gulp.src(paths.fonts)
    .pipe(gulp.dest('dist/fonts'));
});

gulp.task('styles', ['clean'], function() {
  return gulp.src(paths.styles)
    .pipe(sourcemaps.init())
    .pipe(sass().on('error', sass.logError))
    .pipe(autoprefixer({
      browsers: ['last 2 versions'],
      cascade: false,
    }))
    .pipe(sourcemaps.write('maps'))
    .pipe(gulp.dest('dist/css'));
});

gulp.task('scripts', ['clean'], function() {
  var libs = gulp.src(paths.scripts.libs)
    .pipe(concat('libs.js'));

  var theme = gulp.src(paths.scripts.theme);

  return mergeStream(libs, theme)
    .pipe(gulp.dest('dist/js'));
});

gulp.task('watch', function() {
  gulp.watch(paths.styles, ['styles', 'scripts', 'fonts']);
  gulp.watch(paths.scripts.libs, ['styles', 'scripts', 'fonts']);
  gulp.watch(paths.scripts.theme, ['styles', 'scripts', 'fonts']);
})

gulp.task('default', ['watch', 'styles', 'scripts', 'fonts']);
