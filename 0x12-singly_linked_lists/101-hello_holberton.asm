section .data
hello db "Hello, Holberton", 0
hello_format db "%s", 0

section .text
extern printf

global main
main:
push rbp
mov rdi, hello_format
mov rsi, hello
xor rax, rax
call printf
pop rbp
ret
