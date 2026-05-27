#include <stdio.h>

/* Comment */
#define FILE_NAME "Grace_kid.c"
#define CODE "#include <stdio.h>%1$c%1$c/* Comment */%1$c#define FILE_NAME %2$cGrace_kid.c%2$c%1$c#define CODE %2$c%3$s%2$c%1$c#define MAIN int main() { FILE *file = fopen(FILE_NAME, %2$cw%2$c); char *code = CODE ; if (file != NULL) { fprintf(file, code, 10, 34, code); fclose(file); } return 0; }%1$c%1$cMAIN%1$c"
#define MAIN int main() { FILE *file = fopen(FILE_NAME, "w"); char *code = CODE ; if (file != NULL) { fprintf(file, code, 10, 34, code); fclose(file); } return 0; }

MAIN
