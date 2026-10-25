#include "m2c.h"
void func_0203ae30(void);
// clang-format off
asm void func_02041c34(void) {
    stmdb sp!, {lr}
    sub sp, sp, #0x14
    mov ip, #0x0
    add lr, sp, #0x0
    mov r2, r1
    mov r3, ip
L_02041c4c:
    ldrsb r1, [r0, #0x0]
    add ip, ip, #0x1
    add r0, r0, #0x1
    swpb r1, r1, [lr]
    ldrsb r1, [lr, #0x0]
    cmp r1, #0x2e
    swpeqb r1, r3, [lr]
    cmp ip, #0x10
    add lr, lr, #0x1
    blt L_02041c4c
    add r0, sp, #0x0
    mov r3, #0x0
    add ip, r0, ip
    swpb r3, r3, [ip]
    mov r1, #0x1
    bl func_0203ae30
    add sp, sp, #0x14
    ldmia sp!, {pc}
}
// clang-format on
