section .data
    hello_message db "Hello, Holberton", 0
    format_string db "%s", 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format_string
    mov rsi, hello_message
    call printf
    pop rbp

    ; Exit the program
    mov eax, 0
    ret
