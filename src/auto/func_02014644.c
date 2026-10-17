#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02012e28();
extern char data_0206e6d4[];
extern char data_0206ea14[];
extern char data_02087038[];
// clang-format off
asm void func_02014644(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r1, =data_0206ea14
    ldr r2, [r0, #0x44]
    ldr r1, [r1, #0x0]
    ldr r1, [r1, #0x4]
    ldr r1, [r1, #0x28]
    cmp r1, r2
    bge L_02014674
    ldrb r1, [r0, #0x4c]
    mov r1, r1, lsl #0x1f
    movs r1, r1, lsr #0x1f
    beq L_02014724
L_02014674:
    ldrb r1, [r0, #0x3c]
    add r2, r0, #0x3c
    ldr ip, =data_0206ea14
    orr r1, r1, #0x2
    swpb r1, r1, [r2]
    ldr r3, =data_02087038
    ldr r1, [ip, #0x0]
    ldrb r4, [r0, #0x40]
    ldr r1, [r1, #0x4]
    mov lr, #0x0
    add r2, r1, #0x2c
    swpb r1, r4, [r2]
    ldr r2, =data_0206e6d4
    ldr r1, [ip, #0x0]
    ldr r5, [r0, #0x48]
    ldr r4, [r1, #0x4]
    mov r1, #0x1
    str r5, [r4, #0x28]
    str lr, [r3, #0x0]
    str r1, [r2, #0xcc]
    ldr r3, [ip, #0x0]
    ldr r1, [r3, #0x4]
    ldr r1, [r1, #0x28]
    add r1, r1, #0x99
    add r1, r1, #0x100
    str r1, [r2, #0x104]
    ldrb r0, [r0, #0x4c]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    beq L_0201471c
    ldr r0, [r3, #0x4]
    bl func_02012e28
    ldr r0, =data_0206ea14
    ldr ip, [r0, #0x0]
    ldr r0, [ip, #0x4]
    add r3, ip, #0xac
    add r0, r0, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [ip, #0x4]
    ldrh r0, [r0, #0x18]
    strh r0, [ip, #0xea]
L_0201471c:
    mov r0, #0x2
    ldmfd sp!, {r3, r4, r5, pc}
L_02014724:
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
