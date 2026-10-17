#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02019dc8();
extern void func_02019f94();
extern void func_0201a134();
extern void func_0201a2b4();
extern void func_0201a4a4();
extern void func_0201a6a4();
extern void func_0201aa48();
// clang-format off
asm void func_02021250(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r0, [r4, #0x40]
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_02021364
L_0202126c:
    b L_02021364
    b L_020212c4
    b L_02021300
    b L_0202128c
    b L_020212a8
    b L_020212e8
    b L_02021320
    b L_02021340
L_0202128c:
    add r0, r4, #0x48
    ldmia r0, {r0, r1}
    bl func_02019dc8
    add r1, r4, #0x54
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_020212a8:
    add r0, r4, #0x48
    ldmia r0, {r0, r1}
    bl func_0201a134
    add r1, r4, #0x54
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_020212c4:
    ldrb r2, [r4, #0x50]
    add r0, r4, #0x48
    ldrb r3, [r4, #0x51]
    ldmia r0, {r0, r1}
    bl func_02019f94
    add r1, r4, #0x54
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_020212e8:
    ldrb r0, [r4, #0x56]
    bl func_0201a4a4
    add r1, r4, #0x54
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_02021300:
    ldrb r2, [r4, #0x52]
    add r0, r4, #0x48
    ldmia r0, {r0, r1}
    bl func_0201a6a4
    add r1, r4, #0x54
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_02021320:
    ldrb r2, [r4, #0x56]
    add r0, r4, #0x48
    ldmia r0, {r0, r1}
    bl func_0201a2b4
    add r1, r4, #0x54
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_02021340:
    ldrb r1, [r4, #0x52]
    add r0, r4, #0x48
    str r1, [sp, #0x0]
    ldrb r2, [r4, #0x50]
    ldrb r3, [r4, #0x51]
    ldmia r0, {r0, r1}
    bl func_0201aa48
    add r1, r4, #0x54
    swpb r0, r0, [r1]
L_02021364:
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
