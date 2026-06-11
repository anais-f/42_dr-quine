default rel
global main
extern printf

; Comment
 

%macro FILE_NAME
    "Grace_kid.s", 0
%endmacro

section .rodata
    code db "test"

section .text
main:
    ; open file
    mov rax, 2
    mov rdi, FILE_NAME
    mov rsi, 0x241 ; O_WRONLY(1) | O_CREAT(0x40) | O_TRUNC(0x200)
    mov rdx, 0644o   ; permissions
    syscall

    ; affect string to CODE macro


    ; check file != NULL -> fprintf and close
