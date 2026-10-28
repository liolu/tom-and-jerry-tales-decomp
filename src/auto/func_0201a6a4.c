#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203b96c();
extern void func_0203c1e8();
extern void func_0203c24c();
extern void func_0203c408();
extern void func_0203c4cc();
extern void func_0203c568();
extern void MIi_CpuCopy16();
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
extern char data_02087496[];
// clang-format off
asm void func_0201a6a4(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r0, =data_02087410
    mov r8, r2
    ldrb r5, [r0, #0x1]
    ldr r7, [sp, #0x24]
    ldr r2, =data_02087454
    mov r4, #0x0
    mov r0, #0x44
L_0201a6c8:
    mla r1, r4, r0, r2
    ldrb r1, [r1, #0x1]
    cmp r1, #0x0
    moveq r5, r4
    beq L_0201a6ec
    add r1, r4, #0x1
    and r4, r1, #0xff
    cmp r4, r5
    bls L_0201a6c8
L_0201a6ec:
    ldr r1, =data_02087410
    mov r0, #0x0
    ldrb r3, [r1, #0x1]
    add r2, r1, #0x1
    add r1, r3, #0x1
    swpb r1, r1, [r2]
    bl func_0203b96c
    mov r6, r5, lsl #0x2
    mov r0, r6, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x1f
    mov r2, #0x100
    mov r3, #0xc0
    bl func_0203c1e8
    ldr r0, =data_02087410
    add r1, r5, #0x9
    ldr r0, [r0, #0x30]
    mov r2, #0x20
    add r1, r0, r1, lsl #0x5
    add r0, r0, #0xc0
    bl MIi_CpuCopy16
    mov r0, r6, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    add r2, r5, #0x9
    bl func_0203c4cc
    cmp r8, #0x3
    addls pc, pc, r8, lsl #0x2
    b L_0201a990
L_0201a760:
    b L_0201a770
    b L_0201a804
    b L_0201a86c
    b L_0201a900
L_0201a770:
    mov r0, #0x44
    mul r3, r5, r0
    ldr r10, [sp, #0x20]
    ldr r2, =data_02087474
    sub r1, r10, #0x20
    ldr r0, =data_02087478
    str r1, [r2, r3]
    add r2, r7, #0x16
    mov ip, r6, lsl #0x10
    ldr r9, =data_0208747c
    str r2, [r0, r3]
    add r0, r10, #0x20
    ldr r2, =data_02087480
    str r0, [r9, r3]
    add r10, r7, #0x2a
    ldr r9, =data_02087484
    str r10, [r2, r3]
    ldr r2, =data_02087488
    str r1, [r9, r3]
    sub r9, r7, #0x2a
    ldr r1, =data_0208748c
    str r9, [r2, r3]
    ldr r9, =data_02087490
    mov r2, r5
    str r0, [r1, r3]
    sub r10, r7, #0xc
    mov r0, ip, lsr #0x10
    mov r1, #0x100
    str r10, [r9, r3]
    bl func_0203c408
    mov r0, r5, lsl #0x10
    mov r1, #0x1000
    mov r2, r1
    mov r0, r0, lsr #0x10
    mov r3, #0xc000
    bl func_0203c568
    b L_0201a990
L_0201a804:
    mov r0, #0x44
    mul r3, r5, r0
    ldr r2, [sp, #0x20]
    ldr r0, =data_02087474
    sub r1, r2, #0x2a
    ldr r9, =data_02087478
    str r1, [r0, r3]
    sub r1, r7, #0x20
    ldr r0, =data_0208747c
    str r1, [r9, r3]
    sub r9, r2, #0x16
    ldr r10, =data_02087480
    str r9, [r0, r3]
    add r0, r7, #0x20
    ldr r9, =data_02087484
    str r0, [r10, r3]
    add ip, r2, #0xc
    ldr r10, =data_02087488
    str ip, [r9, r3]
    ldr r9, =data_0208748c
    str r1, [r10, r3]
    add r2, r2, #0x2a
    ldr r1, =data_02087490
    str r2, [r9, r3]
    str r0, [r1, r3]
    b L_0201a990
L_0201a86c:
    mov r0, #0x44
    mul r3, r5, r0
    ldr r10, [sp, #0x20]
    ldr r2, =data_02087474
    sub r1, r10, #0x20
    ldr r0, =data_02087478
    str r1, [r2, r3]
    sub r2, r7, #0x2a
    mov ip, r6, lsl #0x10
    ldr r9, =data_0208747c
    str r2, [r0, r3]
    add r0, r10, #0x20
    ldr r2, =data_02087480
    str r0, [r9, r3]
    sub r10, r7, #0x16
    ldr r9, =data_02087484
    str r10, [r2, r3]
    ldr r2, =data_02087488
    str r1, [r9, r3]
    add r9, r7, #0xc
    ldr r1, =data_0208748c
    str r9, [r2, r3]
    ldr r9, =data_02087490
    mov r2, r5
    str r0, [r1, r3]
    add r10, r7, #0x2a
    mov r0, ip, lsr #0x10
    mov r1, #0x100
    str r10, [r9, r3]
    bl func_0203c408
    mov r0, r5, lsl #0x10
    mov r1, #0x1000
    mov r2, r1
    mov r0, r0, lsr #0x10
    mov r3, #0x4000
    bl func_0203c568
    b L_0201a990
L_0201a900:
    mov r0, #0x44
    mul ip, r5, r0
    ldr r1, [sp, #0x20]
    ldr r0, =data_02087474
    add r2, r1, #0x16
    ldr r3, =data_02087478
    str r2, [r0, ip]
    sub r0, r7, #0x20
    mov lr, r6, lsl #0x10
    ldr r2, =data_0208747c
    str r0, [r3, ip]
    add r3, r1, #0x2a
    ldr r9, =data_02087480
    str r3, [r2, ip]
    add r3, r7, #0x20
    ldr r2, =data_02087484
    str r3, [r9, ip]
    sub r10, r1, #0x2a
    ldr r9, =data_02087488
    str r10, [r2, ip]
    ldr r2, =data_0208748c
    str r0, [r9, ip]
    sub r0, r1, #0xc
    ldr r9, =data_02087490
    str r0, [r2, ip]
    mov r2, r5
    mov r0, lr, lsr #0x10
    mov r1, #0x100
    str r3, [r9, ip]
    bl func_0203c408
    mov r0, r5, lsl #0x10
    mov r1, #0x1000
    mov r2, r1
    mov r0, r0, lsr #0x10
    mov r3, #0x8000
    bl func_0203c568
L_0201a990:
    ldr r0, [sp, #0x20]
    sub r2, r7, #0x20
    sub r1, r0, #0x20
    mov r0, r6, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    mov r0, #0x44
    mul r0, r5, r0
    ldr r1, =data_02087454
    ldr r7, =data_02087455
    add r2, r1, r0
    ldr r6, =data_02087494
    ldr r3, =data_02087496
    swpb r1, r5, [r2]
    add r2, r7, r0
    mov r1, #0x2
    swpb r1, r1, [r2]
    ldr r1, =data_02087470
    mov r5, #0x0
    str r5, [r1, r0]
    add r2, r6, r0
    swpb r1, r5, [r2]
    add r1, r3, r0
    swpb r0, r8, [r1]
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
