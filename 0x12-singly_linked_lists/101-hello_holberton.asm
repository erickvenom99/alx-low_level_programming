	section .data
	hello db 'Hello, Holberton', 0
	format db '%s', 0
	newline db 10, 0

	section .text
	extern printf

	global main

main:
	sub rsp, 8
	mov rdi, format
	mov rsi, hello
	xor eax, eax
	call printf
	add rsp, 8

	sub rsp, 8
	mov rdi, format
	mov rsi, newline
	xor eax, eax
	call printf
	add rsp, 8

	xor eax, eax
	    ret
