#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02009f28();
extern void func_02009f7c();
extern void func_0203b12c();
extern void func_0203f320();
extern void func_0203f330();
extern void func_0203f34c();
extern void DC_FlushRange();
extern void MIi_CpuCopy32();
extern char data_0206a34c[];
extern char data_02086c40[];
extern char data_02086c80[];
extern char data_020b7fe0[];
extern char func_02009df0[];
// clang-format off
asm void func_02009e74(void) {
    stmfd sp!, {r3, lr}
    bl func_0203f320
    cmp r0, #0x4
    ldmnefd sp!, {r3, pc}
    bl func_0203b12c
    cmp r0, #0x0
    beq L_02009ea0
    mov r0, #0x1
    bl func_0203f34c
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
L_02009ea0:
    ldr r0, =data_0206a34c
    ldr r0, [r0, #0x4]
    bl func_02009f28
    ldr r0, =data_02086c80
    ldr r1, =data_02086c40
    mov r2, #0x40
    bl MIi_CpuCopy32
    ldr r0, =data_02086c40
    mov r1, #0x40
    bl DC_FlushRange
    ldr r0, =data_02086c40
    ldr r2, =func_02009df0
    mov r1, #0x40
    bl func_0203f330
    cmp r0, #0x0
    bne L_02009f00
    ldr r0, =data_020b7fe0
    ldrh r1, [r0, #0x0]
    add r1, r1, #0x1
    strh r1, [r0, #0x0]
    ldrh r0, [r0, #0x0]
    cmp r0, #0x96
    blo L_02009f00
    bl func_02009f7c
L_02009f00:
    ldr r0, =data_0206a34c
    mov r2, #0x0
    ldr r1, [r0, #0x4]
    swpb r0, r2, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
