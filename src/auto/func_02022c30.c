#include "m2c.h"

void func_020226a8(void);
void func_02022714(void);
// clang-format off
asm void func_02022c30(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r4, r3
    mov r3, #0x0
    str r3, [r6, #0x3c]
    add ip, r6, #0x38
    swpb r5, r3, [ip]
    add ip, r6, #0x39
    swpb r5, r3, [ip]
    add ip, r6, #0x3a
    swpb r5, r3, [ip]
    add lr, r6, #0x28
    str r1, [r6, #0x1c]
    mov r5, r2
    ldrb r2, [r1, #0x9]
    add r7, r1, #0x9
    add r2, r1, r2, lsl #0x2
    str r6, [r2, #0xc]
    ldrb ip, [r1, #0x9]
    mov r2, r4
    swpb ip, ip, [lr]
    ldrb ip, [r1, #0x9]
    mov r1, r5
    add ip, ip, #0x1
    swpb ip, ip, [r7]
    bl func_020226a8
    mov r3, #0x0
    mov r0, r6
    mov r1, r5
    mov r2, r4
    str r3, [sp, #0x0]
    bl func_02022714
    mov r0, #0x0
    str r0, [r6, #0x18]
    ldrb r1, [sp, #0x1c]
    str r0, [r6, #0x14]
    str r0, [r6, #0xc]
    orr r1, r1, #0x98
    str r0, [r6, #0x10]
    add r2, r6, #0x8
    swpb r1, r1, [r2]
    str r0, [r6, #0x38]
    str r0, [r6, #0x34]
    str r0, [r6, #0x30]
    ldr r1, [sp, #0x18]
    str r0, [r6, #0x2c]
    str r1, [r6, #0x20]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
