#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203b96c();
extern void func_0203c1e8();
extern void func_0203c4cc();
extern void func_02051ee8();
extern char data_02087410[];
extern char data_02087454[];
extern char data_02087455[];
extern char data_02087470[];
extern char data_02087474[];
extern char data_02087478[];
extern char data_0208747c[];
extern char data_02087480[];
extern char data_02087484[];
extern char data_02087488[];
extern char data_0208748c[];
extern char data_02087490[];
extern char data_02087494[];
// clang-format off
asm void func_0201a4a4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r1, =data_02087410
    mov r4, r0
    ldrb r6, [r1, #0x1]
    ldr r2, =data_02087454
    mov r5, #0x0
    mov r0, #0x44
L_0201a4c0:
    mla r1, r5, r0, r2
    ldrb r1, [r1, #0x1]
    cmp r1, #0x0
    moveq r6, r5
    beq L_0201a4e4
    add r1, r5, #0x1
    and r5, r1, #0xff
    cmp r5, r6
    bls L_0201a4c0
L_0201a4e4:
    ldr r1, =data_02087410
    mov r0, #0x0
    ldrb r3, [r1, #0x1]
    add r2, r1, #0x1
    add r1, r3, #0x1
    swpb r1, r1, [r2]
    bl func_0203b96c
    mov r7, r6, lsl #0x2
    mov r0, r7, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x14
    mov r2, #0x40
    mov r3, #0x20
    bl func_0203c1e8
    add r8, r7, #0x1
    mov r0, r8, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x15
    mov r2, #0x80
    mov r3, #0x20
    bl func_0203c1e8
    add r9, r7, #0x2
    mov r0, #0x16
    mov r1, r9, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r2, #0x40
    mov r3, #0x60
    bl func_0203c1e8
    add r10, r7, #0x3
    mov r0, #0x17
    mov r1, r10, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r2, #0x80
    mov r3, #0x60
    bl func_0203c1e8
    ldr r0, =data_02087410
    add r1, r6, #0x9
    ldr r0, [r0, #0x30]
    mov r2, #0x20
    add r1, r0, r1, lsl #0x5
    add r0, r0, #0x40
    bl func_02051ee8
    mov r0, r7, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    add r2, r6, #0x9
    bl func_0203c4cc
    mov r0, r8, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    add r2, r6, #0x9
    bl func_0203c4cc
    mov r0, r9, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    add r2, r6, #0x9
    bl func_0203c4cc
    mov r0, r10, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    add r2, r6, #0x9
    bl func_0203c4cc
    mov r0, #0x44
    mul r1, r6, r0
    ldr r0, =data_02087454
    mov r7, #0x5
    add r2, r0, r1
    swpb r0, r6, [r2]
    ldr r2, =data_02087455
    mov r0, #0x0
    add r3, r2, r1
    swpb r2, r7, [r3]
    ldr r2, =data_02087474
    str r0, [r2, r1]
    ldr r3, =data_02087478
    ldr r2, =data_0208747c
    str r0, [r3, r1]
    mov r3, #0x7f
    ldr r6, =data_02087480
    str r3, [r2, r1]
    mov r8, #0xbf
    ldr r2, =data_02087494
    ldr r3, =data_02087484
    str r8, [r6, r1]
    mov r7, #0x80
    ldr r6, =data_02087488
    str r7, [r3, r1]
    ldr r3, =data_0208748c
    str r0, [r6, r1]
    mov r7, #0xff
    ldr r6, =data_02087490
    str r7, [r3, r1]
    ldr r3, =data_02087470
    str r8, [r6, r1]
    str r0, [r3, r1]
    add r1, r2, r1
    swpb r0, r4, [r1]
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
