FROM nginx:1.24.0
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
    && chown -R nginx /var/run/ \
    && chmod u-s /usr/bin/gpasswd \
    && chmod u-s /bin/su \
    && chmod u-s /bin/mount \
    && chmod g-s /sbin/unix_chkpwd \
    && chmod u-s /usr/bin/chsh \
    && chmod u-s /usr/bin/chfn \
    && chmod u-s /usr/bin/passwd \
    && chmod g-s /usr/bin/chage \
    && chmod g-s /usr/bin/expiry \
    && chmod u-s /bin/umount \
    && chmod g-s /usr/bin/wall \
    && chmod u-s /usr/bin/newgrp
    # && chmod u-s /usr/bin/gpasswd \
    # && chmod u-s /usr/bin/passwd 
    # && chmod u-s /usr/bin/expiry \
    # && chmod u-s /usr/bin/chsh \
    # && chmod u-s /usr/bin/wall \
    # && chmod u-s /usr/bin/newgrp \
    # && chmod u-s /usr/bin/chfn \
    # && chmod u-s /usr/bin/chage 



USER nginx

ENTRYPOINT ["/bin/bash", "start.sh"]



