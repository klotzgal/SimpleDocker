// #include <fcgiapp.h>
#include <fcgi_stdio.h>
// #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // FCGX_Init();

    // int Socket = FCGX_OpenSocket("127.0.0.1:8080", 1024);
    // FCGX_Request Request;
    // FCGX_InitRequest(&Request, Socket, 0);
    // while (FCGX_Accept_r(&Request) >= 0)   
    // {
    //    printf("Assept\n");
    //    FCGX_FPrintF(Request.out, "Content-type: text/html\r\n"
    //            "\r\n"
    //            "<title>Hello World!</title>"
    //            "<h1>Hello World!</h1>\n");
    // }
    // FCGX_Finish_r(&Request);
    while(FCGI_Accept() >= 0)
      printf("Content-type: text/html\r\n"
               "\r\n"

               "<title>Hello World!</title>"
               "<h1>Hello World!</h1>");
    return 0;
}