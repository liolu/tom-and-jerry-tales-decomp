#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02022b60(void) {
    ldrb ip, [r0, #0x8]
    and r2, r1, #0x3
    add r3, r0, #0x8
    bic r1, ip, #0x3
    swpb r1, r1, [r3]
    ldrb r0, [r0, #0x8]
    and r1, ip, #0x3
    cmp r1, r2
    orr r0, r0, r2
    swpb r0, r0, [r3]
    ldrneb r0, [r3, #0x0]
    orrne r0, r0, #0x80
    swpneb r0, r0, [r3]
    bx lr
}
// clang-format on
