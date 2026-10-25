#include "m2c.h"

extern char data_020692ec[];
extern char data_0206e6d4[];
extern char data_02086b28[];
extern char data_02086b2c[];
void func_0203a95c(void);
void func_0203f6fc(void);
void func_0203fa64(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009acc(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x8
    mov r0, r0, lsl #0x10
    mov r4, r1
    mov r0, r0, asr #0x10
    bl func_0203a95c
    mov r1, r4, lsl #0x10
    mov r7, r0
    mov r0, r1, asr #0x10
    bl func_0203a95c
    ldr r2, [r7, #0xb8]
    mov r8, r0
    ldrh r0, [r2, #0x4c]
    cmp r0, #0x1
    ldreq r1, [r8, #0xb8]
    ldreqh r0, [r1, #0x4c]
    cmpeq r0, #0x2
    bne @L02009c5c
    ldrsh r0, [r2, #0x0]
    cmp r0, #0x0
    ldrgtsh r0, [r1, #0x0]
    cmpgt r0, #0x0
    ble @L02009c5c
    mov r9, #0x0
    add r6, sp, #0x0
    mov r5, r9
    mvn r4, #0x0
@L02009b38:
    ldr r0, [r7, #0xb8]
    add r0, r0, r9, lsl #0x1
    ldrsh r0, [r0, #0x50]
    cmp r0, r4
    beq @L02009b60
    bl func_0203a95c
    ldr r1, [r0, #0xb8]
    str r0, [r6, r9, lsl #0x2]
    add r1, r1, #0x4e
    swpb r0, r5, [r1]
@L02009b60:
    add r9, r9, #0x1
    cmp r9, #0x2
    blt @L02009b38
    ldr r0, [r7, #0xb8]
    mov r2, #0x0
    add r1, r0, #0x4e
    swpb r0, r2, [r1]
    ldr r0, =data_020692ec
    ldr r1, [r7, #0xb8]
    strh r2, [r1, #0x0]
    ldr r2, [r8, #0xb8]
    ldrsh r1, [r2, #0x0]
    sub r1, r1, #0xa
    strh r1, [r2, #0x0]
    ldr r0, [r0, #0x0]
    cmp r0, #0x3
    bne @L02009bcc
    ldr r0, =data_0206e6d4
    ldr r3, [r8, #0xb8]
    ldrb r2, [r0, #0x8]
    ldr r1, =data_02086b2c
    ldrsh r3, [r3, #0x4]
    ldr r1, [r1, r2, lsl #0x2]
    ldrh r2, [r0, #0x6a]
    mul r1, r3, r1
    add r1, r2, r1, asr #0xc
    b @L02009be0
@L02009bcc:
    ldr r1, [r8, #0xb8]
    ldr r0, =data_0206e6d4
    ldrsh r1, [r1, #0x4]
    ldrh r2, [r0, #0x6a]
    add r1, r2, r1
@L02009be0:
    strh r1, [r0, #0x6a]
    ldr r0, [r8, #0xb8]
    ldrsh r1, [r0, #0x48]
    cmp r1, #0x0
    blt @L02009c38
    ldrsh r0, [r0, #0x4a]
    cmp r0, #0x0
    blt @L02009c08
    bl func_0203f6fc
    b @L02009c38
@L02009c08:
    ldr r0, =data_02086b28
    ldrb r0, [r0, #0x0]
    add r0, r1, r0
    sub r0, r0, #0x1
    bl func_0203fa64
    ldr r0, =data_02086b28
    ldr r1, =data_02086b28
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    moveq r0, #0x1
    movne r0, #0x0
    swpb r0, r0, [r1]
@L02009c38:
    ldr r2, =data_0206e6d4
    ldrb r0, [r2, #0x8]
    add r1, r2, #0x8
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrb r0, [r2, #0x8]
    cmp r0, #0x7
    movhi r0, #0x7
    swphib r0, r0, [r1]
@L02009c5c:
    mov r0, #0x1
    add sp, sp, #0x8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
