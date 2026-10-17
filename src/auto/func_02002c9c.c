#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0206e9e8[];
// clang-format off
asm void func_02002c9c(void) {
    stmfd sp!, {r3, lr}
    ldr r1, =data_0206e9e8
    ldrb r0, [r1, #0x0]
    add r2, r1, #0x1
    cmp r0, #0x0
    movne r1, #0xa
    moveq r1, #0x1
    swpb r1, r1, [r2]
    ldr r1, =data_0206e9e8
    ldrb r2, [r1, #0x3]
    ldr r3, [r1, #0x20]
    cmp r2, #0x0
    ldr r2, [r1, #0x18]
    bne L_02002cf0
    cmp r3, r2
    strge r2, [r1, #0x20]
    bge L_02002d08
    ldrb r2, [r1, #0x1]
    add r2, r3, r2, lsl #0xc
    str r2, [r1, #0x20]
    b L_02002d08
L_02002cf0:
    cmp r3, r2
    strle r2, [r1, #0x20]
    ble L_02002d08
    ldrb r2, [r1, #0x1]
    sub r2, r3, r2, lsl #0xc
    str r2, [r1, #0x20]
L_02002d08:
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r2, =data_0206e9e8
    ldr r0, =0xb60b60b
    ldr lr, [r2, #0x20]
    mov r1, #0xb6
    umull ip, r3, lr, r0
    mla r3, lr, r1, r3
    mov r1, lr, asr #0x1f
    mla r3, r1, r0, r3
    adds r0, ip, #0x0
    adc r0, r3, #0x800
    mov r0, r0, asr #0xc
    strh r0, [r2, #0x8]
    str lr, [r2, #0x1c]
    ldmfd sp!, {r3, pc}
}
// clang-format on
