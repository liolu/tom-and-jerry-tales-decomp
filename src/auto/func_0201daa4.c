#include "m2c.h"

void func_02051fd0(void);
void func_0201db68(void);
// clang-format off
asm s32 func_0201daa4(void *arg0) {
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0x18
    mov r1, #0x0
    mov r2, #0x4c
    bl func_02051fd0
    mov r0, #0x0
    swpb r0, r0, [r4]
    add r1, r4, #0x60
    ldrb r0, [r4, #0x60]
    bic r0, r0, #0x7
    swpb r0, r0, [r1]
    bl func_0201db68
    ldrb r0, [r4, #0x1f]
    mov ip, #0x41
    add r3, r4, #0x1f
    orr r0, r0, #0x2
    swpb r0, r0, [r3]
    mov r0, #0x0
    strh r0, [r4, #0x6e]
    add r2, r4, #0x1e
    swpb r1, ip, [r2]
    add r2, r4, #0x5e
    ldrb r1, [r4, #0x1f]
    sub lr, ip, #0x42
    add ip, r4, #0xa0
    bic r1, r1, #0x1
    swpb r1, r1, [r3]
    ldrb r1, [r4, #0x1f]
    bic r1, r1, #0x8
    swpb r1, r1, [r3]
    ldrb r1, [r4, #0x1f]
    bic r1, r1, #0x10
    swpb r1, r1, [r3]
    ldrb r1, [r4, #0x1f]
    bic r1, r1, #0x20
    swpb r1, r1, [r3]
    ldrb r1, [r4, #0x1f]
    orr r1, r1, #0x2
    swpb r1, r1, [r3]
    ldrb r1, [r4, #0x1f]
    bic r1, r1, #0x4
    swpb r1, r1, [r3]
    swpb r0, r0, [r2]
    swpb r0, lr, [ip]
    ldmia sp!, {r4, pc}
}
// clang-format on
