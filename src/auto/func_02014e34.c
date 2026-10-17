#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014ea4();
extern char data_02087040[];
// clang-format off
asm void func_02014e34(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x0]
    cmp r0, #0xd
    beq L_02014e5c
    cmp r0, #0x5
    bne L_02014e78
    ldrb r0, [r4, #0x42]
    cmp r0, #0x0
    beq L_02014e78
L_02014e5c:
    ldr r0, =data_02087040
    mov r1, #0x1
    str r1, [r0, #0x0]
    bl func_02014ea4
    ldr r0, =data_02087040
    mov r1, #0x0
    str r1, [r0, #0x0]
L_02014e78:
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    orr r0, r0, #0x10
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
