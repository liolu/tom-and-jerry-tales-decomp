#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004e38();
extern void func_02006a04();
extern void func_0200a0f8();
extern void func_0201490c();
extern void func_02014cf0();
extern void func_02014e34();
extern char data_0206a2c0[];
extern char data_0206ea14[];
extern char data_020880c0[];
extern char data_020aecfc[];
// clang-format off
asm void func_0200559c(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r1, =data_020aecfc
    mov r4, r0
    mov r0, #0xbc
    mla r2, r4, r0, r1
    ldr r0, [r2, #0x58]
    mov r1, r0, lsl #0x19
    movs r1, r1, lsr #0x1f
    ldmeqfd sp!, {r3, r4, r5, pc}
    bic r1, r0, #0x40
    mov r0, #0xd
    str r1, [r2, #0x58]
    bl func_02014cf0
    mov r5, r0
    mov r1, r5
    mov r0, #0xd
    bl func_0201490c
    add r1, r5, #0x40
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r1, =data_020880c0
    mov r0, #0x8
    ldrb r1, [r1, #0x20]
    strh r1, [r5, #0x28]
    bl func_0200a0f8
    ldr r0, =data_0206a2c0
    mov r1, r4
    bl func_02004e38
    mov r0, r5
    bl func_02014e34
    ldr r1, =data_0206ea14
    mov r0, #0x0
    ldr r1, [r1, #0x0]
    add r1, r1, #0xa0
    bl func_02006a04
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
