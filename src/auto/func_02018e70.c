#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203b96c();
extern void func_0203c24c();
extern char data_02087410[];
extern char data_02087454[];
// clang-format off
asm void func_02018e70(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r0, #0x0
    bl func_0203b96c
    mov r0, #0x0
    bl func_0203b96c
    ldr r4, =data_02087410
    mov r9, #0x0
    ldrb r0, [r4, #0x1]
    cmp r0, #0x0
    bls L_02018f20
    mov r8, #0x100
    mov r7, #0xc0
    mov r6, r8
    mov r5, r7
    mov r11, r8
L_02018eac:
    mov r10, r9, lsl #0x2
    mov r0, r10, lsl #0x10
    mov r1, r8
    mov r2, r7
    mov r0, r0, lsr #0x10
    bl func_0203c24c
    add r0, r10, #0x2
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r6
    mov r2, r5
    bl func_0203c24c
    add r0, r10, #0x3
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r11
    mov r2, #0xc0
    bl func_0203c24c
    add r0, r10, #0x4
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x100
    mov r2, #0xc0
    bl func_0203c24c
    add r0, r9, #0x1
    and r9, r0, #0xff
    ldrb r0, [r4, #0x1]
    cmp r9, r0
    blo L_02018eac
L_02018f20:
    ldr r4, =data_02087410
    mov r5, #0x0
    add r1, r4, #0x1
    swpb r0, r5, [r1]
    sub r2, r5, #0x1
    swpb r0, r2, [r4]
    add r1, r4, #0x3
    swpb r0, r5, [r1]
    ldr r1, =data_02087454
    ldr r3, [r4, #0x3c]
    ldr r4, [r4, #0x40]
    mov r0, r5
    mov r6, #0x44
L_02018f54:
    mla r9, r5, r6, r1
    swpb r7, r2, [r9]
    add r8, r9, #0x1
    swpb r7, r0, [r8]
    add r8, r5, #0x1
    strh r0, [r9, #0x2]
    add r7, r9, #0x4
    swpb r5, r0, [r7]
    and r5, r8, #0xff
    str r3, [r9, #0x8]
    str r4, [r9, #0xc]
    str r0, [r9, #0x10]
    str r0, [r9, #0x14]
    add r8, r9, #0x18
    cmp r5, #0x5
    swpb r7, r0, [r8]
    blo L_02018f54
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
