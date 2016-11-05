#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
int i = 5;
char name[2048];char cmd[2048];if(i>=0){sprintf(name,"Sully_%d.c",--i);FILE*p=fopen(name, "w");char*s="#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%cint main(void){%cint i = %d;%cchar name[2048];char cmd[2048];if(i>=0){sprintf(name,%cSully_%%d.c%c,--i);FILE*p=fopen(name, %cw%c);char*s=%c%s%c;fprintf(p,s,10,10,10,10,i,10,34,34,34,34,34,s,34,34,34,10);sprintf(cmd,%cgcc -Wall -Wextra -Werror -o %%.*s %%s && ./%%.*s%c,(int)strlen(name)-2,name,name,(int)strlen(name),name);system(cmd);}return(0);}%c";fprintf(p,s,10,10,10,10,i,10,34,34,34,34,34,s,34,34,34,10);sprintf(cmd,"gcc -Wall -Wextra -Werror -o %.*s %s && ./%.*s",(int)strlen(name)-2,name,name,(int)strlen(name),name);system(cmd);}return(0);}
