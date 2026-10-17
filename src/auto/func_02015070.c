#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02051fd0();
extern char data_0206ad48[];
extern char data_0208705c[];
extern char data_0208706c[];
// clang-format off
asm void func_02015070(void) {
    stmfd sp!, {r3, lr}
    ldr r1, =data_0206ad48
    ldr r2, =data_0208705c
    mov r3, #0xa
    str r0, [r2, #0x4]
    swpb r0, r3, [r1]
    add ip, r1, #0x2
    swpb r3, r3, [ip]
    ldr r0, =data_0208706c
    mov r1, #0x0
    mov r2, #0x20
    bl func_02051fd0
    mov lr, #0x0
    ldr r2, =data_0208706c
    mov ip, lr
L_020150ac:
    mov r3, lr, lsl #0x3
    add r0, lr, #0x1
    add r1, r2, lr, lsl #0x3
    strh ip, [r2, r3]
    and lr, r0, #0xff
    str ip, [r1, #0x4]
    cmp lr, #0x4
    blo L_020150ac
    ldr r1, =data_0208705c
    swpb r0, ip, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
