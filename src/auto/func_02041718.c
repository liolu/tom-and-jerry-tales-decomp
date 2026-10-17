#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8000();
extern void func_02033118();
extern void func_0203a58c();
extern void func_0203a95c();
// clang-format off
asm void func_02041718(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r1, r1, lsl #0x10
    mov r6, r0
    mov r0, r1, asr #0x10
    mov r5, r2
    bl func_0203a95c
    ldrsh r0, [r0, #0x0]
    bl func_0203a58c
    mov r4, r0
    ldr r0, [r4, #0x8]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    ldmeqfd sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r4, #0x4]
    mov r0, r1, lsr #0x18
    bic r1, r1, #0xff000000
    add r0, r0, #0x1
    orr r0, r1, r0, lsl #0x18
    str r0, [r4, #0x4]
    ldr r7, [r4, #0x1c]
    b L_02041770
L_0204176c:
    mov r7, r0
L_02041770:
    cmp r7, #0x0
    ldrne r0, [r7, #0xc]
    cmpne r0, #0x0
    bne L_0204176c
    cmp r7, #0x0
    mov r0, r5
    mov r1, #0x10
    beq L_020417a0
    bl func_01ff8000
    mov r5, r0
    str r0, [r7, #0xc]
    b L_020417ac
L_020417a0:
    bl func_01ff8000
    mov r5, r0
    str r0, [r4, #0x1c]
L_020417ac:
    mov r3, #0x0
    mov r2, #0xff
    str r3, [r5, #0xc]
    strh r2, [r5, #0x6]
    add r1, r5, #0x8
    swpb r0, r2, [r1]
    add r1, r5, #0x9
    swpb r0, r2, [r1]
    add r1, r5, #0xa
    swpb r0, r3, [r1]
    add r1, r5, #0xb
    swpb r0, r3, [r1]
    sub r0, r2, #0x100
    strh r0, [r5, #0x2]
    strh r0, [r5, #0x4]
    strh r6, [r5, #0x0]
    ldrh r0, [r5, #0x0]
    bl func_02033118
    ldrh r1, [r5, #0x6]
    mov r6, #0x0
    cmp r1, #0xff
    ldr r1, [r0, #0x14]
    bhs L_02041844
    cmp r1, #0x0
    ldmlsfd sp!, {r3, r4, r5, r6, r7, pc}
    mov r4, #0x1
    mov r3, r6
L_02041818:
    add r1, r0, r6, lsl #0x2
    ldr r5, [r1, #0x18]
    add r6, r6, #0x1
    add r2, r5, #0xc
    swpb r1, r4, [r2]
    add r2, r5, #0xd
    swpb r1, r3, [r2]
    ldr r1, [r0, #0x14]
    cmp r6, r1
    blo L_02041818
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_02041844:
    cmp r1, #0x0
    ldmlsfd sp!, {r3, r4, r5, r6, r7, pc}
    mov r4, #0x1
    mov r3, #0xff
L_02041854:
    add r1, r0, r6, lsl #0x2
    ldr r5, [r1, #0x18]
    add r6, r6, #0x1
    add r2, r5, #0xc
    swpb r1, r4, [r2]
    add r2, r5, #0xd
    swpb r1, r3, [r2]
    ldr r1, [r0, #0x14]
    cmp r6, r1
    blo L_02041854
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
