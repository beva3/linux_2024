#include <stdio.h>

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
    printf("<h1>Hello world</h1>");

    return 0;
}