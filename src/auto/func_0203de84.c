#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020b8b38[];
// clang-format off
asm void func_0203de84(void) {
    ldr r1, =data_020b8b38
    add r1, r1, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
