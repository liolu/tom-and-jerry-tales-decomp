#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204c1b0();
extern void func_02051868();
extern char data_0206cc1c[];
extern char data_0206e6d4[];
extern char data_020881b8[];
// clang-format off
asm void func_0202ccb4(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_020881b8
    mov r2, #0x0
    add r1, r0, #0x3
    swpb r0, r2, [r1]
    bl func_02051868
    ldr r1, =0x4001000
    ldr r0, [r1, #0x0]
    orr r0, r0, #0x10000
    str r0, [r1, #0x0]
    bl func_0204c1b0
    ldr r0, =data_020881b8
    mov r1, #0x0
    add r3, r0, #0x7
    swpb r2, r1, [r3]
    add r3, r0, #0x4
    swpb r2, r1, [r3]
    ldr r2, =data_0206cc1c
    add r3, r0, #0x2
    ldr r4, [r2, #0x8]
    add ip, r0, #0x6
    str r4, [r0, #0xc]
    ldr r2, [r2, #0x4]
    mov lr, #0x1
    sub r2, r2, r4
    add r2, r2, #0x1
    str r2, [r0, #0x1c]
    swpb r2, r1, [r3]
    add r3, r0, #0x8
    swpb r2, lr, [ip]
    ldr lr, =data_0206e6d4
    swpb r2, r1, [r0]
    add ip, r0, #0x1
    swpb r2, r1, [r3]
    add r2, r0, #0x5
    swpb r0, r1, [ip]
    add r3, lr, #0x5e
    ldrb r0, [lr, #0x5e]
    swpb r0, r0, [r2]
    swpb r0, r1, [r3]
    ldmfd sp!, {r4, pc}
}
// clang-format on
