#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02051a48();
extern char data_020870a0[];
// clang-format off
asm void func_02016a4c(void) {
    stmfd sp!, {r3, lr}
    cmp r0, #0x0
    blt L_02016a88
    cmp r0, #0x3
    bge L_02016a88
    mov r2, #0x50
    mul ip, r0, r2
    ldr r0, =data_020870a0
    add r2, r1, #0x1
    add r3, r0, ip
    ldrb r0, [r0, ip]
    ldrb r3, [r3, #0x1]
    swpb r0, r0, [r1]
    swpb r0, r3, [r2]
    ldmfd sp!, {r3, pc}
L_02016a88:
    bl func_02051a48
    ldmfd sp!, {r3, pc}
}
// clang-format on
