FROM nginx:1.25.1
LABEL author=klotzgal

WORKDIR /src

HEALTHCHECK --interval=5m --timeout=3s \
    CMD curl -f http://localhost/ || exit 1

RUN apt-get update && apt-get upgrade -y \
    && apt-get install gcc -y \
    libfcgi-dev \
    spawn-fcgi \
    && rm -rf /var/lib/apt/lists 

COPY ../Part03/main.c /src/main.c
COPY ../Part04/start.sh /src/start.sh

RUN chown -R nginx /src \
    && chown -R nginx /etc/nginx/ \ 
    && chown -R nginx /var/cache/ \
    && chown -R nginx /var/run/

USER nginx

ENTRYPOINT ["/bin/bash", "start.sh"]



