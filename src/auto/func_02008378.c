#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02007770();
extern char data_020692ec[];
extern char data_0206ea14[];
// clang-format off
asm void func_02008378(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_02007770
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02008418
    ldr r0, =data_0206ea14
    ldrh r1, [r5, #0xea]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    and ip, r1, #0xff
    ldrh r1, [r0, #0x18]
    and r3, r1, #0xff
    cmp r3, ip
    beq L_02008404
    sub r2, r3, ip
    and r1, r2, #0xff
    cmp r1, #0x80
    bhs L_020083e8
    sub r1, r2, #0x4
    and r1, r1, #0xff
    cmp r1, #0x80
    addlo r1, ip, #0x4
    andlo ip, r1, #0xff
    movhs ip, r3
    b L_02008404
L_020083e8:
    sub r1, ip, r3
    sub r1, r1, #0x4
    and r1, r1, #0xff
    cmp r1, #0x80
    sublo r1, ip, #0x4
    andlo ip, r1, #0xff
    movhs ip, r3
L_02008404:
    strh r3, [r0, #0x18]
    strh ip, [r5, #0xea]
    ldrh r1, [r5, #0xea]
    add r0, r5, #0x1800
    strh r1, [r0, #0x40]
L_02008418:
    and r0, r4, #0x7
    add r0, r0, r0, lsl #0x1
    add r0, r5, r0
    add r2, r0, #0x1000
    add r0, r2, #0x48
    add r1, r0, #0x800
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r0, r2, #0x49
    ldrh r3, [r5, #0xea]
    add r1, r0, #0x800
    add r2, r2, #0x4a
    swpb r0, r3, [r1]
    add r1, r2, #0x800
    swpb r0, r4, [r1]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
