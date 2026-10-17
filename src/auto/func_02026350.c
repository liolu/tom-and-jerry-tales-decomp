#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004e98();
extern void func_0201d5c0();
extern void func_0201d654();
extern void func_0201d6cc();
extern void func_0201d72c();
extern void func_0201d7a4();
extern void func_0201d878();
extern void func_0201d8d4();
extern void func_0201d948();
extern void func_0201d9a4();
extern void func_0201d9e4();
extern void func_0201da40();
extern void func_0201da60();
extern void func_02026cf4();
extern char data_0206b918[];
extern char data_0206b928[];
extern char data_0206b930[];
extern char data_0206b93c[];
extern char data_0206b964[];
extern char data_0206b984[];
extern char data_0206b994[];
extern char data_0206c2bc[];
extern char data_0206c2c8[];
extern char data_0206c2d4[];
extern char data_0206e6d4[];
// clang-format off
asm void func_02026350(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    ldr r0, =data_0206b918
    mov r2, #0x0
    ldrb r0, [r0, #0x0]
    mov r4, r2
    cmp r0, #0x8
    addls pc, pc, r0, lsl #0x2
    b L_02026808
L_02026374:
    b L_02026398
    b L_02026460
    b L_02026518
    b L_020265dc
    b L_02026694
    b L_02026808
    b L_02026808
    b L_02026808
    b L_0202674c
L_02026398:
    mov r4, #0x1
    mov r1, #0x800
    add r2, r4, #0x3180
    add r0, r1, #0x41
    ldr r7, =data_0206e6d4
    ldr r6, =0x66666667
    mov r9, r4
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r5, #0x5
L_020263c4:
    ldrh r0, [r7, #0x5c]
    mov r0, r0, lsl #0x1d
    add r2, r9, r0, lsr #0x1d
    mov r0, r2, lsr #0x1f
    smull r1, r3, r6, r2
    add r3, r0, r3, asr #0x1
    smull r0, r1, r5, r3
    sub r3, r2, r0
    and r8, r3, #0xff
    mov r0, r8
    bl func_0201d5c0
    cmp r0, #0x0
    bne L_0202644c
    mov r0, r8
    bl func_0201d8d4
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206b994
    ldrh r1, [r0, #0x5c]
    ldr r0, [r2, r8, lsl #0x2]
    mov r1, r1, lsl #0x1d
    mov r1, r1, lsr #0x1d
    ldr r1, [r2, r1, lsl #0x2]
    bl func_02026cf4
    ldr r0, =data_0206e6d4
    and r2, r8, #0x7
    ldrh r3, [r0, #0x5c]
    add r1, r0, #0x50
    bic r3, r3, #0x7
    orr r2, r3, r2
    strh r2, [r0, #0x5c]
    ldrb r0, [r0, #0x50]
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    b L_02026808
L_0202644c:
    add r0, r9, #0x1
    and r9, r0, #0xff
    cmp r9, #0x5
    bls L_020263c4
    b L_02026808
L_02026460:
    ldr r2, =0xffffecfe
    mov r4, #0x1
    add r0, r2, #0x1000
    mov r1, #0x800
    ldr r7, =data_0206e6d4
    mov r5, r4
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    str r0, [sp, #0x8]
L_02026484:
    ldrh r0, [r7, #0x5c]
    mov r0, r0, lsl #0x1a
    add r0, r5, r0, lsr #0x1d
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1e
    add r0, r1, r0, ror #0x1e
    and r6, r0, #0xff
    mov r0, r6
    bl func_0201d654
    cmp r0, #0x0
    bne L_02026504
    mov r0, r6
    bl func_0201d948
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206b964
    ldrh r1, [r0, #0x5c]
    ldr r0, [r2, r6, lsl #0x2]
    mov r1, r1, lsl #0x1a
    mov r1, r1, lsr #0x1d
    ldr r1, [r2, r1, lsl #0x2]
    bl func_02026cf4
    ldr r0, =data_0206e6d4
    mov r2, r6, lsl #0x1d
    ldrh r3, [r0, #0x5c]
    add r1, r0, #0x50
    bic r3, r3, #0x38
    orr r2, r3, r2, lsr #0x1a
    strh r2, [r0, #0x5c]
    ldrb r0, [r0, #0x50]
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    b L_02026808
L_02026504:
    add r0, r5, #0x1
    and r5, r0, #0xff
    cmp r5, #0x4
    bls L_02026484
    b L_02026808
L_02026518:
    mov r1, #0x800
    sub r0, r1, #0x3400
    mov r4, #0x1
    mov r2, #0x4900
    ldr r7, =data_0206e6d4
    ldr r6, =0x55555556
    mov r8, r4
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r5, #0x3
L_02026544:
    ldrh r0, [r7, #0x5c]
    mov r0, r0, lsl #0x18
    add r2, r8, r0, lsr #0x1e
    smull r0, r1, r6, r2
    add r1, r1, r2, lsr #0x1f
    smull r0, r1, r5, r1
    sub r1, r2, r0
    and r9, r1, #0xff
    mov r0, r9
    bl func_0201d6cc
    cmp r0, #0x0
    bne L_020265c8
    mov r0, r9
    bl func_0201d9a4
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206b930
    ldrh r1, [r0, #0x5c]
    ldr r0, [r2, r9, lsl #0x2]
    mov r1, r1, lsl #0x18
    mov r1, r1, lsr #0x1e
    ldr r1, [r2, r1, lsl #0x2]
    bl func_02026cf4
    ldr r0, =data_0206e6d4
    mov r2, r9, lsl #0x1e
    ldrh r3, [r0, #0x5c]
    add r1, r0, #0x50
    bic r3, r3, #0xc0
    orr r2, r3, r2, lsr #0x18
    strh r2, [r0, #0x5c]
    ldrb r0, [r0, #0x50]
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    b L_02026808
L_020265c8:
    add r0, r8, #0x1
    and r8, r0, #0xff
    cmp r8, #0x3
    bls L_02026544
    b L_02026808
L_020265dc:
    mov r1, #0x800
    sub r2, r2, #0x8c00
    sub r0, r1, #0x2200
    mov r4, #0x1
    ldr r7, =data_0206e6d4
    mov r5, r4
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    str r0, [sp, #0x8]
L_02026600:
    ldrh r0, [r7, #0x5c]
    mov r0, r0, lsl #0x16
    add r0, r5, r0, lsr #0x1e
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1e
    add r0, r1, r0, ror #0x1e
    and r6, r0, #0xff
    mov r0, r6
    bl func_0201d72c
    cmp r0, #0x0
    bne L_02026680
    mov r0, r6
    bl func_0201d9e4
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206b984
    ldrh r1, [r0, #0x5c]
    ldr r0, [r2, r6, lsl #0x2]
    mov r1, r1, lsl #0x16
    mov r1, r1, lsr #0x1e
    ldr r1, [r2, r1, lsl #0x2]
    bl func_02026cf4
    ldr r0, =data_0206e6d4
    mov r2, r6, lsl #0x1e
    ldrh r3, [r0, #0x5c]
    add r1, r0, #0x50
    bic r3, r3, #0x300
    orr r2, r3, r2, lsr #0x16
    strh r2, [r0, #0x5c]
    ldrb r0, [r0, #0x50]
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    b L_02026808
L_02026680:
    add r0, r5, #0x1
    and r5, r0, #0xff
    cmp r5, #0x4
    bls L_02026600
    b L_02026808
L_02026694:
    mov r4, #0x1
    rsb r2, r4, #0xc40
    mov r1, #0x800
    mov r0, #0x400
    ldr r7, =data_0206e6d4
    mov r5, r4
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    str r0, [sp, #0x8]
L_020266b8:
    ldrh r0, [r7, #0x5c]
    mov r0, r0, lsl #0x15
    add r0, r5, r0, lsr #0x1f
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1f
    add r0, r1, r0, ror #0x1f
    and r6, r0, #0xff
    mov r0, r6
    bl func_0201d7a4
    cmp r0, #0x0
    bne L_02026738
    mov r0, r6
    bl func_0201da40
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206b928
    ldrh r1, [r0, #0x5c]
    ldr r0, [r2, r6, lsl #0x2]
    mov r1, r1, lsl #0x15
    mov r1, r1, lsr #0x1f
    ldr r1, [r2, r1, lsl #0x2]
    bl func_02026cf4
    ldr r0, =data_0206e6d4
    mov r2, r6, lsl #0x1f
    ldrh r3, [r0, #0x5c]
    add r1, r0, #0x50
    bic r3, r3, #0x400
    orr r2, r3, r2, lsr #0x15
    strh r2, [r0, #0x5c]
    ldrb r0, [r0, #0x50]
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    b L_02026808
L_02026738:
    add r0, r5, #0x1
    and r5, r0, #0xff
    cmp r5, #0x2
    bls L_020266b8
    b L_02026808
L_0202674c:
    mov r4, #0x1
    mov r1, #0xa300
    mov r0, #0x800
    ldr r7, =data_0206e6d4
    ldr r6, =0x55555556
    mov r8, r4
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    str r2, [sp, #0x8]
    mov r5, #0x3
L_02026774:
    ldrh r0, [r7, #0x5c]
    mov r0, r0, lsl #0x13
    add r2, r8, r0, lsr #0x1e
    smull r0, r1, r6, r2
    add r1, r1, r2, lsr #0x1f
    smull r0, r1, r5, r1
    sub r1, r2, r0
    and r9, r1, #0xff
    mov r0, r9
    bl func_0201d878
    cmp r0, #0x0
    bne L_020267f8
    mov r0, r9
    bl func_0201da60
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206b93c
    ldrh r1, [r0, #0x5c]
    ldr r0, [r2, r9, lsl #0x2]
    mov r1, r1, lsl #0x13
    mov r1, r1, lsr #0x1e
    ldr r1, [r2, r1, lsl #0x2]
    bl func_02026cf4
    ldr r0, =data_0206e6d4
    mov r2, r9, lsl #0x1e
    ldrh r3, [r0, #0x5c]
    add r1, r0, #0x50
    bic r3, r3, #0x1800
    orr r2, r3, r2, lsr #0x13
    strh r2, [r0, #0x5c]
    ldrb r0, [r0, #0x50]
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    b L_02026808
L_020267f8:
    add r0, r8, #0x1
    and r8, r0, #0xff
    cmp r8, #0x3
    bls L_02026774
L_02026808:
    cmp r4, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr r0, =data_0206c2bc
    add r1, sp, #0x0
    bl func_02004e98
    ldr r0, =data_0206c2c8
    add r1, sp, #0x0
    bl func_02004e98
    ldr r0, =data_0206c2d4
    add r1, sp, #0x0
    bl func_02004e98
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
