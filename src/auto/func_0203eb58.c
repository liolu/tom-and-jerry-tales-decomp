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
asm void func_0203eb58(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    ldr r3, =data_0206d4e0
    mov r10, r0
    ldr r0, [r3, #0x4]
    mov r4, r1
    cmp r0, #0x0
    mov r9, r2
    mov r5, #0x0
    addeq sp, sp, #0x1c
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    bl func_02050b24
    add r1, r10, #0x7
    add r0, r4, #0x7
    bic r10, r1, #0x7
    bic r4, r0, #0x7
    bl func_0203eabc
    ldr r1, =data_0206d4e0
    mov r0, r0, lsl #0x10
    ldr r1, [r1, #0x4]
    mov r6, r0, lsr #0x10
    cmp r1, #0x0
    addeq sp, sp, #0x1c
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r8, r10, r4
    add r7, sp, #0x14
    mov r4, #0xa
    mov r11, #0x2
L_0203ebd4:
    mov r0, r6
    bl func_020575f8
    mov r1, #0x0
    mov r2, r7
L_0203ebe4:
    ldrb r0, [r9], #0x1
    add r1, r1, #0x1
    cmp r1, #0x8
    swpb r0, r0, [r2]
    add r2, r2, #0x1
    blt L_0203ebe4
    mov r0, r7
    mov r1, #0x8
    bl func_02050b24
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    mov r0, #0x8
    str r0, [sp, #0x8]
    str r4, [sp, #0xc]
    mov r0, r7
    mov r1, r10
    mov r2, #0x8
    mov r3, #0x0
    str r11, [sp, #0x10]
    bl func_02057a58
    bl func_020575ac
    cmp r0, #0x0
    bne L_0203ec54
    add r10, r10, #0x8
    cmp r10, r8
    movge r5, #0x1
    b L_0203ec74
L_0203ec54:
    mov r0, r6
    bl func_02057608
    ldr r0, =data_0206d4e0
    mov r1, #0x0
    str r1, [r0, #0x4]
    add sp, sp, #0x1c
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0203ec74:
    mov r0, r6
    bl func_02057608
    cmp r5, #0x0
    beq L_0203ebd4
    mov r0, r6
    bl func_0203eb44
    mov r0, #0x0
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
