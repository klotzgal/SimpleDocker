FROM nginx:latest
LABEL author=klotzgal
RUN apt-get update && apt-get upgrade -y && apt-get install gcc -y\
    libfcgi-dev  \
    spawn-fcgi 

ADD . /src
# COPY main.c /src/main.c
# COPY start.sh /src/start.sh
# RUN ["/bin/bash", "src/start.sh"]
CMD [ "nginx", "-g", "daemon off"]