#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203e69c();
extern void func_0203e6f8();
extern char data_020b8b44[];
// clang-format off
asm void func_0203cf6c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    bl func_0203e6f8
    ldr r1, [sp, #0x24]
    ldr r2, =data_020b8b44
    mov r0, #0x28
    mla r0, r7, r0, r2
    add r2, r0, #0x14
    mov r3, #0x1
    cmp r1, #0x0
    swpb r1, r3, [r2]
    ldr r2, [sp, #0x1c]
    strne r3, [r0, #0x8]
    moveq r1, #0x0
    streq r1, [r0, #0x8]
    str r6, [r0, #0x0]
    str r5, [r0, #0x4]
    ldr r1, [sp, #0x18]
    str r4, [r0, #0xc]
    str r1, [r0, #0x1c]
    str r2, [r0, #0x18]
    ldr r1, [sp, #0x20]
    mov r2, #0x0
    str r1, [r0, #0x10]
    str r2, [r0, #0x24]
    ldr r1, [sp, #0x24]
    str r2, [r0, #0x20]
    bl func_0203e69c
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
