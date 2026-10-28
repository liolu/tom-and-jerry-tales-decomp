#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200f97c();
extern void func_0200fa54();
extern void func_0200fa7c();
extern void func_0203d0d8();
extern void func_0203d740();
extern void OS_SetTick();
extern char data_0206a994[];
extern char data_02086fa8[];
extern char data_02086fdc[];
extern char data_020880c0[];
extern char data_020b8be4[];
// clang-format off
asm void func_0200fab8(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x34
    add r0, sp, #0xc
    bl func_0200fa54
    add r0, sp, #0x22
    add r1, sp, #0xc
    mov r2, #0x1
    bl func_0200f97c
    ldr r2, =data_02086fa8
    ldrb r0, [r2, #0x4]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0200ff9c
L_0200faec:
    b L_0200fb00
    b L_0200fbf0
    b L_0200fd08
    b L_0200fe88
    b L_0200ff68
L_0200fb00:
    mov r0, #0x0
    mov r1, r0
    bl OS_SetTick
    ldr r0, =data_020880c0
    ldr r1, =0x88888889
    ldrh r6, [r0, #0x1e]
    mov r2, #0x3c
    ldr ip, =data_02086fa8
    smull r0, r5, r1, r6
    smull r0, r4, r1, r6
    add r5, r6, r5
    mov r3, r6, lsr #0x1f
    add r5, r3, r5, asr #0x5
    smull r0, r1, r2, r5
    sub r5, r6, r0
    add r4, r6, r4
    strh r5, [ip, #0x36]
    mov r2, #0x0
    ldr r1, =data_02086fdc
    add r0, sp, #0x12
    add r4, r3, r4, asr #0x5
    strh r2, [ip, #0x38]
    strh r4, [ip, #0x34]
    bl func_0200f97c
    add r0, sp, #0xc
    bl func_0200fa7c
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8be4
    ldr r3, =data_02086fa8
    str r1, [sp, #0x8]
    ldr r3, [r3, #0x18]
    add r0, sp, #0x12
    mov r1, #0x76
    mov r2, #0x99
    bl func_0203d740
    add r0, sp, #0xc
    bl func_0200fa7c
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8be4
    ldr r3, =data_02086fa8
    str r1, [sp, #0x8]
    ldr r3, [r3, #0x20]
    add r0, sp, #0x22
    mov r1, #0x62
    mov r2, #0x76
    bl func_0203d740
    ldr r0, =data_02086fa8
    mov r3, #0x0
    ldrb r4, [r0, #0x4]
    add r1, r0, #0x4
    add r2, r0, #0x11
    add r0, r4, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x34
    swpb r0, r3, [r2]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0200fbf0:
    add r0, sp, #0xc
    bl func_0200fa7c
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8be4
    ldr r0, =data_02086fa8
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x20]
    add r0, sp, #0x22
    mov r1, #0x62
    mov r2, #0x76
    bl func_0203d740
    ldr r0, =data_020880c0
    ldrh r3, [sp, #0xe]
    ldrh r2, [sp, #0xc]
    mov ip, #0x3c
    ldrh r1, [r0, #0x1e]
    mla r3, r2, ip, r3
    cmp r3, r1
    addlt sp, sp, #0x34
    ldmltfd sp!, {r3, r4, r5, r6, pc}
    ldrh r6, [r0, #0x1c]
    ldr r3, =0x88888889
    ldr lr, =data_02086fa8
    smull r0, r5, r3, r6
    add r5, r6, r5
    mov r2, r6, lsr #0x1f
    add r5, r2, r5, asr #0x5
    smull r0, r1, ip, r5
    sub r5, r6, r0
    smull r0, r4, r3, r6
    add r4, r6, r4
    add r4, r2, r4, asr #0x5
    strh r5, [lr, #0x36]
    ldr r1, =data_02086fdc
    add r0, sp, #0x12
    mov r2, #0x0
    strh r4, [lr, #0x34]
    bl func_0200f97c
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r4, =data_020b8be4
    mov r0, #0x76
    mov r1, #0x99
    mov r2, #0x28
    mov r3, #0xb
    str r4, [sp, #0x8]
    bl func_0203d0d8
    add r0, sp, #0xc
    bl func_0200fa7c
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    mov r1, r4
    str r1, [sp, #0x8]
    ldr r3, =data_02086fa8
    add r0, sp, #0x12
    ldr r3, [r3, #0x18]
    mov r1, #0x76
    mov r2, #0x99
    bl func_0203d740
    ldr r0, =data_02086fa8
    add sp, sp, #0x34
    ldrb r2, [r0, #0x4]
    add r1, r0, #0x4
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0200fd08:
    ldrh r4, [sp, #0xe]
    ldrh r3, [sp, #0xc]
    mov r0, #0x3c
    ldr r1, =data_020880c0
    mla r4, r3, r0, r4
    ldrh r0, [r1, #0x1e]
    subs r0, r4, r0
    bne L_0200fd54
    ldrb r0, [r2, #0x5]
    cmp r0, #0xff
    beq L_0200fd54
    ldr r0, =data_0206a994
    ldr r0, [r0, #0x4]
    cmp r0, #0x0
    moveq r1, #0x1
    ldr r0, =data_0206a994
    movne r1, #0x0
    str r1, [r0, #0x4]
    b L_0200fd60
L_0200fd54:
    ldr r0, =data_0206a994
    mov r1, #0x1
    str r1, [r0, #0x4]
L_0200fd60:
    ldr r0, =data_0206a994
    ldr r0, [r0, #0x4]
    cmp r0, #0x0
    beq L_0200fda4
    add r0, sp, #0xc
    bl func_0200fa7c
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8be4
    ldr r0, =data_02086fa8
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x20]
    add r0, sp, #0x22
    mov r1, #0x62
    mov r2, #0x76
    bl func_0203d740
L_0200fda4:
    ldrh r2, [sp, #0xe]
    ldrh r1, [sp, #0xc]
    mov ip, #0x3c
    ldr r0, =data_020880c0
    mla r2, r1, ip, r2
    ldrh r1, [r0, #0x1c]
    cmp r2, r1
    addlt sp, sp, #0x34
    ldmltfd sp!, {r3, r4, r5, r6, pc}
    ldrh r5, [r0, #0x1a]
    ldr r3, =0x88888889
    ldr lr, =data_02086fa8
    smull r0, r4, r3, r5
    add r4, r5, r4
    mov r2, r5, lsr #0x1f
    add r4, r2, r4, asr #0x5
    smull r0, r1, ip, r4
    sub r4, r5, r0
    smull r0, ip, r3, r5
    add ip, r5, ip
    add ip, r2, ip, asr #0x5
    strh r4, [lr, #0x36]
    ldr r1, =data_02086fdc
    add r0, sp, #0x12
    mov r2, #0x0
    strh ip, [lr, #0x34]
    bl func_0200f97c
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr ip, =data_020b8be4
    mov r0, #0x76
    mov r1, #0x99
    mov r2, #0x28
    mov r3, #0xb
    str ip, [sp, #0x8]
    bl func_0203d0d8
    add r0, sp, #0xc
    bl func_0200fa7c
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8be4
    ldr r3, =data_02086fa8
    str r1, [sp, #0x8]
    ldr r3, [r3, #0x18]
    add r0, sp, #0x12
    mov r1, #0x76
    mov r2, #0x99
    bl func_0203d740
    ldr r0, =data_02086fa8
    add sp, sp, #0x34
    ldrb r2, [r0, #0x4]
    add r1, r0, #0x4
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0200fe88:
    ldrb r0, [r2, #0x5]
    cmp r0, #0xff
    beq L_0200feb0
    ldr r0, =data_0206a994
    ldr r0, [r0, #0x4]
    cmp r0, #0x0
    moveq r1, #0x1
    movne r1, #0x0
    ldr r0, =data_0206a994
    b L_0200feb8
L_0200feb0:
    ldr r0, =data_0206a994
    mov r1, #0x1
L_0200feb8:
    str r1, [r0, #0x4]
    ldr r0, =data_0206a994
    ldr r0, [r0, #0x4]
    cmp r0, #0x0
    beq L_0200ff00
    add r0, sp, #0xc
    bl func_0200fa7c
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8be4
    ldr r0, =data_02086fa8
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x20]
    add r0, sp, #0x22
    mov r1, #0x62
    mov r2, #0x76
    bl func_0203d740
L_0200ff00:
    ldrh r3, [sp, #0xe]
    ldrh r2, [sp, #0xc]
    mov r0, #0x3c
    ldr r1, =data_020880c0
    mla r3, r2, r0, r3
    ldrh r0, [r1, #0x1a]
    cmp r3, r0
    addlt sp, sp, #0x34
    ldmltfd sp!, {r3, r4, r5, r6, pc}
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr ip, =data_020b8be4
    mov r0, #0x76
    mov r1, #0x99
    mov r2, #0x28
    mov r3, #0xb
    str ip, [sp, #0x8]
    bl func_0203d0d8
    ldr r0, =data_02086fa8
    add sp, sp, #0x34
    ldrb r2, [r0, #0x4]
    add r1, r0, #0x4
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0200ff68:
    add r0, sp, #0xc
    bl func_0200fa7c
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8be4
    ldr r0, =data_02086fa8
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x20]
    add r0, sp, #0x22
    mov r1, #0x62
    mov r2, #0x76
    bl func_0203d740
L_0200ff9c:
    add sp, sp, #0x34
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
