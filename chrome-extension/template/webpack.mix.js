const mix = require('laravel-mix'); // eslint-disable-line import/no-extraneous-dependencies

mix.js('./src/js/content.js', './dist/js')
  .copy('./src/static/**/*', './dist')
  .disableNotifications();

if (!mix.inProduction()) {
  mix.sourceMaps();
}
