#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020015c4();
extern void func_02001654();
extern void func_02002b94();
extern void func_02002bd8();
extern void func_02002be8();
extern void FX_Div();
extern char data_0206acc8[];
// clang-format off
asm void func_020144b0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r0, [r4, #0x3c]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    bne L_02014534
    mov r0, #0x5
    bl func_02001654
    ldrh r1, [r4, #0x4c]
    ldr r0, [r4, #0x40]
    mov r1, r1, lsl #0xc
    bl FX_Div
    str r0, [r4, #0x44]
    ldr r0, [r4, #0x4]
    cmp r0, #0x0
    bne L_02014510
    ldr r1, =data_0206acc8
    ldr r0, [r4, #0x28]
    ldr r1, [r1, #0x0]
    bl FX_Div
    mov r1, r0
    ldr r0, [r4, #0x40]
    bl FX_Div
    str r0, [r4, #0x44]
L_02014510:
    ldr r0, [r4, #0x50]
    cmp r0, #0x0
    beq L_02014520
    bl func_020015c4
L_02014520:
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
L_02014534:
    ldrb r0, [r4, #0x4e]
    ldr r1, [r4, #0x48]
    cmp r0, #0x0
    ldr r0, [r4, #0x40]
    bne L_02014570
    cmp r1, r0
    bge L_02014594
    ldr r0, [r4, #0x44]
    add r0, r1, r0
    str r0, [r4, #0x48]
    bl func_02002bd8
    ldr r1, [r4, #0x44]
    add r0, r1, r0
    bl func_02002b94
    b L_02014594
L_02014570:
    cmp r1, r0
    bge L_02014594
    ldr r0, [r4, #0x44]
    add r0, r1, r0
    str r0, [r4, #0x48]
    bl func_02002bd8
    ldr r1, [r4, #0x44]
    sub r0, r0, r1
    bl func_02002b94
L_02014594:
    ldrb r0, [r4, #0x3c]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    beq L_020145cc
    ldrb r0, [r4, #0x4f]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    beq L_020145c4
    mov r0, #0x0
    bl func_02002be8
    mov r0, #0x0
    bl func_020015c4
L_020145c4:
    mov r0, #0x2
    ldmfd sp!, {r4, pc}
L_020145cc:
    mov r0, #0x1
    ldmfd sp!, {r4, pc}
}
// clang-format on
