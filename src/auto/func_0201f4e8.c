#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022b60();
extern void func_0203d0d8();
extern void func_0203d740();
extern void func_0203d8d8();
extern void func_0204221c();
extern char data_0206e690[];
extern char data_020875a8[];
extern char data_020b8bbc[];
// clang-format off
asm void func_0201f4e8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    cmp r1, #0x4
    addls pc, pc, r1, lsl #0x2
    b L_0201f6bc
L_0201f500:
    b L_0201f6bc
    b L_0201f514
    b L_0201f520
    b L_0201f538
    b L_0201f6b4
L_0201f514:
    mov r1, #0x1
    bl func_02022b60
    b L_0201f6bc
L_0201f520:
    mov r1, #0x0
    bl func_02022b60
    ldr r0, [r4, #0x24]
    add sp, sp, #0xc
    orr r0, r0, #0x1000000
    ldmfd sp!, {r4, r5, pc}
L_0201f538:
    mov r1, #0x1
    bl func_02022b60
    ldr r0, =data_020875a8
    ldrb r2, [r4, #0x28]
    ldrb r1, [r0, #0x3]
    cmp r2, r1
    beq L_0201f6bc
    ldr r1, [r0, #0x10]
    cmp r1, #0x12
    bne L_0201f6bc
    add r1, r0, #0x3
    swpb r0, r2, [r1]
    mov r1, #0x0
    str r1, [sp, #0x0]
    ldr r0, =data_020b8bbc
    str r1, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r0, #0x5
    mov r1, #0xa5
    mov r2, #0xfa
    mov r3, #0x19
    bl func_0203d0d8
    ldrb r0, [r4, #0x28]
    cmp r0, #0x1
    bne L_0201f628
    ldr r1, =data_0206e690
    mov r0, #0x53
    ldr r5, [r1, #0x0]
    bl func_0204221c
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r1, #0x3
    ldr r4, =data_020b8bbc
    str r1, [sp, #0x4]
    mov r3, r5
    mov r1, #0x10
    mov r2, #0xaa
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r1, =data_0206e690
    mov r0, #0x51
    ldr r5, [r1, #0x0]
    bl func_0204221c
    mov r1, r5
    bl func_0203d8d8
    rsb r0, r0, #0xf0
    mov r0, r0, lsl #0x10
    mov r4, r0, lsr #0x10
    mov r0, #0x51
    bl func_0204221c
    mov r1, r4
    mov r3, r5
    mov r2, #0x0
    str r2, [sp, #0x0]
    str r2, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r2, #0xaa
    str r4, [sp, #0x8]
    bl func_0203d740
    b L_0201f6bc
L_0201f628:
    ldr r1, =data_0206e690
    mov r0, #0x51
    ldr r5, [r1, #0x0]
    bl func_0204221c
    mov r1, r5
    bl func_0203d8d8
    rsb r0, r0, #0xf0
    mov r1, r0, lsl #0x10
    mov r0, #0x51
    mov r4, r1, lsr #0x10
    bl func_0204221c
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r1, #0x3
    str r1, [sp, #0x4]
    ldr r2, =data_020b8bbc
    mov r1, r4
    str r2, [sp, #0x8]
    mov r3, r5
    mov r2, #0xaa
    bl func_0203d740
    ldr r1, =data_0206e690
    mov r0, #0x53
    ldr r4, [r1, #0x0]
    bl func_0204221c
    mov r3, r4
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r2, =data_020b8bbc
    mov r1, #0x10
    str r2, [sp, #0x8]
    mov r2, #0xaa
    bl func_0203d740
    b L_0201f6bc
L_0201f6b4:
    mov r1, #0x0
    bl func_02022b60
L_0201f6bc:
    mov r0, #0x0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
