#!/usr/bin/env bash

set -eu

# display error
function error() {
  echo "$@" 1>&2
  exit 1
}

# check number of argument
[[ "$#" -eq 0 ]] && error "Error: invalid argument."
# check filetype
[[ "$1" -ne *.tex ]] && error "Error: invalid filetype."
# remove a extension
filename="${1%.*}"
# generate pdf
cd /mnt
uplatex "${filename}.tex" && dvipdfmx "${filename}.dvi"
# after-treatment
case "$?" in
  0 ) find /mnt -type f | grep -E "${filename}\.(aux|dvi|log|out)$" | xargs rm && exit 0 ;;
  1 ) find /mnt -type f | grep -E "${filename}\.(aux|dvi|log|out)$" | xargs rm && exit 1 ;;
  * ) exit 2;;
esac
