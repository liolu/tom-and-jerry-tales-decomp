#include "m2c.h"

void func_0203d740(void);
void func_0203d8d8(void);
void func_0203e724(void);
void func_0203e818(void);
void func_02051a48(void);
void func_02052064(void);
void func_02059264(void);
extern char data_020b8b44[];
// clang-format off
asm void func_0203e898(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x228
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x250]
    str r2, [sp, #0x14]
    str r0, [sp, #0x250]
    ldr r0, [sp, #0x254]
    movs r10, r1
    str r0, [sp, #0x254]
    ldr r0, [sp, #0x260]
    mov r9, r3
    str r0, [sp, #0x260]
    ldr r0, [sp, #0x268]
    ldr r8, [sp, #0x258]
    ldr r7, [sp, #0x25c]
    ldr r11, [sp, #0x264]
    str r0, [sp, #0x268]
    mov r5, #0x0
    bne L_0203e8e8
    bl func_02051a48
L_0203e8e8:
    ldr r2, =data_020b8b44
    ldr r0, [sp, #0x10]
    mov r1, #0x28
    mla r1, r0, r1, r2
    ldr r0, [sp, #0x260]
    str r1, [sp, #0x1c]
    and r0, r0, #0xff
    str r0, [sp, #0x20]
    mvn r0, #0x0
    add r4, sp, #0x128
    str r0, [sp, #0x24]
L_0203e914:
    ldrsb r0, [r10], #0x1
    cmp r0, #0x20
    beq L_0203e914
    sub r10, r10, #0x1
    ldr r1, [sp, #0x250]
    mov r0, r10
    mov r2, r7
    bl func_0203e724
    movs r6, r0
    ldreqsb r0, [r10, #0x0]
    cmpeq r0, #0x0
    addeq sp, sp, #0x228
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    add r1, sp, #0x28
    mov r2, r6
    bl func_02052064
    ldr r1, [sp, #0x268]
    ldr r0, [sp, #0x24]
    cmp r1, r0
    add r0, sp, #0x28
    add r1, r0, r6
    mov r0, #0x0
    swpb r0, r0, [r1]
    beq L_0203e9c0
    ldr r0, [sp, #0x268]
    add r1, r5, r6
    cmp r0, r1
    bge L_0203e9c0
    sub r0, r0, r5
    str r0, [sp, #0x18]
    ldr r2, [sp, #0x18]
    mov r0, r10
    mov r1, r4
    bl func_02052064
    ldr r0, [sp, #0x18]
    add r1, r4, r0
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r0, r10
    bl func_02059264
    add r10, r10, r0
    b L_0203e9e0
L_0203e9c0:
    mov r0, r10
    mov r1, r4
    mov r2, r6
    bl func_02052064
    add r1, r4, r6
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r10, r10, r6
L_0203e9e0:
    add r5, r5, r6
    cmp r8, #0x0
    beq L_0203ea00
    cmp r8, #0x1
    beq L_0203ea28
    cmp r8, #0x2
    beq L_0203ea54
    b L_0203ea90
L_0203ea00:
    ldr r0, [sp, #0x20]
    mov r2, r9
    stmia sp, {r0, r11}
    ldr r0, [sp, #0x1c]
    mov r3, r7
    str r0, [sp, #0x8]
    ldr r1, [sp, #0x14]
    mov r0, r4
    bl func_0203d740
    b L_0203ea90
L_0203ea28:
    str r9, [sp, #0x0]
    str r7, [sp, #0x4]
    ldr r0, [sp, #0x260]
    mov r1, r4
    str r0, [sp, #0x8]
    str r11, [sp, #0xc]
    ldr r0, [sp, #0x10]
    ldr r3, [sp, #0x14]
    add r2, sp, #0x28
    bl func_0203e818
    b L_0203ea90
L_0203ea54:
    mov r0, r4
    mov r1, r7
    bl func_0203d8d8
    ldr r1, [sp, #0x20]
    mov r2, r9
    stmia sp, {r1, r11}
    ldr r1, [sp, #0x1c]
    mov r3, r7
    str r1, [sp, #0x8]
    ldr r1, [sp, #0x14]
    sub r0, r1, r0
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r4
    bl func_0203d740
L_0203ea90:
    ldr r0, [sp, #0x254]
    add r0, r9, r0
    mov r0, r0, lsl #0x10
    mov r9, r0, lsr #0x10
    ldrsb r0, [r10, #0x0]
    cmp r0, #0xa
    addeq r10, r10, #0x1
    b L_0203e914
    add sp, sp, #0x228
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
