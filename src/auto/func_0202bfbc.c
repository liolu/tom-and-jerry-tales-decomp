#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020880ec[];
extern char data_020880f8[];
// clang-format off
asm void func_0202bfbc(void) {
    ldr r1, =data_020880ec
    ldr r3, =data_020880f8
    ldrb ip, [r1, #0x2]
    add r2, r1, #0x2
    add r1, ip, #0x1
    swpb r1, r1, [r2]
    str r0, [r3, ip, lsl #0x2]
    bx lr
}
// clang-format on
