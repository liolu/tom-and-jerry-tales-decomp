#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020037e0(void) {
    add r2, r0, #0x8
    swpb r1, r1, [r2]
    ldr r1, [r0, #0x64]
    orr r1, r1, #0x2
    str r1, [r0, #0x64]
    bx lr
}
// clang-format on
