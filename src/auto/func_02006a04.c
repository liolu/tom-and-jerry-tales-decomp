#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006b08();
extern void func_02006c10();
extern void func_02033d1c();
extern void VEC_Add();
extern char data_020692e0[];
extern char data_02086a88[];
extern char data_02086aa8[];
extern char data_02086ac0[];
// clang-format off
asm void func_02006a04(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x18
    mov r4, r0
    mov r5, r1
    bl func_02006b08
    cmp r4, #0x0
    cmpne r4, #0x4
    cmpne r4, #0x5
    bne L_02006a34
    ldr r1, =data_02086a88
    mov r0, #0x1
    b L_02006a3c
L_02006a34:
    ldr r1, =data_02086a88
    mov r0, #0x2
L_02006a3c:
    swpb r0, r0, [r1]
    cmp r4, #0x0
    ldrne r0, =data_02086a88
    mov r1, #0x0
    strne r1, [r0, #0x4]
    strne r1, [r0, #0x8]
    bne L_02006a6c
    ldr r0, =data_02086a88
    mvn r2, #0x198
    str r1, [r0, #0x4]
    ldr r1, =0xe66
    str r2, [r0, #0x8]
L_02006a6c:
    str r1, [r0, #0xc]
    add r0, sp, #0xc
    add r2, sp, #0x0
    mov r1, r5
    bl func_02006c10
    ldr r5, =data_02086a88
    mov r9, #0x0
    ldrb r0, [r5, #0x0]
    cmp r0, #0x0
    ble L_02006ae4
    ldr r1, =data_02086ac0
    mov r0, #0xc
    mla r10, r4, r0, r1
    ldr r8, =data_02086aa8
    add r7, sp, #0xc
    add r6, sp, #0x0
L_02006aac:
    ldr r0, [r8, r4, lsl #0x2]
    mov r1, r7
    bl func_02033d1c
    str r0, [r10, r9, lsl #0x2]
    mov r0, r7
    mov r1, r6
    mov r2, r7
    bl VEC_Add
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    ldrb r1, [r5, #0x0]
    mov r9, r0, asr #0x10
    cmp r1, r0, asr #0x10
    bgt L_02006aac
L_02006ae4:
    ldr r0, =data_020692e0
    str r4, [r0, #0x0]
    add sp, sp, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
