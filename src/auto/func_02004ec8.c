#include "m2c.h"

void func_02014cf0(void);
void func_0201490c(void);
void func_02014e34(void);
void func_0200a0f8(void);
void func_02004e38(void);
extern char data_020aecfc[];
extern char data_0206e6d4[];
extern char data_0206a28c[];
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02004ec8(void) {
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, =data_020aecfc
    mov r4, r0
    mov r0, #0xbc
    mla r2, r4, r0, r1
    ldr r0, [r2, #0x58]
    mov r1, r0, lsl #0x19
    movs r1, r1, lsr #0x1f
    ldmeqia sp!, {r3, r4, r5, pc}
    bic r1, r0, #0x40
    mov r0, #0x5
    str r1, [r2, #0x58]
    bl func_02014cf0
    mov r5, r0
    mov r1, r5
    mov r0, #0x5
    bl func_0201490c
    add r1, r5, #0x40
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r2, r5, #0x41
    mov r1, #0x3c
    swpb r1, r1, [r2]
    mov r0, r5
    bl func_02014e34
    mov r0, #0x8
    bl func_0200a0f8
    ldr r2, =data_0206e6d4
    ldrb r0, [r2, #0x70]
    add r1, r2, #0x70
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    mov r1, r4
    ldrh r0, [r2, #0x4]
    add r0, r0, #0x3
    strh r0, [r2, #0x4]
    ldrh r0, [r2, #0x4]
    cmp r0, #0x63
    movhi r0, #0x63
    strhih r0, [r2, #0x4]
    ldr r2, =data_0206e6d4
    ldr r0, =data_0206a28c
    ldrsh r3, [r2, #0xa]
    add r3, r3, #0x28
    strh r3, [r2, #0xa]
    bl func_02004e38
    ldmia sp!, {r3, r4, r5, pc}
}
// clang-format on
