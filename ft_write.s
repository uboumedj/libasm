;ssize_t write(int rdi, const void *rsi, size_t rdx);

section .text

	global ft_write
	extern __errno_location

ft_write:

	; syscall of write is 0. If return of write syscall is lower than 0, it's an error
	; and will be handled in [errors] part
	mov rax, 1
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
