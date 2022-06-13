#!/bin/bash
wget -P /tmp https://github.com/dbuturu/alx-low_level_programming/raw/main/0x18-dynamic_libraries/bingo.so
export LD_PRELOAD=/tmp/bingo.so
