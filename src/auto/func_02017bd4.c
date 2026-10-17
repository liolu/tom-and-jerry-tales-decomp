#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02017b54();
extern void func_020223e8();
extern void func_020224f8();
extern void func_02022714();
extern void func_02022c30();
extern void func_02022cf0();
extern void func_02022d20();
extern void func_0203d8d8();
extern void func_0204221c();
extern char data_020871f4[];
extern char data_02087224[];
extern char data_02087258[];
extern char data_020872a0[];
extern char data_020872e8[];
extern char data_02087330[];
extern char data_02087378[];
extern char data_020873c0[];
// clang-format off
asm void func_02017bd4(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    ldr r0, =data_020871f4
    ldrb r0, [r0, #0x4]
    cmp r0, #0x0
    beq L_02017c00
    cmp r0, #0x1
    cmpne r0, #0x2
    beq L_020180a4
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_02017c00:
    ldr r0, =data_02087224
    bl func_020223e8
    ldr r1, =data_020871f4
    mov r0, #0x47
    ldr r4, [r1, #0x1c]
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    ldr r2, =func_02017b54
    mov r1, #0x0
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r1, [r4, #0x14]
    mov r0, r0, asr #0x1
    rsb r2, r0, #0x83
    ldrb r1, [r4, r1]
    ldr r0, =data_02087330
    and r2, r2, #0xff
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, asr #0x1
    rsb r1, r1, #0x3c
    and r3, r1, #0xff
    ldr r1, =data_02087224
    bl func_02022c30
    mov r0, #0x47
    bl func_0204221c
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    mov r1, r0
    ldr r2, =data_020871f4
    str r3, [sp, #0x8]
    ldr r0, =data_02087330
    ldr r2, [r2, #0x1c]
    bl func_020224f8
    mov r1, #0x0
    ldr r0, =data_02087330
    mov r2, r1
    mov r3, r1
    bl func_02022cf0
    mov r2, #0x0
    ldr r0, =data_02087330
    mov r1, #0x1
    mov r3, r2
    bl func_02022cf0
    ldr r1, =data_020871f4
    mov r2, #0x8
    str r2, [r1, #0x160]
    ldr r4, [r1, #0x1c]
    mov r0, #0x48
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    mov r0, r0, asr #0x1
    ldr r1, =func_02017b54
    rsb r0, r0, #0x83
    and r2, r0, #0xff
    str r1, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r3, [r4, #0x14]
    ldr r0, =data_020873c0
    ldrb r3, [r4, r3]
    ldr r1, =data_02087224
    add r3, r3, #0x6
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    mov r3, r3, asr #0x1
    rsb r3, r3, #0x5d
    and r3, r3, #0xff
    bl func_02022c30
    ldr r1, =data_020871f4
    mov r0, #0x48
    ldr r4, [r1, #0x1c]
    ldr r1, [r4, #0x14]
    ldrb r1, [r4, r1]
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r5, r1, lsr #0x10
    bl func_0204221c
    ldr r1, =data_020871f4
    ldr r1, [r1, #0x1c]
    bl func_0203d8d8
    mov r6, r0
    mov r0, #0x48
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
    rsb r1, r1, #0x79
    and r2, r0, #0xff
    ldr r0, =data_020873c0
    and r1, r1, #0xff
    bl func_02022714
    mov r0, #0x48
    bl func_0204221c
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    mov r1, r0
    ldr r2, =data_020871f4
    str r3, [sp, #0x8]
    ldr r0, =data_020873c0
    ldr r2, [r2, #0x1c]
    bl func_020224f8
    mov r1, #0x0
    ldr r0, =data_020873c0
    mov r2, r1
    mov r3, r1
    bl func_02022cf0
    ldr r0, =data_020873c0
    mov r1, #0x1
    mov r2, #0x0
    mov r3, #0x3
    bl func_02022cf0
    ldr r1, =data_020871f4
    mov r2, #0x1
    str r2, [r1, #0x1f0]
    ldr r5, [r1, #0x1c]
    mov r0, #0x5d
    bl func_0204221c
    mov r1, r5
    bl func_0203d8d8
    ldr r2, =func_02017b54
    mov r1, r0, asr #0x1
    str r2, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r0, [r5, #0x14]
    rsb r4, r1, #0x5b
    ldrb r2, [r5, r0]
    ldr r0, =data_020872e8
    ldr r1, =data_02087224
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, asr #0x1
    rsb r3, r2, #0x74
    and r2, r4, #0xff
    and r3, r3, #0xff
    bl func_02022c30
    ldr r1, =data_020871f4
    mov r0, #0x5d
    ldr r4, [r1, #0x1c]
    ldr r1, [r4, #0x14]
    ldrb r1, [r4, r1]
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r5, r1, lsr #0x10
    bl func_0204221c
    ldr r1, =data_020871f4
    ldr r1, [r1, #0x1c]
    bl func_0203d8d8
    mov r6, r0
    mov r0, #0x5d
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
    rsb r1, r1, #0x51
    and r2, r0, #0xff
    ldr r0, =data_020872e8
    and r1, r1, #0xff
    bl func_02022714
    mov r0, #0x5d
    bl func_0204221c
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    mov r1, r0
    ldr r2, =data_020871f4
    str r3, [sp, #0x8]
    ldr r0, =data_020872e8
    ldr r2, [r2, #0x1c]
    bl func_020224f8
    mov r1, #0x0
    ldr r0, =data_020872e8
    mov r2, r1
    mov r3, r1
    bl func_02022cf0
    ldr r0, =data_020872e8
    mov r1, #0x1
    mov r2, #0x0
    mov r3, #0x3
    bl func_02022cf0
    ldr r0, =data_020871f4
    mov r1, #0x3
    str r1, [r0, #0x118]
    ldr r4, [r0, #0x1c]
    mov r0, #0x49
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    ldr r2, =func_02017b54
    mov r1, #0x0
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r1, [r4, #0x14]
    mov r0, r0, asr #0x1
    rsb r2, r0, #0xb0
    ldrb r1, [r4, r1]
    and r2, r2, #0xff
    add r0, r1, #0x6
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #0x1
    rsb r3, r0, #0x74
    ldr r0, =data_020872a0
    ldr r1, =data_02087224
    and r3, r3, #0xff
    bl func_02022c30
    ldr r1, =data_020871f4
    mov r0, #0x49
    ldr r4, [r1, #0x1c]
    ldr r1, [r4, #0x14]
    ldrb r1, [r4, r1]
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r5, r1, lsr #0x10
    bl func_0204221c
    ldr r1, =data_020871f4
    ldr r1, [r1, #0x1c]
    bl func_0203d8d8
    mov r6, r0
    mov r0, #0x49
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
    rsb r1, r1, #0xa6
    and r2, r0, #0xff
    ldr r0, =data_020872a0
    and r1, r1, #0xff
    bl func_02022714
    mov r0, #0x49
    bl func_0204221c
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    mov r1, r0
    ldr r2, =data_020871f4
    str r3, [sp, #0x8]
    ldr r0, =data_020872a0
    ldr r2, [r2, #0x1c]
    bl func_020224f8
    mov r1, #0x0
    ldr r0, =data_020872a0
    mov r2, r1
    mov r3, r1
    bl func_02022cf0
    ldr r0, =data_020872a0
    mov r1, #0x1
    mov r2, #0x0
    mov r3, #0x3
    bl func_02022cf0
    ldr r3, =data_020871f4
    mov r4, #0x2
    ldr r0, =data_020872e8
    ldr r1, =data_020873c0
    mov r2, #0x4
    str r4, [r3, #0xd0]
    bl func_02022d20
    ldr r0, =data_020873c0
    ldr r1, =data_020872a0
    mov r2, #0x4
    bl func_02022d20
    ldr r3, =data_020871f4
    mov r1, #0x1
    add r2, r3, #0x32
    swpb r0, r1, [r2]
    ldr r0, [r3, #0x40]
    bl func_02017b54
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_020180a4:
    ldr r0, =data_02087224
    bl func_020223e8
    ldr r1, =data_020871f4
    mov r0, #0x4a
    ldr r4, [r1, #0x1c]
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    ldr r2, =func_02017b54
    mov r1, #0x0
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r1, [r4, #0x14]
    mov r0, r0, asr #0x1
    rsb r2, r0, #0x80
    ldrb r1, [r4, r1]
    ldr r0, =data_02087330
    and r2, r2, #0xff
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, asr #0x1
    rsb r1, r1, #0x53
    and r3, r1, #0xff
    ldr r1, =data_02087224
    bl func_02022c30
    mov r0, #0x4a
    bl func_0204221c
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    mov r1, r0
    ldr r2, =data_020871f4
    str r3, [sp, #0x8]
    ldr r0, =data_02087330
    ldr r2, [r2, #0x1c]
    bl func_020224f8
    mov r1, #0x0
    ldr r0, =data_02087330
    mov r2, r1
    mov r3, r1
    bl func_02022cf0
    mov r2, #0x0
    ldr r0, =data_02087330
    mov r1, #0x1
    mov r3, r2
    bl func_02022cf0
    ldr r1, =data_020871f4
    mov r2, #0x9
    str r2, [r1, #0x160]
    ldr r4, [r1, #0x1c]
    mov r0, #0x4c
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    mov r0, r0, asr #0x1
    ldr r1, =func_02017b54
    rsb r0, r0, #0x67
    and r2, r0, #0xff
    str r1, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r3, [r4, #0x14]
    ldr r0, =data_02087258
    ldrb r3, [r4, r3]
    ldr r1, =data_02087224
    add r3, r3, #0x6
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    mov r3, r3, asr #0x1
    rsb r3, r3, #0x6f
    and r3, r3, #0xff
    bl func_02022c30
    ldr r1, =data_020871f4
    mov r0, #0x4c
    ldr r4, [r1, #0x1c]
    ldr r1, [r4, #0x14]
    ldrb r1, [r4, r1]
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r5, r1, lsr #0x10
    bl func_0204221c
    ldr r1, =data_020871f4
    ldr r1, [r1, #0x1c]
    bl func_0203d8d8
    mov r6, r0
    mov r0, #0x4c
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
    rsb r0, r0, #0x68
    rsb r1, r1, #0x5d
    and r2, r0, #0xff
    ldr r0, =data_02087258
    and r1, r1, #0xff
    bl func_02022714
    mov r0, #0x4c
    bl func_0204221c
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    mov r1, r0
    ldr r2, =data_020871f4
    str r3, [sp, #0x8]
    ldr r0, =data_02087258
    ldr r2, [r2, #0x1c]
    bl func_020224f8
    mov r1, #0x0
    ldr r0, =data_02087258
    mov r2, r1
    mov r3, r1
    bl func_02022cf0
    ldr r0, =data_02087258
    mov r1, #0x1
    mov r2, #0x0
    mov r3, #0x3
    bl func_02022cf0
    ldr r1, =data_020871f4
    mov r2, #0x4
    str r2, [r1, #0x88]
    ldr r5, [r1, #0x1c]
    mov r0, #0x4b
    bl func_0204221c
    mov r1, r5
    bl func_0203d8d8
    ldr r2, =func_02017b54
    mov r1, r0, asr #0x1
    str r2, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r0, [r5, #0x14]
    rsb r4, r1, #0x9d
    ldrb r2, [r5, r0]
    ldr r0, =data_02087378
    ldr r1, =data_02087224
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, asr #0x1
    rsb r3, r2, #0x70
    and r2, r4, #0xff
    and r3, r3, #0xff
    bl func_02022c30
    ldr r1, =data_020871f4
    mov r0, #0x4b
    ldr r4, [r1, #0x1c]
    ldr r1, [r4, #0x14]
    ldrb r1, [r4, r1]
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r5, r1, lsr #0x10
    bl func_0204221c
    ldr r1, =data_020871f4
    ldr r1, [r1, #0x1c]
    bl func_0203d8d8
    mov r6, r0
    mov r0, #0x4b
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
    rsb r0, r0, #0x69
    rsb r1, r1, #0x93
    and r2, r0, #0xff
    ldr r0, =data_02087378
    and r1, r1, #0xff
    bl func_02022714
    mov r0, #0x4b
    bl func_0204221c
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    mov r1, r0
    ldr r2, =data_020871f4
    str r3, [sp, #0x8]
    ldr r0, =data_02087378
    ldr r2, [r2, #0x1c]
    bl func_020224f8
    mov r1, #0x0
    ldr r0, =data_02087378
    mov r2, r1
    mov r3, r1
    bl func_02022cf0
    ldr r0, =data_02087378
    mov r1, #0x1
    mov r2, #0x0
    mov r3, #0x3
    bl func_02022cf0
    ldr r3, =data_020871f4
    mov r4, #0x5
    ldr r0, =data_02087258
    ldr r1, =data_02087378
    mov r2, #0x4
    str r4, [r3, #0x1a8]
    bl func_02022d20
    ldr r2, =data_020871f4
    mov r0, #0x2
    add r1, r2, #0x32
    swpb r0, r0, [r1]
    mov r1, #0x1
    ldr r0, [r2, #0x44]
    bl func_02017b54
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
