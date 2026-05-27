#include <stdio.h>

/* Comment */
#define FILE_NAME "Grace_kid.c"
#define CODE "#include <stdio.h>%c%c/* Comment */%c#define FILE_NAME %cGrace_kid.c%c%c#define CODE %c%s%c%c#define MAIN int main() { FILE *file = fopen(FILE_NAME, %cw%c); char *code = CODE ; if (file != NULL) { fprintf(file, code, 10, 10, 10, 34, 34, 10, 34, code, 34, 10, 34, 34, 10, 10, 10); fclose(file); } return 0; }%c%cMAIN%c"
#define MAIN int main() { FILE *file = fopen(FILE_NAME, "w"); char *code = CODE ; if (file != NULL) { fprintf(file, code, 10, 10, 10, 34, 34, 10, 34, code, 34, 10, 34, 34, 10, 10, 10); fclose(file); } return 0; }

MAIN
