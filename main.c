#include "config.h"
#include "user.h"

/**
 * TODO : creat a file c source
 *      ex : main.c
 *      after: make a kompilasion
 *      after : move main.exe /usr/lib/cgi-bin/
 *      open browser, 
 *! localhost/cgi-bin/main.exe
 */

int main(){

    printf("Content-Type: text/html;\n\n");
    printf("<html><body>");

    printf("<h1>Hello world</h1>");
    printf("<h1>Linux 2024</h1>");

    print_user();

    printf("</body></html>");

    return 0;
}