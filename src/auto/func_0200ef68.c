#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020692ec[];
extern char data_0206e6d4[];
extern char data_02086fa8[];
// clang-format off
asm void func_0200ef68(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r0, =data_020692ec
    ldr r5, =data_02086fa8
    ldr r0, [r0, #0x0]
    ldr r4, =data_0206e6d4
    cmp r0, #0x1
    ldrne r1, =data_02086fa8
    movne r0, #0x0
    ldreq r1, =data_02086fa8
    moveq r0, #0x2
    swpb r0, r0, [r1]
    add r2, r5, #0xa
    mov r0, #0x0
    str r0, [r5, #0x28]
    str r0, [r5, #0x24]
    str r0, [r5, #0x30]
    str r0, [r5, #0x2c]
    ldrsh r1, [r4, #0x64]
    add r3, r5, #0x8
    add ip, r5, #0x9
    swpb r1, r1, [r2]
    add r2, r5, #0x10
    ldrb r1, [r5, #0xa]
    add lr, r5, #0x3
    swpb r1, r1, [r3]
    add r3, r5, #0xc
    ldrsh r1, [r4, #0xc]
    swpb r1, r1, [r2]
    swpb r1, r0, [ip]
    swpb r1, r0, [lr]
    swpb r0, r0, [r3]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
