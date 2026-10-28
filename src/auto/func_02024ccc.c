#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02002608();
extern void func_02003f98();
extern void func_02026de0();
extern void func_02035164();
extern void func_0203ac7c();
extern void func_020440e8();
extern void G3X_Reset();
extern void G3X_ClearFifo();
extern char data_0206e694[];
extern char data_0206ea14[];
extern char data_0206fd58[];
extern char data_020877d0[];
extern char data_02087df0[];
// clang-format off
asm void func_02024ccc(void) {
    stmfd sp!, {r3, lr}
    bl G3X_ClearFifo
    bl G3X_Reset
    bl func_02002608
    bl func_0203ac7c
    bl func_02003f98
    bl func_02035164
    ldr r1, =0x4000448
    mov r2, #0x1
    ldr r0, =data_0206ea14
    str r2, [r1, #0x0]
    ldr r1, [r0, #0x0]
    ldrb r0, [r1, #0xa]
    cmp r0, #0x0
    bne L_02024dd8
    ldr r0, =data_0206e694
    ldr r2, [r0, #0x0]
    cmp r2, #0x0
    beq L_02024d28
    ldr r0, =data_020877d0
    ldr r0, [r0, #0x34]
    cmp r0, #0x0
    beq L_02024dd8
L_02024d28:
    cmp r2, #0x0
    bne L_02024d60
    add r1, r1, #0x9
    mov ip, #0x1
    swpb r0, ip, [r1]
    ldr r2, =data_0206ea14
    mov r3, #0x0
    ldr r0, [r2, #0x0]
    add r1, r0, #0xa
    swpb r0, ip, [r1]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x1000
    str r3, [r0, #0x7c0]
    b L_02024dd8
L_02024d60:
    ldr r0, =data_020877d0
    ldr r0, [r0, #0x34]
    cmp r0, #0x0
    beq L_02024dd8
    ldr r0, =data_02087df0
    bl func_020440e8
    ldr ip, =data_020877d0
    ldrh r1, [ip, #0x1a]
    subs r0, r1, r0
    bne L_02024dd8
    ldr r2, =data_0206ea14
    mov lr, #0x1
    ldr r0, [r2, #0x0]
    mov r3, #0x0
    add r1, r0, #0x9
    swpb r0, lr, [r1]
    ldr r0, [r2, #0x0]
    add r1, r0, #0xa
    swpb r0, lr, [r1]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x1000
    str r3, [r0, #0x7c0]
    ldr r0, [ip, #0x34]
    cmp r0, #0x0
    beq L_02024dd8
    ldr lr, =data_0206fd58
    add r0, r0, #0xc4
    ldmia r0, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    str r3, [ip, #0x34]
L_02024dd8:
    ldr r0, =0x4000540
    mov r1, #0x3
    str r1, [r0, #0x0]
    bl func_02026de0
    ldmfd sp!, {r3, pc}
}
// clang-format on
