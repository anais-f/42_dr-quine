global _start

section .data
message db "Hello world", 10 ; le texte + l'ascii 10 pour le \n

section .text
_start:
	mov rax, 1 ; appel a write
	mov rdi, 1 ; param du stdin
	mov rsi, message ; param du texte
	mov rdx, 11+1 ; le registre et la taille -> param de la taille
	syscall ; faire le syscall

	mov rax, 60 ; exit
	mov rdi, 0 ; code de retour
	syscall ; on ferme le programme

