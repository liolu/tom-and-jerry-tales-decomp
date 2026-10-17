#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203bb80();
extern void func_0203cd5c();
extern void func_0203d098();
extern void func_0203dea8();
extern char data_02086dac[];
extern char data_020b8b44[];
// clang-format off
asm void func_0200d090(void) {
    stmfd sp!, {r3, lr}
    bl func_0203dea8
    ldr r2, =data_020b8b44
    mov r1, #0x28
    mla r0, r1, r0, r2
    bl func_0203d098
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x28]
    bl func_0203cd5c
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x50]
    bl func_0203cd5c
    bl func_0203bb80
    ldr r0, =data_02086dac
    mov r2, #0x0
    add r1, r0, #0x2
    swpb r0, r2, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
