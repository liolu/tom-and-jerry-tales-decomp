#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02014e90(void) {
    ldrb r2, [r0, #0x3c]
    add r1, r0, #0x3c
    orr r0, r2, #0x10
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
