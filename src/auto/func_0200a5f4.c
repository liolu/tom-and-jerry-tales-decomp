#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02086d00[];
// clang-format off
asm void func_0200a5f4(void) {
    ldr r1, =data_02086d00
    mov r0, #0x0
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
