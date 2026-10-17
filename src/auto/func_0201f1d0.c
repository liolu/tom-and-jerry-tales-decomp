#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201ffb0();
extern char data_020875a8[];
extern char data_020876d0[];
extern char data_020876d4[];
// clang-format off
asm void func_0201f1d0(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_020875a8
    ldr r1, [r0, #0x30]
    cmp r1, #0x3
    addls pc, pc, r1, lsl #0x2
    b L_0201f2b8
L_0201f1e8:
    b L_0201f1f8
    b L_0201f204
    b L_0201f224
    b L_0201f244
L_0201f1f8:
    mov r1, #0x1
    str r1, [r0, #0x30]
    b L_0201f2b8
L_0201f204:
    mov r0, #0x0
    bl func_0201ffb0
    cmp r0, #0x0
    beq L_0201f2b8
    ldr r0, =data_020875a8
    mov r1, #0x2
    str r1, [r0, #0x30]
    b L_0201f2b8
L_0201f224:
    mov r0, #0x1
    bl func_0201ffb0
    cmp r0, #0x0
    beq L_0201f2b8
    ldr r0, =data_020875a8
    mov r1, #0x3
    str r1, [r0, #0x30]
    b L_0201f2b8
L_0201f244:
    ldr r3, =data_020876d0
    ldrsb r0, [r3, #0x2]
    cmp r0, #0x9
    beq L_0201f27c
    add r4, r0, #0x1
    ldr r2, =0x66666667
    mov r0, r4, lsr #0x1f
    smull r1, ip, r2, r4
    add ip, r0, ip, asr #0x2
    mov r2, #0xa
    smull r0, r1, r2, ip
    sub ip, r4, r0
    add r1, r3, #0x2
    swpb r0, ip, [r1]
L_0201f27c:
    ldr ip, =data_020875a8
    ldr r1, =data_020876d4
    ldrh r3, [ip, #0xc]
    mov r0, #0x1
    add r2, ip, #0x7
    sub r3, r3, #0x1
    strh r3, [ip, #0xc]
    ldrb r4, [ip, #0x7]
    add r3, r1, r0
    mov lr, #0x0
    add r1, r4, #0x1
    swpb r1, r1, [r2]
    str r0, [ip, #0x1c]
    swpb r1, lr, [r3]
    ldmfd sp!, {r4, pc}
L_0201f2b8:
    mov r0, #0x0
    ldmfd sp!, {r4, pc}
}
// clang-format on
