#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003058();
extern void func_02003aa8();
extern void func_02029970();
extern void func_020312cc();
extern void func_020312e0();
extern void MIi_CpuCopyFast();
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_0206ea1c[];
extern char data_0206ea3c[];
extern char data_0206ea40[];
extern char data_0206ea44[];
// clang-format off
asm void func_02003934(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r3, #0x0
    mov r6, r0
    str r3, [sp, #0x0]
    ldrb r2, [r6, #0x7a]
    mov r1, r6
    mov r0, #0x5
    bl func_02003058
    add r1, r6, #0x48
    bl func_020312e0
    ldr r1, [r6, #0x54]
    mov r0, r6
    bl func_02003aa8
    ldr r3, [r6, #0xc]
    ldr r1, =data_0206ea1c
    mov r4, #0x0
L_02003974:
    ldrb r0, [r1, #0x20]
    cmp r3, r0
    bne L_0200398c
    ldrb r0, [r1, #0x21]
    cmp r0, #0x0
    bne L_02003a44
L_0200398c:
    ldrb r0, [r1, #0x21]
    cmp r0, #0x0
    bne L_02003a34
    mov r0, #0x108
    mul r5, r4, r0
    ldr r1, =data_0206ea3c
    mov r0, #0x0
    add r2, r1, r5
    swpb r1, r3, [r2]
    ldr ip, =data_0206ea1c
    str r0, [sp, #0x0]
    ldrb r2, [r6, #0x7a]
    mov r1, r6
    mov r3, r0
    add r7, ip, r5
    bl func_02003058
    ldr r2, =data_0206e6a4
    add r1, r7, #0x28
    bl func_020312cc
    mov r2, #0x0
    mov r1, r6
    mov r3, r2
    str r2, [sp, #0x0]
    mov r0, #0x1
    bl func_02003058
    add r1, r7, #0x24
    ldr r2, =data_0206e6a4
    bl func_020312cc
    mov r0, r6
    ldr r1, =data_0206e6a4
    ldr r2, =data_0206e698
    bl func_02029970
    add r1, r7, #0x2c
    add r0, r6, #0x29c
    add r0, r0, #0x1400
    mov r2, #0xdc
    bl MIi_CpuCopyFast
    mov r2, #0x1
    ldr r0, =data_0206ea3c+1
    add r1, r0, r5
    swpb r0, r2, [r1]
    b L_02003a44
L_02003a34:
    add r4, r4, #0x1
    cmp r4, #0x12
    add r1, r1, #0x108
    blt L_02003974
L_02003a44:
    mov r0, #0x108
    mul r5, r4, r0
    ldr r0, =data_0206ea44
    ldr r2, =data_0206ea1c
    ldr r0, [r0, r5]
    add r1, r6, #0x100
    str r0, [r6, #0xfc]
    swpb r0, r4, [r1]
    ldr r3, =data_0206ea40
    add r0, r2, r5
    add r1, r6, #0x29c
    ldr r3, [r3, r5]
    add r0, r0, #0x2c
    add r1, r1, #0x1400
    mov r2, #0xdc
    str r3, [r6, #0xf8]
    bl MIi_CpuCopyFast
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
