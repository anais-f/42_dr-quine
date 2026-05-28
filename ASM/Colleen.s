global _start

section .data
    code db "global _start", 10
    code_len equ $ - code


section .text
foo:
    ret

_start:
	push rcx ; on sauvegarde le compteur de boucle sur la pile
	xor rcx, rcx ; on met rcx a 0 pour le compteur de boucle

.loop:
	cmp rcx, code_len ; on compare le compteur de boucle a la taille du code
	jg	.endloop

	mov rax, 1
	mov rdi, 1
	lea rsi, [rel code]
	add rsi, rcx
	mov rdx, 1
	syscall

	inc rcx
	jmp .loop

.endloop:

    call    foo     ; appel de foo
    mov rax, 60     ; exit
	mov rdi, 0      ; code de retour
	syscall         ; on ferme le programme
	
