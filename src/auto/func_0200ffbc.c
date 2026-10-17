#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02007450();
extern void func_0203cd5c();
extern void func_0203d0d8();
extern void func_0203d740();
extern void func_0205172c();
extern char data_0206ac78[];
extern char data_0206ac7c[];
extern char data_0206ac80[];
extern char data_0206e6d4[];
extern char data_02086fa8[];
extern char data_020b8b44[];
// clang-format off
asm void func_0200ffbc(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0xc
    ldr r0, =data_0206e6d4
    ldr r0, [r0, #0xd8]
    cmp r0, #0x0
    beq L_020100c0
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cd5c
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r2, #0x28
    ldr ip, =data_020b8b44
    str r0, [sp, #0x4]
    mov r3, r2
    mov r0, #0x7c
    mov r1, #0x44
    str ip, [sp, #0x8]
    bl func_0203d0d8
    ldr r0, =data_02086fa8
    ldrb r1, [r0, #0x11]
    cmp r1, #0x1e
    bhs L_02010048
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r2, #0x3
    ldr r1, =data_020b8b44
    str r2, [sp, #0x4]
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x20]
    ldr r0, =data_0206ac78
    mov r1, #0x7c
    mov r2, #0x44
    bl func_0203d740
    b L_020100b4
L_02010048:
    cmp r1, #0x3c
    bhs L_02010080
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r2, #0x3
    ldr r1, =data_020b8b44
    str r2, [sp, #0x4]
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x20]
    ldr r0, =data_0206ac7c
    mov r1, #0x7c
    mov r2, #0x44
    bl func_0203d740
    b L_020100b4
L_02010080:
    cmp r1, #0x5a
    bhs L_020100b4
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r2, #0x3
    ldr r1, =data_020b8b44
    str r2, [sp, #0x4]
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x20]
    ldr r0, =data_0206ac80
    mov r1, #0x7c
    mov r2, #0x44
    bl func_0203d740
L_020100b4:
    ldr r0, =data_0206e6d4
    mov r1, #0x0
    str r1, [r0, #0xd8]
L_020100c0:
    ldr r2, =data_02086fa8
    ldrb r3, [r2, #0x11]
    add r1, r2, #0x11
    add r0, r3, #0x1
    cmp r3, #0x0
    swpb r0, r0, [r1]
    beq L_020100ec
    ldr r0, =data_0206e6d4
    ldr r0, [r0, #0xd8]
    cmp r0, #0x0
    beq L_02010130
L_020100ec:
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cd5c
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    ldr r1, =data_020b8b44
    ldr r0, =data_02086fa8
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x20]
    ldr r0, =data_0206ac78
    mov r1, #0x7c
    mov r2, #0x44
    bl func_0203d740
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_02010130:
    ldrb r0, [r2, #0x11]
    cmp r0, #0x1e
    bne L_020101a8
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cd5c
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r2, #0x28
    str r0, [sp, #0x4]
    ldr ip, =data_020b8b44
    mov r3, r2
    mov r0, #0x7c
    mov r1, #0x44
    str ip, [sp, #0x8]
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    ldr r1, =data_020b8b44
    ldr r0, =data_02086fa8
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x20]
    ldr r0, =data_0206ac7c
    mov r1, #0x7c
    mov r2, #0x44
    bl func_0203d740
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_020101a8:
    cmp r0, #0x3c
    bne L_0201021c
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cd5c
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r2, #0x28
    str r0, [sp, #0x4]
    ldr ip, =data_020b8b44
    mov r3, r2
    mov r0, #0x7c
    mov r1, #0x44
    str ip, [sp, #0x8]
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    ldr r1, =data_020b8b44
    ldr r0, =data_02086fa8
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x20]
    ldr r0, =data_0206ac80
    mov r1, #0x7c
    mov r2, #0x44
    bl func_0203d740
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_0201021c:
    cmp r0, #0x5a
    addne sp, sp, #0xc
    ldmnefd sp!, {pc}
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r2, #0x28
    ldr ip, =data_020b8b44
    str r0, [sp, #0x4]
    mov r3, r2
    mov r0, #0x7c
    mov r1, #0x44
    str ip, [sp, #0x8]
    bl func_0203d0d8
    mov r0, #0x0
    mov r1, r0
    bl func_0205172c
    mov r0, #0x0
    bl func_02007450
    ldr r1, =data_02086fa8
    ldrb r0, [r1, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {pc}
}
// clang-format on
