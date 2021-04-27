;size_t ft_strlen(char *rdi)

section .text

	global ft_strlen

ft_strlen:

	; initialises rcx to -1. Repnz scasb will scan the string for a zero and subtract
	; 1 to rcx at each character it finds. Result will be absolute value of rcx -2
	; (taking into account early -1 and end of string character)
	xor rax,rax
	mov rcx, -1
	cld
	repnz scasb
	mov rax, -2
	sub rax, rcx
	ret
