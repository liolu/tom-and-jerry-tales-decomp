#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02007450();
extern char data_020692ec[];
extern char data_0206b918[];
extern char data_0206e66c[];
extern char data_0206e670[];
extern char data_0206e684[];
extern char data_0206e6d4[];
extern char data_020714f5[];
extern char data_02086b08[];
extern char data_020877d0[];
extern char data_020880c0[];
// clang-format off
asm void func_02022de4(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_0206e6d4
    mov r1, #0x0
    add r2, r0, #0x16
    mov r0, #0x5
    swpb r1, r1, [r2]
    bl func_02007450
    ldr r1, =data_020877d0
    mov r2, #0x0
    str r2, [r1, #0x2c]
    add r3, r1, #0x9
    swpb r0, r2, [r3]
    add r3, r1, #0xb
    swpb r0, r2, [r3]
    add r3, r1, #0x8
    swpb r0, r2, [r3]
    add r3, r1, #0x6
    swpb r0, r2, [r3]
    add r3, r1, #0x13
    swpb r0, r2, [r1]
    add ip, r1, #0x15
    swpb r0, r2, [r3]
    mov r0, #0xa
    swpb r0, r0, [ip]
    add r3, r1, #0x19
    swpb r0, r2, [r3]
    add r3, r1, #0x14
    strh r2, [r1, #0x1a]
    swpb r0, r2, [r3]
    add r3, r1, #0x5
    swpb r0, r2, [r3]
    ldr r4, =data_0206b918
    ldr r0, =data_0206e6d4
    str r2, [r1, #0x30]
    ldrb r3, [r0, #0x60]
    add ip, r1, #0x4
    ldr lr, =data_020880c0
    mov r3, r3, lsl #0x1d
    mov r3, r3, lsr #0x1d
    str r3, [r4, #0x4]
    swpb r3, r2, [ip]
    ldr ip, =data_020692ec
    ldrsh lr, [lr, #0x10]
    ldr r3, =data_0206e684
    str r2, [ip, #0x0]
    strh lr, [r0, #0xa]
    str r2, [r3, #0x0]
    add ip, r1, #0x12
    swpb r3, r2, [ip]
    add ip, r4, #0x1
    str r2, [r1, #0x1c]
    str r2, [r1, #0x28]
    mov r3, #0xff
    swpb r3, r3, [ip]
    add ip, r1, #0x10
    swpb r3, r2, [ip]
    ldr ip, =data_0206e66c
    ldr r3, =data_0206e670
    ldrb ip, [ip, #0x0]
    ldrb r4, [r3, #0x0]
    ldr r3, =data_020714f5
    ldr lr, =data_02086b08
    sub r4, ip, r4
    sub r4, r4, #0x1
    and r4, r4, #0x7
    add r4, r4, r4, lsl #0x1
    add ip, r3, r4
    swpb r3, r2, [ip]
    add ip, r1, #0x7
    swpb r3, r2, [lr]
    str r2, [r0, #0xbc]
    str r2, [r1, #0x34]
    swpb r0, r2, [ip]
    ldmfd sp!, {r4, pc}
}
// clang-format on
