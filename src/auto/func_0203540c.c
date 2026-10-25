#include "m2c.h"

extern char data_020a0b70[];
// clang-format off
asm void func_0203540c(void) {
    cmp r0, #0x0
    blt L_a
    cmp r0, #0x3f
    andle r0, r0, #0xff
    bxle lr
L_a:
    ldr r2, =data_020a0b70
    ldrb r0, [r2, #0x5]
    add r1, r2, #0x5
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrb r3, [r2, #0x5]
    ldrb r0, [r2, #0x0]
    cmp r3, r0
    ldrhib r0, [r2, #0x1]
    swphib r0, r0, [r1]
    ldr r0, =data_020a0b70
    ldrb r0, [r0, #0x5]
    bx lr
}
// clang-format on
