#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003058();
extern void func_020037f8();
extern void func_02003d94();
extern void func_02004ac4();
extern void func_0203179c();
extern void func_02032604();
extern void func_0203cc68();
extern void func_0203ccc8();
extern void func_0203d098();
extern void func_0203d740();
extern void func_0203d8d8();
extern void func_0203dea8();
extern void func_0203deb8();
extern void func_0203dec8();
extern void func_0203ded8();
extern char data_02063e5c[];
extern char data_0206e698[];
extern char data_0206ea14[];
extern char data_0206fcac[];
extern char data_02086dfc[];
extern char data_020b8b44[];
// clang-format off
asm void func_0200dfe8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x18
    ldr r1, =data_02063e5c
    add r3, sp, #0xc
    mov r4, r0
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, #0x0
    mov r1, r0
    bl func_0203ccc8
    bl func_02003d94
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    add r3, sp, #0xc
    bl func_020037f8
    ldr r2, =data_0206fcac
    ldr r1, =data_0206ea14
    ldr r0, =data_0206e698
    str r2, [r1, #0x0]
    bl func_02032604
    ldr r0, =data_0206e698
    bl func_0203179c
    bl func_02004ac4
    ldr r1, =data_02086dfc
    mov r0, #0x0
    strh r0, [r1, #0x2]
    swpb r0, r0, [r1]
    ldr r3, =0x2d8b6127
    ldr r2, =0x40004c8
    ldr r0, =0x7fff
    str r3, [r2, #0x0]
    str r0, [r2, #0x4]
    ldr r1, =0x6d8b62d8
    ldr r0, =0x40006318
    str r1, [r2, #0x0]
    str r0, [r2, #0x4]
    sub r0, r3, #0x80000000
    str r0, [r2, #0x0]
    mov r1, #0x80000000
    sub r0, r3, #0x40000000
    str r1, [r2, #0x4]
    str r0, [r2, #0x0]
    mov r0, #0xc0000000
    str r0, [r2, #0x4]
    bl func_0203dea8
    ldr r2, =data_020b8b44
    mov r1, #0x28
    mla r0, r1, r0, r2
    bl func_0203d098
    mov r3, #0x0
    ldr r2, =data_02086dfc
    str r3, [sp, #0x0]
    ldr r1, =data_0206ea14
    ldrsb r2, [r2, #0x0]
    ldr r1, [r1, #0x0]
    mov r0, #0x2
    bl func_02003058
    mov r8, r0
    bl func_0203dea8
    mov r7, r0
    bl func_0203dec8
    mov r6, r0
    bl func_0203deb8
    mov r5, r0
    bl func_0203ded8
    mov r4, r0
    mov r0, r8
    mov r1, r4
    bl func_0203d8d8
    ldr r2, =data_020b8b44
    mov r1, #0x28
    mla ip, r7, r1, r2
    mov r0, r0, asr #0x1
    rsb r0, r0, #0x80
    mov r1, r0, lsl #0x10
    mov r0, r8
    mov r3, r4
    mov r1, r1, lsr #0x10
    mov r2, #0xb0
    stmia sp, {r5, r6, ip}
    bl func_0203d740
    mov r0, #0x0
    mov r1, r0
    bl func_0203cc68
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
