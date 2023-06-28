section .data
    message db 'Hello, Holberton', 0

section .text
    extern printf

global main
main:
    push rbp
    mov rbp, rsp

    lea rdi, [message]
    xor eax, eax
    call printf

    mov eax, 0
    pop rbp
    ret
