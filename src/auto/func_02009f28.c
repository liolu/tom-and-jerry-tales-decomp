#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02009f80();
extern void func_020517f8();
extern void func_0205180c();
extern char data_0206a34c[];
// clang-format off
asm void func_02009f28(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_020517f8
    ldr r1, =data_0206a34c
    mov r4, r0
    ldr r0, [r1, #0x4]
    mov r3, #0x6
    ldrb r1, [r0, #0x0]
    mov r0, r5
    add r1, r5, r1
    add r2, r1, #0x4
    swpb r1, r3, [r2]
    ldrb r1, [r5, #0x0]
    add r1, r1, #0x1
    swpb r1, r1, [r5]
    bl func_02009f80
    strh r0, [r5, #0x2]
    mov r0, r4
    bl func_0205180c
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
