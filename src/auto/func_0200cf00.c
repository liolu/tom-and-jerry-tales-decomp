#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200cab0();
extern void func_0203b96c();
extern void func_0203b980();
extern void func_0203bc90();
extern void func_0203cdd0();
extern void func_0203d740();
extern void func_0203de98();
extern void func_0203dea8();
extern void func_0203deb8();
extern void func_0203dec8();
extern void func_0203ded8();
extern void sprintf();
extern char data_0206a5a4[];
extern char data_0206a6e4[];
extern char data_0206a6f8[];
extern char data_0206a70c[];
extern char data_0206e690[];
extern char data_0206e698[];
extern char data_0206e6d4[];
extern char data_02086dac[];
extern char data_020b8b44[];
// clang-format off
asm void func_0200cf00(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x28]
    bl func_0203cdd0
    ldr r0, =data_0206e690
    ldr r0, [r0, #0x0]
    bl func_0203de98
    bl func_0200cab0
    ldr r7, =data_0206a5a4
    ldr r11, =data_020b8b44
    mov r8, #0x0
    mov r10, #0x10
L_0200cf34:
    ldr r9, [r7, r8, lsl #0x2]
    bl func_0203dea8
    mov r6, r0
    bl func_0203dec8
    mov r5, r0
    bl func_0203deb8
    mov r4, r0
    bl func_0203ded8
    mov r1, #0x28
    mov r2, r10, lsl #0x10
    mov r3, r0
    mla r1, r6, r1, r11
    stmia sp, {r4, r5}
    str r1, [sp, #0x8]
    mov r0, r9
    mov r1, #0xa0
    mov r2, r2, lsr #0x10
    bl func_0203d740
    add r8, r8, #0x1
    add r10, r10, #0xc
    cmp r8, #0x9
    blo L_0200cf34
    mov r0, #0x1
    bl func_0203b96c
    mov r0, #0x1
    bl func_0203b980
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r4, #0x0
    str r4, [sp, #0x4]
    str r4, [sp, #0x8]
    ldr r0, =data_0206a6e4
    ldr r1, =data_0206e698
    mov r2, #0x2
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r1, r4
    str r1, [sp, #0x4]
    str r1, [sp, #0x8]
    str r1, [sp, #0xc]
    ldr r0, =data_0206a6f8
    ldr r1, =data_0206e698
    mov r2, #0x3
    mov r3, #0x100
    bl func_0203bc90
    ldr r2, =data_0206e6d4
    ldr r1, =data_0206a70c
    ldrh r2, [r2, #0x6e]
    add r0, sp, #0x10
    bl sprintf
    bl func_0203dea8
    mov r6, r0
    bl func_0203dec8
    mov r5, r0
    bl func_0203deb8
    mov r4, r0
    bl func_0203ded8
    mov r3, r0
    ldr r1, =data_020b8b44
    mov r0, #0x28
    mla r0, r6, r0, r1
    stmia sp, {r4, r5}
    str r0, [sp, #0x8]
    add r0, sp, #0x10
    mov r1, #0x5
    mov r2, #0x96
    bl func_0203d740
    ldr r2, =data_02086dac
    mov r3, #0x0
    add r1, r2, #0x3
    swpb r0, r3, [r1]
    add r1, r2, #0x1
    swpb r0, r3, [r1]
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
