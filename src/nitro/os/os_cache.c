#include "m2c.h"

// clang-format on

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void DC_FlushAll(void) {
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

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void DC_InvalidateRange(void) {
    add r1, r1, r0
    bic r0, r0, #0x1f
L_02007a34:
    mcr p15, 0, r0, c7, c6, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_02007a34
    bx lr
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void DC_StoreRange(void) {
    add r1, r1, r0
    bic r0, r0, #0x1f
L_02007a50:
    mcr p15, 0, r0, c7, c10, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_02007a50
    bx lr
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void DC_FlushRange(void) {
    mov ip, #0x0
    add r1, r1, r0
    bic r0, r0, #0x1f
L_02007a70:
    mcr p15, 0, ip, c7, c10, 4
    mcr p15, 0, r0, c7, c14, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_02007a70
    bx lr
}

void DC_WaitWriteBufferEmpty(void) {
    __asm__ volatile("mov r0, #0\n"
                     "mcr p15, 0, r0, c7, c10, 4\n"
                     :
                     :
                     : "r0", "memory");
}
