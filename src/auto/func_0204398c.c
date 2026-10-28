#include "m2c.h"

void func_02042b4c(void);
void func_020591c0(void);
void STD_GetStringLength(void);
void STD_CompareString(void);
extern char __upper_mapC[];
extern char data_021a9b18[];
// clang-format off
asm void func_0204398c(void) {
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x44
    ldr r5, [sp, #0x60]
    mov r0, r5
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x0
    mov r1, r5
    mov r2, #0x40
    mov r7, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r2, r7
    ble L_02043a0c
    ldr r1, =__upper_mapC
    add r3, sp, #0x0
L_020439d0:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_020439e8
    cmp r0, #0x80
    bge L_020439e8
    ldrb r0, [r1, r0]
L_020439e8:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r4
    add r0, r0, r7, lsl #0x6
    add r0, r0, r7, lsl #0x10
    sub r0, r0, r7
    and r7, r0, #0x7f
    blt L_020439d0
L_02043a0c:
    mov r6, r7
    mov r4, #0x0
    ldr r9, =data_021a9b18
    mov r8, #0x4c
    b L_02043a38
L_02043a20:
    add r6, r6, #0x1
    cmp r6, #0x80
    movge r6, r4
    cmp r6, r7
    mvneq r6, #0x0
    beq L_02043a60
L_02043a38:
    mla r1, r6, r8, r9
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_02043a20
    adds r0, r1, #0x9
    beq L_02043a20
    mov r1, r5
    bl STD_CompareString
    cmp r0, #0x0
    bne L_02043a20
L_02043a60:
    cmp r6, #0x0
    movlt r0, #0x0
    ldrge r1, =data_021a9b18
    movge r0, #0x4c
    mlage r0, r6, r0, r1
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    ldrneb r0, [r0, #0x27]
    cmpne r0, #0x0
    beq L_02043a94
    add r1, sp, #0x60
    mov r0, #0x1
    bl func_02042b4c
L_02043a94:
    mov r0, #0x0
    add sp, sp, #0x44
    ldmia sp!, {r4, r5, r6, r7, r8, r9, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
