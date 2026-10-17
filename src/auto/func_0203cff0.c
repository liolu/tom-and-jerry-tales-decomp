#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203e69c();
extern void func_0203e6f8();
extern char data_020b8b44[];
// clang-format off
asm void func_0203cff0(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    bl func_0203e6f8
    mov r0, #0x28
    mul r3, r7, r0
    ldr ip, =data_020b8b44
    mov r1, #0x1
    add r0, ip, r3
    add r2, r0, #0x14
    swpb r1, r1, [r2]
    mov r1, #0x2
    str r1, [r0, #0x8]
    str r6, [ip, r3]
    str r5, [r0, #0x4]
    ldr r1, [sp, #0x18]
    str r4, [r0, #0xc]
    ldr r2, [sp, #0x1c]
    str r1, [r0, #0x1c]
    ldr r1, [sp, #0x20]
    str r2, [r0, #0x18]
    str r1, [r0, #0x10]
    mov r1, #0x0
    str r1, [r0, #0x24]
    str r1, [r0, #0x20]
    bl func_0203e69c
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
