#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200cbb0();
extern void func_0200d0e0();
extern void func_02021680();
extern void func_020222b8();
extern void func_02022354();
extern void func_0203f930();
extern void func_0203f948();
extern void func_0203fa64();
extern void func_0203ff1c();
extern void func_02040094();
extern void func_02040228();
extern char data_02086dac[];
extern char data_02086dbc[];
// clang-format off
asm void func_0200d9f8(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_02086dac
    ldrb r0, [r0, #0x0]
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    ldmfd sp!, {r4, pc}
L_0200da10:
    b L_0200da30
    b L_0200da6c
    b L_0200da74
    ldmfd sp!, {r4, pc}
    b L_0200da64
    ldmfd sp!, {r4, pc}
    ldmfd sp!, {r4, pc}
    b L_0200da7c
L_0200da30:
    mov r0, #0x0
    bl func_0203f930
    bl func_0203f948
    mov r0, #0x0
    bl func_0203fa64
    ldr ip, =data_02086dac
    mov r3, #0x4
    swpb r3, r3, [ip]
    mov r0, #0x0
    mov r1, #0x8
    mov r2, #0x3
    bl func_020222b8
    ldmfd sp!, {r4, pc}
L_0200da64:
    bl func_0200cbb0
    ldmfd sp!, {r4, pc}
L_0200da6c:
    bl func_0200d0e0
    ldmfd sp!, {r4, pc}
L_0200da74:
    bl func_02021680
    ldmfd sp!, {r4, pc}
L_0200da7c:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    ldmeqfd sp!, {r4, pc}
    bl func_02040228
    mov r4, r0
    ldr r0, [r4, #0x1c]
    ldr r2, =data_02086dbc
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    ldmfd sp!, {r4, pc}
}
// clang-format on
