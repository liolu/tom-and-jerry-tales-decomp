#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020306c0();
extern void func_020306fc();
// clang-format off
asm void func_02008234(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r0, #0x5
    mov r4, r1
    bl func_020306c0
    cmp r0, #0x0
    beq L_02008264
    ldrh r0, [r5, #0xea]
    mov r6, #0x1
    add r0, r0, #0x5
    strh r0, [r5, #0xea]
    b L_020082a8
L_02008264:
    mov r0, #0x4
    bl func_020306c0
    cmp r0, #0x0
    beq L_02008288
    ldrh r0, [r5, #0xea]
    mov r6, #0x1
    sub r0, r0, #0x5
    strh r0, [r5, #0xea]
    b L_020082a8
L_02008288:
    mov r0, #0x6
    bl func_020306c0
    cmp r0, #0x0
    movne r6, #0x1
    bne L_020082a8
    mov r0, #0x7
    bl func_020306c0
    mov r6, #0x0
L_020082a8:
    mov r0, #0x9
    bl func_020306fc
    cmp r0, #0x0
    beq L_020082f8
    and r0, r4, #0x7
    add r0, r0, r0, lsl #0x1
    add r0, r5, r0
    add r2, r0, #0x1000
    add r0, r2, #0x48
    add r1, r0, #0x800
    mov r0, #0x4
    swpb r0, r0, [r1]
    add r0, r2, #0x49
    ldrh r3, [r5, #0xea]
    add r1, r0, #0x800
    add r2, r2, #0x4a
    swpb r0, r3, [r1]
    add r1, r2, #0x800
    swpb r0, r4, [r1]
    ldmfd sp!, {r4, r5, r6, pc}
L_020082f8:
    and r0, r4, #0x7
    cmp r6, #0x0
    add r0, r0, r0, lsl #0x1
    beq L_02008340
    add r0, r5, r0
    add r2, r0, #0x1000
    add r0, r2, #0x48
    add r1, r0, #0x800
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r0, r2, #0x49
    ldrh r3, [r5, #0xea]
    add r1, r0, #0x800
    add r2, r2, #0x4a
    swpb r0, r3, [r1]
    add r1, r2, #0x800
    swpb r0, r4, [r1]
    ldmfd sp!, {r4, r5, r6, pc}
L_02008340:
    add r0, r5, r0
    add r2, r0, #0x1000
    add r0, r2, #0x48
    add r1, r0, #0x800
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r0, r2, #0x49
    ldrh r3, [r5, #0xea]
    add r1, r0, #0x800
    add r2, r2, #0x4a
    swpb r0, r3, [r1]
    add r1, r2, #0x800
    swpb r0, r4, [r1]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
