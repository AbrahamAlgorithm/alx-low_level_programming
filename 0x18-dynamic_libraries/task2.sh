#!/usr/bin/env bash
# A Bash script that creates a dynamic library containing C functions that can be called from Python
# This Bash script was used to solve the Python C task
gcc -Wall -fPIC -shared 100-operations.c -o 100-operations.so
