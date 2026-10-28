#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004ba8();
extern void func_02004c8c();
extern void func_02004cd0();
extern void func_02037384();
extern void func_02039d0c();
extern void func_0203a58c();
extern void func_0203a95c();
extern void MTX_MultVec33();
extern void VEC_Add();
extern void VEC_Subtract();
extern void VEC_DotProduct();
extern void abs();
extern char data_020692ec[];
extern char data_020a0f48[];
extern char data_020a2e8c[];
// clang-format off
asm void func_02006678(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x68
    mov r8, r1
    ldr r1, [r8, #0x64]
    mov r11, r2
    bic r1, r1, #0x10
    str r1, [r8, #0x64]
    ldr r1, [r8, #0x74]
    mov r3, #0x0
    bic r1, r1, #0x1
    add r2, r8, #0x79
    str r1, [r8, #0x74]
    swpb r1, r3, [r2]
    mov r9, r0
    sub r1, r3, #0x1
    strh r1, [r8, #0x68]
    ldr r1, [r8, #0x74]
    add r2, r11, r11, lsl #0x1
    bic r0, r1, #0x2
    str r0, [r8, #0x74]
    ldr r1, [r9, #0x4]
    ldr r0, =data_020692ec
    add r1, r1, r11
    str r1, [r9, #0x4]
    ldr r0, [r0, #0x0]
    ldr r1, [r9, #0x0]
    cmp r0, #0x0
    sub r0, r1, r2
    str r0, [sp, #0xc]
    add r0, r1, r2
    str r0, [sp, #0x8]
    beq L_020066fc
    bl func_02004ba8
L_020066fc:
    ldr r0, =data_020a0f48
    mov r6, #0x0
    ldrh r0, [r0, #0x0]
    cmp r0, #0x0
    ble L_02006924
    add r0, r8, #0x79
    str r0, [sp, #0x14]
    mvn r0, #0x0
    ldr r7, =data_020a2e8c
    str r0, [sp, #0x10]
L_02006724:
    ldr r1, [r7, #0x8]
    ldr r0, [sp, #0xc]
    cmp r1, r0
    blt L_0200690c
    ldr r1, [r7, #0x4]
    ldr r0, [sp, #0x8]
    cmp r1, r0
    bgt L_02006924
    ldr r0, [r7, #0x0]
    ldrh r10, [r0, #0x34]
    mov r0, r10, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_0203a95c
    mov r4, r0
    ldrsh r0, [r4, #0x0]
    ldr r1, [sp, #0x10]
    cmp r0, r1
    beq L_0200690c
    bl func_0203a58c
    ldrh r0, [r4, #0xa4]
    cmp r0, #0x0
    ldrne r0, [r4, #0xa8]
    cmpne r0, #0x0
    beq L_0200690c
    ldr r5, [r7, #0x0]
    add r1, sp, #0x5c
    str r1, [sp, #0x0]
    add r1, sp, #0x18
    str r1, [sp, #0x4]
    mov r0, r9
    mov r1, r11
    mov r2, r5
    add r3, sp, #0x4c
    bl func_02037384
    cmp r0, #0x0
    beq L_0200690c
    ldr r1, [sp, #0x50]
    ldr r0, =0x708
    cmp r1, r0
    ble L_020067d4
    ldr r0, [r8, #0x74]
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    str r0, [r8, #0x74]
L_020067d4:
    ldr r0, [sp, #0x50]
    bl abs
    cmp r0, #0x3e8
    ldrlt r0, [r8, #0x74]
    mov r1, #0x1
    orrlt r0, r0, #0x2
    strlt r0, [r8, #0x74]
    ldr r0, [sp, #0x14]
    swpb r1, r1, [r0]
    ldrsh r0, [r4, #0x0]
    bl func_0203a58c
    bl func_02004c8c
    mov r1, r10
    mov r2, r8
    mov r10, r0
    bl func_02004cd0
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_0200690c
    ldr r0, [r4, #0x58]
    mov r0, r0, lsl #0x19
    movs r0, r0, lsr #0x1f
    cmpne r10, #0x4d
    cmpne r10, #0x4e
    cmpne r10, #0x50
    cmpne r10, #0x4f
    cmpne r10, #0x4a
    cmpne r10, #0x4b
    cmpne r10, #0x4c
    cmpne r10, #0x49
    cmpne r10, #0x2e
    cmpne r10, #0x3d
    cmpne r10, #0x34
    cmpne r10, #0x39
    cmpne r10, #0x45
    cmpne r10, #0x42
    cmpne r10, #0x5b
    beq L_0200690c
    ldr r1, [sp, #0x4c]
    ldr r0, [sp, #0x50]
    str r1, [sp, #0x28]
    ldr r1, [sp, #0x54]
    str r0, [sp, #0x2c]
    str r1, [sp, #0x30]
    ldr r1, [r5, #0x4]
    mov r0, r9
    add r2, sp, #0x40
    bl VEC_Subtract
    ldr r0, [r5, #0x10]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    beq L_020068c8
    ldr r1, [r5, #0x0]
    add r0, r5, #0x14
    add r2, sp, #0x1c
    bl MTX_MultVec33
    add r0, sp, #0x40
    add r1, sp, #0x1c
    mov r2, r0
    bl VEC_Subtract
L_020068c8:
    add r0, sp, #0x40
    add r1, sp, #0x28
    bl VEC_DotProduct
    cmp r0, #0x0
    add r0, sp, #0x28
    add r1, sp, #0x34
    bge L_020068f4
    ldr r2, [sp, #0x18]
    rsb r2, r2, #0x0
    bl func_02039d0c
    b L_020068fc
L_020068f4:
    ldr r2, [sp, #0x18]
    bl func_02039d0c
L_020068fc:
    mov r0, r9
    add r1, sp, #0x34
    mov r2, r9
    bl VEC_Add
L_0200690c:
    ldr r0, =data_020a0f48
    add r6, r6, #0x1
    ldrh r0, [r0, #0x0]
    add r7, r7, #0xc
    cmp r6, r0
    blt L_02006724
L_02006924:
    ldr r1, [r9, #0x4]
    mov r0, #0x0
    sub r1, r1, r11
    str r1, [r9, #0x4]
    add sp, sp, #0x68
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
