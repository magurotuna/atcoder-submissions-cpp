#!/usr/bin/env bash

set -eu

if [ $# -ne 1 ]; then
  echo "Specify content number like: $0 abc789" 1>&2
  exit 1
fi

mkdir $1
cp _template.cpp $1/a.cpp
cp _template.cpp $1/b.cpp
cp _template.cpp $1/c.cpp
cp _template.cpp $1/d.cpp
cp _template.cpp $1/e.cpp
cp _template.cpp $1/f.cpp
echo "Done!"
