#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02030ed4();
extern void func_02030ee0();
extern void func_02030f40();
extern void func_0203b96c();
extern void func_0203bc90();
extern void func_0203da98();
extern void func_02051ee8();
extern char data_0206af58[];
extern char data_0206af70[];
extern char data_0206af88[];
extern char data_0206afa0[];
extern char data_0206afb8[];
extern char data_0206afd4[];
extern char data_0206aff0[];
extern char data_0206b00c[];
extern char data_0206b028[];
extern char data_0206b048[];
extern char data_0206b068[];
extern char data_0206b080[];
extern char data_0206b098[];
extern char data_0206b0b4[];
extern char data_0206b0cc[];
extern char data_0206b0e4[];
extern char data_0206b100[];
extern char data_0206b11c[];
extern char data_0206b13c[];
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_02087410[];
extern char data_02087454[];
// clang-format off
asm void func_02018990(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x18
    ldr r3, =data_02087410
    mov r0, #0x0
    add r2, r3, #0x1
    swpb r1, r0, [r2]
    add r2, r3, #0x3
    sub r1, r0, #0x1
    swpb r1, r1, [r3]
    swpb r1, r0, [r2]
    add r2, r3, #0x4
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_0203b96c
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    mov r2, #0x0
    str r2, [sp, #0x8]
    mov r4, #0x2
    ldr r0, =data_0206af58
    ldr r1, =data_0206e698
    mov r2, #0x14
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    mov r2, #0x0
    str r2, [sp, #0x8]
    ldr r0, =data_0206af70
    ldr r1, =data_0206e698
    mov r2, #0x15
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    mov r1, #0x0
    str r1, [sp, #0x8]
    mov r1, r4
    str r1, [sp, #0xc]
    ldr r0, =data_0206af88
    ldr r1, =data_0206e698
    mov r2, #0x16
    mov r3, #0x100
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    mov r0, r4
    str r0, [sp, #0xc]
    ldr r0, =data_0206afa0
    ldr r1, =data_0206e698
    mov r2, #0x17
    mov r3, #0x100
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r1, #0x3
    str r1, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    str r1, [sp, #0xc]
    ldr r0, =data_0206afb8
    ldr r1, =data_0206e698
    mov r2, #0x18
    mov r3, #0x100
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r1, #0x3
    str r1, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    str r1, [sp, #0xc]
    ldr r0, =data_0206afd4
    ldr r1, =data_0206e698
    mov r2, #0x19
    mov r3, #0x100
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r4, #0x3
    str r4, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    ldr r0, =data_0206aff0
    ldr r1, =data_0206e698
    mov r2, #0x1a
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    stmia sp, {r0, r4}
    mov r0, #0x0
    str r0, [sp, #0x8]
    ldr r0, =data_0206b00c
    ldr r1, =data_0206e698
    mov r2, #0x1b
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r0, r4
    str r0, [sp, #0x4]
    mov r2, #0x0
    str r2, [sp, #0x8]
    mov r4, #0x4
    ldr r0, =data_0206b028
    ldr r1, =data_0206e698
    mov r2, #0x1c
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    mov r1, #0x0
    str r1, [sp, #0x8]
    mov r1, r4
    str r1, [sp, #0xc]
    ldr r0, =data_0206b048
    ldr r1, =data_0206e698
    mov r2, #0x1d
    mov r3, #0x100
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    mov r0, #0x5
    str r0, [sp, #0xc]
    ldr r0, =data_0206b068
    ldr r1, =data_0206e698
    mov r2, #0x1e
    mov r3, #0x100
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    mov r0, #0x6
    str r0, [sp, #0xc]
    ldr r0, =data_0206b080
    ldr r1, =data_0206e698
    mov r2, #0x1f
    mov r3, #0x100
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    mov r2, #0x0
    str r2, [sp, #0x8]
    mov r4, #0x7
    ldr r0, =data_0206b098
    ldr r1, =data_0206e698
    mov r2, #0x20
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    mov r2, #0x0
    str r2, [sp, #0x8]
    ldr r0, =data_0206b0b4
    ldr r1, =data_0206e698
    mov r2, #0x21
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    mov r2, #0x0
    str r2, [sp, #0x8]
    mov r4, #0x8
    ldr r0, =data_0206b0cc
    ldr r1, =data_0206e698
    mov r2, #0x22
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r1, #0x3
    str r1, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    str r1, [sp, #0xc]
    ldr r0, =data_0206b0e4
    ldr r1, =data_0206e698
    mov r2, #0x23
    mov r3, #0x100
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r1, #0x3
    str r1, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    str r1, [sp, #0xc]
    ldr r0, =data_0206b100
    ldr r1, =data_0206e698
    mov r2, #0x24
    mov r3, #0x100
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    mov r0, #0x4
    str r0, [sp, #0xc]
    ldr r0, =data_0206b11c
    ldr r1, =data_0206e698
    mov r2, #0x25
    mov r3, #0x100
    bl func_0203bc90
    ldr r4, =0x5000200
    ldr ip, =data_02087410
    ldr r0, =data_0206b13c
    ldr r2, =data_0206e6a4
    ldr r3, =data_0206e698
    add r1, sp, #0x14
    str r4, [ip, #0x30]
    bl func_02030f40
    ldr r1, =data_0206e698
    add r0, sp, #0x10
    bl func_02030ed4
    ldr r0, [sp, #0x14]
    ldr r1, [sp, #0x10]
    bl func_0203da98
    ldr r1, =data_02087410
    ldr r0, [sp, #0x10]
    ldr r1, [r1, #0x30]
    mov r2, #0xe0
    add r1, r1, #0x40
    bl func_02051ee8
    ldr r1, =data_0206e698
    add r0, sp, #0x10
    bl func_02030ee0
    ldr r1, =data_02087410
    mov lr, #0x0
    ldr r0, [r1, #0x3c]
    ldr r1, [r1, #0x40]
    ldr r6, =data_02087454
    mvn r5, #0x0
    mov r4, lr
    mov r2, #0x44
L_02018dc4:
    mla r7, lr, r2, r6
    swpb r3, r5, [r7]
    add ip, r7, #0x1
    swpb r3, r4, [ip]
    add lr, lr, #0x1
    strh r4, [r7, #0x2]
    add ip, r7, #0x4
    swpb r3, r4, [ip]
    and lr, lr, #0xff
    str r0, [r7, #0x8]
    str r1, [r7, #0xc]
    str r4, [r7, #0x10]
    str r4, [r7, #0x14]
    add ip, r7, #0x18
    cmp lr, #0x5
    swpb r3, r4, [ip]
    blo L_02018dc4
    add sp, sp, #0x18
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
