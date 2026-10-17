#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020119a4();
extern void func_020119d4();
extern void func_02011a04();
extern char data_020880c0[];
// clang-format off
asm void func_020143c4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r0, [r4, #0x3c]
    mov r1, r0, lsl #0x1e
    movs r1, r1, lsr #0x1f
    bne L_02014470
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    bne L_02014468
    ldr r0, =data_020880c0
    ldr r1, [r4, #0x44]
    ldrsh r0, [r0, #0x6]
    smull r2, r0, r1, r0
    adds r2, r2, #0x800
    adc r1, r0, #0x0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    bl func_020119a4
    ldr r0, =data_020880c0
    ldr r1, [r4, #0x44]
    ldrsh r0, [r0, #0x8]
    smull r2, r0, r1, r0
    adds r2, r2, #0x800
    adc r1, r0, #0x0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    bl func_020119d4
    ldr r0, =data_020880c0
    ldr r1, [r4, #0x44]
    ldrsh r0, [r0, #0x4]
    smull r2, r0, r1, r0
    adds r2, r2, #0x800
    adc r1, r0, #0x0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    bl func_02011a04
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
L_02014468:
    mov r0, #0x1
    ldmfd sp!, {r4, pc}
L_02014470:
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x6]
    bl func_020119a4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x8]
    bl func_020119d4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x4]
    bl func_02011a04
    ldrb r1, [r4, #0x3c]
    add r2, r4, #0x3c
    mov r0, #0x2
    bic r1, r1, #0x1
    swpb r1, r1, [r2]
    ldmfd sp!, {r4, pc}
}
// clang-format on
