#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02044618();
extern void MI_CpuCopy8();
extern void STD_CopyString();
extern void func_020591c0();
extern void STD_GetStringLength();
extern void STD_CompareString();
extern char __upper_mapC[];
extern char data_021a9b18[];
extern char data_021a9b20[];
extern char data_021ac0a4[];
// clang-format off
asm void func_020464d4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x8c
    mov r1, #0x4
    mov r7, r0
    str r1, [sp, #0x4]
    ldr r1, [r7, #0x20]
    str r1, [sp, #0x0]
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x49
    mov r1, r7
    mov r2, #0x40
    mov r5, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r2, r5
    ble L_0204655c
    ldr r1, =__upper_mapC
    add r3, sp, #0x49
L_02046520:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_02046538
    cmp r0, #0x80
    bge L_02046538
    ldrb r0, [r1, r0]
L_02046538:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r4
    add r0, r0, r5, lsl #0x6
    add r0, r0, r5, lsl #0x10
    sub r0, r0, r5
    and r5, r0, #0x7f
    blt L_02046520
L_0204655c:
    mov r0, #0x4c
    mul r1, r5, r0
    ldr r0, =data_021a9b20
    mov r4, r5
    ldrb r0, [r0, r1]
    cmp r0, #0x0
    beq L_020465b0
    ldr r2, =data_021a9b18
    mov r3, #0x0
    mov r0, #0x4c
L_02046584:
    add r4, r4, #0x1
    cmp r4, #0x80
    movge r4, r3
    bge L_020465a0
    cmp r4, r5
    mvneq r4, #0x0
    beq L_020465b0
L_020465a0:
    mla r1, r4, r0, r2
    ldrb r1, [r1, #0x8]
    cmp r1, #0x0
    bne L_02046584
L_020465b0:
    cmp r4, #0x0
    blt L_02046604
    mov r0, #0x4c
    mul r3, r4, r0
    ldr r0, =data_021a9b18
    ldr r2, =data_021a9b20
    add r4, r0, r3
    add r3, r2, r3
    mov r2, #0x1
    swpb r2, r2, [r3]
    mov r1, r7
    add r0, r4, #0x9
    bl STD_CopyString
    add r0, sp, #0x0
    mov r1, r4
    mov r2, #0x8
    bl MI_CpuCopy8
    ldr r0, =data_021ac0a4
    ldr r1, [r0, #0x74]
    add r1, r1, #0x1
    str r1, [r0, #0x74]
L_02046604:
    mov r0, r7
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x8
    mov r1, r7
    mov r2, #0x40
    mov r6, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r2, r6
    ble L_02046674
    ldr r1, =__upper_mapC
    add r3, sp, #0x8
L_02046638:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_02046650
    cmp r0, #0x80
    bge L_02046650
    ldrb r0, [r1, r0]
L_02046650:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r4
    add r0, r0, r6, lsl #0x6
    add r0, r0, r6, lsl #0x10
    sub r0, r0, r6
    and r6, r0, #0x7f
    blt L_02046638
L_02046674:
    mov r5, r6
    mov r4, #0x0
    ldr r9, =data_021a9b18
    mov r8, #0x4c
    b L_0204669c
L_02046688:
    add r5, r5, #0x1
    cmp r5, #0x80
    movge r5, r4
    cmp r5, r6
    beq L_020466c4
L_0204669c:
    mla r1, r5, r8, r9
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_02046688
    adds r0, r1, #0x9
    beq L_02046688
    mov r1, r7
    bl STD_CompareString
    cmp r0, #0x0
    bne L_02046688
L_020466c4:
    ldr r0, [r7, #0x20]
    bl func_02044618
    ldr r1, [r7, #0x20]
    strh r0, [r1, #0x38]
    add sp, sp, #0x8c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
