#include <stdio.h>

/*Comment out of main function*/
void print() {
	printf("Hello World!");
}

int main() {
	char *code = "#include <stdio.h>%c%c/*Comment out of main function*/%cvoid print() {%c%cprintf(%cHello World!%c);%c}%c%cint main() {%c%cchar *code = %c%s%c;%c%c/* Comment in the main function*/%c%cprint();%c%cprintf(code, 10, 10, 10, 10, 9, 34, 34, 10, 10, 10, 9, 34, code, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);%c%creturn 0;%c}";
	/* Comment in the main function*/
	print();
	printf(code, 10, 10, 10, 10, 9, 34, 34, 10, 10, 10, 9, 34, code, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);
	return 0;
}