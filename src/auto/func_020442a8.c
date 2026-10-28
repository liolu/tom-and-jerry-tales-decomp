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
asm void func_020442a8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x44
    ldr r2, =data_021a90a4
    mov r10, r0
    mov r9, r1
    ldr r7, [r2, #0xa6c]
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x0
    mov r1, r10
    mov r2, #0x40
    mov r8, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r2, r8
    ble L_0204432c
    ldr r1, =__upper_mapC
    add r3, sp, #0x0
L_020442f0:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_02044308
    cmp r0, #0x80
    bge L_02044308
    ldrb r0, [r1, r0]
L_02044308:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r4
    add r0, r0, r8, lsl #0x6
    add r0, r0, r8, lsl #0x10
    sub r0, r0, r8
    and r8, r0, #0x7f
    blt L_020442f0
L_0204432c:
    mov r6, r8
    mov r11, #0x0
    ldr r5, =data_021a9b18
    mov r4, #0x4c
    b L_02044358
L_02044340:
    add r6, r6, #0x1
    cmp r6, #0x80
    movge r6, r11
    cmp r6, r8
    mvneq r6, #0x0
    beq L_02044380
L_02044358:
    mla r1, r6, r4, r5
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_02044340
    adds r0, r1, #0x9
    beq L_02044340
    mov r1, r10
    bl STD_CompareString
    cmp r0, #0x0
    bne L_02044340
L_02044380:
    cmp r6, #0x0
    movlt r0, #0x0
    ldrge r1, =data_021a9b18
    movge r0, #0x4c
    mlage r0, r6, r0, r1
    cmp r0, #0x0
    addeq sp, sp, #0x44
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r0, #0x4]
    cmp r0, #0x4
    addne sp, sp, #0x44
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0x0
    cmp r7, #0x0
    sub r6, r5, #0x1
    addle sp, sp, #0x44
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r11, =data_021a910c
    ldr r4, =data_021a90a4
L_020443cc:
    ldr r0, [r4, #0xa6c]
    cmp r0, #0x0
    moveq r8, #0x0
    beq L_02044424
    ldr r2, [r4, #0xa70]
    add r6, r6, #0x1
    cmp r6, r2
    bge L_02044420
    mov r0, #0x50
    mla r1, r6, r0, r11
L_020443f4:
    ldrb r0, [r1, #0x50]
    cmp r0, #0x0
    bne L_02044410
    ldr r0, =data_021a9110
    mov r1, #0x50
    mla r8, r6, r1, r0
    b L_02044424
L_02044410:
    add r1, r1, #0x50
    add r6, r6, #0x1
    cmp r6, r2
    blt L_020443f4
L_02044420:
    mov r8, #0x0
L_02044424:
    mov r1, r10
    add r0, r8, #0x2c
    bl STD_CompareString
    cmp r0, #0x0
    add r5, r5, #0x1
    streq r9, [r8, #0x28]
    cmp r5, r7
    blt L_020443cc
    add sp, sp, #0x44
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
