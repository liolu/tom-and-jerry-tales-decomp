#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004e38();
extern void func_02039e84();
extern void func_0203a388();
extern void func_0203a58c();
extern char data_0206e6a4[];
extern char data_0206e6d4[];
// clang-format off
asm void func_02009914(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldrsh r0, [r5, #0x0]
    bl func_0203a58c
    ldr r1, [r5, #0xb8]
    mov r2, #0x0
    strh r2, [r1, #0x0]
    ldr r2, [r5, #0xb8]
    mov r4, r0
    ldrb r0, [r2, #0x6]
    cmp r0, #0x0
    beq L_02009950
    ldrh r1, [r5, #0x2]
    add r0, r2, #0x8
    bl func_02004e38
L_02009950:
    ldr r2, [r5, #0xb8]
    ldrb r0, [r2, #0x7]
    cmp r0, #0x0
    beq L_0200996c
    ldrh r1, [r5, #0x2]
    add r0, r2, #0x28
    bl func_02004e38
L_0200996c:
    ldr r1, [r5, #0xb8]
    ldrh r0, [r1, #0x4c]
    cmp r0, #0x1
    beq L_0200999c
    cmp r0, #0x2
    bne L_020099b8
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0x71]
    add r1, r0, #0x71
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    b L_020099b8
L_0200999c:
    ldrb r0, [r1, #0x4e]
    cmp r0, #0x0
    beq L_020099b8
    ldr r0, =data_0206e6d4
    mov r2, #0x0
    add r1, r0, #0x8
    swpb r0, r2, [r1]
L_020099b8:
    ldr r1, [r4, #0x70]
    ldr r0, =0xffff
    ldrh r1, [r1, #0x4c]
    cmp r1, r0
    ldrh r0, [r5, #0x2]
    beq L_020099e8
    ldr r2, =data_0206e6a4
    bl func_02039e84
    ldr r0, [r5, #0xb8]
    mov r1, #0x0
    strh r1, [r0, #0x4c]
    ldmfd sp!, {r3, r4, r5, pc}
L_020099e8:
    bl func_0203a388
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
