#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014d48();
extern void func_02030ed4();
extern void func_02030ee0();
extern void func_02040570();
extern void func_02051a48();
extern void func_0205918c();
extern char data_0206a910[];
// clang-format off
asm void func_0200e7f4(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r2
    mov r7, r0
    add r0, sp, #0x0
    mov r1, r6
    bl func_02030ed4
    ldr r1, =data_0206a910
    mov r0, r7
    mov r2, r6
    bl func_02040570
    mov r4, r0
    ldrh r0, [r4, #0x0]
    bl func_02014d48
    mov r5, r0
    mov r1, r7
    add r0, r5, #0x8
    bl func_0205918c
    ldrh r1, [r4, #0x2]
    add r0, r5, #0x3c
    str r1, [r5, #0x4]
    ldrb r2, [r5, #0x3c]
    ldrb r1, [r4, #0x1b]
    bic r2, r2, #0x8
    mov r1, r1, lsl #0x1f
    orr r1, r2, r1, lsr #0x1c
    swpb r1, r1, [r0]
    ldrh r1, [r4, #0x2]
    cmp r1, #0x0
    beq L_0200e87c
    cmp r1, #0x1
    beq L_0200e890
    cmp r1, #0x2
    beq L_0200e8a4
    b L_0200e8b4
L_0200e87c:
    ldr r0, [r4, #0x8]
    str r0, [r5, #0x28]
    ldr r0, [r4, #0xc]
    str r0, [r5, #0x30]
    b L_0200e8b8
L_0200e890:
    ldrh r0, [r4, #0x4]
    strh r0, [r5, #0x28]
    ldrh r0, [r4, #0x6]
    strh r0, [r5, #0x30]
    b L_0200e8b8
L_0200e8a4:
    ldrb r1, [r0, #0x0]
    bic r1, r1, #0x8
    swpb r1, r1, [r0]
    b L_0200e8b8
L_0200e8b4:
    bl func_02051a48
L_0200e8b8:
    ldr r0, [r5, #0x40]
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_0200e954
L_0200e8c8:
    b L_0200e954
    b L_0200e8e8
    b L_0200e8e8
    b L_0200e8e8
    b L_0200e8e8
    b L_0200e8e8
    b L_0200e8e8
    b L_0200e920
L_0200e8e8:
    ldrh r0, [r4, #0x10]
    add r1, r5, #0x50
    add r2, r5, #0x51
    str r0, [r5, #0x48]
    ldrh r0, [r4, #0x12]
    add r3, r5, #0x52
    str r0, [r5, #0x4c]
    ldrb r0, [r4, #0x18]
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x19]
    swpb r0, r0, [r2]
    ldrb r0, [r4, #0x1a]
    swpb r0, r0, [r3]
    b L_0200e954
L_0200e920:
    ldrh r0, [r4, #0x10]
    add r1, r5, #0x52
    add r2, r5, #0x51
    str r0, [r5, #0x48]
    ldrh r0, [r4, #0x12]
    add r3, r5, #0x50
    str r0, [r5, #0x4c]
    ldrb r0, [r4, #0x17]
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x16]
    swpb r0, r0, [r2]
    ldrb r0, [r4, #0x15]
    swpb r0, r0, [r3]
L_0200e954:
    ldrb r2, [r4, #0x14]
    add r3, r5, #0x56
    add r0, sp, #0x0
    swpb r2, r2, [r3]
    mov r1, r6
    bl func_02030ee0
    mov r0, r5
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
