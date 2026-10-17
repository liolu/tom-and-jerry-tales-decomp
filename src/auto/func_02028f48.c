#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204c1b0();
extern void func_02051868();
extern char data_02087e98[];
// clang-format off
asm void func_02028f48(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_02087e98
    mov r2, #0x0
    add r1, r0, #0x2
    swpb r0, r2, [r1]
    bl func_02051868
    ldr r1, =0x4001000
    ldr r0, [r1, #0x0]
    orr r0, r0, #0x10000
    str r0, [r1, #0x0]
    bl func_0204c1b0
    ldmfd sp!, {r3, pc}
}
// clang-format on
