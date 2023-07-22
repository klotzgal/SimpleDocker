#!/bin/bash
gcc main.c -lfcgi -o main
spawn-fcgi -p 8080 -f $(pwd)/main