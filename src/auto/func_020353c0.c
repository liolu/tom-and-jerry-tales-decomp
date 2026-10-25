#include "m2c.h"

extern char data_020a0b70[];
// clang-format off
asm void func_020353c0(void) {
    cmp r0, #0x0
    blt L_020353d4
    cmp r0, #0x3f
    andle r0, r0, #0xff
    bxle lr
L_020353d4:
    ldr r2, =data_020a0b70
    ldrb r0, [r2, #0x2]
    add r1, r2, #0x2
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrb r3, [r2, #0x2]
    ldrb r0, [r2, #0x3]
    cmp r3, r0
    ldrhib r0, [r2, #0x4]
    swphib r0, r0, [r1]
    ldr r0, =data_020a0b70
    ldrb r0, [r0, #0x2]
    bx lr
}
// clang-format on
