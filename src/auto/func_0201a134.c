#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203b96c();
extern void func_0203c1e8();
extern void func_0203c4cc();
extern void MIi_CpuCopy16();
extern char data_02087410[];
extern char data_02087454[];
extern char data_02087455[];
extern char data_02087470[];
extern char data_02087474[];
extern char data_02087478[];
extern char data_0208747c[];
extern char data_0208747e[];
extern char data_02087480[];
extern char data_02087482[];
extern char data_02087483[];
// clang-format off
asm void func_0201a134(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    ldr r0, =data_02087410
    ldr r2, =data_02087454
    ldrb r5, [r0, #0x1]
    mov r4, #0x0
    mov r0, #0x44
L_0201a150:
    mla r1, r4, r0, r2
    ldrb r1, [r1, #0x1]
    cmp r1, #0x0
    moveq r5, r4
    beq L_0201a174
    add r1, r4, #0x1
    and r4, r1, #0xff
    cmp r4, r5
    bls L_0201a150
L_0201a174:
    ldr r1, =data_02087410
    mov r0, #0x0
    ldrb r3, [r1, #0x1]
    add r2, r1, #0x1
    add r1, r3, #0x1
    swpb r1, r1, [r2]
    bl func_0203b96c
    ldr r7, [sp, #0x1c]
    ldr r0, [sp, #0x18]
    mov r6, r5, lsl #0x2
    sub r2, r0, #0x20
    sub r1, r7, #0x20
    mov r0, r6, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x22
    bl func_0203c1e8
    ldr r0, =data_02087410
    add r1, r5, #0x9
    ldr r0, [r0, #0x30]
    mov r2, #0x20
    add r1, r0, r1, lsl #0x5
    add r0, r0, #0x100
    bl MIi_CpuCopy16
    mov r0, r6, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    add r2, r5, #0x9
    bl func_0203c4cc
    mov r0, r4
    mov r1, #0x44
    mul r1, r5, r1
    ldr r2, =data_02087454
    mov r6, #0x4
    add r3, r2, r1
    swpb r2, r5, [r3]
    ldr r2, =data_02087455
    ldr r4, [sp, #0x18]
    add r3, r2, r1
    swpb r2, r6, [r3]
    ldr r3, =data_02087474
    ldr r2, =data_02087478
    str r4, [r3, r1]
    str r7, [r2, r1]
    ldr r2, =data_02087482
    mov r5, #0xd
    add r3, r2, r1
    ldr r2, =data_0208747c
    mov r4, #0x16
    strh r5, [r2, r1]
    ldr r2, =data_0208747e
    mov r5, #0x20
    strh r4, [r2, r1]
    ldr r2, =data_02087480
    mov r4, #0x0
    strh r5, [r2, r1]
    swpb r2, r4, [r3]
    ldr r2, =data_02087470
    mov r3, #0x1
    str r4, [r2, r1]
    ldr r2, =data_02087483
    add r2, r2, r1
    swpb r1, r3, [r2]
    ldmfd sp!, {r3, r4, r5, r6, r7, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
