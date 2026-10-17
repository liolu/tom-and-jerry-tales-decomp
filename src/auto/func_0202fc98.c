#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020222b8();
extern void func_0203b96c();
extern void func_0203bc90();
extern void func_0203c1e8();
extern void func_0203cd48();
extern void func_0203cf48();
extern void func_0203cff0();
extern void func_0203d498();
extern char data_020692ec[];
extern char data_0206ce0c[];
extern char data_0206ce30[];
extern char data_0206ce54[];
extern char data_0206ce78[];
extern char data_0206ce9c[];
extern char data_0206ceb8[];
extern char data_0206cee4[];
extern char data_0206dcb8[];
extern char data_0206e698[];
extern char data_02088424[];
extern char data_020b8b44[];
extern char data_020b8be4[];
extern char data_020b8c0c[];
// clang-format off
asm void func_0202fc98(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    ldr lr, [sp, #0x28]
    ldr ip, =data_02088424
    mov r7, r0
    mov r0, #0x0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    str lr, [ip, #0x4]
    bl func_0203b96c
    ldr r1, =data_02088424
    mov r0, r7
    str r5, [r1, #0xc]
    str r4, [r1, #0x8]
    bl func_0203cf48
    mov r2, #0x4000000
    ldr r1, [r2, #0x0]
    orr r3, r0, #0x10
    bic r0, r1, #0x1f00
    orr r1, r0, r3, lsl #0x8
    mov r0, r6
    str r1, [r2, #0x0]
    bl func_0203cf48
    ldr r3, =0x4001000
    ldr r1, =data_0206dcb8
    ldr r2, [r3, #0x0]
    bic r2, r2, #0x1f00
    orr r0, r2, r0, lsl #0x8
    str r0, [r3, #0x0]
    ldr r0, [r3, #0x0]
    bic r0, r0, #0xe000
    str r0, [r3, #0x0]
    ldr r0, [r1, #0x0]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_0202fde8
L_0202fd2c:
    b L_0202fde8
    b L_0202fde8
    b L_0202fd70
    b L_0202fd48
    b L_0202fde8
    b L_0202fd98
    b L_0202fdc0
L_0202fd48:
    ldr r1, =data_020b8b44
    mov r0, #0x28
    mla r4, r7, r0, r1
    ldr r0, =data_0206ce0c
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    b L_0202fe0c
L_0202fd70:
    ldr r1, =data_020b8b44
    mov r0, #0x28
    mla r4, r7, r0, r1
    ldr r0, =data_0206ce30
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    b L_0202fe0c
L_0202fd98:
    ldr r1, =data_020b8b44
    mov r0, #0x28
    mla r4, r7, r0, r1
    ldr r0, =data_0206ce54
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    b L_0202fe0c
L_0202fdc0:
    ldr r1, =data_020b8b44
    mov r0, #0x28
    mla r4, r7, r0, r1
    ldr r0, =data_0206ce78
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    b L_0202fe0c
L_0202fde8:
    ldr r1, =data_020b8b44
    mov r0, #0x28
    mla r4, r7, r0, r1
    ldr r0, =data_0206ce9c
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
L_0202fe0c:
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x2
    bne L_0202fe54
    ldr r0, =data_020b8be4
    bl func_0203cd48
    ldr r0, =data_020b8c0c
    bl func_0203cd48
    mov r0, #0xc
    str r0, [sp, #0x0]
    mov r2, #0x0
    mov r0, r6
    str r2, [sp, #0x4]
    mov r4, #0x3
    mov r1, #0x4
    mov r3, #0x1
    str r4, [sp, #0x8]
    bl func_0203cff0
L_0202fe54:
    ldr r1, =data_020b8b44
    mov r0, #0x28
    mla r4, r6, r0, r1
    ldr r0, =data_0206ceb8
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r3, #0x0
    str r3, [sp, #0x4]
    ldr r0, =data_0206cee4
    ldr r1, =data_0206e698
    str r3, [sp, #0x8]
    mov r4, #0xf
    mov r2, #0x40
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0x40
    mov r1, #0x41
    mov r2, #0x0
    mov r3, #0xc0
    bl func_0203c1e8
    mov r0, #0x40
    mov r1, #0x42
    mov r2, #0x0
    mov r3, #0xc0
    bl func_0203c1e8
    mov r0, #0x0
    mov r1, #0x8
    mov r2, #0x3
    bl func_020222b8
    mov r0, #0x0
    ldr r2, =data_02088424
    mov r3, #0x1
    add r1, r2, #0x2
    swpb r0, r0, [r1]
    add r1, r2, #0x1
    swpb r0, r3, [r1]
    swpb r0, r3, [r2]
    add sp, sp, #0x10
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
