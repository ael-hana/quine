#include <stdio.h>
/*
	commentaire inutile
*/
#define Nintendo
#define VS
#define FT(x) int main(void){FILE*p=fopen("Grace_kid.c", "w");if(!p)return(-1);char*c="#include <stdio.h>%c/*%c%ccommentaire inutile%c*/%c#define Nintendo%c#define VS%c#define FT(x) int main(void){FILE*p=fopen(%cGrace_kid.c%c, %cw%c);if(!p)return(-1);char*c=%c%s%c;fprintf(p,c,10,10,9,10,10,10,10,34,34,34,34,34,c,34,10,10);}%cFT(42)%c";fprintf(p,c,10,10,9,10,10,10,10,34,34,34,34,34,c,34,10,10);}
FT(42)
