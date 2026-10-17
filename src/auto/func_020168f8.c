#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203edf0();
extern void func_02051a48();
extern void func_02051f30();
extern char data_02087090[];
extern char data_02087098[];
extern char data_020870a2[];
// clang-format off
asm void func_020168f8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r2, #0x50
    mul r5, r6, r2
    ldr r1, =data_02087098
    mov r0, #0x0
    add r1, r1, r5
    bl func_02051f30
    ldr r0, =data_020870a2
    mov r3, #0x1
    add r1, r0, r5
    mov r0, r3, lsl r6
    eor r2, r0, #0xff
    swpb r0, r3, [r1]
    ldr r0, =data_02087090
    and r1, r2, #0xff
    ldrh r2, [r0, #0x4]
    cmp r6, #0x0
    and r1, r2, r1
    strh r1, [r0, #0x4]
    beq L_02016960
    cmp r6, #0x1
    beq L_02016988
    cmp r6, #0x2
    beq L_020169b0
    b L_020169d8
L_02016960:
    ldr r6, =data_02087098
    ldr r4, =0x4e4f4e45
    mov r0, #0x0
    mov r3, r0
    add r2, r6, r5
    mov r1, #0x50
    str r4, [r6, r5]
    bl func_0203edf0
    mov r4, r0
    b L_020169dc
L_02016988:
    ldr r6, =data_02087098
    ldr r4, =0x4e4f4e45
    add r2, r6, r5
    mov r0, #0xa8
    mov r1, #0x50
    mov r3, #0x0
    str r4, [r6, r5]
    bl func_0203edf0
    mov r4, r0
    b L_020169dc
L_020169b0:
    ldr r6, =data_02087098
    ldr r4, =0x4e4f4e45
    add r2, r6, r5
    mov r0, #0x150
    mov r1, #0x50
    mov r3, #0x0
    str r4, [r6, r5]
    bl func_0203edf0
    mov r4, r0
    b L_020169dc
L_020169d8:
    bl func_02051a48
L_020169dc:
    cmp r4, #0x0
    mvnne r0, #0x0
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
