#include <fcgi_stdio.h>
#include <stdlib.h>

int main(void) {
  while (FCGI_Accept() >= 0)
    printf(
        "Content-type: text/html\r\n"
        "\r\n"
        "<title>Hello World!</title>"
        "<h1>Hello World!</h1>");
  return 0;
}