#!/bin/bash
gcc -fPIC -c *.c
gcc *.o -shared -o libdynamic.so

