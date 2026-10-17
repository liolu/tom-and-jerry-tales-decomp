#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020312cc();
extern void func_02040df4();
// clang-format off
asm void func_02040d5c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    add r3, sp, #0x4
    mov r6, r2
    mov r4, r0
    mov r7, r1
    ldmia r6, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r4
    add r1, sp, #0x0
    mov r2, r6
    mov r4, #0x0
    bl func_020312cc
    mov r5, r0
    ldr r3, [sp, #0x0]
    cmp r5, #0x0
    mov r0, r3
    ble L_02040de0
    mov r8, r4
L_02040da8:
    ldrsb r1, [r3, r4]
    add r2, r3, r4
    cmp r1, #0xa
    addne r4, r4, #0x1
    bne L_02040dd8
    swpb r1, r8, [r2]
    mov r2, r6
    mov r1, r7
    bl func_02040df4
    ldr r3, [sp, #0x0]
    add r4, r4, #0x1
    add r0, r3, r4
L_02040dd8:
    cmp r4, r5
    blt L_02040da8
L_02040de0:
    add r0, sp, #0x4
    ldmia r0, {r0, r1, r2}
    stmia r6, {r0, r1, r2}
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
