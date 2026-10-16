#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02050ab8(void) {
    mov ip, #0x0
    mov r1, #0x0
L_02007a00:
    mov r0, #0x0
L_02007a04:
    orr r2, r1, r0
    mcr p15, 0, ip, c7, c10, 4
    mcr p15, 0, r2, c7, c14, 2
    add r0, r0, #0x20
    cmp r0, #0x400
    blt L_02007a04
    add r1, r1, #0x40000000
    cmp r1, #0x0
    bne L_02007a00
    bx lr
}
// clang-format on
