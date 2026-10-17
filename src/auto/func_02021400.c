#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0208776c[];
// clang-format off
asm void func_02021400(void) {
    ldr r2, =data_0208776c
    mov r0, #0x1
    add r1, r2, #0x2
    swpb r0, r0, [r1]
    mov r0, #0x0
    swpb r0, r0, [r2]
    bx lr
}
// clang-format on
