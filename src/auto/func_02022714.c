#include "m2c.h"
// clang-format off
asm void func_02022714(void) {
    stmdb sp!, {r4, lr}
    add lr, r0, #0x4
    swpb ip, r2, [lr]
    add lr, r0, #0x6
    ldrb r4, [sp, #0x8]
    swpb ip, r1, [lr]
    add r4, r2, r4
    add r2, r0, #0x5
    add ip, r0, #0x7
    swpb r0, r4, [r2]
    add r0, r1, r3
    swpb r0, r0, [ip]
    mov r0, #0x0
    ldmia sp!, {r4, pc}
}
// clang-format on
