;ssize_t read(int rdi, void *rsi, size_t rdx);

section .text

	global ft_read
	extern __errno_location

ft_read:

	; syscall of read is 0. If return of read syscall is lower than 0, it's an error
	; and will be handled in [errors] part
	xor rax, rax
	syscall
	cmp rax, 0
	jl errors
	ret

errors:

	; first, turns return of syscall positive to be saved in errno. Then the function
	; itself returns -1
	neg rax
	mov rbx, rax
	call __errno_location wrt ..plt ;wrt ..plt is to prevent C function error on linux
	mov [rax], rbx
	mov rax, -1
	ret
