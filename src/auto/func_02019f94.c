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
extern char data_0208747e[];
extern char data_02087480[];
extern char data_02087482[];
extern char data_02087490[];
extern char data_02087491[];
extern char data_02087492[];
// clang-format off
asm void func_02019f94(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r0, =data_02087410
    mov r5, r2
    ldrb r7, [r0, #0x1]
    ldr r2, =data_02087454
    mov r4, r3
    mov r6, #0x0
    mov r0, #0x44
L_02019fb8:
    mla r1, r6, r0, r2
    ldrb r1, [r1, #0x1]
    cmp r1, #0x0
    moveq r7, r6
    beq L_02019fdc
    add r1, r6, #0x1
    and r6, r1, #0xff
    cmp r6, r7
    bls L_02019fb8
L_02019fdc:
    ldr r1, =data_02087410
    mov r0, #0x0
    ldrb r3, [r1, #0x1]
    add r2, r1, #0x1
    add r1, r3, #0x1
    swpb r1, r1, [r2]
    bl func_0203b96c
    ldr r9, [sp, #0x24]
    ldr r0, [sp, #0x20]
    mov r8, r7, lsl #0x2
    sub r2, r0, #0x20
    sub r1, r9, #0x20
    mov r0, r8, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x21
    bl func_0203c1e8
    ldr r0, =data_02087410
    add r1, r7, #0x9
    ldr r0, [r0, #0x30]
    mov r2, #0x20
    add r1, r0, r1, lsl #0x5
    add r0, r0, #0xe0
    bl func_02051ee8
    mov r0, r8, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    add r2, r7, #0x9
    bl func_0203c4cc
    mov r0, r6
    mov r1, #0x44
    mul r2, r7, r1
    ldr r1, =data_02087454
    mov r8, #0x1
    add r3, r1, r2
    swpb r1, r7, [r3]
    ldr r1, =data_02087455
    ldr r6, [sp, #0x20]
    add r3, r1, r2
    swpb r1, r8, [r3]
    ldr r3, =data_02087474
    ldr r1, =data_02087478
    str r6, [r3, r2]
    str r9, [r1, r2]
    mov r1, #0x0
    ldr r3, =data_0208747c
    mov r6, #0x18
    strh r1, [r3, r2]
    ldr r3, =data_0208747e
    mov r7, #0x20
    strh r6, [r3, r2]
    ldr r6, =data_02087480
    ldr r3, =data_02087482
    strh r7, [r6, r2]
    add r6, r3, r2
    swpb r3, r1, [r6]
    ldr r6, =data_02087470
    ldr r3, =data_02087490
    str r1, [r6, r2]
    add r3, r3, r2
    swpb r1, r1, [r3]
    ldr r1, =data_02087491
    ldr r6, =data_02087492
    add r3, r1, r2
    swpb r1, r5, [r3]
    add r2, r6, r2
    swpb r1, r4, [r2]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
