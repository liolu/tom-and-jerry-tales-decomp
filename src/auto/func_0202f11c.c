#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a0f8();
extern void func_020168f8();
extern void func_0202274c();
extern void func_02022be4();
extern void func_0202e838();
extern void func_0202fc08();
extern void func_0203b96c();
extern void func_0203c24c();
extern void func_0203d0d8();
extern void func_0203d740();
extern void func_0203d8d8();
extern void func_0203fa64();
extern void func_0204221c();
extern char data_020881e0[];
extern char data_02088200[];
extern char data_02088274[];
extern char data_020b8b44[];
extern char data_020b8bbc[];
// clang-format off
asm void func_0202f11c(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    ldr r0, =data_020881e0
    ldrb r0, [r0, #0xb]
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_0202f5cc
L_0202f138:
    b L_0202f5cc
    b L_0202f150
    b L_0202f5cc
    b L_0202f2dc
    b L_0202f47c
    b L_0202f4bc
L_0202f150:
    mov r0, #0x0
    bl func_0203b96c
    ldr r4, =data_020881e0
    ldrb r0, [r4, #0x5]
    cmp r0, #0x20
    bls L_0202f248
    sub r0, r0, #0x8
    add r1, r4, #0x5
    swpb r0, r0, [r1]
    add r1, r4, #0x6
    ldrb r0, [r4, #0x6]
    add r2, r4, #0x11
    sub r0, r0, #0x8
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x11]
    sub r0, r0, #0x8
    swpb r0, r0, [r2]
    ldrb r2, [r4, #0x5]
    cmp r2, #0x80
    bhs L_0202f1cc
    ldrb r0, [r4, #0x12]
    add r1, r4, #0x12
    add r3, r4, #0x2
    sub r0, r0, #0x8
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x0]
    sub r0, r0, #0x8
    swpb r0, r0, [r4]
    ldrb r0, [r4, #0x2]
    sub r0, r0, #0x8
    swpb r0, r0, [r3]
L_0202f1cc:
    ldr r1, =data_020881e0
    mov r0, #0x7
    ldrb r1, [r1, #0x3]
    bl func_0203c24c
    ldr r2, =data_020881e0
    mov r0, #0x8
    ldrb r1, [r2, #0xc]
    ldrb r2, [r2, #0x6]
    bl func_0203c24c
    ldr r2, =data_020881e0
    mov r0, #0x9
    ldrb r1, [r2, #0xd]
    ldrb r2, [r2, #0x11]
    bl func_0203c24c
    ldr r2, =data_020881e0
    mov r0, #0xa
    ldrb r1, [r2, #0xe]
    ldrb r2, [r2, #0x12]
    bl func_0203c24c
    ldr r2, =data_020881e0
    mov r0, #0xb
    ldrb r1, [r2, #0xf]
    ldrb r2, [r2, #0x0]
    bl func_0203c24c
    ldr r2, =data_020881e0
    mov r0, #0xc
    ldrb r1, [r2, #0x10]
    ldrb r2, [r2, #0x2]
    bl func_0203c24c
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0202f248:
    mov r0, #0x16
    bl func_0200a0f8
    mov r2, r4
    mov r0, #0x3
    add r1, r2, #0xb
    swpb r0, r0, [r1]
    ldr r5, [r2, #0x18]
    mov r0, #0x80
    bl func_0204221c
    mov r1, r5
    bl func_0203d8d8
    mov r0, r0, asr #0x1
    rsb r0, r0, #0x7f
    mov r1, r0, lsl #0x10
    mov r0, #0x80
    mov r4, r1, lsr #0x10
    bl func_0204221c
    mov r2, #0x0
    mov r1, r4
    str r2, [sp, #0x0]
    str r2, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r3, r5
    mov r2, #0x3c
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r3, =data_020881e0
    mov r1, #0x1
    add r2, r3, #0x22
    swpb r0, r1, [r2]
    ldr r0, [r3, #0x30]
    bl func_0202fc08
    ldr r0, =data_02088200
    mov r1, #0x3
    bl func_02022be4
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0202f2dc:
    ldr r0, =data_02088200
    mov r1, #0x0
    mov r2, #0x1
    bl func_0202274c
    tst r0, #0x1000000
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    and r0, r0, #0xff
    cmp r0, #0x1
    beq L_0202f30c
    cmp r0, #0x2
    b L_0202f464
L_0202f30c:
    ldr r0, =data_020881e0
    ldr r1, =data_02088274
    ldrb r0, [r0, #0x8a]
    ldr r0, [r1, r0, lsl #0x2]
    ldr r0, [r0, #0x24]
    cmp r0, #0x1
    beq L_0202f33c
    cmp r0, #0x2
    beq L_0202f35c
    cmp r0, #0x3
    beq L_0202f37c
    b L_0202f398
L_0202f33c:
    mov r0, #0x0
    bl func_020168f8
    mvn r1, #0x0
    cmp r0, r1
    bne L_0202f398
    mov r0, r1
    bl func_0202e838
    b L_0202f398
L_0202f35c:
    mov r0, #0x1
    bl func_020168f8
    mvn r1, #0x0
    cmp r0, r1
    bne L_0202f398
    mov r0, r1
    bl func_0202e838
    b L_0202f398
L_0202f37c:
    mov r0, #0x2
    bl func_020168f8
    mvn r1, #0x0
    cmp r0, r1
    bne L_0202f398
    mov r0, r1
    bl func_0202e838
L_0202f398:
    mov r0, #0x52
    bl func_0203fa64
    mov r0, #0x1
    bl func_0203b96c
    ldr r0, =data_020881e0
    mov r1, #0x100
    ldrb r0, [r0, #0x8a]
    mov r2, #0x0
    bl func_0203c24c
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r1, =data_020b8b44
    str r0, [sp, #0x4]
    ldr r0, =data_020881e0
    str r1, [sp, #0x8]
    ldrb r2, [r0, #0x8a]
    mov r1, #0x38
    mov r0, #0x3c
    smulbb r1, r2, r1
    add r1, r1, #0x14
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r2, #0x5d
    mov r3, #0x28
    bl func_0203d0d8
    ldr r0, =data_020881e0
    mov r1, #0x38
    ldr r4, [r0, #0x18]
    ldrb r2, [r0, #0x8a]
    mov r0, #0x46
    smulbb r1, r2, r1
    add r1, r1, #0x1b
    mov r1, r1, lsl #0x10
    mov r6, r1, lsr #0x10
    bl func_0204221c
    mov r5, r0
    mov r1, r4
    bl func_0203d8d8
    mov r2, r6
    mov r3, r4
    rsb r0, r0, #0x8a
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r5
    mov r4, #0x0
    str r4, [sp, #0x0]
    mov r4, #0x3
    str r4, [sp, #0x4]
    ldr r4, =data_020b8b44
    str r4, [sp, #0x8]
    bl func_0203d740
L_0202f464:
    ldr r0, =data_020881e0
    mov r2, #0x4
    add r1, r0, #0xb
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0202f47c:
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r0, #0x20
    str r1, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r1, r0
    mov r2, #0xc0
    mov r3, #0x80
    str r4, [sp, #0x8]
    bl func_0203d0d8
    ldr r0, =data_020881e0
    mov r2, #0x5
    add r1, r0, #0xb
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0202f4bc:
    mov r0, #0x0
    bl func_0203b96c
    ldr r3, =data_020881e0
    ldrb r0, [r3, #0x5]
    cmp r0, #0xc0
    bhs L_0202f5b4
    add r0, r0, #0x8
    add r1, r3, #0x5
    swpb r0, r0, [r1]
    add r1, r3, #0x6
    ldrb r0, [r3, #0x6]
    add r2, r3, #0x11
    add r0, r0, #0x8
    swpb r0, r0, [r1]
    ldrb r0, [r3, #0x11]
    add r0, r0, #0x8
    swpb r0, r0, [r2]
    ldrb r0, [r3, #0x12]
    cmp r0, #0xc0
    bhs L_0202f534
    add r0, r0, #0x8
    add r1, r3, #0x12
    swpb r0, r0, [r1]
    add r1, r3, #0x2
    ldrb r0, [r3, #0x0]
    add r0, r0, #0x8
    swpb r0, r0, [r3]
    ldrb r0, [r3, #0x2]
    add r0, r0, #0x8
    swpb r0, r0, [r1]
L_0202f534:
    ldr r2, =data_020881e0
    mov r0, #0x7
    ldrb r1, [r2, #0x3]
    ldrb r2, [r2, #0x5]
    bl func_0203c24c
    ldr r2, =data_020881e0
    mov r0, #0x8
    ldrb r1, [r2, #0xc]
    ldrb r2, [r2, #0x6]
    bl func_0203c24c
    ldr r2, =data_020881e0
    mov r0, #0x9
    ldrb r1, [r2, #0xd]
    ldrb r2, [r2, #0x11]
    bl func_0203c24c
    ldr r2, =data_020881e0
    mov r0, #0xa
    ldrb r1, [r2, #0xe]
    ldrb r2, [r2, #0x12]
    bl func_0203c24c
    ldr r2, =data_020881e0
    mov r0, #0xb
    ldrb r1, [r2, #0xf]
    ldrb r2, [r2, #0x0]
    bl func_0203c24c
    ldr r2, =data_020881e0
    mov r0, #0xc
    ldrb r1, [r2, #0x10]
    ldrb r2, [r2, #0x2]
    bl func_0203c24c
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0202f5b4:
    add r1, r3, #0xb
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r3, #0xa
    mov r0, #0x3
    swpb r0, r0, [r1]
L_0202f5cc:
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
