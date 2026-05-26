#include <stdio.h>
#include <fnctl.h>

int main() {
    int f = open("Grace_kid.c", O_CREATE | O_RDWR, 0644);

}



/*
When executed, the program writes in a file named Grace_kid.c / Grace_kid.s
the source code of the file used to compile the program.
• The C source code must strictly contain:
◦ No main declared (no functions declared at all).
◦ Exactly three #define.
◦ One comment.
• The program will run by calling a macro.
*/