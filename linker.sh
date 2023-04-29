#!/bin/bash

# compile.sh'dan gelen nesne dosyalarını al
objects="$@"

# nesne dosyalarını birleştir ve programı oluştur
gcc $objects -o program

rm $objects