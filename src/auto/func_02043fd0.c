#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020591c0();
extern void STD_GetStringLength();
extern void STD_CompareString();
extern char __upper_mapC[];
extern char data_021a9b18[];
// clang-format off
asm void func_02043fd0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x44
    mov r7, r0
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x0
    mov r1, r7
    mov r2, #0x40
    mov r6, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r2, r6
    ble L_02044048
    ldr r1, =__upper_mapC
    add r3, sp, #0x0
L_0204400c:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_02044024
    cmp r0, #0x80
    bge L_02044024
    ldrb r0, [r1, r0]
L_02044024:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r4
    add r0, r0, r6, lsl #0x6
    add r0, r0, r6, lsl #0x10
    sub r0, r0, r6
    and r6, r0, #0x7f
    blt L_0204400c
L_02044048:
    mov r5, r6
    mov r4, #0x0
    ldr r9, =data_021a9b18
    mov r8, #0x4c
    b L_02044074
L_0204405c:
    add r5, r5, #0x1
    cmp r5, #0x80
    movge r5, r4
    cmp r5, r6
    mvneq r5, #0x0
    beq L_0204409c
L_02044074:
    mla r1, r5, r8, r9
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_0204405c
    adds r0, r1, #0x9
    beq L_0204405c
    mov r1, r7
    bl STD_CompareString
    cmp r0, #0x0
    bne L_0204405c
L_0204409c:
    cmp r5, #0x0
    movlt r1, #0x0
    ldrge r1, =data_021a9b18
    movge r0, #0x4c
    mlage r1, r5, r0, r1
    cmp r1, #0x0
    beq L_020440c4
    ldr r0, [r1, #0x4]
    cmp r0, #0x4
    beq L_020440d0
L_020440c4:
    add sp, sp, #0x44
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
L_020440d0:
    ldr r0, [r1, #0x0]
    ldrh r0, [r0, #0x38]
    add sp, sp, #0x44
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
