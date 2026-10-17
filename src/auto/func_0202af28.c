#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0206ca70[];
extern char data_02087ef4[];
// clang-format off
asm void func_0202af28(void) {
    ldr r2, =data_02087ef4
    mov r3, #0x0
    str r3, [r2, #0x84]
    str r3, [r2, #0x24]
    str r3, [r2, #0x34]
    str r3, [r2, #0x7c]
    str r3, [r2, #0x40]
    str r3, [r2, #0x3c]
    str r3, [r2, #0x38]
    swpb r0, r3, [r2]
    ldr r0, =data_0206ca70
    strh r3, [r2, #0x12]
    strh r3, [r2, #0x6]
    mov r1, #0x1
    strh r1, [r0, #0x0]
    add r1, r2, #0x2
    swpb r0, r3, [r1]
    add r1, r2, #0x3
    swpb r0, r3, [r1]
    str r3, [r2, #0x6c]
    strh r3, [r2, #0xe]
    strh r3, [r2, #0xa]
    bx lr
}
// clang-format on
