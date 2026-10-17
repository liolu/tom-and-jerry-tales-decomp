#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020015f0();
extern void func_0200160c();
extern void func_02001654();
extern void func_020219d8();
extern void func_020223e8();
extern void func_02030f40();
extern void func_020314d0();
extern void func_020321ec();
extern void func_0203253c();
extern void func_02032bc8();
extern void func_020330b4();
extern void func_02033910();
extern void func_020352dc();
extern void func_0203a294();
extern void func_0203b96c();
extern void func_0203b980();
extern void func_0203cd2c();
extern void func_0203cd5c();
extern void func_0203cf6c();
extern void func_0203cff0();
extern void func_0203d098();
extern void func_0203d498();
extern void func_0203de64();
extern void func_0203de74();
extern void func_0203de84();
extern void func_0203de98();
extern char data_0206cc7c[];
extern char data_0206cc9c[];
extern char data_0206ccb0[];
extern char data_0206e680[];
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_020881e0[];
extern char data_020881f8[];
extern char data_02088234[];
extern char data_020b8b44[];
extern char data_020b8b6c[];
extern char data_020b8b94[];
extern char data_020b8bbc[];
// clang-format off
asm void func_0202d4f0(void) {
    stmfd sp!, {r3, lr}
    sub sp, sp, #0x10
    bl func_0200160c
    mov r0, #0x6
    bl func_02001654
    mov r0, #0x7
    bl func_020219d8
    mov r1, #0x4000000
    ldr r0, [r1, #0x0]
    bic r0, r0, #0x1f00
    orr r0, r0, #0x1100
    str r0, [r1, #0x0]
    ldrh r0, [r1, #0x8]
    bic r0, r0, #0x3
    orr r0, r0, #0x3
    strh r0, [r1, #0x8]
    bl func_020314d0
    bl func_020321ec
    bl func_0203253c
    bl func_0203a294
    bl func_02032bc8
    bl func_020330b4
    mov r0, #0x1
    mov r1, #0x3f
    mov r2, r0
    mov r3, #0x1f
    bl func_020352dc
    ldr r0, =data_0206e6a4
    bl func_02033910
    mov r0, #0x1
    bl func_0203b96c
    mov r0, #0x0
    bl func_0203b980
    mov r0, #0x0
    bl func_0203b96c
    mov r0, #0x0
    bl func_0203b980
    mov r2, #0x1
    ldr r0, =data_020881e0
    add r1, r0, #0x7
    swpb r0, r2, [r1]
    bl func_020015f0
    ldr r0, =data_0206cc7c
    ldr r1, =data_020881f8
    ldr r2, =data_0206e6a4
    ldr r3, =data_0206e698
    bl func_02030f40
    ldr r0, =data_0206cc9c
    ldr r1, =data_0206e680
    ldr r2, =data_0206e6a4
    ldr r3, =data_0206e698
    bl func_02030f40
    bl func_0203cd2c
    mov r0, #0xe
    str r0, [sp, #0x0]
    mov r0, #0x4
    str r0, [sp, #0x4]
    mov r2, #0x0
    str r2, [sp, #0x8]
    str r2, [sp, #0xc]
    mov r0, #0x3
    mov r1, #0x1
    mov r3, r2
    bl func_0203cf6c
    mov r0, #0xc
    str r0, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    mov r1, #0x1
    str r1, [sp, #0x8]
    str r0, [sp, #0xc]
    mov r1, #0x3
    mov r2, r0
    mov r3, r0
    bl func_0203cf6c
    mov r1, #0xd
    mov r0, #0x2
    str r1, [sp, #0x0]
    mov r1, r0
    str r0, [sp, #0x4]
    mov r3, #0x1
    mov r2, #0x0
    str r3, [sp, #0x8]
    bl func_0203cff0
    mov r1, #0xd
    mov r0, #0x1
    str r1, [sp, #0x0]
    mov r1, #0x2
    str r1, [sp, #0x4]
    mov r3, r0
    mov r1, #0x5
    mov r2, #0x0
    str r0, [sp, #0x8]
    bl func_0203cff0
    ldr ip, =data_020b8b94
    ldr r0, =data_0206ccb0
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
    ldr r0, =data_020b8b44
    bl func_0203d098
    ldr r0, =data_020b8bbc
    bl func_0203d098
    ldr r0, =data_020b8b94
    bl func_0203d098
    ldr r0, =data_020b8b6c
    bl func_0203d098
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x28]
    bl func_0203cd5c
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cd5c
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x78]
    bl func_0203cd5c
    mov r0, #0x0
    bl func_0203de64
    ldr r0, =data_020881e0
    ldr r0, [r0, #0x18]
    bl func_0203de98
    mov r0, #0x0
    bl func_0203de84
    mov r0, #0x0
    bl func_0203de74
    ldr r0, =data_02088234
    bl func_020223e8
    add sp, sp, #0x10
    ldmfd sp!, {r3, pc}
}
// clang-format on
