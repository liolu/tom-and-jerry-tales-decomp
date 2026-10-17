#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0206e9e8[];
// clang-format off
asm void func_02002be8(void) {
    stmfd sp!, {r3, lr}
    ldr r2, =data_0206e9e8
    mov r1, #0x1
    swpb r1, r1, [r2]
    ldr r3, [r2, #0x1c]
    mov r1, #0x168000
    rsb r1, r1, #0x0
    str r3, [r2, #0x20]
    cmp r3, r1
    addlt r1, r3, #0x168000
    str r0, [r2, #0x18]
    strlt r1, [r2, #0x20]
    ldr r1, =data_0206e9e8
    ldr r3, =data_0206e9e8
    ldr r2, [r1, #0x20]
    cmp r2, #0x168000
    subgt r2, r2, #0x168000
    strgt r2, [r1, #0x20]
    ldr r1, [r3, #0x20]
    subs lr, r0, r1
    bpl L_02002c6c
    mov r1, #0xb4000
    rsb r1, r1, #0x0
    add r2, r3, #0x3
    mov ip, #0x1
    cmp lr, r1
    swpb r1, ip, [r2]
    ldmgefd sp!, {r3, pc}
    mov r1, #0x0
    swpb r1, r1, [r2]
    rsb r0, r0, #0x168000
    str r0, [r3, #0x18]
    ldmfd sp!, {r3, pc}
L_02002c6c:
    add r1, r3, #0x3
    mov r0, #0x0
    swpb r0, r0, [r1]
    cmp lr, #0xb4000
    ldmlefd sp!, {r3, pc}
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r3, #0x18]
    sub r0, r0, #0x168000
    str r0, [r3, #0x18]
    ldmfd sp!, {r3, pc}
}
// clang-format on
