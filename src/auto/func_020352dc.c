#include "m2c.h"

extern char data_020a0b70[];
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020352dc(void) {
    stmdb sp!, {r4, lr}
    cmp r0, #0x3f
    bhi @L020352f8
    ldr ip, =data_020a0b70
    add lr, ip, #0x4
    swpb ip, r0, [lr]
    b @L02035308
@L020352f8:
    ldr ip, =data_020a0b70
    mov r4, #0x3f
    add lr, ip, #0x4
    swpb ip, r4, [lr]
@L02035308:
    cmp r1, #0x3f
    bhi @L02035320
    ldr ip, =data_020a0b70
    add lr, ip, #0x3
    swpb ip, r1, [lr]
    b @L02035330
@L02035320:
    ldr ip, =data_020a0b70
    mov r4, #0x3f
    add lr, ip, #0x3
    swpb ip, r4, [lr]
@L02035330:
    cmp r0, r1
    bls @L02035350
    ldr ip, =data_020a0b70
    mov lr, #0x0
    add r1, ip, #0x3
    swpb r0, lr, [r1]
    add r1, ip, #0x4
    swpb r0, lr, [r1]
@L02035350:
    ldr ip, =data_020a0b70
    cmp r2, #0x3f
    ldrb r0, [ip, #0x4]
    add r1, ip, #0x2
    swpb r0, r0, [r1]
    add r1, ip, #0x1
    swplsb r0, r2, [r1]
    movhi r0, #0x3f
    swphib r0, r0, [r1]
    cmp r3, #0x3f
    ldrls r1, =data_020a0b70
    swplsb r0, r3, [r1]
    ldrhi r1, =data_020a0b70
    movhi r0, #0x3f
    swphib r0, r0, [r1]
    cmp r2, r3
    bls @L020353a8
    ldr r1, =data_020a0b70
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r1, #0x1
    swpb r0, r2, [r1]
@L020353a8:
    ldr r0, =data_020a0b70
    ldrb r2, [r0, #0x1]
    add r1, r0, #0x5
    swpb r0, r2, [r1]
    ldmia sp!, {r4, pc}
}
// clang-format on
