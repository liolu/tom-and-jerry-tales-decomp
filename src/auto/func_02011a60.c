#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8000();
extern void func_02030ed4();
extern void func_02030ee0();
extern void func_020312cc();
extern void func_02052064();
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_02086ff4[];
// clang-format off
asm void func_02011a60(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x8
    mov r5, r1
    mov r4, r0
    ldr r1, =data_0206e698
    add r0, sp, #0x0
    bl func_02030ed4
    ldr r2, =data_0206e698
    add r1, sp, #0x4
    mov r0, r4
    bl func_020312cc
    ldr r2, =data_02086ff4
    ldr r3, [sp, #0x4]
    ldrb r1, [r2, #0x1]
    add r0, r3, #0x4
    str r0, [sp, #0x4]
    mov r0, #0x14
    smulbb r4, r1, r0
    ldr r0, [r2, #0x4]
    ldr r1, [r3, #0x4]
    add r0, r0, r4
    strh r1, [r0, #0x4]
    ldr r0, [sp, #0x4]
    mov r1, #0xc
    add r0, r0, #0x4
    str r0, [sp, #0x4]
    ldr r2, [r2, #0x4]
    ldr r0, =data_0206e6a4
    add r2, r2, r4
    ldrh r2, [r2, #0x4]
    mul r1, r2, r1
    bl func_01ff8000
    ldr r1, =data_02086ff4
    mov r2, #0xc
    ldr r3, [r1, #0x4]
    str r0, [r3, r4]
    ldr r3, [r1, #0x4]
    ldr r0, [sp, #0x4]
    ldr r1, [r3, r4]
    add r3, r3, r4
    ldrh r3, [r3, #0x4]
    mul r2, r3, r2
    bl func_02052064
    ldr r2, =data_02086ff4
    mov r0, #0x14
    ldrb r3, [r2, #0x1]
    ldr r1, [r2, #0x4]
    ldr lr, [sp, #0x4]
    smulbb r4, r3, r0
    add ip, r1, r4
    ldrh r3, [ip, #0x4]
    mov r1, #0xc
    ldr r0, =data_0206e6a4
    mul r1, r3, r1
    add r3, lr, r1
    str r3, [sp, #0x4]
    ldr r1, [lr, r1]
    strh r1, [ip, #0xc]
    ldr r1, [sp, #0x4]
    add r1, r1, #0x4
    str r1, [sp, #0x4]
    ldr r1, [r2, #0x4]
    add r1, r1, r4
    ldrh r1, [r1, #0xc]
    mov r1, r1, lsl #0x2
    bl func_01ff8000
    ldr r1, =data_02086ff4
    ldr r2, [r1, #0x4]
    add r2, r2, r4
    str r0, [r2, #0x8]
    ldr r1, [r1, #0x4]
    ldr r0, [sp, #0x4]
    add r2, r1, r4
    ldr r1, [r2, #0x8]
    ldrh r2, [r2, #0xc]
    mov r2, r2, lsl #0x2
    bl func_02052064
    ldr r2, =data_02086ff4
    mov r0, #0x14
    ldrb r1, [r2, #0x1]
    ldr r3, [r2, #0x4]
    mla r0, r1, r0, r3
    str r5, [r0, #0x10]
    ldrb r3, [r2, #0x1]
    ldr r1, =data_0206e698
    add r0, sp, #0x0
    add r4, r3, #0x1
    add r3, r2, #0x1
    swpb r2, r4, [r3]
    bl func_02030ee0
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
