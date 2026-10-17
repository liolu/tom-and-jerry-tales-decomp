#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204c1b0();
extern void func_02051868();
extern char data_02086dac[];
// clang-format off
asm void func_0200d820(void) {
    stmfd sp!, {r3, lr}
    bl func_02051868
    ldr r1, =0x4001000
    ldr r0, [r1, #0x0]
    orr r0, r0, #0x10000
    str r0, [r1, #0x0]
    bl func_0204c1b0
    ldr r1, =data_02086dac
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
