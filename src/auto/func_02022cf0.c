#include "m2c.h"
// clang-format off
asm void func_02022cf0(void) {
    stmdb sp!, {r4, lr}
    ldrb r4, [r0, #0x8]
    add ip, r0, #0x8
    add lr, r0, #0x38
    orr r0, r4, #0x80
    swpb r0, r0, [ip]
    and ip, r1, #0x3
    add r0, r3, r2, lsl #0x4
    add r1, lr, ip
    swpb r0, r0, [r1]
    ldrb r0, [lr, ip]
    ldmia sp!, {r4, pc}
}
// clang-format on
