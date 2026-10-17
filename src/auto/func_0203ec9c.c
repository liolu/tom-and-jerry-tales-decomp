#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203eabc();
extern void func_0203eb44();
extern void func_02050b24();
extern void func_020575ac();
extern void func_020575f8();
extern void func_02057608();
extern void func_02057a58();
extern char data_0206d4e0[];
// clang-format off
asm void func_0203ec9c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r3, =data_0206d4e0
    mov r10, r0
    ldr r0, [r3, #0x4]
    str r1, [sp, #0x14]
    cmp r0, #0x0
    mov r9, r2
    mov r4, #0x0
    addeq sp, sp, #0x20
    moveq r0, #0x1
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x14]
    add r1, r10, #0x7
    add r0, r0, #0x7
    bic r0, r0, #0x7
    bic r10, r1, #0x7
    str r0, [sp, #0x14]
    bl func_0203eabc
    ldr r1, =data_0206d4e0
    mov r0, r0, lsl #0x10
    ldr r1, [r1, #0x4]
    mov r5, r0, lsr #0x10
    cmp r1, #0x0
    addeq sp, sp, #0x20
    moveq r0, #0x1
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x14]
    add r7, sp, #0x18
    add r8, r10, r0
    mov r11, #0x6
L_0203ed18:
    mov r0, r5
    bl func_020575f8
    mov r0, #0x0
    str r0, [sp, #0x0]
    stmib sp, {r0, r11}
    mov r0, #0x1
    str r0, [sp, #0xc]
    mov r0, #0x0
    str r0, [sp, #0x10]
    mov r0, r10
    mov r1, r7
    mov r2, #0x8
    mov r3, #0x0
    bl func_02057a58
    bl func_020575ac
    mov r6, r0
    mov r1, #0x0
    mov r2, r7
L_0203ed60:
    ldrb r0, [r2], #0x1
    add r1, r1, #0x1
    cmp r1, #0x8
    swpb r0, r0, [r9]
    add r9, r9, #0x1
    blt L_0203ed60
    mov r0, r7
    mov r1, #0x8
    bl func_02050b24
    cmp r6, #0x0
    bne L_0203ed9c
    add r10, r10, #0x8
    cmp r10, r8
    movge r4, #0x1
    b L_0203edbc
L_0203ed9c:
    mov r0, r5
    bl func_02057608
    ldr r0, =data_0206d4e0
    mov r1, #0x0
    str r1, [r0, #0x4]
    add sp, sp, #0x20
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203edbc:
    mov r0, r5
    bl func_02057608
    cmp r4, #0x0
    beq L_0203ed18
    mov r0, r5
    bl func_0203eb44
    ldr r1, [sp, #0x14]
    mov r0, r9
    bl func_02050b24
    mov r0, #0x0
    add sp, sp, #0x20
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
