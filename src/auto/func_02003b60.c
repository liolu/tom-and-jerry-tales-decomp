#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003058();
extern void func_02003738();
extern void func_02003934();
extern void func_02011a54();
extern void func_02032598();
extern void func_0204b480();
extern char data_02064110[];
// clang-format off
asm void func_02003b60(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    mov r5, r0
    add r1, r5, #0x8
    mov r0, #0x1
    swpb r0, r0, [r1]
    mov r4, r2
    bl func_02011a54
    str r0, [r5, #0x4]
    mov r0, r5
    bl func_02003934
    add r0, r5, #0x7c
    bl func_0204b480
    add r0, r5, #0x33
    str r0, [sp, #0x8]
    add r0, r5, #0x1800
    str r0, [sp, #0x4]
    add r0, r5, #0x1000
    add r0, r0, #0x3a4
    add r11, r0, #0x400
    add r3, r5, #0xa0
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_02064110
    add r3, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_02064110
    add r10, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r10, {r0, r1, r2}
    add r9, r5, #0xac
    ldmia r10, {r0, r1, r2}
    stmia r9, {r0, r1, r2}
    add r8, r5, #0xc4
    ldmia r10, {r0, r1, r2}
    stmia r8, {r0, r1, r2}
    add r7, r5, #0xd0
    ldmia r10, {r0, r1, r2}
    stmia r7, {r0, r1, r2}
    add r6, r5, #0xdc
    ldmia r10, {r0, r1, r2}
    stmia r6, {r0, r1, r2}
    ldr r0, [sp, #0x8]
    mov r1, #0x3
    swpb r1, r1, [r0]
    mov r0, #0x64
    strh r0, [r5, #0x10]
    strh r0, [r5, #0x48]
    mov r1, #0x0
    ldr r0, [sp, #0x4]
    strh r1, [r5, #0x30]
    strh r1, [r0, #0x20]
    str r1, [r5, #0xec]
    str r1, [r5, #0xf0]
    str r1, [r5, #0xf4]
    ldr r2, [r5, #0x64]
    sub r0, r1, #0x1
    bic r2, r2, #0x8
    str r2, [r5, #0x64]
    swpb r0, r0, [r11]
    add ip, r5, #0x45
    mov r0, #0xff
    swpb r0, r0, [ip]
    add lr, r5, #0x1600
    orr r0, r2, #0x2
    str r0, [r5, #0x64]
    strh r1, [r5, #0x70]
    strh r1, [r5, #0x72]
    strh r1, [lr, #0x98]
    str r1, [r5, #0x794]
    ldr r0, [r5, #0x64]
    mov r2, #0x1
    bic r0, r0, #0x4
    str r0, [r5, #0x64]
    strh r1, [r5, #0x12]
    str r1, [r5, #0x14]
    str r1, [r5, #0x18]
    str r1, [r5, #0x1c]
    mov r0, r5
    str r1, [r5, #0x20]
    bl func_02003738
    add r6, r5, #0x1000
    ldmia r4, {r0, r1, r2}
    stmia r9, {r0, r1, r2}
    mov r3, #0x0
    add r7, r6, #0x3c4
    strh r3, [r5, #0x68]
    add r8, r6, #0x8
    str r3, [r6, #0x7c0]
    sub r6, r3, #0x1
    add r1, r7, #0x400
    swpb r0, r6, [r1]
    add r1, r8, #0x800
    swpb r0, r3, [r1]
    mov r9, r5
L_02003ce0:
    add r0, r9, #0x3c8
    add r8, r0, #0x1400
    ldmia r4, {r0, r1, r2}
    add r7, r5, r3, lsl #0x2
    add r3, r3, #0x1
    stmia r8, {r0, r1, r2}
    add r0, r7, #0x1000
    str r6, [r0, #0x7f8]
    cmp r3, #0x4
    add r9, r9, #0xc
    blt L_02003ce0
    add r0, r5, #0xc
    add r1, sp, #0x18
    add r3, r0, #0x1800
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r5, #0x1000
    ldr r1, [r0, #0x81c]
    mov r3, #0x0
    bic r1, r1, #0x1
    str r1, [r0, #0x81c]
    str r6, [r0, #0x818]
    str r3, [sp, #0x0]
    ldrb r2, [r5, #0x7a]
    mov r1, r5
    mov r0, #0x3
    bl func_02003058
    bl func_02032598
    add r1, r5, #0x1000
    str r0, [r1, #0x694]
    ldrb r0, [r5, #0x0]
    cmp r0, #0x0
    addne sp, sp, #0x24
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r2, [r5, #0x4]
    mov r1, #0x0
    str r1, [r2, #0x1c]
    str r1, [r2, #0x20]
    mov r0, #0x1000
    str r0, [r2, #0x24]
    ldr r0, [r5, #0x4]
    str r1, [r0, #0x30]
    add sp, sp, #0x24
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
