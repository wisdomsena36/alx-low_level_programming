section .data
    hello db 'Hello, Holberton', 0x0A ; 0x0A is the ASCII code for a new line

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
