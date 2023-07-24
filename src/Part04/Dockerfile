FROM nginx:latest
LABEL author=klotzgal
RUN apt-get update && apt-get upgrade -y && apt-get install gcc -y \
    libfcgi-dev \
    spawn-fcgi 

WORKDIR /src

COPY ../Part03/main.c /src/main.c
COPY ../Part04/start.sh /src/start.sh

ENTRYPOINT ["/bin/bash", "start.sh"]

