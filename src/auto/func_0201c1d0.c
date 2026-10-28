#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02018984();
extern void func_0201c8ec();
extern void func_02030878();
extern void func_02030898();
extern void func_0203b96c();
extern void func_0203c24c();
extern void func_0203fa64();
extern void MIi_CpuCopy16();
extern void _s32_div_f();
extern char data_02087410[];
// clang-format off
asm void func_0201c1d0(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x8
    mov r5, r0
    bl func_02030878
    ands r4, r0, #0xff
    beq L_0201c204
    add r0, sp, #0x4
    add r1, sp, #0x0
    bl func_02030898
    ldr r0, [sp, #0x4]
    str r0, [r5, #0x10]
    ldr r0, [sp, #0x0]
    str r0, [r5, #0x14]
L_0201c204:
    ldrb r0, [r5, #0x35]
    cmp r0, #0x0
    beq L_0201c220
    sub r0, r0, #0x1
    add r1, r5, #0x35
    swpb r0, r0, [r1]
    b L_0201c520
L_0201c220:
    ldr r1, [r5, #0x20]
    ldr r0, [r5, #0x28]
    cmp r1, r0
    ldreq r1, [r5, #0x24]
    ldreq r0, [r5, #0x2c]
    cmpeq r1, r0
    beq L_0201c4a0
    mov r0, #0x0
    bl func_0203b96c
    ldrb r0, [r5, #0x36]
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_0201c400
L_0201c254:
    b L_0201c274
    b L_0201c294
    b L_0201c2d8
    b L_0201c2f8
    b L_0201c33c
    b L_0201c35c
    b L_0201c3a0
    b L_0201c3c0
L_0201c274:
    ldrb r0, [r5, #0x34]
    ldr r1, [r5, #0x24]
    sub r1, r1, r0
    str r1, [r5, #0x24]
    ldr r0, [r5, #0x2c]
    cmp r1, r0
    strlt r0, [r5, #0x24]
    b L_0201c400
L_0201c294:
    ldrb r0, [r5, #0x34]
    ldr r1, [r5, #0x20]
    add r0, r1, r0
    str r0, [r5, #0x20]
    ldrb r0, [r5, #0x34]
    ldr r1, [r5, #0x24]
    sub r0, r1, r0
    str r0, [r5, #0x24]
    ldr r1, [r5, #0x28]
    ldr r0, [r5, #0x20]
    cmp r0, r1
    strgt r1, [r5, #0x20]
    ldr r1, [r5, #0x2c]
    ldr r0, [r5, #0x24]
    cmp r0, r1
    strlt r1, [r5, #0x24]
    b L_0201c400
L_0201c2d8:
    ldrb r0, [r5, #0x34]
    ldr r1, [r5, #0x20]
    add r1, r1, r0
    str r1, [r5, #0x20]
    ldr r0, [r5, #0x28]
    cmp r1, r0
    strgt r0, [r5, #0x20]
    b L_0201c400
L_0201c2f8:
    ldrb r0, [r5, #0x34]
    ldr r1, [r5, #0x20]
    add r0, r1, r0
    str r0, [r5, #0x20]
    ldrb r0, [r5, #0x34]
    ldr r1, [r5, #0x24]
    add r0, r1, r0
    str r0, [r5, #0x24]
    ldr r1, [r5, #0x28]
    ldr r0, [r5, #0x20]
    cmp r0, r1
    strgt r1, [r5, #0x20]
    ldr r1, [r5, #0x2c]
    ldr r0, [r5, #0x24]
    cmp r0, r1
    strgt r1, [r5, #0x24]
    b L_0201c400
L_0201c33c:
    ldrb r0, [r5, #0x34]
    ldr r1, [r5, #0x24]
    add r1, r1, r0
    str r1, [r5, #0x24]
    ldr r0, [r5, #0x2c]
    cmp r1, r0
    strgt r0, [r5, #0x24]
    b L_0201c400
L_0201c35c:
    ldrb r0, [r5, #0x34]
    ldr r1, [r5, #0x20]
    sub r0, r1, r0
    str r0, [r5, #0x20]
    ldrb r0, [r5, #0x34]
    ldr r1, [r5, #0x24]
    add r0, r1, r0
    str r0, [r5, #0x24]
    ldr r1, [r5, #0x28]
    ldr r0, [r5, #0x20]
    cmp r0, r1
    strlt r1, [r5, #0x20]
    ldr r1, [r5, #0x2c]
    ldr r0, [r5, #0x24]
    cmp r0, r1
    strgt r1, [r5, #0x24]
    b L_0201c400
L_0201c3a0:
    ldrb r0, [r5, #0x34]
    ldr r1, [r5, #0x20]
    sub r1, r1, r0
    str r1, [r5, #0x20]
    ldr r0, [r5, #0x28]
    cmp r1, r0
    strlt r0, [r5, #0x20]
    b L_0201c400
L_0201c3c0:
    ldrb r0, [r5, #0x34]
    ldr r1, [r5, #0x20]
    sub r0, r1, r0
    str r0, [r5, #0x20]
    ldrb r0, [r5, #0x34]
    ldr r1, [r5, #0x24]
    sub r0, r1, r0
    str r0, [r5, #0x24]
    ldr r1, [r5, #0x28]
    ldr r0, [r5, #0x20]
    cmp r0, r1
    strlt r1, [r5, #0x20]
    ldr r1, [r5, #0x2c]
    ldr r0, [r5, #0x24]
    cmp r0, r1
    strlt r1, [r5, #0x24]
L_0201c400:
    ldrb r0, [r5, #0x37]
    add r1, r5, #0x37
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldr r3, [r5, #0x10]
    ldr r2, [r5, #0x20]
    ldr r1, [r5, #0x14]
    ldr r0, [r5, #0x24]
    sub r2, r3, r2
    sub r1, r1, r0
    mov r0, r2, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r0, r0, asr #0x10
    mov r1, r1, asr #0x10
    bl func_02018984
    cmp r4, #0x0
    beq L_0201c464
    ldrh r2, [r5, #0x30]
    mul r1, r2, r2
    cmp r0, r1
    bhi L_0201c464
    ldrb r0, [r5, #0x38]
    add r1, r5, #0x38
    add r0, r0, #0x1
    swpb r0, r0, [r1]
L_0201c464:
    ldrsb r3, [r5, #0x0]
    ldr r1, [r5, #0x20]
    ldr r0, [r5, #0x24]
    sub r1, r1, #0x10
    sub r2, r0, #0x10
    mov r0, r3, lsl #0x12
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    mov r0, r5
    bl func_0201c8ec
    b L_0201c520
L_0201c4a0:
    ldrb r2, [r5, #0x38]
    mov r0, #0x64
    ldrb r1, [r5, #0x37]
    smulbb r0, r2, r0
    bl _s32_div_f
    cmp r0, #0x3c
    blt L_0201c4f0
    mov r0, #0x64
    bl func_0203fa64
    mov r1, #0x1
    ldr r0, =data_02087410
    str r1, [r5, #0x1c]
    ldr r1, [r0, #0x30]
    mov r2, #0x4
    add r0, r1, #0xca
    add r1, r1, #0xc2
    add r0, r0, #0x100
    add r1, r1, #0x100
    bl MIi_CpuCopy16
    b L_0201c520
L_0201c4f0:
    mov r0, #0x65
    bl func_0203fa64
    mov r1, #0x2
    ldr r0, =data_02087410
    str r1, [r5, #0x1c]
    ldr r1, [r0, #0x30]
    mov r2, #0x4
    add r0, r1, #0xc6
    add r1, r1, #0xc2
    add r0, r0, #0x100
    add r1, r1, #0x100
    bl MIi_CpuCopy16
L_0201c520:
    ldr r0, [r5, #0x1c]
    and r0, r0, #0xff
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
