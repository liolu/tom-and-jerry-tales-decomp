#include "m2c.h"

// clang-format on

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void MI_UncompressRL8(void) {
    stmfd sp!, {r4, r5, r7}
    ldmia r0!, {r3}
    mov r7, r3, lsr #0x8
L_020096a0:
    cmp r7, #0x0
    ble L_020096f8
    ldrb r4, [r0], #0x1
    ands r2, r4, #0x7f
    tst r4, #0x80
    bne L_020096d8
    add r2, r2, #0x1
    sub r7, r7, r2
L_020096c0:
    ldrb r3, [r0], #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    subs r2, r2, #0x1
    bgt L_020096c0
    b L_020096a0
L_020096d8:
    add r2, r2, #0x3
    sub r7, r7, r2
    ldrb r5, [r0], #0x1
L_020096e4:
    swpb r4, r5, [r1]
    add r1, r1, #0x1
    subs r2, r2, #0x1
    bgt L_020096e4
    b L_020096a0
L_020096f8:
    ldmfd sp!, {r4, r5, r7}
    bx lr
}
