#include "m2c.h"

void MI_CpuFill8(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020132c4(void) {
    stmdb sp!, {r4, lr}
    mov r1, #0x0
    mov r2, #0x68
    mov r4, r0
    bl MI_CpuFill8
    mov r0, #0xa
    str r0, [r4, #0x0]
    add r1, r4, #0xb
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmia sp!, {r4, pc}
}
// clang-format on
