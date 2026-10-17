#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02040228();
extern char data_0206cc1c[];
// clang-format off
asm void func_0202cc90(void) {
    stmfd sp!, {r4, lr}
    ldr r4, [r0, #0x4]
    bl func_02040228
    ldrb r0, [r4, #0x0]
    ldr r1, =data_0206cc1c
    sub r0, r0, #0x30
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
