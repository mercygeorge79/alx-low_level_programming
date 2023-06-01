section .data
    hello db 'Hello, Holberton', 0

section .text
    global main

main:
    ; Set up stack frame
    mov rax, 1                  ; System call number for write
    mov rdi, 1                  ; File descriptor 1 = stdout
    mov rsi, hello              ; Pointer to the string to print
    mov rdx, 16                 ; Length of the string
    syscall                     ; Call the kernel

    ; Exit the program
    mov eax, 60                 ; System call number for exit
    xor edi, edi                ; Exit status 0
    syscall                     ; Call the kernel


