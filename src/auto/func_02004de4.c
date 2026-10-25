#include "m2c.h"

void func_0203a388(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02004de4(void) {
    stmdb sp!, {r3, lr}
    ldrb r2, [r1, #0x0]
    cmp r2, #0x0
    addne r3, r1, #0x1000
    ldrne r1, [r3, #0x83c]
    cmpne r1, #0xd
    ldmeqia sp!, {r3, pc}
    mov r1, #0xd
    str r1, [r3, #0x83c]
    mov r2, #0x6
    add r1, r3, #0x48
    mov ip, #0x8
    str r2, [r3, #0x834]
    mov r2, #0x0
    str r2, [r3, #0x830]
    add r2, r1, #0x800
    swpb r1, ip, [r2]
    sub r1, ip, #0x9
    str r1, [r3, #0x844]
    bl func_0203a388
    ldmia sp!, {r3, pc}
}
// clang-format on
