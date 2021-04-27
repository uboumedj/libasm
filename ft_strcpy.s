;char *ft_strcpy(char *rdi, const char *rsi)

section .text

	global ft_strcpy

ft_strcpy:

	; Initialising rbx and rax to 0
	xor rax, rax
	xor rbx, rbx

loop_part:

	; rsi's first pointed character is copied to rbx, then from rbx to rdi
	; Loop until rsi's character is zero.
	mov bl, [rsi + rax]
	mov [rdi + rax], bl
	cmp bl, 0
	je end
	inc rax
	jmp loop_part

end:

	; strcpy's return value is the destination string, so rax has to point to rdi
	mov rax, rdi
	ret
