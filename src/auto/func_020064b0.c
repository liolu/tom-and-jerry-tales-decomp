#include "m2c.h"

extern char data_0206fcac[];
void func_02039d0c(void);
void func_0204b918(void);
void func_0204b94c(void);
void func_0204b980(void);
void func_0204baa0(void);
void func_02059508(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020064b0(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x24
    mov r7, r1
    ldr r4, =data_0206fcac
    ldr r1, =0x1864
    mov r6, r2
    mla r4, r6, r1, r4
    ldrb r3, [r7, #0x8]
    mov r8, r0
    cmp r3, #0x0
    ldrneb r0, [r4, #0x8]
    cmpne r0, #0x0
    ldrne r0, [r7, #0x24]
    cmpne r0, #0xe
    ldrne r0, [r4, #0x24]
    cmpne r0, #0xe
    addeq sp, sp, #0x24
    moveq r0, #0x0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr r9, [r7, #0x58]
    add r0, r4, #0xc4
    ldr r5, [r4, #0x58]
    add r3, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r2, sp, #0xc
    mov r0, r8
    mov r1, r3
    add r5, r9, r5
    bl func_0204b94c
    mov r2, #0x0
    add r0, sp, #0xc
    mov r1, r0
    str r2, [sp, #0x10]
    str r2, [sp, #0x4]
    bl func_0204b980
    cmp r0, #0x32
    add r0, sp, #0xc
    bge L_02006574
    mov r2, #0x10000
    mov r1, r0
    bl func_02039d0c
    add r1, sp, #0xc
    mov r0, r8
    mov r2, r8
    bl func_0204b918
    add sp, sp, #0x24
    mov r0, #0x0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
L_02006574:
    add r1, sp, #0x0
    bl func_0204baa0
    add r0, sp, #0xc
    add r1, sp, #0x0
    bl func_0204b980
    cmp r0, r5
    ldr r0, [r7, #0x64]
    bge L_0200665c
    orr r0, r0, #0x20
    str r0, [r7, #0x64]
    ldr r0, [r4, #0x64]
    add r1, r7, #0x78
    orr r0, r0, #0x20
    str r0, [r4, #0x64]
    ldrb r0, [r4, #0x0]
    add r2, r4, #0x78
    mov r3, #0x0
    swpb r0, r0, [r1]
    ldrb r0, [r7, #0x0]
    swpb r0, r0, [r2]
    ldr r0, [sp, #0x14]
    str r3, [sp, #0x10]
    bl func_02059508
    mov r9, r0
    ldr r0, [sp, #0xc]
    bl func_02059508
    mov r4, r0
    ldr r0, [sp, #0x10]
    bl func_02059508
    add r0, r4, r0
    add r0, r9, r0
    cmp r0, #0x0
    ble L_02006608
    add r0, sp, #0xc
    add r1, sp, #0x0
    bl func_0204baa0
    b L_0200661c
L_02006608:
    mov r1, #0x0
    mov r0, #0x1000
    str r1, [sp, #0x10]
    str r1, [sp, #0x14]
    str r0, [sp, #0xc]
L_0200661c:
    add r0, sp, #0xc
    add r1, sp, #0x0
    bl func_0204b980
    ldrb r1, [r7, #0x0]
    sub r2, r5, r0
    add r0, sp, #0x0
    cmp r1, #0x0
    cmpeq r6, #0x1
    moveq r2, r2, asr #0x1
    add r1, sp, #0xc
    bl func_02039d0c
    add r1, sp, #0xc
    mov r0, r8
    mov r2, r8
    bl func_0204b918
    b L_02006664
L_0200665c:
    bic r0, r0, #0x20
    str r0, [r7, #0x64]
L_02006664:
    mov r0, #0x0
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
