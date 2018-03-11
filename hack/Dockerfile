FROM hhvm/hhvm

## get composer from composer official image
COPY --from=composer /usr/bin/composer /usr/local/bin/composer

# --------------------------------------------------
# non-root user settings
# --------------------------------------------------

## create non-root user
ARG PUID=1000
ARG PGID=1000

RUN groupadd -g ${PGID} docker && \
  useradd -u ${PUID} -g docker -m docker

## use non-root user
USER docker

# --------------------------------------------------
# additional composer settings
# --------------------------------------------------

ARG USE_PACKAGIST_JP=false
RUN if [ ${USE_PACKAGIST_JP} = true ]; then \
  hhvm /usr/local/bin/composer config -g repos.packagist composer https://packagist.jp \
  ;fi

ARG INSTALL_PRESTISSIMO=false
RUN if [ ${INSTALL_PRESTISSIMO} = true ]; then \
  hhvm /usr/local/bin/composer global require hirak/prestissimo \
  ;fi

# --------------------------------------------------
# final touches
# --------------------------------------------------

WORKDIR /app

## set -d option to control "SlowTimer" warning
ENTRYPOINT [ "hhvm", "-d", "hhvm.http.slow_query_threshold=30000", "/usr/local/bin/composer" ]

CMD [ "--help" ]
