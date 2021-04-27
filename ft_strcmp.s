;int strcmp(const char *rdi, const char *rsi);

section .text

	global ft_strcmp

ft_strcmp:

	; Initialising rbx and rax to 0
	xor rbx, rbx 
	xor rax, rax

loop_part:

	; rdi and rsi's first pointed characters are moved to rax and rbx, then compared
	; with each other. Loop until one of the characters is different from the other or
	; until it reaches a 0
	mov bl, [rdi]
	mov al, [rsi]
	inc rsi
	inc rdi
	cmp al, 0
	je subtraction
	cmp al, bl
	je loop_part
	jne subtraction

subtraction:

	; when one of the characters is different (or one reached zero), calculate the 
	; difference (the return value of the function)
	sub al, bl
	jc overflow_handle
	neg rax
	ret

overflow_handle:

	; prevents the value from overflowing (al, bl) are only 8-bit chars
	mov dl, 255
	sub dl, al
	mov al, dl
	inc rax
	ret
