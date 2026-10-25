#include "m2c.h"

void func_0203ff1c(void);
void func_0203ff6c(void);
void func_02040124(void);
void func_02040228(void);
extern char data_02063df0[];
extern char data_02063e08[];
extern char data_02063e2c[];
extern char data_02063e44[];
extern char data_02063e74[];
extern char data_02064024[];
extern char data_0206403c[];
extern char data_02064054[];
extern char data_0206406c[];
extern char data_020640a0[];
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_02086d00[];
// clang-format off
asm void func_0200a3b8(void) {
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_02040228
    ldmia r5, {r0, r4}
    cmp r0, #0x2
    bne @13
    ldrsb r0, [r4, #0x0]
    cmp r0, #0x30
    bne @9
    ldr r1, =data_0206e6a4
    ldr r0, =data_0206e698
    ldr r3, [r1, #0x0]
    ldr r2, [r0, #0x0]
    str r3, [r1, #0x4]
    str r2, [r0, #0x4]
    ldrsb r0, [r4, #0x1]
    cmp r0, #0x30
    bne @1
    ldr r0, =data_02063e08
    bl func_0203ff6c
    ldr r3, =data_02086d00
    add r2, r4, #0x2
    mov r1, #0x2
    str r0, [r3, #0x4]
    bl func_0203ff1c
    b @13
@1
    cmp r0, #0x31
    bne @2
    ldr r0, =data_02063e2c
    bl func_0203ff6c
    ldr r3, =data_02086d00
    add r2, r4, #0x2
    mov r1, #0x2
    str r0, [r3, #0x4]
    bl func_0203ff1c
    b @13
@2
    cmp r0, #0x32
    bne @3
    ldr r0, =data_02063e74
    bl func_0203ff6c
    ldr r3, =data_02086d00
    add r2, r4, #0x2
    mov r1, #0x2
    str r0, [r3, #0x4]
    bl func_0203ff1c
    b @13
@3
    cmp r0, #0x34
    bne @4
    ldr r0, =data_0206403c
    bl func_0203ff6c
    ldr r3, =data_02086d00
    add r2, r4, #0x2
    mov r1, #0x2
    str r0, [r3, #0x4]
    bl func_0203ff1c
    b @13
@4
    cmp r0, #0x35
    bne @5
    ldr r0, =data_0206406c
    bl func_0203ff6c
    ldr r3, =data_02086d00
    add r2, r4, #0x2
    mov r1, #0x2
    str r0, [r3, #0x4]
    bl func_0203ff1c
    b @13
@5
    cmp r0, #0x36
    bne @6
    ldr r0, =data_02063df0
    bl func_0203ff6c
    ldr r3, =data_02086d00
    add r2, r4, #0x2
    mov r1, #0x2
    str r0, [r3, #0x4]
    bl func_0203ff1c
    b @13
@6
    cmp r0, #0x37
    bne @7
    ldr r0, =data_02064054
    bl func_0203ff6c
    add r2, r4, #0x2
    mov r1, #0x2
    bl func_0203ff1c
    b @13
@7
    cmp r0, #0x38
    bne @8
    ldr r0, =data_02064024
    bl func_0203ff6c
    add r2, r4, #0x2
    mov r1, #0x2
    bl func_0203ff1c
    b @13
@8
    cmp r0, #0x39
    bne @13
    ldr r0, =data_020640a0
    bl func_0203ff6c
    add r2, r4, #0x2
    mov r1, #0x2
    bl func_0203ff1c
    b @13
@9
    cmp r0, #0x31
    bne @10
    ldr r2, =data_0206e6a4
    ldr r1, =data_0206e698
    ldr r4, [r2, #0x0]
    ldr r3, [r1, #0x0]
    ldr r0, =data_02063e44
    str r4, [r2, #0x4]
    str r3, [r1, #0x4]
    bl func_0203ff6c
    b @13
@10
    cmp r0, #0x32
    bne @11
    ldr r1, =data_02086d00
    mov r0, #0x4
    swpb r0, r0, [r1]
    b @13
@11
    cmp r0, #0x33
    bne @12
    ldr r1, =data_02086d00
    mov r0, #0x5
    swpb r0, r0, [r1]
    b @13
@12
    cmp r0, #0x34
    ldreq r1, =data_02086d00
    moveq r0, #0x6
    swpeqb r0, r0, [r1]
@13
    mov r0, r5
    bl func_02040124
    ldmia sp!, {r3, r4, r5, pc}
}
// clang-format on
