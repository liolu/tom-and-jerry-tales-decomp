#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02014ff0(void) {
    mov r1, #0xa
    str r1, [r0, #0x0]
    mov r1, #0x0
    str r1, [r0, #0x54]
    strh r1, [r0, #0x8]
    ldrb r2, [r0, #0xa]
    add r1, r0, #0xa
    bic r0, r2, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
