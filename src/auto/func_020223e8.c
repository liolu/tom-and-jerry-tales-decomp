#include "m2c.h"

// clang-format off
asm s32 func_020223e8(void *arg0) {
    stmdb sp!, {r3, lr}
    mov r3, #0xfe
    add r2, r0, #0x1
    swpb r1, r3, [r2]
    add r2, r0, #0x2
    ldrb r1, [r0, #0x1]
    sub lr, r3, #0xff
    add r3, r0, #0x9
    swpb r1, r1, [r2]
    mov ip, #0x0
    ldrb r1, [r0, #0x2]
    add r2, r0, #0x8
    swpb r1, r1, [r0]
    str lr, [r0, #0x4]
    swpb r1, ip, [r3]
    str ip, [r0, #0xc]
    swpb r0, ip, [r2]
    mov r0, ip
    ldmia sp!, {r3, pc}
}
// clang-format on
