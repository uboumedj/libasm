;char *ft_strdup(const char *rdi);

section .text

	global ft_strdup
	extern ft_strlen
	extern ft_strcpy
	extern malloc
	extern __errno_location

ft_strdup:

	; gets the length of rdi, then allocates memory. If malloc fails, jumps to error,
	; if not, calls ft_strcpy with the result of malloc as the destination
	push rdi
	call ft_strlen
	inc rax
	mov rdi, rax
	call malloc wrt ..plt ;wrt ..plt is to prevent C function error on linux
	cmp rax, 0
	je error
	mov rdi, rax
	pop rsi
	call ft_strcpy
	ret

error:

	; calls errno_location to get the errno variable location and sets it to 12
	; because when malloc fails, it sets errno to 12 (ENOMEM). Then returns 0
	call __errno_location wrt ..plt ;wrt ..plt is to prevent C function error on linux
	mov rdi, 12
	mov [rax], rdi
	mov rax, 0
	ret
