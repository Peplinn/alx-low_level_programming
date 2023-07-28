section .data
	hello db 'Hello, Holberton', 0x0a
	format db '%s', 10, 0

extern printf

section .text
	global main

main:
	push rbp
	mov rbp, rsp

	; Print string
	mov rdi, format
	mov rsi, hello
	xor rax, rax
	call printf

	; Exit program
	xor eax, eax
	mov rsp, rbp
	pop rbp
	ret