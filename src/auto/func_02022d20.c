#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02022d20(void) {
    cmp r0, r1
    bne L_02022d50
    cmp r2, #0x5
    bne L_02022d40
    mov r3, #0x0
    str r3, [r0, #0x10]
    str r3, [r0, #0xc]
    b L_02022d50
L_02022d40:
    cmp r2, #0x4
    moveq r3, #0x0
    streq r3, [r0, #0x18]
    streq r3, [r0, #0x14]
L_02022d50:
    cmp r2, #0x5
    streq r1, [r0, #0x10]
    streq r0, [r1, #0xc]
    beq L_02022d6c
    cmp r2, #0x4
    streq r1, [r0, #0x18]
    streq r0, [r1, #0x14]
L_02022d6c:
    ldrb ip, [r0, #0x8]
    add r2, r0, #0x8
    add r3, r1, #0x8
    orr r0, ip, #0x20
    swpb r0, r0, [r2]
    mov r0, #0x0
    ldrb r1, [r1, #0x8]
    orr r1, r1, #0x20
    swpb r1, r1, [r3]
    bx lr
}
// clang-format on
