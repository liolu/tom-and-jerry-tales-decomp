#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022714();
extern void func_0203d8d8();
// clang-format off
asm void func_020224f8(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    movs r6, r1
    mov r7, r0
    mov r5, r2
    mov r4, r3
    moveq r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r2, [r7, #0x8]
    ldrb r0, [sp, #0x20]
    add r1, r7, #0x8
    orr r2, r2, #0x80
    cmp r0, #0x0
    swpb r0, r2, [r1]
    beq L_020225a4
    mov r0, r6
    mov r1, r5
    bl func_0203d8d8
    ldr r1, [r5, #0x14]
    ldrb r2, [r7, #0x0]
    ldrb r1, [r5, r1]
    add r3, r7, #0x1
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    add r2, r2, r1, lsr #0x10
    swpb r2, r2, [r3]
    mov r1, r1, lsr #0x10
    ldrb ip, [r7, #0x2]
    add r3, r1, #0x14
    add r2, r7, #0x3
    add r1, ip, r0
    swpb r1, r1, [r2]
    and r1, r3, #0xff
    str r1, [sp, #0x0]
    add r3, r0, #0x14
    ldrb r2, [r7, #0x2]
    ldrb r1, [r7, #0x0]
    mov r0, r7
    sub ip, r2, #0xa
    sub r2, r1, #0xa
    and r1, ip, #0xff
    and r2, r2, #0xff
    and r3, r3, #0xff
    bl func_02022714
L_020225a4:
    cmp r4, #0x0
    beq L_02022680
    ldrb r1, [r7, #0x1]
    ldrb r0, [r7, #0x0]
    sub r0, r1, r0
    mov r0, r0, lsl #0x10
    movs r2, r0, lsr #0x10
    bne L_020225f8
    ldr r0, [r7, #0x2c]
    cmp r0, #0x0
    beq L_020225f8
    ldrb r2, [r0, #0x1]
    cmp r2, #0x0
    bne L_020225f8
    add r1, r7, #0x44
    mov r3, #0x0
    swpb r0, r3, [r1]
    add r2, r7, #0x46
    mov r0, r6
    swpb r1, r3, [r2]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_020225f8:
    ldrb r1, [r7, #0x3]
    ldrb r0, [r7, #0x2]
    sub r0, r1, r0
    mov r0, r0, lsl #0x10
    movs r4, r0, lsr #0x10
    bne L_02022644
    ldr r0, [r7, #0x2c]
    cmp r0, #0x0
    beq L_02022644
    ldrb r4, [r0, #0x0]
    cmp r4, #0x0
    bne L_02022644
    add r1, r7, #0x44
    mov r3, #0x0
    swpb r0, r3, [r1]
    add r2, r7, #0x46
    mov r0, r6
    swpb r1, r3, [r2]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_02022644:
    ldr r0, [r5, #0x4]
    add r3, r7, #0x44
    add r0, r5, r0
    ldrb ip, [r0, #0x1]
    mov r0, r6
    mov r1, r5
    mov ip, ip, asr #0x1
    rsb r2, ip, r2, asr #0x1
    swpb r2, r2, [r3]
    bl func_0203d8d8
    rsb r0, r0, r4, asr #0x1
    mov r0, r0, asr #0x1
    add r1, r7, #0x46
    swpb r0, r0, [r1]
    b L_02022698
L_02022680:
    ldrb r0, [sp, #0x1c]
    add r1, r7, #0x44
    ldrb r2, [sp, #0x18]
    swpb r0, r0, [r1]
    add r1, r7, #0x46
    swpb r0, r2, [r1]
L_02022698:
    str r6, [r7, #0x3c]
    mov r0, r6
    str r5, [r7, #0x40]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
