#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0206e67c[];
extern char data_020871f4[];
// clang-format off
asm void func_02016f1c(void) {
    ldr r2, =data_020871f4
    mov r3, #0x0
    ldr r0, =data_0206e67c
    str r3, [r2, #0x18]
    str r3, [r0, #0x0]
    add r1, r2, #0x3
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r2, #0x4
    swpb r0, r3, [r1]
    add r1, r2, #0x2
    swpb r0, r3, [r2]
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on
