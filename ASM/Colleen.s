global _start

section .data
    code db "global _start", 10
    code_len equ $ - code


section .text
foo:
    ret

_start:
	push r8 ; on sauvegarde le compteur de boucle sur la pile
	xor r8, r8 ; on met rcx a 0 pour le compteur de boucle

.loop:
	cmp r8, code_len ; on compare le compteur de boucle a la taille du code
	jg	.endloop

	mov rax, 1
	mov rdi, 1
	mov rsi, code
	add rsi, r8
	mov rdx, 1
	syscall

	inc r8
	jmp .loop
.endloop:

    call    foo     ; appel de foo
    mov rax, 60     ; exit
	mov rdi, 0      ; code de retour
	syscall         ; on ferme le programme
	


     