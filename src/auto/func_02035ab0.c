#include "m2c.h"

void func_020357ac(void);
void func_020357e4(void);
void func_02035f64(void);
void func_0203620c(void);
void FX_Div(void);
// clang-format off
asm void func_02035ab0(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x8
    mov r9, r2
    mov r10, r0
    str r9, [sp, #0x4]
    ldrb r3, [r10, #0x33]
    ldr r0, [r10, #0x10]
    str r1, [sp, #0x0]
    cmp r3, #0x0
    moveq r9, #0x0
    mul r1, r0, r9
    ldr r2, [r10, #0xc]
    cmp r9, #0x0
    add r7, r2, r1, asr #0xc
    bge L_02035ba8
    mov r0, r10
    bl func_020357ac
    mov r1, #0x0
    strh r1, [r10, #0x14]
    str r1, [r10, #0xc]
    ldr r1, [r10, #0x0]
    add r7, r0, r9, asr #0xc
    add r0, r1, #0x1000
    ldrb r1, [r0, #0xea0]
    mov r0, #0x1000
    mov r1, r1, lsl #0xc
    bl FX_Div
    str r0, [r10, #0x10]
    mov r0, #0x1
    strh r0, [r10, #0x16]
    cmp r7, #0x0
    mov r6, #0x0
    ble L_02035ba0
    mov r5, r6
    mov r4, #0x1000
L_02035b3c:
    ldr r1, [r10, #0xc]
    ldr r0, [r10, #0x10]
    add r0, r1, r0
    str r0, [r10, #0xc]
    cmp r0, #0x1000
    ble L_02035b94
    str r5, [r10, #0xc]
    ldrh r1, [r10, #0x14]
    mov r0, r4
    add r1, r1, #0x1
    strh r1, [r10, #0x14]
    ldrh r1, [r10, #0x14]
    add r1, r1, #0x1
    strh r1, [r10, #0x16]
    ldrh r1, [r10, #0x14]
    ldr r2, [r10, #0x0]
    add r1, r2, r1
    add r1, r1, #0x1000
    ldrb r1, [r1, #0xea0]
    mov r1, r1, lsl #0xc
    bl FX_Div
    str r0, [r10, #0x10]
L_02035b94:
    add r6, r6, #0x1
    cmp r6, r7
    blt L_02035b3c
L_02035ba0:
    mov r9, #0x0
    b L_02035e2c
L_02035ba8:
    add r1, r3, #0xfc
    and r1, r1, #0xff
    cmp r1, #0x2
    bhi L_02035ce4
    ldrh r1, [r10, #0x16]
    ldr r2, [r10, #0x0]
    add r5, r10, #0x33
    add r1, r2, r1
    add r1, r1, #0x1000
    ldrb r1, [r1, #0xea0]
    mov r8, #0x0
    mov r6, #0x1000
    mul r4, r0, r1
    b L_02035cd0
L_02035be0:
    ldr r0, [r10, #0xc]
    ldr r1, [r10, #0x10]
    sub r0, r4, r0
    sub r7, r7, r4
    bl FX_Div
    str r8, [r10, #0xc]
    ldrb r1, [r10, #0x33]
    sub r9, r9, r0
    ldrh r0, [r10, #0x14]
    cmp r1, #0x0
    streqh r0, [r10, #0x16]
    beq L_02035cd0
    sub r0, r0, #0x1
    cmp r0, #0x0
    bgt L_02035c74
    cmp r1, #0x4
    beq L_02035c3c
    cmp r1, #0x5
    beq L_02035c38
    cmp r1, #0x6
    beq L_02035c60
    b L_02035c8c
L_02035c38:
    swpb r0, r8, [r5]
L_02035c3c:
    ldr r0, [r10, #0x0]
    add r0, r0, #0x1000
    ldr r0, [r0, #0xe90]
    sub r0, r0, #0x1
    strh r0, [r10, #0x14]
    ldrh r0, [r10, #0x14]
    sub r0, r0, #0x1
    strh r0, [r10, #0x16]
    b L_02035c8c
L_02035c60:
    strh r8, [r10, #0x16]
    ldrh r0, [r10, #0x16]
    strh r0, [r10, #0x14]
    swpb r0, r8, [r5]
    b L_02035c8c
L_02035c74:
    ldrh r0, [r10, #0x14]
    sub r0, r0, #0x1
    strh r0, [r10, #0x14]
    ldrh r0, [r10, #0x14]
    sub r0, r0, #0x1
    strh r0, [r10, #0x16]
L_02035c8c:
    ldrh r1, [r10, #0x16]
    ldr r2, [r10, #0x0]
    mov r0, r6
    add r1, r2, r1
    add r1, r1, #0x1000
    ldrb r1, [r1, #0xea0]
    mov r1, r1, lsl #0xc
    bl FX_Div
    str r0, [r10, #0x10]
    ldrh r1, [r10, #0x16]
    ldr r2, [r10, #0x0]
    add r1, r2, r1
    add r1, r1, #0x1000
    ldrb r1, [r1, #0xea0]
    mul r2, r0, r9
    mul r4, r0, r1
    mov r7, r2, asr #0xc
L_02035cd0:
    cmp r9, #0x0
    ble L_02035e0c
    cmp r7, r4
    bge L_02035be0
    b L_02035e0c
L_02035ce4:
    ldrh r1, [r10, #0x14]
    ldr r2, [r10, #0x0]
    mov r6, #0x0
    add r1, r2, r1
    add r1, r1, #0x1000
    ldrb r1, [r1, #0xea0]
    add r4, r10, #0x33
    mov r5, r6
    mul r8, r0, r1
    mov r11, #0x1
    b L_02035dfc
L_02035d10:
    ldr r0, [r10, #0xc]
    ldr r1, [r10, #0x10]
    sub r0, r8, r0
    sub r7, r7, r8
    bl FX_Div
    str r6, [r10, #0xc]
    ldrb r1, [r10, #0x33]
    sub r9, r9, r0
    cmp r1, #0x0
    ldreqh r0, [r10, #0x14]
    streqh r0, [r10, #0x16]
    beq L_02035dfc
    ldr r0, [r10, #0x0]
    ldrh r2, [r10, #0x14]
    add r0, r0, #0x1000
    ldr r3, [r0, #0xe90]
    add r0, r2, #0x1
    cmp r0, r3
    blo L_02035da0
    cmp r1, #0x1
    beq L_02035d7c
    cmp r1, #0x2
    beq L_02035d78
    cmp r1, #0x3
    beq L_02035d88
    b L_02035db8
L_02035d78:
    swpb r0, r6, [r4]
L_02035d7c:
    strh r5, [r10, #0x14]
    strh r11, [r10, #0x16]
    b L_02035db8
L_02035d88:
    sub r0, r3, #0x1
    strh r0, [r10, #0x16]
    ldrh r0, [r10, #0x16]
    strh r0, [r10, #0x14]
    swpb r0, r6, [r4]
    b L_02035db8
L_02035da0:
    mov r0, r2
    add r0, r0, #0x1
    strh r0, [r10, #0x14]
    ldrh r0, [r10, #0x14]
    add r0, r0, #0x1
    strh r0, [r10, #0x16]
L_02035db8:
    ldrh r1, [r10, #0x14]
    ldr r2, [r10, #0x0]
    mov r0, #0x1000
    add r1, r2, r1
    add r1, r1, #0x1000
    ldrb r1, [r1, #0xea0]
    mov r1, r1, lsl #0xc
    bl FX_Div
    str r0, [r10, #0x10]
    ldrh r1, [r10, #0x14]
    ldr r2, [r10, #0x0]
    add r1, r2, r1
    add r1, r1, #0x1000
    ldrb r1, [r1, #0xea0]
    mul r2, r0, r9
    mul r8, r0, r1
    mov r7, r2, asr #0xc
L_02035dfc:
    cmp r9, #0x0
    ble L_02035e0c
    cmp r7, r8
    bge L_02035d10
L_02035e0c:
    ldrb r0, [r10, #0x32]
    add r0, r0, #0xff
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_02035e2c
    add r1, sp, #0x4
    mov r0, r10
    bl func_020357e4
L_02035e2c:
    ldrb r0, [r10, #0x32]
    add r0, r0, #0xff
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_02035e5c
    ldr r3, [sp, #0x4]
    ldr r1, [sp, #0x0]
    mov r0, r10
    mov r2, r9
    bl func_02035f64
    add sp, sp, #0x8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02035e5c:
    ldr r1, [sp, #0x0]
    mov r0, r10
    mov r2, r9
    bl func_0203620c
    add sp, sp, #0x8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
