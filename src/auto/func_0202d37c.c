#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203d740();
extern void func_0203d8d8();
extern void func_0204221c();
extern void func_02062f0c();
extern char data_020640b8[];
extern char data_0206cc1c[];
extern char data_0206e690[];
extern char data_020881b8[];
extern char data_020b8c0c[];
// clang-format off
asm void func_0202d37c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r1, =data_0206e690
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x14]
    ldrb r1, [r2, r1]
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x2
    mov r1, r1, lsl #0x10
    mov r11, r1, lsr #0x10
    mov r1, r11
    bl func_02062f0c
    ldr r4, =data_020881b8
    and r5, r0, #0xff
    mov r6, #0x0
    ldr r0, [r4, #0xc]
    b L_0202d478
L_0202d3c8:
    ldr r1, =data_0206cc1c
    ldrb r9, [r4, #0x0]
    ldr r2, [r1, #0x8]
    ldr r1, =data_020640b8
    sub r8, r0, r2
    ldrb r1, [r1, r9]
    cmp r1, r8
    bne L_0202d3fc
    ldr r1, =data_020881b8
    add r0, r9, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0202d3fc:
    ldr r1, =data_0206e690
    ldr r10, [r1, #0x0]
    bl func_0204221c
    mov r1, r10
    bl func_0203d8d8
    rsb r0, r0, #0x100
    mov r0, r0, lsl #0xf
    mov r7, r0, lsr #0x10
    ldr r0, [r4, #0xc]
    bl func_0204221c
    add r2, r9, r8
    mul r8, r11, r2
    mov r2, #0x0
    str r2, [sp, #0x0]
    str r2, [sp, #0x4]
    ldr r2, =data_020b8c0c
    mov r1, r7
    mov r7, r8, lsr #0x1f
    str r2, [sp, #0x8]
    rsb r2, r7, r8, lsl #0x18
    add r2, r7, r2, ror #0x18
    add r2, r2, #0xc0
    mov r2, r2, lsl #0x10
    mov r3, r10
    mov r2, r2, lsr #0x10
    bl func_0203d740
    ldr r0, [r4, #0xc]
    add r1, r6, #0x1
    add r0, r0, #0x1
    and r6, r1, #0xff
    str r0, [r4, #0xc]
L_0202d478:
    cmp r6, r5
    addhs sp, sp, #0xc
    ldmhsfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_0206cc1c
    ldr r1, [r1, #0x4]
    cmp r0, r1
    ble L_0202d3c8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
