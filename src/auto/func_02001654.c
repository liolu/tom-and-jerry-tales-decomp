#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02002608();
extern char data_020693f4[];
extern char data_0206e9e8[];
// clang-format off
asm void func_02001654(void) {
    stmfd sp!, {r3, lr}
    ldr r1, =data_020693f4
    ldr lr, [r1, r0, lsl #0x2]
    cmp lr, #0x0
    beq L_02001684
    ldr r1, =data_0206e9e8
    ldrb ip, [r1, #0x4]
    add r2, r1, #0x2
    add r3, r1, #0x4
    swpb r1, ip, [r2]
    swpb r0, r0, [r3]
    blx lr
L_02001684:
    bl func_02002608
    ldmfd sp!, {r3, pc}
}
// clang-format on
