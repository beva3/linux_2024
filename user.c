#include "config.h"

void print_user(){
    FILE *f = NULL;
    char line[256];

    f=fopen("/etc/passwd","r"); // TODO open file

    if(f == NULL){  //! verification 
        printf("<h1>No file opened</h1>");
        fclose(f);
        exit(1);
    }else{
        printf("<h1>They are the user</h1>");
        while (fgets(line,sizeof(line),f))
        {
            printf("<p>%s</p>",line);
        }
    }

    fclose(f);    
}