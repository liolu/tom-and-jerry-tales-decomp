#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204c1b0();
extern void func_02051868();
extern void MI_CpuFill8();
extern char data_0206ea1c[];
extern char data_0206fcac[];
extern char data_02086dfc[];
// clang-format off
asm void func_0200dbe8(void) {
    stmfd sp!, {r3, lr}
    bl func_02051868
    ldr r1, =0x4001000
    ldr r0, [r1, #0x0]
    orr r0, r0, #0x10000
    str r0, [r1, #0x0]
    bl func_0204c1b0
    ldr r0, =data_0206fcac
    ldr r2, =0x16ddc
    mov r1, #0x0
    bl MI_CpuFill8
    ldr r0, =data_0206ea1c
    ldr r2, =0xf78
    mov r1, #0x0
    bl MI_CpuFill8
    ldr r1, =data_02086dfc
    mov r2, #0x0
    swpb r0, r2, [r1]
    strh r2, [r1, #0x2]
    ldmfd sp!, {r3, pc}
}
// clang-format on
