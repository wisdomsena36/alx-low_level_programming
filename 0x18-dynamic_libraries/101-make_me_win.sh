#!/bin/bash
wget -P .. https://raw.github.com/wisdomsena36/alx-low_level_programming/master/0x18-dynamic_libraries/wingigalib.so
export LD_PRELOAD="$PWD/../wingigalib.so"
