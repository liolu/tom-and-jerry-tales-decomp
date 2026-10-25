#include "m2c.h"

void func_020163b0(void);
void func_020169f8(void);
void func_02016a4c(void);
void func_02022b60(void);
void func_020306fc(void);
void func_0203d740(void);
void func_0203d8d8(void);
void func_0204221c(void);
void func_0205bdf4(void);
extern char data_0206cdbc[];
extern char data_0206cdcc[];
extern char data_0206cddc[];
extern char data_0206dcb8[];
extern char data_020881e0[];
extern char data_020b8b44[];
// clang-format off
asm void func_0202f5e8(void) {
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x24
    mov r6, r1
    mov r4, r0
    bl func_020163b0
    mov r5, r0
    cmp r6, #0x4
    addls pc, pc, r6, lsl #0x2
    b @17
    b @17
    b @1
    b @5
    b @8
    b @12
@1
    mov r0, r4
    mov r1, #0x1
    bl func_02022b60
    ldrb r6, [r4, #0x28]
    mov r0, r5, asr r6
    tst r0, #0x1
    beq @4
    add r1, sp, #0xc
    mov r0, r6
    bl func_02016a4c
    ldrb r0, [r4, #0x28]
    add r1, sp, #0xe
    bl func_020169f8
    ldr r0, =data_0206dcb8
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    add r0, sp, #0x17
    bne @2
    ldrb r2, [sp, #0xe]
    ldr r1, =data_0206cdbc
    str r2, [sp, #0x0]
    ldrb r2, [sp, #0xf]
    ldrb r3, [sp, #0x10]
    bl func_0205bdf4
    b @3
@2
    ldrb r2, [sp, #0xe]
    ldr r1, =data_0206cdcc
    str r2, [sp, #0x0]
    ldrb r2, [sp, #0x10]
    ldrb r3, [sp, #0xf]
    bl func_0205bdf4
@3
    ldrb r2, [sp, #0xc]
    ldrb r3, [sp, #0xd]
    ldr r1, =data_0206cddc
    add r0, sp, #0x11
    bl func_0205bdf4
    ldr r1, =data_020881e0
    ldrb r2, [r4, #0x28]
    mov r0, #0x38
    ldr r6, [r1, #0x18]
    smulbb r0, r2, r0
    add r0, r0, #0x14
    mov r2, r0, lsl #0x10
    add r0, sp, #0x17
    mov r1, r6
    mov r5, r2, lsr #0x10
    bl func_0203d8d8
    rsb r1, r0, #0x8a
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0x3
    mov r1, r1, lsl #0x10
    str r0, [sp, #0x4]
    ldr r2, =data_020b8b44
    add r0, sp, #0x17
    str r2, [sp, #0x8]
    mov r2, r5
    mov r3, r6
    mov r1, r1, lsr #0x10
    bl func_0203d740
    ldr r0, =data_020881e0
    ldrb r1, [r4, #0x28]
    ldr r5, [r0, #0x18]
    mov r0, #0x38
    smulbb r0, r1, r0
    add r0, r0, #0x23
    mov r0, r0, lsl #0x10
    mov r4, r0, lsr #0x10
    add r0, sp, #0x11
    mov r1, r5
    bl func_0203d8d8
    rsb r0, r0, #0x8a
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x0
    mov r2, r4
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    ldr r4, =data_020b8b44
    mov r3, r5
    add r0, sp, #0x11
    str r4, [sp, #0x8]
    bl func_0203d740
    b @17
@4
    ldr r1, =data_020881e0
    mov r0, #0x46
    ldr r5, [r1, #0x18]
    bl func_0204221c
    mov r1, r5
    mov r4, r0
    bl func_0203d8d8
    mov r1, #0x38
    rsb r2, r0, #0x8a
    mul r0, r6, r1
    add r0, r0, #0x1b
    mov r3, #0x0
    mov r1, r2, lsl #0x10
    mov r2, r0, lsl #0x10
    str r3, [sp, #0x0]
    mov r0, #0x3
    ldr r6, =data_020b8b44
    str r0, [sp, #0x4]
    mov r0, r4
    mov r3, r5
    mov r1, r1, lsr #0x10
    mov r2, r2, lsr #0x10
    str r6, [sp, #0x8]
    bl func_0203d740
    b @17
@5
    ldr r0, [r4, #0x1c]
    ldrb r1, [r4, #0x28]
    add r2, r0, #0x2
    mov r0, #0x0
    swpb r1, r1, [r2]
    bl func_020306fc
    cmp r0, #0x0
    ldrneb r1, [r4, #0x28]
    ldrne r0, [r4, #0x1c]
    strne r1, [r0, #0x4]
    ldr r2, [r4, #0x1c]
    ldrb r0, [r4, #0x28]
    ldr r1, [r2, #0x4]
    cmp r1, r0
    bne @6
    mov r0, r4
    mov r1, #0x0
    bl func_02022b60
    ldr r0, [r4, #0x24]
    add sp, sp, #0x24
    orr r0, r0, #0x3000000
    ldmia sp!, {r4, r5, r6, r7, pc}
@6
    ldrb r0, [r2, #0x9]
    cmp r1, r0
    bhs @7
    add r0, r2, r1, lsl #0x2
    ldr r0, [r0, #0xc]
    ldr r2, [r4, #0x20]
    mov r1, #0x4
    blx r2
@7
    ldrb r2, [r4, #0x28]
    ldr r1, [r4, #0x1c]
    mov r0, r4
    str r2, [r1, #0x4]
    mov r1, #0x0
    bl func_02022b60
    ldr r0, [r4, #0x24]
    add sp, sp, #0x24
    orr r0, r0, #0x1000000
    ldmia sp!, {r4, r5, r6, r7, pc}
@8
    mov r0, r4
    mov r1, #0x1
    bl func_02022b60
    ldrb r6, [r4, #0x28]
    mov r0, r5, asr r6
    tst r0, #0x1
    beq @11
    add r1, sp, #0xc
    mov r0, r6
    bl func_02016a4c
    ldrb r0, [r4, #0x28]
    add r1, sp, #0xe
    bl func_020169f8
    ldr r0, =data_0206dcb8
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    add r0, sp, #0x17
    bne @9
    ldrb r2, [sp, #0xe]
    ldr r1, =data_0206cdbc
    str r2, [sp, #0x0]
    ldrb r2, [sp, #0xf]
    ldrb r3, [sp, #0x10]
    bl func_0205bdf4
    b @10
@9
    ldrb r2, [sp, #0xe]
    ldr r1, =data_0206cdcc
    str r2, [sp, #0x0]
    ldrb r2, [sp, #0x10]
    ldrb r3, [sp, #0xf]
    bl func_0205bdf4
@10
    ldrb r2, [sp, #0xc]
    ldrb r3, [sp, #0xd]
    ldr r1, =data_0206cddc
    add r0, sp, #0x11
    bl func_0205bdf4
    ldr r1, =data_020881e0
    ldrb r2, [r4, #0x28]
    mov r0, #0x38
    ldr r6, [r1, #0x18]
    smulbb r0, r2, r0
    add r0, r0, #0x14
    mov r2, r0, lsl #0x10
    add r0, sp, #0x17
    mov r1, r6
    mov r5, r2, lsr #0x10
    bl func_0203d8d8
    rsb r1, r0, #0x8a
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0x3
    mov r1, r1, lsl #0x10
    str r0, [sp, #0x4]
    ldr r2, =data_020b8b44
    add r0, sp, #0x17
    str r2, [sp, #0x8]
    mov r2, r5
    mov r3, r6
    mov r1, r1, lsr #0x10
    bl func_0203d740
    ldr r0, =data_020881e0
    ldrb r1, [r4, #0x28]
    ldr r5, [r0, #0x18]
    mov r0, #0x38
    smulbb r0, r1, r0
    add r0, r0, #0x23
    mov r0, r0, lsl #0x10
    mov r4, r0, lsr #0x10
    add r0, sp, #0x11
    mov r1, r5
    bl func_0203d8d8
    rsb r0, r0, #0x8a
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x0
    mov r2, r4
    str r0, [sp, #0x0]
    mov r0, #0x3
    str r0, [sp, #0x4]
    ldr r4, =data_020b8b44
    mov r3, r5
    add r0, sp, #0x11
    str r4, [sp, #0x8]
    bl func_0203d740
    b @17
@11
    ldr r1, =data_020881e0
    mov r0, #0x46
    ldr r5, [r1, #0x18]
    bl func_0204221c
    mov r1, r5
    mov r4, r0
    bl func_0203d8d8
    mov r1, #0x38
    rsb r2, r0, #0x8a
    mul r0, r6, r1
    add r0, r0, #0x1b
    mov r3, #0x0
    mov r1, r2, lsl #0x10
    mov r2, r0, lsl #0x10
    str r3, [sp, #0x0]
    mov r0, #0x3
    ldr r6, =data_020b8b44
    str r0, [sp, #0x4]
    mov r0, r4
    mov r3, r5
    mov r1, r1, lsr #0x10
    mov r2, r2, lsr #0x10
    str r6, [sp, #0x8]
    bl func_0203d740
    b @17
@12
    ldrb r7, [r4, #0x28]
    mov r0, r5, asr r7
    tst r0, #0x1
    beq @15
    add r1, sp, #0xc
    mov r0, r7
    bl func_02016a4c
    ldrb r0, [r4, #0x28]
    add r1, sp, #0xe
    bl func_020169f8
    ldr r0, =data_0206dcb8
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    add r0, sp, #0x17
    bne @13
    ldrb r2, [sp, #0xe]
    ldr r1, =data_0206cdbc
    str r2, [sp, #0x0]
    ldrb r2, [sp, #0xf]
    ldrb r3, [sp, #0x10]
    bl func_0205bdf4
    b @14
@13
    ldrb r2, [sp, #0xe]
    ldr r1, =data_0206cdcc
    str r2, [sp, #0x0]
    ldrb r2, [sp, #0x10]
    ldrb r3, [sp, #0xf]
    bl func_0205bdf4
@14
    ldrb r2, [sp, #0xc]
    ldrb r3, [sp, #0xd]
    ldr r1, =data_0206cddc
    add r0, sp, #0x11
    bl func_0205bdf4
    ldr r1, =data_020881e0
    ldrb r2, [r4, #0x28]
    mov r0, #0x38
    ldr r5, [r1, #0x18]
    smulbb r0, r2, r0
    add r0, r0, #0x14
    mov r2, r0, lsl #0x10
    add r0, sp, #0x17
    mov r1, r5
    mov r6, r2, lsr #0x10
    bl func_0203d8d8
    rsb r1, r0, #0x8a
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r1, r1, lsl #0x10
    str r0, [sp, #0x4]
    ldr r2, =data_020b8b44
    add r0, sp, #0x17
    str r2, [sp, #0x8]
    mov r2, r6
    mov r3, r5
    mov r1, r1, lsr #0x10
    bl func_0203d740
    ldr r0, =data_020881e0
    ldrb r1, [r4, #0x28]
    ldr r5, [r0, #0x18]
    mov r0, #0x38
    smulbb r0, r1, r0
    add r0, r0, #0x23
    mov r0, r0, lsl #0x10
    mov r6, r0, lsr #0x10
    add r0, sp, #0x11
    mov r1, r5
    bl func_0203d8d8
    rsb r0, r0, #0x8a
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x0
    mov r3, r5
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r5, =data_020b8b44
    mov r2, r6
    add r0, sp, #0x11
    str r5, [sp, #0x8]
    bl func_0203d740
    b @16
@15
    ldr r1, =data_020881e0
    mov r0, #0x46
    ldr r6, [r1, #0x18]
    bl func_0204221c
    mov r1, r6
    mov r5, r0
    bl func_0203d8d8
    mov r1, #0x38
    rsb r2, r0, #0x8a
    mul r0, r7, r1
    add r0, r0, #0x1b
    mov r3, #0x0
    str r3, [sp, #0x0]
    mov r1, r2, lsl #0x10
    mov r2, r0, lsl #0x10
    ldr r7, =data_020b8b44
    str r3, [sp, #0x4]
    mov r0, r5
    mov r3, r6
    mov r1, r1, lsr #0x10
    mov r2, r2, lsr #0x10
    str r7, [sp, #0x8]
    bl func_0203d740
@16
    ldrb r3, [r4, #0x28]
    ldr r2, [r4, #0x1c]
    mov r0, r4
    mov r1, #0x0
    str r3, [r2, #0x4]
    bl func_02022b60
@17
    mov r0, #0x0
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
