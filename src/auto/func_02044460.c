#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020591c0();
extern void STD_GetStringLength();
extern void STD_CompareString();
extern char __upper_mapC[];
extern char data_021a90a4[];
extern char data_021a910c[];
extern char data_021a9110[];
extern char data_021a9b18[];
// clang-format off
asm void func_02044460(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x44
    mov r10, r0
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x0
    mov r1, r10
    mov r2, #0x40
    mov r7, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r3, r7
    ble L_020444d8
    ldr r2, =__upper_mapC
    add r5, sp, #0x0
L_0204449c:
    ldrsb r1, [r5, #0x0]
    cmp r1, #0x0
    blt L_020444b4
    cmp r1, #0x80
    bge L_020444b4
    ldrb r1, [r2, r1]
L_020444b4:
    swpb r1, r1, [r5]
    ldrsb r1, [r5], #0x1
    add r3, r3, #0x1
    cmp r3, r4
    add r1, r1, r7, lsl #0x6
    add r1, r1, r7, lsl #0x10
    sub r1, r1, r7
    and r7, r1, #0x7f
    blt L_0204449c
L_020444d8:
    mov r6, r7
    mov r5, #0x0
    ldr r4, =data_021a9b18
    mov r8, #0x4c
    b L_02044504
L_020444ec:
    add r6, r6, #0x1
    cmp r6, #0x80
    movge r6, r5
    cmp r6, r7
    mvneq r6, #0x0
    beq L_02044530
L_02044504:
    mla r2, r6, r8, r4
    ldrb r1, [r2, #0x8]
    cmp r1, #0x0
    beq L_020444ec
    adds r1, r2, #0x9
    beq L_020444ec
    mov r0, r1
    mov r1, r10
    bl STD_CompareString
    cmp r0, #0x0
    bne L_020444ec
L_02044530:
    cmp r6, #0x0
    movlt r1, #0x0
    ldrge r2, =data_021a9b18
    movge r1, #0x4c
    mlage r1, r6, r1, r2
    ldr r4, =data_021a90a4
    cmp r1, #0x0
    ldr r8, [r4, #0xa6c]
    addeq sp, sp, #0x44
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r1, #0x4]
    cmp r1, #0x4
    addne sp, sp, #0x44
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r6, #0x0
    cmp r8, #0x0
    sub r7, r6, #0x1
    ble L_020445f8
    ldr r5, =data_021a910c
    ldr r11, =data_021a9110
L_02044580:
    ldr r0, [r4, #0xa6c]
    cmp r0, #0x0
    moveq r9, #0x0
    beq L_020445d0
    ldr r2, [r4, #0xa70]
    add r7, r7, #0x1
    cmp r7, r2
    bge L_020445cc
    mov r0, #0x50
    mla r1, r7, r0, r5
L_020445a8:
    ldrb r0, [r1, #0x50]
    cmp r0, #0x0
    moveq r0, #0x50
    mlaeq r9, r7, r0, r11
    beq L_020445d0
    add r7, r7, #0x1
    cmp r7, r2
    add r1, r1, #0x50
    blt L_020445a8
L_020445cc:
    mov r9, #0x0
L_020445d0:
    mov r1, r10
    add r0, r9, #0x2c
    bl STD_CompareString
    cmp r0, #0x0
    addeq sp, sp, #0x44
    ldreq r0, [r9, #0x28]
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r6, r6, #0x1
    cmp r6, r8
    blt L_02044580
L_020445f8:
    mov r0, #0x0
    add sp, sp, #0x44
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
