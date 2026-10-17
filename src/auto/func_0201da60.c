#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0206e6d4[];
// clang-format off
asm void func_0201da60(void) {
    cmp r0, #0x1
    beq L_0201da84
    cmp r0, #0x2
    bxne lr
    ldr r1, =data_0206e6d4
    ldr r2, [r1, #0x54]
    orr r2, r2, #0x40000000
    str r2, [r1, #0x54]
    bx lr
L_0201da84:
    ldr r1, =data_0206e6d4
    ldrb r3, [r1, #0x58]
    add r2, r1, #0x58
    bic r1, r3, #0x1
    orr r1, r1, #0x1
    swpb r1, r1, [r2]
    bx lr
}
// clang-format on
