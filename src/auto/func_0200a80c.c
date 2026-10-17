#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02086d08[];
// clang-format off
asm void func_0200a80c(void) {
    ldr r1, [r0, #0x0]
    cmp r1, #0x2
    bxne lr
    ldr r1, [r0, #0x4]
    ldr r0, =data_02086d08
    ldrsb r2, [r1, #0x0]
    add r1, r0, #0x2
    sub r0, r2, #0x30
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
