#include "m2c.h"

void func_020222b8(void);
extern char data_0206cc1c[];
extern char data_0206e690[];
extern char data_020881b8[];
// clang-format off
asm void func_0202d29c(void) {
    stmdb sp!, {r3, lr}
    ldr r0, =data_020881b8
    ldr ip, =data_020881b8
    ldrb r1, [r0, #0x6]
    add r2, ip, #0x2
    ldr r3, =0x1ff0000
    cmp r1, #0x0
    addeq r1, r0, #0x6
    moveq r0, #0x1
    swpeqb r0, r0, [r1]
    ldr lr, =0x4001014
    ldrb r0, [ip, #0x2]
    add r0, r0, #0x1
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x18
    add r0, r1, r0, ror #0x18
    swpb r0, r0, [r2]
    ldr r2, =data_0206cc1c
    ldrb r0, [ip, #0x2]
    and r1, r3, r0, lsl #0x10
    str r1, [lr, #0x0]
    ldr ip, [ip, #0xc]
    ldr r1, [r2, #0x4]
    cmp ip, r1
    ldmleia sp!, {r3, pc}
    ldr r1, =data_0206e690
    ldr r2, [r2, #0x8]
    ldr r3, [r1, #0x0]
    sub r2, r2, #0x1
    ldr r1, [r3, #0x14]
    sub r2, ip, r2
    ldrb r1, [r3, r1]
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x2
    mul r1, r2, r1
    mov r2, r1, lsr #0x1f
    rsb r1, r2, r1, lsl #0x18
    add r1, r2, r1, ror #0x18
    cmp r0, r1
    ldmneia sp!, {r3, pc}
    mvn r0, #0xf
    mov r1, #0x10
    mov r2, #0x2
    bl func_020222b8
    ldr r0, =data_020881b8
    mov r2, #0x1
    add r1, r0, #0x8
    swpb r0, r2, [r1]
    ldmia sp!, {r3, pc}
}
// clang-format on
