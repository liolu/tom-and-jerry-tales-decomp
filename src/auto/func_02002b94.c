#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0206e9e8[];
// clang-format off
asm void func_02002b94(void) {
    ldr r1, =0xb60b60b
    mov r2, #0xb6
    umull ip, r3, r0, r1
    mla r3, r0, r2, r3
    mov r2, r0, asr #0x1f
    mla r3, r2, r1, r3
    adds r1, ip, #0x0
    adc r3, r3, #0x800
    ldr r2, =data_0206e9e8
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r1, r3, asr #0xc
    str r0, [r2, #0x1c]
    strh r1, [r2, #0x8]
    bx lr
}
// clang-format on
