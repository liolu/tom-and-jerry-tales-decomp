#include "m2c.h"
extern char data_0206ad48[];
// clang-format off
asm void func_0201520c(void) {
    ldr r0, =data_0206ad48
    ldrb r1, [r0, #0x1]
    cmp r1, #0x0
    addeq r1, r0, #0x1
    moveq r0, #0x78
    swpeqb r0, r0, [r1]
    ldr r0, =data_0206ad48
    ldrb r2, [r0, #0x1]
    add r1, r0, #0x1
    sub r0, r2, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
