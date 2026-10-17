#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020223e8();
extern void func_020224f8();
extern void func_02022714();
extern void func_02022c30();
extern void func_02022cf0();
extern void func_02022d20();
extern void func_0202b630();
extern void func_0203d8d8();
extern void func_0204221c();
extern char data_02087f80[];
extern char data_02087fac[];
extern char data_02087fe0[];
extern char data_02088028[];
extern char data_02088070[];
// clang-format off
asm void func_0202b6b0(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    ldr r0, =data_02087fac
    bl func_020223e8
    ldr r1, =data_02087f80
    mov r0, #0x85
    ldr r4, [r1, #0x1c]
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    ldr r2, =func_0202b630
    mov r1, #0x0
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r1, [r4, #0x14]
    mov r0, r0, asr #0x1
    rsb r2, r0, #0x80
    ldrb r1, [r4, r1]
    ldr r0, =data_02088028
    and r2, r2, #0xff
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, asr #0x1
    rsb r1, r1, #0x3c
    and r3, r1, #0xff
    ldr r1, =data_02087fac
    bl func_02022c30
    mov r0, #0x85
    bl func_0204221c
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    mov r1, r0
    ldr r2, =data_02087f80
    str r3, [sp, #0x8]
    ldr r0, =data_02088028
    ldr r2, [r2, #0x1c]
    bl func_020224f8
    mov r1, #0x0
    ldr r0, =data_02088028
    mov r2, r1
    mov r3, r1
    bl func_02022cf0
    mov r2, #0x0
    ldr r0, =data_02088028
    mov r1, #0x1
    mov r3, r2
    bl func_02022cf0
    ldr r1, =data_02087f80
    mov r2, #0x8
    str r2, [r1, #0xcc]
    ldr r4, [r1, #0x1c]
    mov r0, #0x84
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    mov r0, r0, asr #0x1
    ldr r1, =func_0202b630
    rsb r0, r0, #0x80
    and r2, r0, #0xff
    str r1, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r3, [r4, #0x14]
    ldr r0, =data_02087fe0
    ldrb r3, [r4, r3]
    ldr r1, =data_02087fac
    add r3, r3, #0x6
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    mov r3, r3, asr #0x1
    rsb r3, r3, #0x5d
    and r3, r3, #0xff
    bl func_02022c30
    ldr r1, =data_02087f80
    mov r0, #0x84
    ldr r4, [r1, #0x1c]
    ldr r1, [r4, #0x14]
    ldrb r1, [r4, r1]
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r5, r1, lsr #0x10
    bl func_0204221c
    ldr r1, =data_02087f80
    ldr r1, [r1, #0x1c]
    bl func_0203d8d8
    mov r6, r0
    mov r0, #0x84
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    add r0, r0, #0x14
    and r3, r0, #0xff
    add r0, r5, #0xe
    and r0, r0, #0xff
    str r0, [sp, #0x0]
    mov r0, r5, asr #0x1
    mov r1, r6, asr #0x1
    rsb r0, r0, #0x56
    rsb r1, r1, #0x76
    and r2, r0, #0xff
    ldr r0, =data_02087fe0
    and r1, r1, #0xff
    bl func_02022714
    mov r0, #0x84
    bl func_0204221c
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    mov r1, r0
    ldr r2, =data_02087f80
    str r3, [sp, #0x8]
    ldr r0, =data_02087fe0
    ldr r2, [r2, #0x1c]
    bl func_020224f8
    mov r1, #0x0
    ldr r0, =data_02087fe0
    mov r2, r1
    mov r3, r1
    bl func_02022cf0
    ldr r0, =data_02087fe0
    mov r1, #0x1
    mov r2, #0x0
    mov r3, #0x3
    bl func_02022cf0
    ldr r1, =data_02087f80
    mov r2, #0x1
    str r2, [r1, #0x84]
    ldr r5, [r1, #0x1c]
    mov r0, #0x86
    bl func_0204221c
    mov r1, r5
    bl func_0203d8d8
    ldr r2, =func_0202b630
    mov r1, r0, asr #0x1
    str r2, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r0, [r5, #0x14]
    rsb r4, r1, #0x80
    ldrb r2, [r5, r0]
    ldr r0, =data_02088070
    ldr r1, =data_02087fac
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, asr #0x1
    rsb r3, r2, #0x74
    and r2, r4, #0xff
    and r3, r3, #0xff
    bl func_02022c30
    ldr r1, =data_02087f80
    mov r0, #0x86
    ldr r4, [r1, #0x1c]
    ldr r1, [r4, #0x14]
    ldrb r1, [r4, r1]
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r5, r1, lsr #0x10
    bl func_0204221c
    ldr r1, =data_02087f80
    ldr r1, [r1, #0x1c]
    bl func_0203d8d8
    mov r6, r0
    mov r0, #0x86
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    add r0, r0, #0x14
    and r3, r0, #0xff
    add r0, r5, #0xe
    and r0, r0, #0xff
    str r0, [sp, #0x0]
    mov r0, r5, asr #0x1
    mov r1, r6, asr #0x1
    rsb r0, r0, #0x6d
    rsb r1, r1, #0x76
    and r2, r0, #0xff
    ldr r0, =data_02088070
    and r1, r1, #0xff
    bl func_02022714
    mov r0, #0x86
    bl func_0204221c
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    mov r1, r0
    ldr r2, =data_02087f80
    str r3, [sp, #0x8]
    ldr r0, =data_02088070
    ldr r2, [r2, #0x1c]
    bl func_020224f8
    mov r1, #0x0
    ldr r0, =data_02088070
    mov r2, r1
    mov r3, r1
    bl func_02022cf0
    ldr r0, =data_02088070
    mov r1, #0x1
    mov r2, #0x0
    mov r3, #0x3
    bl func_02022cf0
    ldr r3, =data_02087f80
    mov r4, #0x2
    ldr r0, =data_02087fe0
    ldr r1, =data_02088070
    mov r2, #0x5
    str r4, [r3, #0x114]
    bl func_02022d20
    ldr r3, =data_02087f80
    mov r1, #0x1
    add r2, r3, #0x2e
    swpb r0, r1, [r2]
    ldr r0, [r3, #0x3c]
    bl func_0202b630
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
