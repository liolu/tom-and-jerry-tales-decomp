#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02064110[];
extern char data_0206acc8[];
// clang-format off
asm void func_020118b0(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0xc
    mov lr, r0
    add r1, lr, #0x2c
    mov r2, #0x0
    swpb r0, r2, [r1]
    add ip, sp, #0x0
    ldr r0, =data_0206acc8
    str r2, [lr, #0x28]
    ldr r1, [r0, #0x0]
    ldr r0, =data_02064110
    str r1, [lr, #0x30]
    strh r2, [lr, #0x18]
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    add r3, lr, #0x1c
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, lr, #0xc
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldmia ip, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    add sp, sp, #0xc
    ldmfd sp!, {pc}
}
// clang-format on
