#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014a24();
extern void func_02014a44();
extern void func_02014a64();
extern void func_02014a84();
extern void func_02014aa4();
extern void func_02014ac4();
extern void func_02014ae4();
extern void func_02014b0c();
extern void func_02014b2c();
extern void func_02014b4c();
extern void func_02014b6c();
extern void func_02014b94();
extern void func_02014bbc();
// clang-format off
asm void func_0201490c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r1
    cmp r0, #0xf
    addls pc, pc, r0, lsl #0x2
    b L_020149f8
L_02014920:
    b L_020149f8
    b L_02014960
    b L_0201496c
    b L_02014978
    b L_02014984
    b L_020149a8
    b L_02014990
    b L_020149b4
    b L_020149c0
    b L_020149cc
    b L_020149f8
    b L_0201499c
    b L_020149d8
    b L_020149e4
    b L_020149f8
    b L_020149f0
L_02014960:
    mov r0, r4
    bl func_02014a24
    b L_020149f8
L_0201496c:
    mov r0, r4
    bl func_02014a44
    b L_020149f8
L_02014978:
    mov r0, r4
    bl func_02014a64
    b L_020149f8
L_02014984:
    mov r0, r4
    bl func_02014a84
    b L_020149f8
L_02014990:
    mov r0, r4
    bl func_02014aa4
    b L_020149f8
L_0201499c:
    mov r0, r4
    bl func_02014ac4
    b L_020149f8
L_020149a8:
    mov r0, r4
    bl func_02014ae4
    b L_020149f8
L_020149b4:
    mov r0, r4
    bl func_02014b0c
    b L_020149f8
L_020149c0:
    mov r0, r4
    bl func_02014b2c
    b L_020149f8
L_020149cc:
    mov r0, r4
    bl func_02014b4c
    b L_020149f8
L_020149d8:
    mov r0, r4
    bl func_02014b6c
    b L_020149f8
L_020149e4:
    mov r0, r4
    bl func_02014b94
    b L_020149f8
L_020149f0:
    mov r0, r4
    bl func_02014bbc
L_020149f8:
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    bic r0, r0, #0x10
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x3c]
    bic r0, r0, #0x4
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x3c]
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
