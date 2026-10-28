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
asm void func_020440e8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x44
    ldr r1, =data_021a90a4
    mov r10, r0
    ldr r8, [r1, #0xa6c]
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x0
    mov r1, r10
    mov r2, #0x40
    mov r7, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r2, r7
    ble L_02044168
    ldr r1, =__upper_mapC
    add r3, sp, #0x0
L_0204412c:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_02044144
    cmp r0, #0x80
    bge L_02044144
    ldrb r0, [r1, r0]
L_02044144:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r4
    add r0, r0, r7, lsl #0x6
    add r0, r0, r7, lsl #0x10
    sub r0, r0, r7
    and r7, r0, #0x7f
    blt L_0204412c
L_02044168:
    mov r6, r7
    mov r5, #0x0
    ldr r4, =data_021a9b18
    mov r9, #0x4c
    b L_02044194
L_0204417c:
    add r6, r6, #0x1
    cmp r6, #0x80
    movge r6, r5
    cmp r6, r7
    mvneq r6, #0x0
    beq L_020441bc
L_02044194:
    mla r1, r6, r9, r4
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_0204417c
    adds r0, r1, #0x9
    beq L_0204417c
    mov r1, r10
    bl STD_CompareString
    cmp r0, #0x0
    bne L_0204417c
L_020441bc:
    cmp r6, #0x0
    movlt r0, #0x0
    ldrge r1, =data_021a9b18
    movge r0, #0x4c
    mlage r0, r6, r0, r1
    cmp r0, #0x0
    beq L_020441e4
    ldr r0, [r0, #0x4]
    cmp r0, #0x4
    beq L_020441f0
L_020441e4:
    add sp, sp, #0x44
    mvn r0, #0x0
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020441f0:
    mov r6, #0x0
    cmp r8, #0x0
    sub r7, r6, #0x1
    ble L_02044288
    ldr r5, =data_021a910c
    ldr r11, =data_021a9110
    ldr r4, =data_021a90a4
L_0204420c:
    ldr r0, [r4, #0xa6c]
    cmp r0, #0x0
    moveq r9, #0x0
    beq L_0204425c
    ldr r2, [r4, #0xa70]
    add r7, r7, #0x1
    cmp r7, r2
    bge L_02044258
    mov r0, #0x50
    mla r1, r7, r0, r5
L_02044234:
    ldrb r0, [r1, #0x50]
    cmp r0, #0x0
    moveq r0, #0x50
    mlaeq r9, r7, r0, r11
    beq L_0204425c
    add r7, r7, #0x1
    cmp r7, r2
    add r1, r1, #0x50
    blt L_02044234
L_02044258:
    mov r9, #0x0
L_0204425c:
    mov r1, r10
    add r0, r9, #0x2c
    bl STD_CompareString
    cmp r0, #0x0
    ldreq r0, [r9, #0xc]
    addeq sp, sp, #0x44
    moveq r0, r0, asr #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r6, r6, #0x1
    cmp r6, r8
    blt L_0204420c
L_02044288:
    mvn r0, #0x0
    add sp, sp, #0x44
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
