#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void STD_CopyString();
extern void STD_CompareString();
extern char data_0206a32c[];
extern char data_0206e6d4[];
extern char data_020ac17c[];
extern char data_020aecfc[];
// clang-format off
asm void func_02009c8c(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r2, #0xbc
    mul r2, r1, r2
    ldr r1, =data_020aecfc
    ldr r3, =data_020ac17c
    mov r5, r0
    ldrsh r1, [r1, r2]
    mov r0, #0x74
    ldrsh r2, [r5, #0x0]
    smlabb r4, r1, r0, r3
    ldr r0, [r4, #0x70]
    ldr r1, =data_0206a32c
    strh r2, [r0, #0x0]
    ldrsh r3, [r5, #0x4]
    ldr r2, [r4, #0x70]
    add r0, r5, #0x26
    strh r3, [r2, #0x4]
    bl STD_CompareString
    cmp r0, #0x0
    ldr r0, [r4, #0x70]
    moveq r2, #0x0
    beq L_02009cf8
    add r1, r5, #0x26
    add r0, r0, #0x28
    bl STD_CopyString
    ldr r0, [r4, #0x70]
    mov r2, #0x1
L_02009cf8:
    add r1, r0, #0x7
    swpb r0, r2, [r1]
    ldr r1, =data_0206a32c
    add r0, r5, #0x6
    bl STD_CompareString
    cmp r0, #0x0
    ldr r0, [r4, #0x70]
    moveq r2, #0x0
    beq L_02009d30
    add r1, r5, #0x6
    add r0, r0, #0x8
    bl STD_CopyString
    ldr r0, [r4, #0x70]
    mov r2, #0x1
L_02009d30:
    add r1, r0, #0x6
    swpb r0, r2, [r1]
    ldrsh r1, [r5, #0x46]
    ldr r0, [r4, #0x70]
    mov r2, #0x2
    strh r1, [r0, #0x48]
    ldrsh r3, [r5, #0x48]
    ldr r1, [r4, #0x70]
    ldr r0, =data_0206e6d4
    strh r3, [r1, #0x4a]
    ldr r1, [r4, #0x70]
    strh r2, [r1, #0x4e]
    ldrh r1, [r0, #0x6c]
    add r1, r1, #0x1
    strh r1, [r0, #0x6c]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
