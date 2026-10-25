#include "m2c.h"

void func_02014cf0(void);
void func_0201490c(void);
void func_02014e34(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02005a3c(void) {
    stmdb sp!, {r4, lr}
    mov r0, #0x5
    bl func_02014cf0
    mov r4, r0
    mov r1, r4
    mov r0, #0x5
    bl func_0201490c
    add r1, r4, #0x40
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x42
    mov r0, #0x14
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0x41
    mov r1, #0x3c
    swpb r1, r1, [r2]
    bl func_02014e34
    ldmia sp!, {r4, pc}
}
// clang-format on
