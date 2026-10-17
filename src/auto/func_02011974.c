#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02086ff4[];
// clang-format off
asm void func_02011974(void) {
    ldr r2, =data_02086ff4
    mov r3, #0x0
    swpb r0, r3, [r2]
    add r1, r2, #0x1
    str r3, [r2, #0x4]
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on
