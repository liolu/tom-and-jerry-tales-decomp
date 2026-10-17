#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02063f6c[];
extern char data_02086fa8[];
// clang-format off
asm void func_02010fac(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x14
    ldr r0, =data_02086fa8
    ldr r3, =0x38e38e39
    ldrb r1, [r0, #0x9]
    add r4, r0, #0x9
    mov r2, #0x9
    add r0, r1, #0x1
    and r5, r0, #0xff
    smull r1, r6, r3, r5
    mov r0, r5, lsr #0x1f
    add r6, r0, r6, asr #0x1
    smull r0, r1, r2, r6
    sub r6, r5, r0
    mov r5, #0x0
    swpb r0, r6, [r4]
    ldr lr, =data_02063f6c
    add ip, sp, #0x0
    mov r3, r5
    mov r4, r5
L_02010ffc:
    ldrb r6, [lr, r5]
    mov r7, r4
L_02011004:
    mov r2, r7, lsl #0x1
    add r0, r2, r6, lsl #0x1
    add r0, r0, #0x5000000
    add r0, r0, #0x400
    ldrh r1, [r0, #0x0]
    add r0, r7, #0x1
    and r7, r0, #0xff
    strh r1, [ip, r2]
    cmp r7, #0x9
    blo L_02011004
    ldr r0, =0x38e38e39
    mov r2, r3
    mov r9, #0x9
L_02011038:
    add r1, r2, #0x1
    mov r7, r1, lsr #0x1f
    smull r8, r10, r0, r1
    add r10, r7, r10, asr #0x1
    smull r7, r8, r9, r10
    mov r2, r2, lsl #0x1
    ldrh r2, [ip, r2]
    sub r10, r1, r7
    mov r7, r10, lsl #0x1
    add r7, r7, r6, lsl #0x1
    add r7, r7, #0x5000000
    add r7, r7, #0x400
    strh r2, [r7, #0x0]
    and r2, r1, #0xff
    cmp r2, #0x9
    blo L_02011038
    add r0, r5, #0x1
    and r5, r0, #0xff
    cmp r5, #0x6
    blo L_02010ffc
    add sp, sp, #0x14
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
