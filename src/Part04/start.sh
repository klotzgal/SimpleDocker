#!/bin/bash
gcc main.c -lfcgi -o /src/main
# ln /etc/nginx/nginx.conf Part03/nginx.conf
spawn-fcgi -p 8080 -f /src/main
nginx -g "daemon off;"
