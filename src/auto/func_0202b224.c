#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020222b8();
extern char data_02087f80[];
// clang-format off
asm void func_0202b224(void) {
    stmfd sp!, {r3, lr}
    cmp r0, #0x1
    beq L_0202b23c
    cmp r0, #0x2
    beq L_0202b250
    ldmfd sp!, {r3, pc}
L_0202b23c:
    ldr r0, =data_02087f80
    mov r2, #0x5
    add r1, r0, #0x1
    swpb r0, r2, [r1]
    ldmfd sp!, {r3, pc}
L_0202b250:
    mvn r0, #0xf
    mov r1, #0x1e
    mov r2, #0x3
    bl func_020222b8
    ldr r0, =data_02087f80
    mov r2, #0x8
    add r1, r0, #0x1
    swpb r0, r2, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
