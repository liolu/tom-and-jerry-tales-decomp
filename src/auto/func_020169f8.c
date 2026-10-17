#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02051a48();
extern char data_0208709d[];
// clang-format off
asm void func_020169f8(void) {
    stmfd sp!, {r3, lr}
    cmp r0, #0x0
    blt L_02016a40
    cmp r0, #0x3
    bge L_02016a40
    mov r2, #0x50
    mul r3, r0, r2
    ldr r0, =data_0208709d
    add r2, r1, #0x1
    add lr, r0, r3
    ldrb r0, [r0, r3]
    ldrb ip, [lr, #0x1]
    add r3, r1, #0x2
    swpb r0, r0, [r1]
    swpb r0, ip, [r2]
    ldrb r0, [lr, #0x2]
    swpb r0, r0, [r3]
    ldmfd sp!, {r3, pc}
L_02016a40:
    bl func_02051a48
    ldmfd sp!, {r3, pc}
}
// clang-format on
