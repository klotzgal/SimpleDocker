FROM nginx:latest
LABEL author=klotzgal
RUN apt-get update && apt-get upgrade -y && apt-get install gcc -y\
    libfcgi-dev  \
    spawn-fcgi 

WORKDIR /src

COPY Part03/main.c /src/main.c
COPY Part03/start.sh /src/start.sh
COPY Part03/nginx.conf /etc/nginx/nginx.conf

CMD ["/bin/bash", "start.sh"]
