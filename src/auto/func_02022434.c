#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203d740();
extern char data_020b8b44[];
// clang-format off
asm void func_02022434(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    mov r4, r0
    ldrb r0, [r4, #0x8]
    tst r0, #0x80
    cmpeq r1, #0x0
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r3, r4, pc}
    tst r0, #0x10
    addeq sp, sp, #0xc
    moveq r0, #0x0
    ldmeqfd sp!, {r3, r4, pc}
    and r1, r0, #0x3
    ldr r0, [r4, #0x3c]
    add r1, r4, r1
    cmp r0, #0x0
    ldrb ip, [r1, #0x38]
    beq L_020224d8
    ldr r3, =data_020b8b44
    mov r1, #0x28
    mla r1, r2, r1, r3
    and r2, ip, #0xf0
    mov r2, r2, asr #0x4
    and r3, r2, #0xff
    and r2, ip, #0xf
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    str r1, [sp, #0x8]
    ldrb ip, [r4, #0x2]
    ldrsb r1, [r4, #0x46]
    ldrb r3, [r4, #0x0]
    ldrsb r2, [r4, #0x44]
    add r1, ip, r1
    mov r1, r1, lsl #0x10
    add r2, r3, r2
    mov r2, r2, lsl #0x10
    ldr r3, [r4, #0x40]
    mov r1, r1, lsr #0x10
    mov r2, r2, lsr #0x10
    bl func_0203d740
L_020224d8:
    ldrb r1, [r4, #0x8]
    add r2, r4, #0x8
    mov r0, #0x0
    bic r1, r1, #0x80
    swpb r1, r1, [r2]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
