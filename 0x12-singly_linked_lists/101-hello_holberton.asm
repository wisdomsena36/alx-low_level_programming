section .data
    hello db 'Hello, Holberton', 0

section .text
    extern printf

    global main

main:
    push rbp
    mov rdi, hello
    call printf
    pop rbp

    mov rax, 0
    ret
