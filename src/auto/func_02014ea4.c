#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020132f0();
extern void func_02018fa4();
extern void func_0201c54c();
extern void func_020207c4();
extern char data_02087048[];
// clang-format off
asm void func_02014ea4(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    bl func_02018fa4
    ldr r7, =data_02087048
    mov r5, #0x0
    ldrsh r0, [r7, #0x0]
    cmp r0, #0x0
    ble L_02014f34
    mov r4, r5
L_02014ec4:
    ldr r2, [r7, #0x4]
    ldr r6, [r2, r5, lsl #0x2]
    cmp r6, #0x0
    beq L_02014f1c
    ldrb r1, [r6, #0x3c]
    mov r0, r1, lsl #0x1b
    movs r0, r0, lsr #0x1f
    beq L_02014f1c
    mov r0, r1, lsl #0x1e
    movs r0, r0, lsr #0x1f
    bne L_02014f00
    mov r0, r6
    bl func_020132f0
    str r0, [r6, #0x38]
    b L_02014f1c
L_02014f00:
    mov r0, r1, lsl #0x1c
    movs r0, r0, lsr #0x1f
    strne r4, [r2, r5, lsl #0x2]
    ldrb r0, [r6, #0x3c]
    add r1, r6, #0x3c
    bic r0, r0, #0x10
    swpb r0, r0, [r1]
L_02014f1c:
    ldrsh r1, [r7, #0x0]
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    cmp r1, r0, asr #0x10
    mov r5, r0, asr #0x10
    bgt L_02014ec4
L_02014f34:
    ldr r4, =data_02087048
    mov r6, #0x0
    ldrsh r0, [r4, #0x2]
    cmp r0, #0x0
    ldmlefd sp!, {r3, r4, r5, r6, r7, pc}
    mov r5, r6
L_02014f4c:
    ldr r2, [r4, #0x8]
    ldr r7, [r2, r6, lsl #0x2]
    cmp r7, #0x0
    beq L_02014fd0
    ldrb r1, [r7, #0x3c]
    mov r0, r1, lsl #0x1b
    movs r0, r0, lsr #0x1f
    beq L_02014fd0
    mov r0, r1, lsl #0x1e
    movs r0, r0, lsr #0x1f
    bne L_02014f88
    mov r0, r7
    bl func_020207c4
    str r0, [r7, #0x38]
    b L_02014fd0
L_02014f88:
    mov r0, r1, lsl #0x1c
    movs r0, r0, lsr #0x1f
    beq L_02014fc0
    str r5, [r2, r6, lsl #0x2]
    ldrb r0, [r7, #0x57]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    beq L_02014fc0
    ldrsb r0, [r7, #0x54]
    bl func_0201c54c
    ldrb r0, [r7, #0x57]
    add r1, r7, #0x57
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
L_02014fc0:
    ldrb r0, [r7, #0x3c]
    add r1, r7, #0x3c
    bic r0, r0, #0x10
    swpb r0, r0, [r1]
L_02014fd0:
    ldrsh r1, [r4, #0x2]
    add r0, r6, #0x1
    mov r0, r0, lsl #0x10
    cmp r1, r0, asr #0x10
    mov r6, r0, asr #0x10
    bgt L_02014f4c
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
