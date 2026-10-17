#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004e38();
extern void func_0200a0f8();
extern void func_0201490c();
extern void func_02014cf0();
extern void func_02014e34();
extern char data_0206a2a4[];
extern char data_0206ea14[];
extern char data_020aecfc[];
// clang-format off
asm void func_02005468(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r1, =data_0206ea14
    mov r5, r0
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1800
    ldrh r0, [r0, #0x60]
    cmp r0, #0x0
    ldmnefd sp!, {r3, r4, r5, pc}
    ldr r1, =data_020aecfc
    mov r0, #0xbc
    mla r2, r5, r0, r1
    ldr r0, [r2, #0x58]
    mov r1, r0, lsl #0x19
    movs r1, r1, lsr #0x1f
    ldmeqfd sp!, {r3, r4, r5, pc}
    bic r1, r0, #0x40
    mov r0, #0x5
    str r1, [r2, #0x58]
    bl func_02014cf0
    mov r4, r0
    mov r1, r4
    mov r0, #0x5
    bl func_0201490c
    add r1, r4, #0x40
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x41
    mov r0, #0x3c
    swpb r0, r0, [r1]
    mov r0, r4
    add r2, r4, #0x42
    mov r1, #0x15
    swpb r1, r1, [r2]
    bl func_02014e34
    mov r0, #0x9
    bl func_0200a0f8
    ldr r0, =data_0206a2a4
    mov r1, r5
    bl func_02004e38
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
