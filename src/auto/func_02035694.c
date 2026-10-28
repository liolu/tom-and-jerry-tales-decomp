#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void FX_Div();
// clang-format off
asm void func_02035694(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x4]
    mov r3, #0x0
    str r0, [r4, #0x0]
    strh r3, [r4, #0x14]
    mov r0, #0x1
    strh r0, [r4, #0x16]
    str r3, [r4, #0xc]
    add r2, r4, #0x33
    swpb r0, r1, [r2]
    add r1, r4, #0x32
    swpb r0, r3, [r1]
    ldrb r1, [r4, #0x33]
    add r0, r1, #0xfc
    and r0, r0, #0xff
    cmp r0, #0x1
    mov r0, #0x1000
    bhi L_02035718
    ldr r1, [r4, #0x0]
    add r1, r1, #0x1000
    ldr r1, [r1, #0xe90]
    sub r1, r1, #0x1
    strh r1, [r4, #0x16]
    ldrh r1, [r4, #0x16]
    ldr r2, [r4, #0x0]
    add r1, r2, r1
    add r1, r1, #0x1000
    ldrb r1, [r1, #0xea0]
    mov r1, r1, lsl #0xc
    bl FX_Div
    str r0, [r4, #0x10]
    ldmfd sp!, {r4, pc}
L_02035718:
    cmp r1, #0x6
    bne L_02035764
    ldr r1, [r4, #0x0]
    add r1, r1, #0x1000
    ldr r1, [r1, #0xe90]
    sub r1, r1, #0x1
    strh r1, [r4, #0x14]
    ldrh r1, [r4, #0x14]
    sub r1, r1, #0x1
    strh r1, [r4, #0x16]
    ldrh r1, [r4, #0x16]
    ldr r2, [r4, #0x0]
    add r1, r2, r1
    add r1, r1, #0x1000
    ldrb r1, [r1, #0xea0]
    mov r1, r1, lsl #0xc
    bl FX_Div
    str r0, [r4, #0x10]
    ldmfd sp!, {r4, pc}
L_02035764:
    ldrh r1, [r4, #0x14]
    ldr r2, [r4, #0x0]
    add r1, r2, r1
    add r1, r1, #0x1000
    ldrb r1, [r1, #0xea0]
    mov r1, r1, lsl #0xc
    bl FX_Div
    str r0, [r4, #0x10]
    ldmfd sp!, {r4, pc}
}
// clang-format on
