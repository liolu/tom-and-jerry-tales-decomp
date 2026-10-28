#include "m2c.h"

void MI_CpuFill8(void);
// clang-format off
asm void func_020211dc(void) {
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    mov r0, r4
    mov r1, #0x0
    mov r2, #0x58
    bl MI_CpuFill8
    str r5, [r4, #0x40]
    mov r1, #0xa
    str r1, [r4, #0x0]
    ldrb r1, [r4, #0x3c]
    add r2, r4, #0x3c
    mov r3, #0x0
    bic r1, r1, #0x10
    swpb r1, r1, [r2]
    ldrb r1, [r4, #0x3c]
    orr r1, r1, #0x8
    swpb r1, r1, [r2]
    str r3, [r4, #0x2c]
    ldmia sp!, {r3, r4, r5, pc}
}
// clang-format on
