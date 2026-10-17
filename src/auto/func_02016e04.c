#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02030f40();
extern void func_0203cd5c();
extern void func_0203cf6c();
extern void func_0203dafc();
extern void func_0203dbb0();
extern void func_0203de64();
extern void func_0203de74();
extern void func_0203de84();
extern void func_0203de98();
extern char data_0206addc[];
extern char data_0206adf8[];
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_0206fcac[];
extern char data_02087188[];
extern char data_02087190[];
extern char data_020b8b44[];
// clang-format off
asm void func_02016e04(void) {
    stmfd sp!, {r3, lr}
    sub sp, sp, #0x10
    ldr ip, =data_02087188
    mov r0, #0x0
    swpb r0, r0, [ip]
    ldr lr, =data_0206fcac
    ldr r0, =data_0206addc
    ldr r1, =data_02087190
    ldr r2, =data_0206e6a4
    ldr r3, =data_0206e698
    str lr, [ip, #0x14]
    bl func_02030f40
    mov r0, #0x0
    mov r1, #0xc
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, r0
    mov r3, r0
    mov r1, #0x1
    str r0, [sp, #0xc]
    bl func_0203cf6c
    ldr r0, =data_020b8b44
    mov r1, #0x4000000
    ldr r2, [r0, #0xc]
    ldr r0, [r1, #0x0]
    cmp r2, #0x0
    and r1, r0, #0x40000000
    ldr r0, =data_0206adf8
    beq L_02016e88
    cmp r2, #0x1
    cmpeq r1, #0x0
    bne L_02016e9c
L_02016e88:
    ldr r2, =data_020b8b44
    ldr r1, =data_0206e698
    ldr r2, [r2, #0x0]
    bl func_0203dafc
    b L_02016ec0
L_02016e9c:
    cmp r1, #0x0
    beq L_02016ec0
    cmp r2, #0x1
    bne L_02016ec0
    ldr r2, =data_020b8b44
    ldr r1, =data_0206e698
    ldr r2, [r2, #0x0]
    mov r3, #0x0
    bl func_0203dbb0
L_02016ec0:
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cd5c
    mov r0, #0x0
    bl func_0203de64
    ldr r0, =data_02087188
    ldr r0, [r0, #0x8]
    bl func_0203de98
    mov r0, #0x0
    bl func_0203de84
    mov r0, #0x0
    bl func_0203de74
    add sp, sp, #0x10
    ldmfd sp!, {r3, pc}
}
// clang-format on
