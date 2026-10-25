#include "m2c.h"

void func_0201894c(void);
void func_02030878(void);
void func_02030898(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0201b770(void) {
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x10
    mov r4, r0
    bl func_02030878
    cmp r0, #0x0
    beq L_0201ba9c
    add r0, sp, #0xc
    add r1, sp, #0x8
    bl func_02030898
    ldr r0, [sp, #0xc]
    str r0, [r4, #0x10]
    ldr r0, [sp, #0x8]
    str r0, [r4, #0x14]
    ldrb r0, [r4, #0x4]
    cmp r0, #0x0
    beq L_0201b994
    ldrb r0, [r4, #0x41]
    cmp r0, #0x0
    beq L_0201b8bc
    cmp r0, #0x1
    bne L_0201b840
    ldr r0, [r4, #0x38]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x0]
    ldr r0, [r4, #0x3c]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x4]
    ldr r0, [r4, #0x10]
    ldr r1, [r4, #0x14]
    ldr r2, [r4, #0x30]
    ldr r3, [r4, #0x34]
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_0201894c
    cmp r0, #0x0
    beq L_0201ba78
    ldrb r0, [r4, #0x40]
    add r1, r4, #0x40
    add r2, r4, #0x41
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    mov r0, #0x2
    swpb r0, r0, [r2]
    b L_0201ba78
L_0201b840:
    ldr r0, [r4, #0x28]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x0]
    ldr r0, [r4, #0x2c]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x4]
    ldr r0, [r4, #0x10]
    ldr r1, [r4, #0x14]
    ldr r2, [r4, #0x20]
    ldr r3, [r4, #0x24]
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_0201894c
    cmp r0, #0x0
    beq L_0201ba78
    ldrb r0, [r4, #0x40]
    add r1, r4, #0x40
    add r2, r4, #0x41
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    mov r0, #0x1
    swpb r0, r0, [r2]
    b L_0201ba78
L_0201b8bc:
    ldr r0, [r4, #0x28]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x0]
    ldr r0, [r4, #0x2c]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x4]
    ldr r0, [r4, #0x10]
    ldr r1, [r4, #0x14]
    ldr r2, [r4, #0x20]
    ldr r3, [r4, #0x24]
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_0201894c
    cmp r0, #0x0
    beq L_0201b928
    add r1, r4, #0x41
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_0201ba78
L_0201b928:
    ldr r0, [r4, #0x38]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x0]
    ldr r0, [r4, #0x3c]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x4]
    ldr r0, [r4, #0x10]
    ldr r1, [r4, #0x14]
    ldr r2, [r4, #0x30]
    ldr r3, [r4, #0x34]
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_0201894c
    cmp r0, #0x0
    beq L_0201ba78
    add r1, r4, #0x41
    mov r0, #0x2
    swpb r0, r0, [r1]
    b L_0201ba78
L_0201b994:
    add r1, r4, #0x4
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x28]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x0]
    ldr r0, [r4, #0x2c]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x4]
    ldr r0, [r4, #0x10]
    ldr r1, [r4, #0x14]
    ldr r2, [r4, #0x20]
    ldr r3, [r4, #0x24]
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_0201894c
    cmp r0, #0x0
    beq L_0201ba0c
    add r1, r4, #0x41
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_0201ba78
L_0201ba0c:
    ldr r0, [r4, #0x38]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x0]
    ldr r0, [r4, #0x3c]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x4]
    ldr r0, [r4, #0x10]
    ldr r1, [r4, #0x14]
    ldr r2, [r4, #0x30]
    ldr r3, [r4, #0x34]
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_0201894c
    cmp r0, #0x0
    add r1, r4, #0x41
    movne r0, #0x2
    swpneb r0, r0, [r1]
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
L_0201ba78:
    ldr r0, [r4, #0x10]
    str r0, [r4, #0x8]
    ldr r0, [r4, #0x14]
    str r0, [r4, #0xc]
    ldrb r0, [r4, #0x40]
    cmp r0, #0x0
    moveq r0, #0x1
    streq r0, [r4, #0x1c]
    b L_0201bad4
L_0201ba9c:
    ldrb r0, [r4, #0x4]
    cmp r0, #0x0
    beq L_0201bad4
    add r1, r4, #0x4
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0x41
    swpb r0, r2, [r1]
    ldrb r0, [r4, #0x40]
    cmp r0, #0x0
    moveq r0, #0x1
    streq r0, [r4, #0x1c]
    movne r0, #0x2
    strne r0, [r4, #0x1c]
L_0201bad4:
    ldr r0, [r4, #0x1c]
    and r0, r0, #0xff
    add sp, sp, #0x10
    ldmia sp!, {r4, pc}
}
// clang-format on
