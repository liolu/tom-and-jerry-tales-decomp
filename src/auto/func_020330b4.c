#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0208e190[];
extern char data_0208e194[];
// clang-format off
asm void func_020330b4(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r0, =data_0208e190
    mov r1, #0x0
    ldrh r5, [r0, #0x0]
    cmp r5, #0x0
    bls L_02033100
    ldr lr, =data_0208e194
    mov ip, r1
    mov r0, #0x18
L_020330d8:
    mul r2, r1, r0
    add r4, lr, r2
    add r1, r1, #0x1
    mov r3, r1, lsl #0x10
    str ip, [lr, r2]
    add r2, r4, #0x8
    cmp r5, r3, lsr #0x10
    swpb r1, ip, [r2]
    mov r1, r3, lsr #0x10
    bhi L_020330d8
L_02033100:
    ldr r0, =data_0208e190
    mov r1, #0x0
    strh r1, [r0, #0x0]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
