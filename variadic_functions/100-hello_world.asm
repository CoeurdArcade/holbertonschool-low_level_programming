section .data
hello_world db 'Hello, World',0xA ; Hello, World followed by a newline character
hello_len equ $ - hello_world ; length of hello_world string

section .text
global _start
_start:
    ; write(1, message, 13)
    mov rax, 1 ; system call number (write)
    mov rdi, 1 ; file descriptor (stdout)
    mov rsi, hello_world ; address of string to print
    mov rdx, hello_len ; length of string to print
    syscall ; invoke system call

    ; exit(0)
    xor edi, edi ; exit code = 0
    mov eax, 60 ; system call number (exit)
    syscall ; invoke system call
