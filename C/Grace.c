#include <stdio.h>

/* Comment */
int main() {
	FILE *file = fopen("Grace_kid.c", "w");
	char *code = "#include <stdio.h>%c%c/* Comment */%cint main() {%c%cFILE *file = fopen(%cGrace_kid.c%c, %cw%c);%c%cchar *code = %c%s%c;%c%cif (file != NULL) {%c%c%cfprintf(file, code, 10, 10, 10, 10, 9, 34, 34, 34, 34, 10, 9, 34, code, 34, 10, 9,10, 9, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);%c%c%cfclose(file);%c%c}%c%creturn 0;%c}%c";
	if (file != NULL) {
		fprintf(file, code, 10, 10, 10, 10, 9, 34, 34, 34, 34, 10, 9, 34, code, 34, 10, 9,10, 9, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);
		fclose(file);
	}
	return 0;
}
