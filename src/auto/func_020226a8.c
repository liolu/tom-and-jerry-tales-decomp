#include "m2c.h"

// clang-format off
asm void func_020226a8(void) {
    stmdb sp!, {r3, lr}
    ldrb lr, [r0, #0x8]
    cmp r3, #0x0
    add ip, r0, #0x8
    orr r3, lr, #0x80
    swpb r3, r3, [ip]
    ldrne r3, [r0, #0x2c]
    cmpne r3, #0x0
    swpeqb r2, r2, [r0]
    addeq r2, r0, #0x2
    swpeqb r0, r1, [r2]
    beq L_0202270c
    ldrb lr, [r0, #0x1]
    ldrb ip, [r0, #0x0]
    add r3, r0, #0x2
    sub ip, lr, ip
    sub r2, r2, ip
    mov r2, r2, asr #0x2
    swpb r2, r2, [r0]
    ldrb r2, [r0, #0x3]
    ldrb r0, [r0, #0x2]
    sub r0, r2, r0
    sub r0, r1, r0
    mov r0, r0, asr #0x2
    swpb r0, r0, [r3]
L_0202270c:
    mov r0, #0x0
    ldmia sp!, {r3, pc}
}
// clang-format on
