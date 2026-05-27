#include <stdio.h>

void foo() {
	return;
}

/* Comment out of main function */
int main() {
	char *code = "#include <stdio.h>%1$c%1$cvoid foo() {%1$c	return;%1$c}%1$c%1$c/* Comment out of main function */%1$cint main() {%1$c	char *code = %2$c%3$s%2$c;%1$c	/* Comment in the main function */%1$c	printf(code, 10, 34, code);%1$c	foo();%1$c	return 0;%1$c}";
	/* Comment in the main function */
	printf(code, 10, 34, code);
	foo();
	return 0;
}