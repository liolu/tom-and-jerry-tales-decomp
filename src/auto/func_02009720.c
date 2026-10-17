#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8000();
// clang-format off
asm void func_02009720(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r0, r1
    mov r1, #0x50
    bl func_01ff8000
    mov r1, #0x0
    str r0, [r4, #0x70]
    mov r2, #0x64
    strh r2, [r0, #0x0]
    ldr r0, [r4, #0x70]
    sub ip, r1, #0x1
    strh r1, [r0, #0x2]
    ldr r0, [r4, #0x70]
    ldr r3, =0xffff
    strh r1, [r0, #0x4]
    ldr r0, [r4, #0x70]
    add r2, r0, #0x7
    swpb r0, r1, [r2]
    ldr r0, [r4, #0x70]
    add r2, r0, #0x6
    swpb r0, r1, [r2]
    ldr r0, [r4, #0x70]
    strh ip, [r0, #0x48]
    ldr r0, [r4, #0x70]
    strh r1, [r0, #0x4a]
    ldr r0, [r4, #0x70]
    strh r3, [r0, #0x4c]
    ldr r0, [r4, #0x70]
    strh r1, [r0, #0x4e]
    ldmfd sp!, {r4, pc}
}
// clang-format on
