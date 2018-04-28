FROM frolvlad/alpine-glibc:latest

ENV PATH /usr/local/texlive/2017/bin/x86_64-linux:$PATH

COPY ./texlive.profile /
COPY ./docker-entrypoint.sh /

WORKDIR /tmp

RUN set -x && \
  apk --no-cache add perl wget tar fontconfig-dev && \
  wget -qO- http://ftp.jaist.ac.jp/pub/CTAN/systems/texlive/tlnet/install-tl-unx.tar.gz | \
  tar --strip-components=1 -xz && \
  ./install-tl --profile=/texlive.profile && \
  tlmgr install collection-basic collection-latex collection-langjapanese collection-fontsrecommended && \
  (tlmgr install xetex || exit 0) && \
  rm -rf /tmp/*

WORKDIR /mnt

ENTRYPOINT ["sh", "/docker-entrypoint.sh"]
