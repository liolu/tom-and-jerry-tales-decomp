#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02031610();
extern void OS_Terminate();
extern void abs();
extern char data_0208876c[];
extern char data_0208a360[];
// clang-format off
asm void func_02032d5c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    movs r4, r0
    bmi L_02032d70
    cmp r4, #0x96
    blt L_02032d74
L_02032d70:
    bl OS_Terminate
L_02032d74:
    ldr r1, =data_0208a360
    mov r0, #0x68
    mla r5, r4, r0, r1
    ldr r6, [r5, #0x18]
    cmp r6, #0x0
    bne L_02032d90
    bl OS_Terminate
L_02032d90:
    ldr r0, [r6, #0x0]
    cmp r0, r4
    beq L_02032da0
    bl OS_Terminate
L_02032da0:
    ldrh r0, [r5, #0x4]
    cmp r0, #0x90
    blo L_02032db0
    bl OS_Terminate
L_02032db0:
    ldrh r1, [r5, #0x4]
    ldr r2, =data_0208876c
    mov r0, #0x2c
    mla r4, r1, r0, r2
    ldr r0, [r5, #0x8]
    mov r3, #0x8
    cmp r0, #0x1
    ldr r0, [r4, #0x0]
    bne L_02032ea4
    mov r1, r0, lsl #0x8
    mov r1, r1, asr #0x18
    ldrh r2, [r6, #0xc]
    mov r0, r0, asr #0x18
    mov r4, r3, lsl r1
    mov r1, r3, lsl r0
    mov r0, r4, lsl #0x10
    mov r1, r1, lsl #0x10
    cmp r2, #0x1
    mov r4, r0, lsr #0x10
    mov r7, r1, lsr #0x10
    bhi L_02032e44
    ldr r1, [r6, #0x8]
    ldr r0, [r5, #0xc]
    add r0, r1, r0
    str r0, [r6, #0x8]
    bl abs
    cmp r0, r4, lsl #0xc
    blt L_02032e38
L_02032e20:
    ldr r0, [r6, #0x8]
    sub r0, r0, r4, lsl #0xc
    str r0, [r6, #0x8]
    bl abs
    cmp r0, r4, lsl #0xc
    bge L_02032e20
L_02032e38:
    ldrh r0, [r5, #0x14]
    strh r0, [r6, #0xc]
    b L_02032e4c
L_02032e44:
    sub r0, r2, #0x1
    strh r0, [r6, #0xc]
L_02032e4c:
    ldrh r0, [r6, #0xe]
    cmp r0, #0x1
    bhi L_02032e98
    ldr r1, [r6, #0x4]
    ldr r0, [r5, #0x10]
    add r0, r1, r0
    str r0, [r6, #0x4]
    bl abs
    cmp r0, r7, lsl #0xc
    blt L_02032e8c
L_02032e74:
    ldr r0, [r6, #0x4]
    sub r0, r0, r7, lsl #0xc
    str r0, [r6, #0x4]
    bl abs
    cmp r0, r7, lsl #0xc
    bge L_02032e74
L_02032e8c:
    ldrh r0, [r5, #0x16]
    strh r0, [r6, #0xe]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_02032e98:
    sub r0, r0, #0x1
    strh r0, [r6, #0xe]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_02032ea4:
    mov r1, r0, lsl #0x8
    mov r1, r1, asr #0x18
    ldrh r2, [r6, #0xe]
    mov r0, r0, asr #0x18
    mov r7, r3, lsl r1
    mov r1, r3, lsl r0
    mov r0, r7, lsl #0x10
    mov r1, r1, lsl #0x10
    cmp r2, #0x1
    mov r7, r0, lsr #0x10
    mov r3, r1, lsr #0x10
    bhi L_02032f0c
    ldr r1, [r6, #0x4]
    ldr r0, [r5, #0x10]
    add r0, r1, r0
    str r0, [r6, #0x4]
    cmp r0, r3, lsl #0xc
    blt L_02032f00
L_02032eec:
    ldr r0, [r6, #0x4]
    sub r0, r0, r3, lsl #0xc
    str r0, [r6, #0x4]
    cmp r0, r3, lsl #0xc
    bge L_02032eec
L_02032f00:
    ldrh r0, [r5, #0x16]
    strh r0, [r6, #0xe]
    b L_02032f14
L_02032f0c:
    sub r0, r2, #0x1
    strh r0, [r6, #0xe]
L_02032f14:
    mov r0, r4
    bl func_02031610
    ldr r2, [r6, #0x4]
    mul r1, r7, r0
    mov r2, r2, asr #0xc
    ldrb r0, [r5, #0x50]
    mul r1, r2, r1
    ldr r2, [r4, #0x4]
    orr r0, r0, #0x4
    add r1, r2, r1, asr #0x4
    str r1, [r4, #0x4]
    add r1, r5, #0x50
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
