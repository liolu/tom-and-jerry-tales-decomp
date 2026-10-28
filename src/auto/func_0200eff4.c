#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201109c();
extern void func_02011468();
extern void func_02030f40();
extern void func_0203b96c();
extern void func_0203bc90();
extern void func_0203cd5c();
extern void func_0203cf6c();
extern void func_0203cff0();
extern void func_0203d498();
extern void func_0204f490();
extern void OS_InitTick();
extern void OS_SetTick();
extern void OS_Terminate();
extern void sprintf();
extern char data_02063e98[];
extern char data_02063ea8[];
extern char data_02063ecc[];
extern char data_02063ed4[];
extern char data_02063ef4[];
extern char data_02063efc[];
extern char data_02063f08[];
extern char data_020692ec[];
extern char data_0206a994[];
extern char data_0206aa68[];
extern char data_0206aa80[];
extern char data_0206aa9c[];
extern char data_0206aab4[];
extern char data_0206aacc[];
extern char data_0206aae8[];
extern char data_0206ab00[];
extern char data_0206ab20[];
extern char data_0206ab38[];
extern char data_0206ab40[];
extern char data_0206ab5c[];
extern char data_0206ab7c[];
extern char data_0206ab9c[];
extern char data_0206abb8[];
extern char data_0206abd8[];
extern char data_0206abfc[];
extern char data_0206ac20[];
extern char data_0206ac40[];
extern char data_0206e680[];
extern char data_0206e684[];
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_02086fa8[];
extern char data_02086fc0[];
extern char data_02086fc8[];
extern char data_020b8b44[];
extern char data_020b8c0c[];
extern char data_020b8c5c[];
// clang-format off
asm void func_0200eff4(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    ldr r2, =data_02086fa8
    mvn r0, #0x0
    strh r0, [r2, #0x12]
    add r0, r0, #0x10000
    strh r0, [r2, #0x16]
    strh r0, [r2, #0x14]
    add r1, r2, #0xb
    mov r4, #0xff
    swpb r0, r4, [r1]
    add r5, r2, #0x7
    ldr r0, =data_0206aa68
    ldr r1, =data_02086fc8
    ldr r2, =data_0206e6a4
    ldr r3, =data_0206e698
    swpb r4, r4, [r5]
    bl func_02030f40
    ldr r0, =data_0206aa80
    ldr r1, =data_0206e680
    ldr r2, =data_0206e6a4
    ldr r3, =data_0206e698
    bl func_02030f40
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_0200f128
    mov r0, #0x0
    bl func_0203b96c
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r3, #0x0
    str r3, [sp, #0x4]
    ldr r0, =data_0206aa9c
    ldr r1, =data_0206e698
    str r3, [sp, #0x8]
    mov r4, #0x2
    mov r2, #0x10
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r3, #0x0
    str r3, [sp, #0x4]
    str r3, [sp, #0x8]
    ldr r0, =data_0206aab4
    ldr r1, =data_0206e698
    mov r2, #0x11
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r9, #0x0
    ldr r7, =data_0206aacc
    ldr r10, =data_0206e698
    add r8, sp, #0x10
    mov r6, #0xc0
    mov r5, #0x1
    mov r4, r9
L_0200f0d8:
    mov r0, r8
    mov r1, r7
    add r2, r9, #0x1
    bl sprintf
    str r6, [sp, #0x0]
    add r0, r9, #0xc
    str r5, [sp, #0x4]
    mov r2, r0, lsl #0x10
    str r4, [sp, #0x8]
    mov r0, r8
    mov r1, r10
    mov r2, r2, lsr #0x10
    str r5, [sp, #0xc]
    mov r3, r4
    bl func_0203bc90
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    mov r9, r0, asr #0x10
    cmp r9, #0x4
    blt L_0200f0d8
L_0200f128:
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0200f8d8
L_0200f13c:
    b L_0200f8cc
    b L_0200f150
    b L_0200f7c4
    b L_0200f418
    b L_0200f5b8
L_0200f150:
    ldr r4, =data_02086fa8
    mov r2, #0x0
    add r1, r4, #0x2
    swpb r0, r2, [r1]
    add r1, r4, #0x6
    ldr r3, =data_0206a994
    swpb r0, r2, [r1]
    add r1, r3, #0x1
    mov r3, #0x1
    swpb r0, r3, [r1]
    add r1, r4, #0xe
    swpb r0, r2, [r1]
    add r1, r4, #0xf
    swpb r0, r3, [r1]
    ldr r5, =0x4001000
    mov r0, #0xf
    ldr r1, [r5, #0x0]
    mov r4, #0x3
    bic r1, r1, #0x1f00
    orr r1, r1, #0x1000
    str r1, [r5, #0x0]
    str r0, [sp, #0x0]
    mov r0, #0x7
    mov r1, #0x4
    stmib sp, {r2, r4}
    bl func_0203cff0
    ldr r4, =data_020b8c5c
    ldr r0, =data_0206aae8
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x118]
    bl func_0203cd5c
    mov r0, #0x0
    bl func_0203b96c
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r0, #0x3
    stmib sp, {r0, r1}
    str r1, [sp, #0xc]
    ldr r0, =data_0206ab00
    ldr r1, =data_0206e698
    mov r2, #0x35
    mov r3, #0x100
    bl func_0203bc90
    mov r10, #0x0
    ldr r8, =data_0206ab20
    ldr r5, =data_0206e698
    add r9, sp, #0x10
    mov r7, r10
    mov r6, #0x2
    mov r4, #0x100
L_0200f22c:
    mov r0, r9
    mov r1, r8
    mov r2, r10
    bl sprintf
    str r7, [sp, #0x0]
    add r0, r10, #0x28
    mov r2, r0, lsl #0x10
    stmib sp, {r6, r7}
    mov r0, r9
    mov r1, r5
    mov r2, r2, lsr #0x10
    mov r3, r4
    str r7, [sp, #0xc]
    bl func_0203bc90
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    cmp r10, #0xa
    blt L_0200f22c
    mov r0, #0x1
    bl func_0203b96c
    ldr r0, =data_02086fa8
    ldrb r0, [r0, #0x10]
    bl func_02011468
    ldr r0, =data_02063ecc
    mov r6, #0x0
    ldr r10, [r0, #0x4]
    ldr r11, =data_02063ea8
    add r5, sp, #0x10
    mov r4, r6
L_0200f2a4:
    ldrb r0, [r11, r6]
    mov r7, #0x0
    cmp r0, #0x0
    bls L_0200f310
    ldr r0, =data_02063efc
    ldr r8, [r0, r6, lsl #0x2]
    ldr r0, =data_02063f08
    ldr r9, [r0, r6, lsl #0x2]
L_0200f2c4:
    ldr r1, =data_0206ab38
    ldr r3, [r8, r7, lsl #0x2]
    mov r0, r5
    mov r2, r10
    bl func_0204f490
    str r4, [sp, #0x0]
    mov r0, #0x1
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldrb r2, [r9, r7]
    ldr r1, =data_0206e698
    mov r0, r5
    mov r3, #0x100
    bl func_0203bc90
    add r0, r7, #0x1
    and r7, r0, #0xff
    ldrb r0, [r11, r6]
    cmp r7, r0
    blo L_0200f2c4
L_0200f310:
    add r0, r6, #0x1
    and r6, r0, #0xff
    cmp r6, #0x3
    blo L_0200f2a4
    ldr r5, =data_02063e98
    mov r8, #0x0
    add r4, sp, #0x10
    mov r11, #0xc0
L_0200f330:
    ldrb r0, [r5, r8]
    mov r9, #0x0
    cmp r0, #0x0
    bls L_0200f3a0
    ldr r0, =data_02063ef4
    ldr r6, [r0, r8, lsl #0x2]
    ldr r0, =data_02063ed4
    ldr r7, [r0, r8, lsl #0x2]
L_0200f350:
    ldr r1, =data_0206ab38
    ldr r3, [r6, r9, lsl #0x2]
    mov r0, r4
    mov r2, r10
    bl func_0204f490
    str r11, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    str r0, [sp, #0xc]
    ldrb r2, [r7, r9]
    ldr r1, =data_0206e698
    mov r0, r4
    mov r3, #0x100
    bl func_0203bc90
    add r0, r9, #0x1
    and r9, r0, #0xff
    ldrb r0, [r5, r8]
    cmp r9, r0
    blo L_0200f350
L_0200f3a0:
    add r0, r8, #0x1
    and r8, r0, #0xff
    cmp r8, #0x2
    blo L_0200f330
    ldr r2, =data_02086fa8
    mov r1, #0x0
    ldr r0, [r2, #0x2c]
    mov r3, r1
    stmia sp, {r0, r1}
    ldrb r0, [r2, #0x8]
    ldr r2, [r2, #0x24]
    bl func_0201109c
    ldr r2, =0x4001000
    ldr r0, =data_02086fa8
    ldr r1, [r2, #0x0]
    bic r1, r1, #0xe000
    orr r1, r1, #0x2000
    str r1, [r2, #0x0]
    ldrh r1, [r2, #0x48]
    bic r1, r1, #0x3f
    orr r1, r1, #0x10
    strh r1, [r2, #0x48]
    ldrh r1, [r2, #0x4a]
    bic r1, r1, #0x3f
    orr r1, r1, #0x11
    strh r1, [r2, #0x4a]
    ldrb r0, [r0, #0x10]
    bl func_02011468
    add sp, sp, #0x30
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0200f418:
    ldr r2, =0x4001000
    mov r0, #0x1
    ldr r1, [r2, #0x0]
    bic r1, r1, #0x1f00
    orr r1, r1, #0x1000
    str r1, [r2, #0x0]
    bl func_0203b96c
    mov r0, #0xf
    str r0, [sp, #0x0]
    mov r2, #0x0
    str r2, [sp, #0x4]
    mov r4, #0x3
    mov r0, #0x7
    mov r1, #0x4
    mov r3, #0x1
    str r4, [sp, #0x8]
    bl func_0203cff0
    ldr r4, =data_020b8c5c
    ldr r0, =data_0206ab40
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x118]
    bl func_0203cd5c
    mov r10, #0x0
    ldr r8, =data_0206ab5c
    ldr r4, =data_0206e698
    add r9, sp, #0x10
    mov r7, r10
    mov r6, #0x2
    mov r5, #0x1
    mov r11, #0x100
L_0200f4a4:
    mov r0, r9
    mov r1, r8
    add r2, r10, #0x1
    bl sprintf
    str r7, [sp, #0x0]
    mov r1, r10, lsl #0x10
    stmib sp, {r6, r7}
    mov r2, r1, lsr #0x10
    mov r0, r9
    mov r1, r4
    mov r3, r11
    str r5, [sp, #0xc]
    bl func_0203bc90
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    cmp r10, #0x4
    blt L_0200f4a4
    mov r0, #0x0
    bl func_0203b96c
    mov r2, #0x0
    str r2, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    ldr r0, =data_0206ab7c
    ldr r1, =data_0206e698
    str r2, [sp, #0x8]
    mov r4, #0x2
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r4, #0x0
    str r4, [sp, #0x0]
    mov r0, #0x3
    stmib sp, {r0, r4}
    ldr r0, =data_0206ab00
    ldr r1, =data_0206e698
    mov r2, #0x35
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    ldr r8, =data_0206ab20
    ldr r5, =data_0206e698
    mov r10, r4
    mov r7, r4
    add r9, sp, #0x10
    mov r6, #0x2
    mov r4, #0x100
L_0200f564:
    mov r0, r9
    mov r1, r8
    mov r2, r10
    bl sprintf
    str r7, [sp, #0x0]
    add r0, r10, #0x28
    mov r2, r0, lsl #0x10
    stmib sp, {r6, r7}
    mov r0, r9
    mov r1, r5
    mov r2, r2, lsr #0x10
    mov r3, r4
    str r7, [sp, #0xc]
    bl func_0203bc90
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    cmp r10, #0xa
    blt L_0200f564
    add sp, sp, #0x30
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0200f5b8:
    ldr r2, =0x4001000
    mov r0, #0x1
    ldr r1, [r2, #0x0]
    bic r1, r1, #0x1f00
    orr r1, r1, #0x1000
    str r1, [r2, #0x0]
    bl func_0203b96c
    mov r0, #0xf
    str r0, [sp, #0x0]
    mov r2, #0x0
    str r2, [sp, #0x4]
    mov r4, #0x3
    mov r0, #0x7
    mov r1, #0x4
    mov r3, #0x1
    str r4, [sp, #0x8]
    bl func_0203cff0
    ldr r4, =data_020b8c5c
    ldr r0, =data_0206ab9c
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x118]
    bl func_0203cd5c
    mov r10, #0x0
    mov r7, #0x1
    ldr r11, =data_0206abb8
    ldr r6, =data_0206e698
    add r9, sp, #0x10
    mov r8, r10
    mov r5, r10
    mov r4, r7
L_0200f644:
    mov r0, r9
    mov r1, r11
    add r2, r10, #0x1
    bl sprintf
    str r8, [sp, #0x0]
    str r8, [sp, #0x4]
    str r8, [sp, #0x8]
    mov r2, r10, lsl #0x10
    str r7, [sp, #0xc]
    mov r0, r9
    mov r1, r6
    mov r2, r2, lsr #0x10
    mov r3, #0x100
    bl func_0203bc90
    str r5, [sp, #0x0]
    add r2, r10, #0x6
    str r5, [sp, #0x4]
    mov r2, r2, lsl #0x10
    str r5, [sp, #0x8]
    mov r0, r9
    mov r1, r6
    mov r2, r2, lsr #0x10
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    cmp r10, #0x6
    blt L_0200f644
    ldr r2, =0x4001000
    mov r0, #0x0
    ldr r1, [r2, #0x0]
    bic r1, r1, #0xe000
    orr r1, r1, #0x6000
    str r1, [r2, #0x0]
    ldrh r1, [r2, #0x48]
    bic r1, r1, #0x3f
    orr r1, r1, #0x10
    strh r1, [r2, #0x48]
    ldrh r1, [r2, #0x4a]
    bic r1, r1, #0x3f
    orr r1, r1, #0x11
    strh r1, [r2, #0x4a]
    ldrh r1, [r2, #0x48]
    bic r1, r1, #0x3f00
    orr r1, r1, #0x1000
    strh r1, [r2, #0x48]
    bl func_0203b96c
    mov r4, #0x0
    str r4, [sp, #0x0]
    mov r0, #0x3
    stmib sp, {r0, r4}
    ldr r0, =data_0206abd8
    ldr r1, =data_0206e698
    mov r2, #0x14
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    str r4, [sp, #0x0]
    mov r0, #0x3
    stmib sp, {r0, r4}
    ldr r0, =data_0206abfc
    ldr r1, =data_0206e698
    mov r2, #0x15
    mov r3, #0x100
    str r4, [sp, #0xc]
    bl func_0203bc90
    ldr r8, =data_0206ab20
    ldr r5, =data_0206e698
    mov r10, r4
    mov r7, r4
    add r9, sp, #0x10
    mov r6, #0x2
    mov r4, #0x100
L_0200f770:
    mov r0, r9
    mov r1, r8
    mov r2, r10
    bl sprintf
    str r7, [sp, #0x0]
    add r0, r10, #0x16
    mov r2, r0, lsl #0x10
    stmib sp, {r6, r7}
    mov r0, r9
    mov r1, r5
    mov r2, r2, lsr #0x10
    mov r3, r4
    str r7, [sp, #0xc]
    bl func_0203bc90
    add r0, r10, #0x1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    cmp r10, #0xa
    blt L_0200f770
    add sp, sp, #0x30
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0200f7c4:
    ldr r0, =data_02086fa8
    mov r1, #0x1
    str r1, [r0, #0x1c]
    add r1, r0, #0x4
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r5, =0x4001000
    ldr r0, =data_0206ac20
    ldr r2, [r5, #0x0]
    ldr r1, =data_02086fc0
    bic r2, r2, #0x1f00
    orr r2, r2, #0x300
    str r2, [r5, #0x0]
    ldr r3, [r5, #0x0]
    ldr r2, =data_0206e6a4
    bic r4, r3, #0xe000
    ldr r3, =data_0206e698
    str r4, [r5, #0x0]
    bl func_02030f40
    mov r2, #0x0
    mov r0, #0xc
    stmia sp, {r0, r2}
    str r2, [sp, #0x8]
    mov r3, r2
    mov r0, #0x4
    mov r1, #0x5
    str r2, [sp, #0xc]
    bl func_0203cf6c
    mov r0, #0xe
    str r0, [sp, #0x0]
    mov r0, #0x2
    str r0, [sp, #0x4]
    mov r4, #0x3
    mov r0, #0x5
    mov r1, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x8]
    bl func_0203cff0
    ldr r1, =data_020b8c0c
    ldr r0, =data_0206ac40
    str r1, [sp, #0x0]
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    bl func_0203d498
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0xa0]
    bl func_0203cd5c
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0xc8]
    bl func_0203cd5c
    ldr r0, =data_02086fa8
    mov r1, #0x0
    str r1, [r0, #0x44]
    str r1, [r0, #0x48]
    bl OS_InitTick
    mov r0, #0x0
    mov r1, r0
    bl OS_SetTick
    ldr r0, =data_02086fa8
    mov r2, #0x0
    add r1, r0, #0x4
    swpb r0, r2, [r1]
    add sp, sp, #0x30
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0200f8cc:
    bl OS_Terminate
    add sp, sp, #0x30
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0200f8d8:
    bl OS_Terminate
    add sp, sp, #0x30
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
