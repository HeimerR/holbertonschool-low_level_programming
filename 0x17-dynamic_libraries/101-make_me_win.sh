#!/bin/bash
gcc -shared -fPIC rand.c -o rand.so
export LD_PRELOAD=$PWD/rand.so
