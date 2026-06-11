#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i = 5;
	char filename[12];
	char *code = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$c%1$cint main() {%1$c	int i = %4$d;%1$c	char filename[12];%1$c	char *code = %2$c%3$s%2$c;%1$c	if (strstr(__FILE__, %2$c_%2$c) == NULL) i = 5;%1$c	else i--;%1$c	if (i >= 0) {%1$c		sprintf(filename, %2$cSully_%5$cd.c%2$c, i);%1$c		FILE *file = fopen(filename, %2$cw%2$c);%1$c		if (file != NULL) {%1$c			fprintf(file, code, 10, 34, code, i, 37);%1$c			fclose(file);%1$c			char command[50];%1$c			sprintf(command, %2$cgcc Sully_%5$cd.c -o Sully_%5$cd && ./Sully_%5$cd%2$c, i, i, i);%1$c			system(command);%1$c		}%1$c	}%1$c}";
	if (strstr(__FILE__, "_") == NULL) i = 5;
	else i--;
	if (i >= 0) {
		sprintf(filename, "Sully_%d.c", i);
		FILE *file = fopen(filename, "w");
		if (file != NULL) {
			fprintf(file, code, 10, 34, code, i, 37);
			fclose(file);
			char command[50];
			sprintf(command, "gcc Sully_%d.c -o Sully_%d && ./Sully_%d", i, i, i);
			system(command);
		}
	}
}