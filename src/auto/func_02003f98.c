#include "m2c.h"

void func_01ff8000(void);
void func_01ff8188(void);
void func_01ff8520(void);
void func_020049ac(void);
void func_02031450(void);
void func_02032900(void);
void func_02035598(void);
void func_020355a8(void);
void func_020355b8(void);
void func_020355c8(void);
void func_020355d8(void);
void func_0204b77c(void);
void func_0204d61c(void);
void func_0204daa0(void);
void func_02051f7c(void);
extern char data_0206e6b0[];
extern char data_0206fcac[];
extern char data_027e0074[];
// clang-format off
asm s32 func_02003f98(s32 arg0) {
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    ldr r7, =data_0206fcac
    mov r4, #0x0
@L_02003fa8:
    ldrb r0, [r7, #0x8]
    cmp r0, #0x0
    ldrneb r0, [r7, #0x9]
    cmpne r0, #0x0
    beq @L_020042ec
    add r0, r7, #0x1000
    ldr r0, [r0, #0x694]
    bl func_02032900
    mov r5, r0
    ldr r6, [r7, #0xfc]
    ldr r1, =0x4000444
    mov r2, #0x0
    add r0, r7, #0x7c
    str r2, [r1, #0x0]
    bl func_0204d61c
    ldr r0, =0x40005c4
    mov r1, #0x0
    str r1, [r0, #0x0]
    str r1, [r0, #0x0]
    ldrb r0, [r5, #0x3a]
    cmp r0, #0x0
    beq @L_02004024
    add r0, r4, #0x1
    strh r0, [r5, #0x0]
    ldrh r0, [r5, #0x0]
    add r1, r5, #0x3b
    add r2, r5, #0x50
    swpb r0, r0, [r1]
    ldrb r0, [r5, #0x50]
    orr r0, r0, #0x10
    swpb r0, r0, [r2]
@L_02004024:
    mov r0, #0x1f
    strh r0, [r5, #0x2]
    ldr r1, [r7, #0x54]
    cmp r1, #0x1000
    beq @L_02004048
    ldr r0, =0x400046c
    str r1, [r0, #0x0]
    str r1, [r0, #0x0]
    str r1, [r0, #0x0]
@L_02004048:
    ldr r0, =data_0206e6b0
    ldr r2, [r7, #0xf8]
    ldr r3, [r0, #0x0]
    mov r1, #0x30
    str r3, [r0, #0x4]
    ldr r2, [r2, #0x4]
    mul r1, r2, r1
    bl func_01ff8000
    add r1, r7, #0x1600
    ldrh r3, [r1, #0x98]
    ldr r1, =data_027e0074
    mov r2, r0
    str r2, [r1, #0x0]
    cmp r3, #0x0
    bne @L_020040a8
    ldrb r0, [r7, #0xa]
    cmp r0, #0x0
    beq @L_020040a8
    mov r0, #0x0
    str r0, [r7, #0x794]
    ldr r1, [r7, #0xf8]
    add r0, r7, #0x154
    bl func_020355d8
    b @L_02004114
@L_020040a8:
    ldr r0, [r7, #0x794]
    cmp r0, #0x0
    bne @L_020040f0
    ldr r0, =data_027e0074
    ldr r1, [r7, #0xf8]
    ldr r2, [r0, #0x0]
    add r0, r7, #0x154
    bl func_020355d8
    ldr r1, [r7, #0xf8]
    mov r0, #0x30
    ldr r1, [r1, #0x4]
    ldr r3, =data_027e0074
    mul r2, r1, r0
    add r1, r7, #0x394
    ldr r0, [r3, #0x0]
    add r1, r1, #0x400
    bl func_02051f7c
    b @L_02004114
@L_020040f0:
    ldr r0, [r7, #0xf8]
    ldr r1, =data_027e0074
    ldr r3, [r0, #0x4]
    mov r0, #0x30
    mul r2, r3, r0
    add r0, r7, #0x394
    ldr r1, [r1, #0x0]
    add r0, r0, #0x400
    bl func_02051f7c
@L_02004114:
    ldr r0, [r6, #0x8]
    cmp r0, #0x0
    beq @L_02004198
    ldr r0, [r6, #0xc]
    cmp r0, #0x0
    beq @L_02004164
    ldr r1, =data_027e0074
    ldr r0, [r7, #0xfc]
    ldr r1, [r1, #0x0]
    ldr r2, =data_0206e6b0
    bl func_01ff8520
    bl func_020355c8
    mov r6, r0
    bl func_020355b8
    add r1, r7, #0x1000
    ldr r2, [r1, #0x694]
    mov r1, r0
    mov r0, r6
    bl func_02031450
    b @L_02004198
@L_02004164:
    ldr r1, =data_027e0074
    ldr r0, [r7, #0xfc]
    ldr r1, [r1, #0x0]
    ldr r2, =data_0206e6b0
    bl func_01ff8188
    bl func_020355a8
    mov r6, r0
    bl func_02035598
    add r1, r7, #0x1000
    ldr r2, [r1, #0x694]
    mov r1, r0
    mov r0, r6
    bl func_02031450
@L_02004198:
    ldr r0, =0x4000448
    mov r1, #0x1
    str r1, [r0, #0x0]
    add r8, sp, #0x4
    add r6, sp, #0x0
@L_020041ac:
    mov r0, r8
    mov r1, r6
    bl func_0204daa0
    cmp r0, #0x0
    bne @L_020041ac
    ldr r1, [sp, #0x0]
    mov r0, #0x1000
    mov r1, r1, lsl #0x1
    bl func_0204b77c
    ldr r2, [sp, #0x4]
    ldr r1, [sp, #0x8]
    smull r3, r6, r2, r0
    adds r8, r3, #0x800
    ldr r2, [sp, #0xc]
    smull r3, ip, r1, r0
    adc r6, r6, #0x0
    adds lr, r3, #0x800
    mov r1, r8, lsr #0xc
    orr r1, r1, r6, lsl #0x14
    smull r3, r6, r2, r0
    adc ip, ip, #0x0
    adds r2, r3, #0x800
    mov lr, lr, lsr #0xc
    orr lr, lr, ip, lsl #0x14
    add r8, r1, #0x800
    add r3, r7, #0x1000
    adc r1, r6, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r8, [r3, #0x824]
    add r1, lr, #0x800
    str r1, [r3, #0x828]
    add r1, r2, #0x800
    str r1, [r3, #0x82c]
    ldr r6, [r3, #0x824]
    mov r1, #0xff000
    umull lr, ip, r6, r1
    mov r2, #0x0
    adds lr, lr, #0x800
    mla ip, r6, r2, ip
    str r0, [sp, #0x0]
    mov r0, r6, asr #0x1f
    mla ip, r0, r1, ip
    adc r0, ip, #0x0
    mov r1, lr, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r1, asr #0xc
    str r0, [r3, #0x824]
    ldr r6, [r3, #0x828]
    mov r0, #0xbf000
    umull r1, ip, r6, r0
    adds r1, r1, #0x800
    mov lr, r1, lsr #0xc
    mov r1, r6, asr #0x1f
    mla ip, r6, r2, ip
    mla ip, r1, r0, ip
    adc r0, ip, #0x0
    orr lr, lr, r0, lsl #0x14
    mov r0, lr, asr #0xc
    rsb r0, r0, #0xc0
    str r0, [r3, #0x828]
    ldr r6, [r3, #0x82c]
    mov r0, #0x64000
    mov r1, r6, asr #0x1f
    umull lr, ip, r6, r0
    mla ip, r6, r2, ip
    mla ip, r1, r0, ip
    adds r1, lr, #0x800
    adc r0, ip, #0x0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #0x14
    mov r0, r1, asr #0xc
    str r0, [r3, #0x82c]
    ldr r0, [r7, #0xc]
    cmp r0, #0x1
    bhi @L_020042ec
    ldrh r1, [r5, #0x0]
    mov r0, r7
    mov r2, #0x10
    bl func_020049ac
@L_020042ec:
    add r0, r7, #0x64
    add r4, r4, #0x1
    cmp r4, #0xf
    add r7, r0, #0x1800
    blt @L_02003fa8
    ldr r0, =data_0206e6b0
    ldr r1, [r0, #0x0]
    str r1, [r0, #0x4]
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
