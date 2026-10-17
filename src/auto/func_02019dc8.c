#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203b96c();
extern void func_0203c1e8();
extern void func_0203c408();
extern void func_0203c4cc();
extern void func_0203c568();
extern void func_02051ee8();
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
extern char data_02087486[];
extern char data_02087488[];
extern char data_0208748c[];
// clang-format off
asm void func_02019dc8(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, r6, lr}
    ldr r0, =data_02087410
    ldr r2, =data_02087454
    ldrb r4, [r0, #0x1]
    mov r3, #0x0
    mov r0, #0x44
L_02019de4:
    mla r1, r3, r0, r2
    ldrb r1, [r1, #0x1]
    cmp r1, #0x0
    moveq r4, r3
    beq L_02019e08
    add r1, r3, #0x1
    and r3, r1, #0xff
    cmp r3, r4
    bls L_02019de4
L_02019e08:
    ldr r1, =data_02087410
    mov r0, #0x0
    ldrb r3, [r1, #0x1]
    add r2, r1, #0x1
    add r1, r3, #0x1
    swpb r1, r1, [r2]
    bl func_0203b96c
    ldr r6, [sp, #0x14]
    ldr r0, [sp, #0x10]
    mov r5, r4, lsl #0x2
    sub r2, r0, #0x20
    sub r1, r6, #0x20
    mov r0, r5, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x1e
    bl func_0203c1e8
    ldr r0, =data_02087410
    add r1, r4, #0x9
    ldr r0, [r0, #0x30]
    mov r2, #0x20
    add r1, r0, r1, lsl #0x5
    add r0, r0, #0xa0
    bl func_02051ee8
    mov r0, r5, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    add r2, r4, #0x9
    bl func_0203c4cc
    mov r0, r5, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x100
    mov r2, r4
    bl func_0203c408
    mov r0, r4, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x1000
    mov r2, r1
    mov r3, #0x0
    bl func_0203c568
    mov r0, #0x44
    mul r2, r4, r0
    ldr r0, =data_02087454
    mov r5, #0x3
    add r1, r0, r2
    swpb r0, r4, [r1]
    and r0, r4, #0xff
    ldr r1, =data_02087455
    ldr r4, [sp, #0x10]
    add r3, r1, r2
    swpb r1, r5, [r3]
    ldr r3, =data_02087474
    ldr r1, =data_02087478
    str r4, [r3, r2]
    str r6, [r1, r2]
    mov r1, #0x0
    ldr r4, =data_0208747c
    ldr r3, =data_0208747e
    strh r1, [r4, r2]
    strh r1, [r3, r2]
    mov r5, #0x20
    ldr r4, =data_02087480
    ldr r3, =data_02087482
    strh r5, [r4, r2]
    add r4, r3, r2
    swpb r3, r1, [r4]
    ldr r3, =data_02087470
    mov r6, #0x1
    str r1, [r3, r2]
    ldr r3, =data_02087483
    ldr r5, =data_02087486
    add r4, r3, r2
    swpb r3, r6, [r4]
    sub r4, r6, #0x2
    strh r1, [r5, r2]
    ldr r3, =data_02087488
    ldr r1, =data_0208748c
    str r4, [r3, r2]
    str r4, [r1, r2]
    ldmfd sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
