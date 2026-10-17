#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0206d4c0[];
extern char data_020a0f48[];
extern char data_020ac15c[];
extern char data_020ac17c[];
extern char data_020aecfc[];
// clang-format off
asm void func_0203a294(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r0, =data_020ac15c
    mov r5, #0x0
    strh r5, [r0, #0x0]
    str r5, [r0, #0x1c]
    str r5, [r0, #0xc]
    str r5, [r0, #0x18]
    str r5, [r0, #0x8]
    ldr ip, =data_020aecfc
    mvn r4, #0x0
    mov r0, r5
    mov r1, #0xbc
L_0203a2c4:
    mul r2, r5, r1
    strh r4, [ip, r2]
    add lr, ip, r2
    str r0, [lr, #0xb8]
    strh r4, [lr, #0x4]
    strh r0, [lr, #0xa4]
    str r0, [lr, #0xa8]
    ldr r3, [lr, #0xac]
    add r2, r5, #0x1
    bic r3, r3, #0x1
    orr r3, r3, #0x1
    str r3, [lr, #0xac]
    mov r2, r2, lsl #0x10
    str r0, [lr, #0xb0]
    mov r5, r2, lsr #0x10
    str r0, [lr, #0xb4]
    cmp r5, #0xc8
    blo L_0203a2c4
    ldr lr, =data_020ac17c
    mov ip, #0x0
    mov r1, #0x74
L_0203a318:
    mla r4, r0, r1, lr
    add r3, r4, #0xc
    swpb r2, ip, [r3]
    add r0, r0, #0x1
    str ip, [r4, #0x20]
    str ip, [r4, #0x68]
    str ip, [r4, #0x1c]
    str ip, [r4, #0x20]
    mov r0, r0, lsl #0x10
    str ip, [r4, #0x24]
    mov r0, r0, lsr #0x10
    str ip, [r4, #0x28]
    cmp r0, #0x60
    blo L_0203a318
    ldr r2, =data_020ac15c
    ldr r1, =data_020a0f48
    ldr r0, =data_0206d4c0
    strh ip, [r2, #0x2]
    strh ip, [r1, #0x0]
    str ip, [r0, #0x0]
    mov r0, #0x1
    str r0, [r2, #0x14]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
