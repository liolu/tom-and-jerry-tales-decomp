#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02086b08[];
extern char data_02087038[];
// clang-format off
asm void func_02007738(void) {
    ldr r2, =data_02086b08
    mov ip, #0x0
    add r1, r2, #0x7
    ldr r3, =data_02087038
    swpb r0, ip, [r1]
    str ip, [r3, #0x0]
    add r1, r2, #0x2
    swpb r0, ip, [r1]
    add r1, r2, #0x4
    str ip, [r2, #0xc]
    swpb r0, ip, [r1]
    bx lr
}
// clang-format on
