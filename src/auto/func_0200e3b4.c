#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200e7f4();
extern void func_0200e978();
extern void func_020150e4();
extern void func_0205918c();
extern char data_0206e6d4[];
extern char data_02087064[];
extern char data_0208708c[];
// clang-format off
asm void func_0200e3b4(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r0, [r10, #0x0]
    mov r9, r2
    and r0, r0, #0xff
    mov r8, r3
    bl func_020150e4
    mov r6, r0
    add r2, r6, #0x3f
    mov r0, #0x0
    swpb r1, r0, [r2]
    add r2, r6, #0x44
    swpb r1, r0, [r2]
    add r2, r6, #0x5a
    swpb r1, r0, [r2]
    add r2, r6, #0x60
    swpb r1, r0, [r2]
    add r2, r10, #0x59
    add r1, r6, #0x4c
    swpb r0, r0, [r1]
    add r1, r6, #0xb
    mov r0, #0xa
    str r0, [r6, #0x0]
    ldrb r0, [r10, #0x157]
    add r3, r6, #0x2e
    swpb r0, r0, [r1]
    add r1, r2, #0x100
    ldrb r4, [r10, #0x158]
    add r0, r6, #0xe
    swpb r2, r4, [r3]
    bl func_0205918c
    ldr r0, [r10, #0x4]
    add r1, r6, #0x58
    str r0, [r6, #0x30]
    ldr r0, [r10, #0x8]
    mov r5, #0x0
    str r0, [r6, #0x34]
    ldr r0, [r10, #0xc]
    add r2, r6, #0x59
    str r0, [r6, #0x38]
    ldr r0, [r10, #0x10]
    mov r7, r5
    strh r0, [r6, #0x3c]
    ldrh r0, [r10, #0x54]
    add r4, r6, #0x4c
    add r11, r10, #0x14
    swpb r0, r0, [r1]
    ldrb r0, [r10, #0x156]
    swpb r0, r0, [r2]
    str r5, [r6, #0x54]
L_0200e47c:
    add r0, r10, r7, lsl #0x4
    ldrsb r0, [r0, #0x14]
    cmp r0, #0x0
    beq L_0200e4c8
    ldrb r0, [r4, #0x0]
    mov r1, r9
    mov r2, r8
    add r3, r0, #0x1
    swpb r3, r3, [r4]
    add r0, r11, r7, lsl #0x4
    bl func_0200e7f4
    cmp r5, #0x0
    streq r0, [r6, #0x50]
    ldr r1, [r6, #0x50]
    mov r0, #0x58
    mla r0, r7, r0, r1
    ldrh r2, [r6, #0xc]
    moveq r5, #0x1
    strh r2, [r0, #0x34]
L_0200e4c8:
    add r0, r7, #0x1
    and r7, r0, #0xff
    cmp r7, #0x4
    blo L_0200e47c
    mov r5, #0x0
    mov r7, r5
    add r4, r6, #0x3f
    add r11, r10, #0x56
L_0200e4e8:
    add r0, r10, r7, lsl #0x4
    ldrsb r0, [r0, #0x56]
    cmp r0, #0x0
    beq L_0200e534
    ldrb r0, [r4, #0x0]
    mov r1, r9
    mov r2, r8
    add r3, r0, #0x1
    swpb r3, r3, [r4]
    add r0, r11, r7, lsl #0x4
    bl func_0200e978
    cmp r5, #0x0
    streq r0, [r6, #0x40]
    ldr r1, [r6, #0x40]
    mov r0, #0x64
    mla r0, r7, r0, r1
    ldrh r2, [r6, #0xc]
    moveq r5, #0x1
    strh r2, [r0, #0x34]
L_0200e534:
    add r0, r7, #0x1
    and r7, r0, #0xff
    cmp r7, #0x4
    blo L_0200e4e8
    mov r5, #0x0
    mov r7, r5
    add r4, r6, #0x44
    add r11, r10, #0x96
L_0200e554:
    add r0, r10, r7, lsl #0x4
    ldrsb r0, [r0, #0x96]
    cmp r0, #0x0
    beq L_0200e5a0
    ldrb r0, [r4, #0x0]
    mov r1, r9
    mov r2, r8
    add r3, r0, #0x1
    swpb r3, r3, [r4]
    add r0, r11, r7, lsl #0x4
    bl func_0200e978
    cmp r5, #0x0
    streq r0, [r6, #0x48]
    ldr r1, [r6, #0x48]
    mov r0, #0x64
    mla r0, r7, r0, r1
    ldrh r2, [r6, #0xc]
    moveq r5, #0x1
    strh r2, [r0, #0x34]
L_0200e5a0:
    add r0, r7, #0x1
    and r7, r0, #0xff
    cmp r7, #0x4
    blo L_0200e554
    mov r5, #0x0
    mov r7, r5
    add r4, r6, #0x5a
    add r11, r10, #0xd6
L_0200e5c0:
    add r0, r10, r7, lsl #0x4
    ldrsb r0, [r0, #0xd6]
    cmp r0, #0x0
    beq L_0200e60c
    ldrb r0, [r4, #0x0]
    mov r1, r9
    mov r2, r8
    add r3, r0, #0x1
    swpb r3, r3, [r4]
    add r0, r11, r7, lsl #0x4
    bl func_0200e978
    cmp r5, #0x0
    streq r0, [r6, #0x5c]
    ldr r1, [r6, #0x5c]
    mov r0, #0x64
    mla r0, r7, r0, r1
    ldrh r2, [r6, #0xc]
    moveq r5, #0x1
    strh r2, [r0, #0x34]
L_0200e60c:
    add r0, r7, #0x1
    and r7, r0, #0xff
    cmp r7, #0x4
    blo L_0200e5c0
    mov r5, #0x0
    add r0, r10, #0x16
    mov r7, r5
    add r4, r6, #0x60
    add r11, r0, #0x100
L_0200e630:
    add r0, r10, r7, lsl #0x4
    add r0, r0, #0x100
    ldrsb r0, [r0, #0x16]
    cmp r0, #0x0
    beq L_0200e680
    ldrb r0, [r4, #0x0]
    mov r1, r9
    mov r2, r8
    add r3, r0, #0x1
    swpb r3, r3, [r4]
    add r0, r11, r7, lsl #0x4
    bl func_0200e978
    cmp r5, #0x0
    streq r0, [r6, #0x64]
    ldr r1, [r6, #0x64]
    mov r0, #0x64
    mla r0, r7, r0, r1
    ldrh r2, [r6, #0xc]
    moveq r5, #0x1
    strh r2, [r0, #0x34]
L_0200e680:
    add r0, r7, #0x1
    and r7, r0, #0xff
    cmp r7, #0x4
    blo L_0200e630
    ldrb r0, [r6, #0xb]
    cmp r0, #0x1
    bne L_0200e6ac
    ldr r1, =data_0208708c
    ldr r0, =data_02087064
    str r6, [r1, #0x0]
    str r6, [r0, #0x0]
L_0200e6ac:
    ldrb r0, [r6, #0x3f]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r6, #0x40]
    ldr r0, [r0, #0x0]
    cmp r0, #0x7
    ldreq r1, [r6, #0x30]
    ldreq r0, =data_0206e6d4
    streq r1, [r0, #0xd0]
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
