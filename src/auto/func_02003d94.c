#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8000();
extern void func_02035458();
extern void func_020364ec();
extern void func_0204d91c();
extern void func_0204d934();
extern void func_02051fd0();
extern char data_02063f9c[];
extern char data_0206ad9c[];
extern char data_0206e6a4[];
extern char data_0206ea1c[];
extern char data_0206fcac[];
// clang-format off
asm void func_02003d94(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    ldr r0, =data_0206fcac
    ldr r2, =0x16ddc
    mov r1, #0x0
    bl func_02051fd0
    ldr r0, =data_0206ea1c
    ldr r2, =0x1290
    mov r1, #0x0
    bl func_02051fd0
    ldr r0, =data_0206e6a4
    bl func_02035458
    mov r7, #0x0
    ldr r8, =data_0206fcac
    ldr r5, =data_0206e6a4
    ldr r4, =0x20bc
    mov r6, r7
L_02003dd4:
    add r1, r8, #0x8
    swpb r0, r6, [r1]
    mov r0, r5
    mov r1, r4
    bl func_01ff8000
    str r0, [r8, #0x108]
    mov r0, r5
    mov r1, r4
    bl func_01ff8000
    str r0, [r8, #0x10c]
    ldr r0, [r8, #0x108]
    bl func_020364ec
    ldr r0, [r8, #0x10c]
    bl func_020364ec
    add r0, r8, #0x64
    add r7, r7, #0x1
    cmp r7, #0xf
    add r8, r0, #0x1800
    blt L_02003dd4
    ldr r2, =0x4000060
    ldr r0, =data_02063f9c
    ldrh r1, [r2, #0x0]
    bic r1, r1, #0x3000
    orr r1, r1, #0x20
    strh r1, [r2, #0x0]
    bl func_0204d91c
    ldr r3, =0x4000060
    ldr r1, =0xffffcffd
    ldrh r2, [r3, #0x0]
    ldr r0, =data_0206ad9c
    and r1, r2, r1
    strh r1, [r3, #0x0]
    bl func_0204d934
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
