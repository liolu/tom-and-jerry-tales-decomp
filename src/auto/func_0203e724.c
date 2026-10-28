#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203d8d8();
extern void OS_Terminate();
extern void MI_CpuCopy8();
// clang-format off
asm void func_0203e724(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x110
    str r0, [sp, #0x0]
    str r1, [sp, #0x4]
    str r2, [sp, #0x8]
    mov r9, r0
    cmp r0, #0x0
    mov r8, #0x0
    bne L_0203e74c
    bl OS_Terminate
L_0203e74c:
    mov r7, #0x1
    mov r6, r7
    mov r5, r7
    mov r4, r7
    add r11, sp, #0x10
L_0203e760:
    str r9, [sp, #0xc]
L_0203e764:
    ldrsb r0, [r9], #0x1
    cmp r0, #0x0
    moveq r8, r7
    cmp r0, #0xa
    moveq r8, r6
    cmp r0, #0x20
    cmpeq r8, #0x0
    beq L_0203e764
    sub r9, r9, #0x1
L_0203e788:
    ldrsb r0, [r9], #0x1
    cmp r0, #0x0
    moveq r8, r5
    cmp r0, #0xa
    moveq r8, r4
    cmp r0, #0x20
    beq L_0203e7ac
    cmp r8, #0x0
    beq L_0203e788
L_0203e7ac:
    ldr r0, [sp, #0x0]
    sub r9, r9, #0x1
    sub r10, r9, r0
    mov r1, r11
    mov r2, r10
    bl MI_CpuCopy8
    add r1, r11, r10
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r1, [sp, #0x8]
    mov r0, r11
    bl func_0203d8d8
    ldr r1, [sp, #0x4]
    cmp r0, r1
    movgt r8, #0x0
    bgt L_0203e7f4
    cmp r8, #0x0
    beq L_0203e760
L_0203e7f4:
    cmp r8, #0x0
    bne L_0203e80c
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x0]
    cmp r1, r0
    subne r10, r1, r0
L_0203e80c:
    mov r0, r10
    add sp, sp, #0x110
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
