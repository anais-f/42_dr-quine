default rel
global main
extern printf

; Comment out of main
section .rodata
	code db "default rel%1$cglobal main%1$cextern printf%1$c%1$c; Comment out of main%1$csection .rodata%1$c	code db %2$c%3$s%2$c, 0%1$c%1$csection .text%1$cfoo:%1$c	ret%1$c%1$cmain:%1$c	push rbp%1$c	mov rbp, rsp%1$c	; Comment in main%1$c%1$c	lea rdi, [code]%1$c	mov rsi, 10%1$c	mov rdx, 34%1$c	lea rcx, [code]%1$c%1$c	xor rax, rax%1$c%1$c	call printf wrt ..plt%1$c	call foo%1$c	xor rax, rax%1$c	pop rbp%1$c	ret", 0

section .text
foo:
	ret

main:
	push rbp
	mov rbp, rsp
	; Comment in main

	lea rdi, [code]
	mov rsi, 10
	mov rdx, 34
	lea rcx, [code]

	xor rax, rax

	call printf wrt ..plt
	call foo
	xor rax, rax
	pop rbp
	ret