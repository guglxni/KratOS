[BITS 32]

global _start
extern c_start
extern kratos_exit

section .asm

_start:
    call c_start
    call kratos_exit
    ret
