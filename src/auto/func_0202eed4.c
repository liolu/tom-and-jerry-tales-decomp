#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a0f8();
extern void func_0201631c();
extern void func_020163b0();
extern void func_020163d4();
extern void func_0202274c();
extern void func_02030878();
extern void func_02030898();
extern void func_0203d098();
extern void func_0203fa64();
extern void func_0204398c();
extern void func_02043ab0();
extern void func_02043fd0();
extern void func_02045d74();
extern void func_02056ab0();
extern void func_02056b98();
extern void func_0205bdf4();
extern char data_0206cde8[];
extern char data_0206cdf4[];
extern char data_0206ce00[];
extern char data_0206e6d4[];
extern char data_020881e0[];
extern char data_02088268[];
extern char data_02088404[];
extern char data_020b8b44[];
// clang-format off
asm void func_0202eed4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x24
    ldr r0, =data_02088268
    mov r1, #0x0
    mov r2, #0x1
    bl func_0202274c
    mov r5, r0
    bl func_020163b0
    mov r4, r0
    bl func_02030878
    cmp r0, #0x0
    beq L_0202ef64
    add r0, sp, #0x4
    add r1, sp, #0x0
    bl func_02030898
    ldr r0, =data_020881e0
    ldr r2, [sp, #0x4]
    ldrb r1, [r0, #0x9]
    rsb r1, r1, #0xf5
    cmp r2, r1
    ldrhi r1, [sp, #0x0]
    cmphi r1, #0x89
    bls L_0202ef64
    ldrb r0, [r0, #0x8a]
    mov r0, r4, asr r0
    tst r0, #0x1
    beq L_0202ef64
    mov r0, #0x14
    bl func_0200a0f8
    ldr r2, =data_020881e0
    mov r0, #0x4
    add r1, r2, #0xa
    swpb r0, r0, [r1]
    add r1, r2, #0xb
    mov r0, #0x1
    swpb r0, r0, [r1]
L_0202ef64:
    and r0, r5, #0x3000000
    cmp r0, #0x3000000
    bne L_0202f0d8
    and r4, r5, #0xff
    ldr r1, =data_0206e6d4
    sub r0, r4, #0x1
    swpb r0, r0, [r1]
    bl func_0201631c
    bl func_02056ab0
    add r0, sp, #0x14
    add r1, sp, #0x8
    bl func_02056b98
    cmp r0, #0x0
    bne L_0202efe0
    ldr r2, =data_0206e6d4
    ldr r0, [sp, #0x1c]
    add r1, r2, #0x1b
    swpb r0, r0, [r1]
    ldr r0, [sp, #0x18]
    add r1, r2, #0x1a
    swpb r0, r0, [r1]
    ldr r0, [sp, #0x14]
    add r1, r2, #0x19
    swpb r0, r0, [r1]
    ldr r0, [sp, #0x8]
    add r1, r2, #0x1c
    swpb r0, r0, [r1]
    ldr r0, [sp, #0xc]
    add r1, r2, #0x1d
    swpb r0, r0, [r1]
    bl func_020163d4
L_0202efe0:
    cmp r4, #0x1
    bne L_0202f030
    ldr r0, =data_02088404
    bl func_02045d74
    ldr r0, =data_02088404
    ldr r1, =data_0206cde8
    bl func_0205bdf4
    ldr r0, =data_02088404
    bl func_0204398c
    ldr r0, =data_02088404
    bl func_02043fd0
    mov r2, r0, lsl #0xc
    ldr r1, =data_020881e0
    ldr r0, =data_02088404
    str r2, [r1, #0x1c]
    bl func_02043ab0
    ldr r0, =data_020881e0
    mov r2, #0x5
    add r1, r0, #0x1
    swpb r0, r2, [r1]
L_0202f030:
    cmp r4, #0x2
    bne L_0202f080
    ldr r0, =data_02088404
    bl func_02045d74
    ldr r0, =data_02088404
    ldr r1, =data_0206cdf4
    bl func_0205bdf4
    ldr r0, =data_02088404
    bl func_0204398c
    ldr r0, =data_02088404
    bl func_02043fd0
    mov r2, r0, lsl #0xc
    ldr r1, =data_020881e0
    ldr r0, =data_02088404
    str r2, [r1, #0x1c]
    bl func_02043ab0
    ldr r0, =data_020881e0
    mov r2, #0x5
    add r1, r0, #0x1
    swpb r0, r2, [r1]
L_0202f080:
    cmp r4, #0x3
    bne L_0202f0d0
    ldr r0, =data_02088404
    bl func_02045d74
    ldr r0, =data_02088404
    ldr r1, =data_0206ce00
    bl func_0205bdf4
    ldr r0, =data_02088404
    bl func_0204398c
    ldr r0, =data_02088404
    bl func_02043fd0
    mov r2, r0, lsl #0xc
    ldr r1, =data_020881e0
    ldr r0, =data_02088404
    str r2, [r1, #0x1c]
    bl func_02043ab0
    ldr r0, =data_020881e0
    mov r2, #0x5
    add r1, r0, #0x1
    swpb r0, r2, [r1]
L_0202f0d0:
    mov r0, #0x34
    bl func_0203fa64
L_0202f0d8:
    ldr r0, =data_020881e0
    ldrb r0, [r0, #0x1]
    cmp r0, #0x5
    addne sp, sp, #0x24
    ldmnefd sp!, {r4, r5, pc}
    ldr r0, =data_020b8b44
    bl func_0203d098
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, pc}
}
// clang-format on
