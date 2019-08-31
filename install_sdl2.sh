#!/bin/bash

mkdir tmp-build-sdl2
cd tmp-build-sdl2
../lib/SDL2/configure --prefix="$HOME"
make
make install
cd ..
rm -rf tmp-build-sdl2
mkdir -p include/SDL2 
cp lib/SDL2/include/*.h include/SDL2
