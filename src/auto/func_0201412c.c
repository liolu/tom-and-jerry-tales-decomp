#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020119a4();
extern void func_020119d4();
extern void func_02011a04();
extern void func_0201db7c();
extern void func_02036340();
extern char data_0206ace8[];
extern char data_0206ea14[];
extern char data_020880c0[];
// clang-format off
asm void func_0201412c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x3c]
    mov r0, r1, lsl #0x1e
    movs r0, r0, lsr #0x1f
    bne L_020142c8
    mov r0, r1, lsl #0x1f
    movs r0, r0, lsr #0x1f
    bne L_02014228
    bic r0, r1, #0x1
    orr r0, r0, #0x1
    add r1, r4, #0x3c
    swpb r0, r0, [r1]
    ldrsb r0, [r4, #0x40]
    mov r0, r0, lsl #0xc
    bl func_0201db7c
    ldrb r1, [r4, #0x42]
    cmp r1, #0x0
    beq L_02014210
    ldr r3, =data_0206ea14
    mov lr, #0x8
    ldr r0, [r3, #0x0]
    mov r2, #0x6
    add r0, r0, #0x1000
    str r1, [r0, #0x83c]
    ldr r1, [r3, #0x0]
    mov r0, #0x0
    add r1, r1, #0x1000
    str r2, [r1, #0x834]
    ldr r1, [r3, #0x0]
    sub ip, lr, #0x9
    add r1, r1, #0x1000
    str r0, [r1, #0x830]
    ldr r1, [r3, #0x0]
    add r1, r1, #0x1000
    add r1, r1, #0x48
    add r2, r1, #0x800
    swpb r1, lr, [r2]
    ldr r1, [r3, #0x0]
    ldrh r2, [r1, #0xea]
    add r1, r1, #0x1800
    strh r2, [r1, #0x40]
    ldr r1, [r3, #0x0]
    add r1, r1, #0x1000
    str ip, [r1, #0x844]
    ldr r1, [r3, #0x0]
    ldr r1, [r1, #0x4]
    str r0, [r1, #0x30]
    bl func_020119a4
    mov r0, #0x0
    bl func_020119d4
    mov r0, #0x0
    bl func_02011a04
    ldr r0, =data_0206ace8
    mov r1, #0x0
    str r1, [r0, #0x0]
    b L_02014228
L_02014210:
    ldrb r1, [r4, #0x3c]
    add r2, r4, #0x3c
    mov r0, #0x2
    orr r1, r1, #0x2
    swpb r1, r1, [r2]
    ldmfd sp!, {r4, pc}
L_02014228:
    ldr r0, =data_0206ea14
    ldr r0, [r0, #0x0]
    add r0, r0, #0x104
    bl func_02036340
    cmp r0, #0x0
    beq L_020142c8
    ldr r3, =data_0206ea14
    ldrb r1, [r4, #0x42]
    ldr r0, [r3, #0x0]
    add r0, r0, #0x1000
    ldr r0, [r0, #0x83c]
    cmp r0, r1
    bne L_020142c8
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    ldr r2, =data_020880c0
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
    ldrsh r1, [r2, #0x6]
    ldr r0, [r3, #0x0]
    ldr r0, [r0, #0x4]
    str r1, [r0, #0x30]
    ldrsh r0, [r2, #0x6]
    bl func_020119a4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x8]
    bl func_020119d4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x4]
    bl func_02011a04
    ldr r0, =data_0206ea14
    ldrsb r2, [r4, #0x41]
    ldr r0, [r0, #0x0]
    ldr r1, =data_0206ace8
    add r0, r0, #0x1800
    strh r2, [r0, #0x60]
    mov r0, #0x1
    str r0, [r1, #0x0]
    mov r0, #0x2
    ldmfd sp!, {r4, pc}
L_020142c8:
    mov r0, #0x1
    ldmfd sp!, {r4, pc}
}
// clang-format on
