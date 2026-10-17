#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02051a48();
// clang-format off
asm void func_020145d8(void) {
    stmfd sp!, {r3, lr}
    ldrb r1, [r0, #0x3c]
    add r2, r0, #0x3c
    bic r1, r1, #0x2
    swpb r1, r1, [r2]
    ldrb r1, [r0, #0x3c]
    bic r1, r1, #0x1
    swpb r1, r1, [r2]
    ldrb r1, [r0, #0x3c]
    bic r1, r1, #0x10
    swpb r1, r1, [r2]
    ldr r1, [r0, #0x4]
    cmp r1, #0x0
    beq L_02014630
    cmp r1, #0x1
    beq L_02014624
    cmp r1, #0x2
    ldmeqfd sp!, {r3, pc}
    b L_0201463c
L_02014624:
    mov r1, #0x0
    str r1, [r0, #0x2c]
    ldmfd sp!, {r3, pc}
L_02014630:
    mov r1, #0x0
    str r1, [r0, #0x2c]
    ldmfd sp!, {r3, pc}
L_0201463c:
    bl func_02051a48
    ldmfd sp!, {r3, pc}
}
// clang-format on
