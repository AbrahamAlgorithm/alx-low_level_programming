#!/bin/bash
# A Bash script that creates a dynamic library liball.so from all the .c files that are in the current directory.
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
nm -D liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
