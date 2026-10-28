#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _s32_div_f();
extern void _u32_div_f();
extern char data_0206b22c[];
extern char data_020875a8[];
extern char data_020876d0[];
// clang-format off
asm void func_0201ffb0(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r2, =data_020875a8
    ldr r1, =data_0206b22c
    mov r4, r0
    ldr r0, [r2, #0x40]
    ldrb r1, [r1, r4]
    add r0, r0, #0x1
    str r0, [r2, #0x40]
    bl _u32_div_f
    cmp r1, #0x0
    bne L_02020030
    cmp r4, #0x0
    beq L_0201fff8
    cmp r4, #0x1
    beq L_02020000
    cmp r4, #0x2
    moveq r6, #0xa
    b L_02020004
L_0201fff8:
    mov r6, #0x7
    b L_02020004
L_02020000:
    mov r6, #0x8
L_02020004:
    ldr r5, =data_020876d0
    mov r1, r6
    ldrsb r0, [r5, r4]
    add r0, r0, #0x1
    bl _s32_div_f
    add r2, r5, r4
    swpb r0, r1, [r2]
    ldrsb r0, [r5, r4]
    cmp r0, #0x0
    moveq r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, pc}
L_02020030:
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
