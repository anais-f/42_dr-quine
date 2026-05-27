#include <stdio.h>

void foo() {
	return;
}

/* Comment out of main function */
int main() {
	char *code = "#include <stdio.h>%c%cvoid foo() {%c%creturn;%c}%c%c/* Comment out of main function */%cint main() {%c%cchar *code = %c%s%c;%c%c/* Comment in the main function */%c%cprintf(code, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 34, code, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10);%c%cfoo();%c%creturn 0;%c}";
	/* Comment in the main function */
	printf(code, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 34, code, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10);
	foo();
	return 0;
}