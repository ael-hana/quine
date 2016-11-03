#include <stdio.h>
//commentaire inutile
#define Nintendo
#define VS
#define SONY(x) int main(void){FILE*p=fopen("Grace_kid.c", "w");char*c="#include <stdio.h>%c//commentaire inutile%c#define Nintendo%c#define VS%c#define SONY(x) int main(void){FILE*p=fopen(%cGrace_kid.c%c, %cw%c);char*c=%c%s%c;fprintf(p,c,10,10,10,10,34,34,34,34,34,c,34,10,10);}%cSONY(42)%c";fprintf(p,c,10,10,10,10,34,34,34,34,34,c,34,10,10);}
SONY(42)
