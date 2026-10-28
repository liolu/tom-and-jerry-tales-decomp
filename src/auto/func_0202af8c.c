#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202af28();
extern void _s32_div_f();
extern char data_0206ca70[];
extern char data_02087ef4[];
// clang-format off
asm void func_0202af8c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    ldr r4, [sp, #0x20]
    bl func_0202af28
    ldr r1, =data_02087ef4
    mov r0, #0x1
    str r0, [r1, #0x84]
    str r0, [r1, #0x34]
    ldr r0, =data_0206ca70
    str r6, [r1, #0x64]
    str r6, [r0, #0x4]
    ldrh r2, [sp, #0x18]
    str r5, [r1, #0x44]
    ldrh r0, [sp, #0x1c]
    strh r2, [r1, #0x8]
    ldrh r2, [sp, #0x24]
    strh r0, [r1, #0x16]
    str r7, [r1, #0x6c]
    str r8, [r1, #0x88]
    str r4, [r1, #0x54]
    ldrb r3, [sp, #0x28]
    strh r2, [r1, #0x14]
    add r2, r1, #0x5
    swpb r1, r3, [r2]
    ldr r1, [r4, #0x14]
    ldrb r1, [r4, r1]
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl _s32_div_f
    ldr r2, =data_02087ef4
    ldrh r3, [sp, #0x2c]
    strh r0, [r2, #0xa]
    add r1, r2, #0x4
    strh r3, [r2, #0xc]
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
