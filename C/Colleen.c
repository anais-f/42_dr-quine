#include <stdio.h>

int main() {
	char *code = "#include <stdio.h>%c%cint main() {%c%cchar *code = %c%s%c;%c%cprintf(code, 10, 10, 10, 9, 34, code, 34, 10, 9, 10, 9, 10);%c%creturn 0;%c}";
	printf(code, 10, 10, 10, 9, 34, code, 34, 10, 9, 10, 9, 10);
	return 0;
}