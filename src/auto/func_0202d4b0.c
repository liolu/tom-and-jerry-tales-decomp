#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204c1b0();
extern void func_02051868();
extern char data_020881e0[];
// clang-format off
asm void func_0202d4b0(void) {
    stmfd sp!, {r3, lr}
    bl func_02051868
    ldr r1, =0x4001000
    ldr r0, [r1, #0x0]
    orr r0, r0, #0x10000
    str r0, [r1, #0x0]
    bl func_0204c1b0
    ldr r2, =data_020881e0
    mov r3, #0x0
    add r1, r2, #0x1
    swpb r0, r3, [r1]
    add r1, r2, #0xa
    swpb r0, r3, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
