#!/bin/bash
wget -P /tmp/ https://github.com/HeimerR/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/liball.so 
export LD_PRELOAD=/tmp/liball.so
