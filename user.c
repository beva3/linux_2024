#include "config.h"


void print_user(char**t){
    
	printf("<table>");
		printf("\
			<tr>\
				<th class = \"h-user		\">user</th>\
				<th class = \"h-uid			\">uid</th>\
				<th class = \"h-gid			\">gid</th>\
			</tr>");
		int j=0;
        while(t[j]){
			printf("%s",t[j]);//affichage a- la page
            j++;
		}
		printf("</table>");
    
}

char **tab_user(){
    char **tab = NULL;
    
    tab=(char**)malloc(1000*sizeof(char*));
	for(int i = 0 ; i < 1000 ;  i++) tab[i]=(char*)malloc(256*sizeof(char));
    int i=0;
    FILE *f = NULL;
    char line[256];
    User U = {"raphael",0,0,"rep","shell"};
    char rest[100];

    f=fopen("/etc/passwd","r"); // TODO open file

    if(f == NULL){  //! verification 
        printf("<h1>No file opened</h1>");
        // fclose(f);  //! tsy azo atao
        exit(1);
    }else{
        printf("<h1>They are the user</h1>\
        <table>");
        while (fgets(line,sizeof(line),f))
        {
            // ! root:x:0:0:root:/root:/bin/bash 
            sscanf(line,"%[^:]:x:%d:%d:%[^\n]",U.name,&U.u_id,&U.g_id,rest);
            sprintf(tab[i],"\
            <tr>\
                <td>%s</td>\
                <td>%d</td>\
                <td>%d</td>\
            </tr>",U.name,U.u_id,U.g_id);
            i++;
        }
        tab[i] = NULL;
        printf("</table>");
        fclose(f);
    } 

    return tab;
}