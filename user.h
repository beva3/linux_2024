#ifndef __USER__
#define __USER__
    #include "config.h"

    /**
     * name,
     * passwd,
     * g_id
     * u_id
     * good_name,
     * rep,
     * shell
     */

    typedef struct User{
        char name[50];
        int u_id;
        int g_id;
        char rep[50];
        char shell[50];
    }User;
    
    void print_user();
    char **tab_user();
#endif