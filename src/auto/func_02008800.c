#include "m2c.h"

extern char data_02064110[];
extern char data_02064348[];
extern char data_020692ec[];
extern char data_0206acd8[];
extern char data_0206acdc[];
extern char data_0206e6d4[];
extern char data_0206fcac[];
void func_02003738(void);
void func_02039d0c(void);
void func_0204b070(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02008800(void) {
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    add r2, sp, #0x0
    mov r1, #0x0
    mov r5, r0
    str r1, [r2, #0x0]
    str r1, [r2, #0x4]
    str r1, [r2, #0x8]
    ldr r0, [r5, #0x64]
    mov r0, r0, lsl #0x1f
    movs r0, r0, asr #0x1f
    ldrnesh r4, [r5, #0x4e]
    add r0, r5, #0x1000
    ldr r1, [r0, #0x83c]
    ldreqsh r4, [r5, #0x4c]
    cmp r1, #0x1a
    addls pc, pc, r1, lsl #0x2
    b @L02009230
@L02008848:
    b @L020088b4
    b @L020088b4
    b @L02009230
    b @L02008cc8
    b @L02008b40
    b @L02008dc8
    b @L02008ef8
    b @L02008f74
    b @L02008fe8
    b @L02009154
    b @L0200917c
    b @L020091a4
    b @L020091cc
    b @L0200920c
    b @L02008940
    b @L02008a60
    b @L02008970
    b @L020089a0
    b @L020089d0
    b @L02008a00
    b @L02008a30
    b @L02008a90
    b @L02008ac0
    b @L02008af0
    b @L02008d38
    b @L02008d68
    b @L02008d98
@L020088b4:
    ldr r0, =data_02064110
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r5, #0x1800
    ldrh r1, [r0, #0x40]
    ldr r3, =data_02064348
    add r0, r5, #0x7c
    mov r1, r1, asr #0x4
    mov r2, r1, lsl #0x1
    add r1, r2, #0x1
    mov r4, r2, lsl #0x1
    mov r2, r1, lsl #0x1
    ldrsh r1, [r3, r4]
    ldrsh r2, [r3, r2]
    bl func_0204b070
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    ldr r0, [r5, #0x24]
    bne @L02008924
    cmp r0, #0x18
    beq @L02009230
    mov r0, r5
    mov r1, #0x18
    mov r2, #0x1
    bl func_02003738
    b @L02009230
@L02008924:
    cmp r0, #0x0
    beq @L02009230
    mov r0, r5
    mov r1, #0x0
    mov r2, #0x1
    bl func_02003738
    b @L02009230
@L02008940:
    mov r1, #0x6
    str r1, [r0, #0x834]
    mov r1, #0x0
    str r1, [r0, #0x830]
    ldr r0, [r5, #0x24]
    cmp r0, #0x22
    beq @L02009230
    mov r0, r5
    mov r1, #0x22
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02008970:
    mov r1, #0x6
    str r1, [r0, #0x834]
    mov r1, #0x0
    str r1, [r0, #0x830]
    ldr r0, [r5, #0x24]
    cmp r0, #0x30
    beq @L02009230
    mov r0, r5
    mov r1, #0x30
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L020089a0:
    mov r1, #0x6
    str r1, [r0, #0x834]
    mov r1, #0x0
    str r1, [r0, #0x830]
    ldr r0, [r5, #0x24]
    cmp r0, #0x2a
    beq @L02009230
    mov r0, r5
    mov r1, #0x2a
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L020089d0:
    mov r1, #0x6
    str r1, [r0, #0x834]
    mov r1, #0x0
    str r1, [r0, #0x830]
    ldr r0, [r5, #0x24]
    cmp r0, #0x24
    beq @L02009230
    mov r0, r5
    mov r1, #0x24
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02008a00:
    mov r1, #0x6
    str r1, [r0, #0x834]
    mov r1, #0x0
    str r1, [r0, #0x830]
    ldr r0, [r5, #0x24]
    cmp r0, #0x23
    beq @L02009230
    mov r0, r5
    mov r1, #0x23
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02008a30:
    mov r1, #0x6
    str r1, [r0, #0x834]
    mov r1, #0x0
    str r1, [r0, #0x830]
    ldr r0, [r5, #0x24]
    cmp r0, #0x26
    beq @L02009230
    mov r0, r5
    mov r1, #0x26
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02008a60:
    mov r1, #0x6
    str r1, [r0, #0x834]
    mov r1, #0x0
    str r1, [r0, #0x830]
    ldr r0, [r5, #0x24]
    cmp r0, #0x2e
    beq @L02009230
    mov r0, r5
    mov r1, #0x2e
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02008a90:
    mov r1, #0x6
    str r1, [r0, #0x834]
    mov r1, #0x0
    str r1, [r0, #0x830]
    ldr r0, [r5, #0x24]
    cmp r0, #0x35
    beq @L02009230
    mov r0, r5
    mov r1, #0x35
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02008ac0:
    mov r1, #0x6
    str r1, [r0, #0x834]
    mov r1, #0x0
    str r1, [r0, #0x830]
    ldr r0, [r5, #0x24]
    cmp r0, #0x36
    beq @L02009230
    mov r0, r5
    mov r1, #0x36
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02008af0:
    add r0, r5, #0x1800
    ldrh r1, [r0, #0x40]
    ldr r3, =data_02064348
    add r0, r5, #0x7c
    mov r1, r1, asr #0x4
    mov r2, r1, lsl #0x1
    add r1, r2, #0x1
    mov r4, r2, lsl #0x1
    mov r2, r1, lsl #0x1
    ldrsh r1, [r3, r4]
    ldrsh r2, [r3, r2]
    bl func_0204b070
    ldr r0, [r5, #0x24]
    cmp r0, #0x26
    beq @L02009230
    mov r0, r5
    mov r1, #0x26
    mov r2, #0x1
    bl func_02003738
    b @L02009230
@L02008b40:
    add r0, r5, #0x1800
    ldrh r1, [r0, #0x40]
    ldr r3, =data_02064348
    add r0, r5, #0x7c
    mov r1, r1, asr #0x4
    mov r2, r1, lsl #0x1
    add r1, r2, #0x1
    mov ip, r2, lsl #0x1
    mov r2, r1, lsl #0x1
    ldrsh r1, [r3, ip]
    ldrsh r2, [r3, r2]
    bl func_0204b070
    add r0, r5, #0x94
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    mov r1, r3
    mov r2, r4
    bl func_02039d0c
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b @L02008ca8
@L02008ba4:
    b @L02008ca8
    b @L02008bd8
    b @L02008bd8
    b @L02008c5c
    b @L02008bb8
@L02008bb8:
    ldr r0, [r5, #0x24]
    cmp r0, #0x11
    beq @L02009230
    mov r0, r5
    mov r1, #0x11
    mov r2, #0x1
    bl func_02003738
    b @L02009230
@L02008bd8:
    ldr r1, [r5, #0x4]
    ldr r0, =data_0206acdc
    ldr r1, [r1, #0x30]
    ldr r0, [r0, #0x0]
    cmp r1, r0
    blt @L02008c10
    ldr r0, [r5, #0x24]
    cmp r0, #0x2c
    beq @L02009230
    mov r0, r5
    mov r1, #0x2c
    mov r2, #0x1
    bl func_02003738
    b @L02009230
@L02008c10:
    ldr r0, =data_0206acd8
    ldr r0, [r0, #0x0]
    cmp r1, r0
    ldr r0, [r5, #0x24]
    bgt @L02008c40
    cmp r0, #0x2f
    beq @L02009230
    mov r0, r5
    mov r1, #0x2f
    mov r2, #0x1
    bl func_02003738
    b @L02009230
@L02008c40:
    cmp r0, #0x2
    beq @L02009230
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x1
    bl func_02003738
    b @L02009230
@L02008c5c:
    ldr r0, =data_0206e6d4
    ldr r0, [r0, #0x8c]
    cmp r0, #0x0
    ldr r0, [r5, #0x24]
    beq @L02008c8c
    cmp r0, #0x2c
    beq @L02009230
    mov r0, r5
    mov r1, #0x2c
    mov r2, #0x1
    bl func_02003738
    b @L02009230
@L02008c8c:
    cmp r0, #0x2
    beq @L02009230
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x1
    bl func_02003738
    b @L02009230
@L02008ca8:
    ldr r0, [r5, #0x24]
    cmp r0, #0x2
    beq @L02009230
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x1
    bl func_02003738
    b @L02009230
@L02008cc8:
    add r0, r5, #0x1800
    ldrh r1, [r0, #0x40]
    ldr r3, =data_02064348
    add r0, r5, #0x7c
    mov r1, r1, asr #0x4
    mov r2, r1, lsl #0x1
    add r1, r2, #0x1
    mov ip, r2, lsl #0x1
    mov r2, r1, lsl #0x1
    ldrsh r1, [r3, ip]
    ldrsh r2, [r3, r2]
    bl func_0204b070
    add r0, r5, #0x94
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    mov r1, r3
    mov r2, r4
    bl func_02039d0c
    ldr r0, [r5, #0x24]
    cmp r0, #0x3
    beq @L02009230
    mov r0, r5
    mov r1, #0x3
    mov r2, #0x1
    bl func_02003738
    b @L02009230
@L02008d38:
    mov r1, #0x6
    str r1, [r0, #0x834]
    mov r1, #0x0
    str r1, [r0, #0x830]
    ldr r0, [r5, #0x24]
    cmp r0, #0x10
    beq @L02009230
    mov r0, r5
    mov r1, #0x10
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02008d68:
    mov r1, #0x6
    str r1, [r0, #0x834]
    mov r1, #0x0
    str r1, [r0, #0x830]
    ldr r0, [r5, #0x24]
    cmp r0, #0xf
    beq @L02009230
    mov r0, r5
    mov r1, #0xf
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02008d98:
    mov r1, #0x6
    str r1, [r0, #0x834]
    mov r1, #0x0
    str r1, [r0, #0x830]
    ldr r0, [r5, #0x24]
    cmp r0, #0x12
    beq @L02009230
    mov r0, r5
    mov r1, #0x12
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02008dc8:
    mov r1, #0x2
    str r1, [r0, #0x830]
    add r0, r5, #0x1800
    ldrh r1, [r0, #0x40]
    ldr r3, =data_02064348
    add r0, r5, #0x7c
    mov r1, r1, asr #0x4
    mov r2, r1, lsl #0x1
    add r1, r2, #0x1
    mov ip, r2, lsl #0x1
    mov r2, r1, lsl #0x1
    ldrsh r1, [r3, ip]
    ldrsh r2, [r3, r2]
    bl func_0204b070
    add r0, r5, #0x94
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    mov r1, r3
    mov r2, r4
    bl func_02039d0c
    ldr r0, [r5, #0x24]
    cmp r0, #0x7
    cmpne r0, #0x17
    cmpne r0, #0x14
    cmpne r0, #0x13
    cmpne r0, #0x15
    cmpne r0, #0x16
    beq @L02009230
    ldr r0, =data_0206e6d4
    ldrb r1, [r0, #0x5e]
    cmp r1, #0x1
    bne @L02008e64
    mov r0, r5
    mov r1, #0x17
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02008e64:
    ldrb r0, [r0, #0xd5]
    cmp r0, #0x0
    beq @L02008e84
    cmp r0, #0x1
    beq @L02008eac
    cmp r0, #0x2
    beq @L02008ed4
    b @L02009230
@L02008e84:
    mov r0, r5
    mov r1, #0x7
    mov r2, #0x3
    bl func_02003738
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0xd5]
    add r1, r0, #0xd5
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    b @L02009230
@L02008eac:
    mov r0, r5
    mov r1, #0x14
    mov r2, #0x3
    bl func_02003738
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0xd5]
    add r1, r0, #0xd5
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    b @L02009230
@L02008ed4:
    mov r0, r5
    mov r1, #0x15
    mov r2, #0x3
    bl func_02003738
    ldr r0, =data_0206e6d4
    mov r2, #0x0
    add r1, r0, #0xd5
    swpb r0, r2, [r1]
    b @L02009230
@L02008ef8:
    add r0, r5, #0x1800
    ldrh r1, [r0, #0x40]
    ldr r3, =data_02064348
    add r0, r5, #0x7c
    mov r1, r1, asr #0x4
    mov r2, r1, lsl #0x1
    add r1, r2, #0x1
    mov ip, r2, lsl #0x1
    mov r2, r1, lsl #0x1
    ldrsh r1, [r3, ip]
    ldrsh r2, [r3, r2]
    bl func_0204b070
    add r0, r5, #0x94
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    mov r1, r3
    mov r2, r4
    bl func_02039d0c
    add r3, r5, #0x1000
    ldr r0, [r3, #0x830]
    cmp r0, #0x2
    beq @L02009230
    mov r4, #0x2
    mov r0, r5
    mov r1, #0x7
    mov r2, #0x3
    str r4, [r3, #0x830]
    bl func_02003738
    b @L02009230
@L02008f74:
    mov r1, #0x3
    str r1, [r0, #0x830]
    add r0, r5, #0x1800
    ldrh r1, [r0, #0x40]
    ldr r3, =data_02064348
    add r0, r5, #0x7c
    mov r1, r1, asr #0x4
    mov r2, r1, lsl #0x1
    add r1, r2, #0x1
    mov r4, r2, lsl #0x1
    mov r2, r1, lsl #0x1
    ldrsh r1, [r3, r4]
    ldrsh r2, [r3, r2]
    bl func_0204b070
    ldr r0, [r5, #0x24]
    cmp r0, #0x6
    beq @L02009230
    ldr r3, =data_0206e6d4
    mov r0, r5
    ldrh ip, [r3, #0x4]
    ldrh r2, [r3, #0x6]
    mov r4, #0xa
    mov r1, #0x6
    sub r2, ip, r2
    strh r2, [r3, #0x4]
    mov r2, #0x3
    strh r4, [r3, #0x14]
    bl func_02003738
    b @L02009230
@L02008fe8:
    cmp r1, #0x7
    moveq r1, #0x3
    movne r1, #0x4
    add r0, r5, #0x1000
    str r1, [r0, #0x834]
    ldr r0, [r5, #0x64]
    mov r0, r0, lsl #0x1a
    movs r0, r0, asr #0x1f
    beq @L020090d8
    ldrsb r1, [r5, #0x78]
    ldr r2, =data_0206fcac
    ldr r0, =0x1864
    mla r4, r1, r0, r2
    add r0, r4, #0x1000
    ldr r0, [r0, #0x834]
    cmp r0, #0x5
    cmpne r0, #0x6
    cmpne r0, #0x7
    beq @L020090d8
    add r0, r5, #0x1800
    ldrh r1, [r0, #0x40]
    ldr r0, =0xffff
    ldr r2, =data_02064348
    add r1, r1, #0x8000
    cmp r1, r0
    subgt r1, r1, r0
    mov r0, r1, asr #0x4
    mov r1, r0, lsl #0x1
    add r0, r1, #0x1
    mov r1, r1, lsl #0x1
    mov r0, r0, lsl #0x1
    ldrsh r1, [r2, r1]
    ldrsh r2, [r2, r0]
    add r0, r4, #0x7c
    bl func_0204b070
    ldrsh r0, [r4, #0x10]
    sub r0, r0, #0xa
    strh r0, [r4, #0x10]
    ldrsh r0, [r4, #0x10]
    cmp r0, #0x0
    bgt @L020090b0
    mov r0, #0x0
    strh r0, [r4, #0x10]
    add r0, r4, #0x1000
    mov r1, #0x7
    str r1, [r0, #0x834]
    mov r1, #0xb
    str r1, [r0, #0x83c]
    mov r1, #0xb4
    b @L020090c8
@L020090b0:
    add r0, r4, #0x1000
    mov r2, #0x6
    mov r1, #0xa
    str r2, [r0, #0x834]
    str r1, [r0, #0x83c]
    sub r1, r1, #0xb
@L020090c8:
    str r1, [r0, #0x844]
    add r0, r4, #0x1000
    mov r1, #0x4
    str r1, [r0, #0x830]
@L020090d8:
    add r0, r5, #0x1800
    ldrh r1, [r0, #0x40]
    ldr r3, =data_02064348
    add r0, r5, #0x7c
    mov r1, r1, asr #0x4
    mov r2, r1, lsl #0x1
    add r1, r2, #0x1
    mov r4, r2, lsl #0x1
    mov r2, r1, lsl #0x1
    ldrsh r1, [r3, r4]
    ldrsh r2, [r3, r2]
    bl func_0204b070
    add r0, r5, #0x1000
    ldr r0, [r0, #0x83c]
    cmp r0, #0x7
    ldr r0, [r5, #0x24]
    bne @L02009138
    cmp r0, #0x4
    beq @L02009230
    mov r0, r5
    mov r1, #0x4
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02009138:
    cmp r0, #0x5
    beq @L02009230
    mov r0, r5
    mov r1, #0x5
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L02009154:
    mov r1, #0x5
    str r1, [r0, #0x834]
    ldr r0, [r5, #0x24]
    cmp r0, #0xb
    beq @L02009230
    mov r0, r5
    mov r1, #0xb
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L0200917c:
    mov r1, #0x6
    str r1, [r0, #0x834]
    ldr r0, [r5, #0x24]
    cmp r0, #0xc
    beq @L02009230
    mov r0, r5
    mov r1, #0xc
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L020091a4:
    mov r1, #0x7
    str r1, [r0, #0x834]
    ldr r0, [r5, #0x24]
    cmp r0, #0xd
    beq @L02009230
    mov r0, r5
    mov r1, #0xd
    mov r2, #0x3
    bl func_02003738
    b @L02009230
@L020091cc:
    add r0, r5, #0x1800
    ldrh r1, [r0, #0x40]
    ldr r3, =data_02064348
    add r0, r5, #0x7c
    mov r1, r1, asr #0x4
    mov r2, r1, lsl #0x1
    add r1, r2, #0x1
    mov r4, r2, lsl #0x1
    mov r2, r1, lsl #0x1
    ldrsh r1, [r3, r4]
    ldrsh r2, [r3, r2]
    bl func_0204b070
    add r0, r5, #0x1000
    mov r1, #0x8
    str r1, [r0, #0x834]
    b @L02009230
@L0200920c:
    mov r1, #0x9
    str r1, [r0, #0x834]
    ldr r0, [r5, #0x24]
    cmp r0, #0x1
    beq @L02009230
    mov r0, r5
    mov r1, #0x1
    mov r2, #0x3
    bl func_02003738
@L02009230:
    ldr r0, [sp, #0x0]
    add r3, r5, #0x1000
    str r0, [r5, #0xec]
    ldr r0, [sp, #0x8]
    mvn r4, #0x0
    str r0, [r5, #0xf4]
    ldr r0, [r3, #0x844]
    cmp r0, r4
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, pc}
    subs r0, r0, #0x1
    str r0, [r3, #0x844]
    addne sp, sp, #0xc
    ldmneia sp!, {r4, r5, pc}
    mov r1, #0x0
    str r1, [r3, #0x83c]
    ldr r0, [r3, #0x834]
    cmp r0, #0x7
    addne sp, sp, #0xc
    ldmneia sp!, {r4, r5, pc}
    str r1, [r3, #0x834]
    ldrsh r1, [r5, #0x48]
    ldr r0, =data_02064110
    add ip, r5, #0xac
    strh r1, [r5, #0x10]
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    ldr r1, [r5, #0xb4]
    mov r0, #0x1
    sub r1, r1, #0x2000
    str r1, [r5, #0xb4]
    str r0, [r3, #0x83c]
    str r4, [r3, #0x844]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, pc}
}
// clang-format on
