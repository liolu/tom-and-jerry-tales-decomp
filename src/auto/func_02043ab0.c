#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02042b4c();
extern void STD_CopyString();
extern void func_020591c0();
extern void STD_GetStringLength();
extern void STD_CompareString();
extern char __upper_mapC[];
extern char data_021a90a4[];
extern char data_021a910c[];
extern char data_021a9110[];
extern char data_021a9b18[];
// clang-format off
asm void func_02043ab0(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xd0
    ldr r5, [sp, #0xf8]
    mov r0, r5
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x8e
    mov r1, r5
    mov r2, #0x40
    mov r7, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r2, r7
    ble L_02043b30
    ldr r1, =__upper_mapC
    add r3, sp, #0x8e
L_02043af4:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_02043b0c
    cmp r0, #0x80
    bge L_02043b0c
    ldrb r0, [r1, r0]
L_02043b0c:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r4
    add r0, r0, r7, lsl #0x6
    add r0, r0, r7, lsl #0x10
    sub r0, r0, r7
    and r7, r0, #0x7f
    blt L_02043af4
L_02043b30:
    mov r6, r7
    mov r4, #0x0
    ldr r9, =data_021a9b18
    mov r8, #0x4c
    b L_02043b5c
L_02043b44:
    add r6, r6, #0x1
    cmp r6, #0x80
    movge r6, r4
    cmp r6, r7
    mvneq r6, #0x0
    beq L_02043b84
L_02043b5c:
    mla r1, r6, r8, r9
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_02043b44
    adds r0, r1, #0x9
    beq L_02043b44
    mov r1, r5
    bl STD_CompareString
    cmp r0, #0x0
    bne L_02043b44
L_02043b84:
    cmp r6, #0x0
    movlt r0, #0x0
    strlt r0, [sp, #0x0]
    blt L_02043ba4
    ldr r1, =data_021a9b18
    mov r0, #0x4c
    mla r0, r6, r0, r1
    str r0, [sp, #0x0]
L_02043ba4:
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    beq L_02043bcc
    ldr r0, [r0, #0x0]
    ldrb r0, [r0, #0x27]
    cmp r0, #0x0
    bne L_02043bcc
    add r1, sp, #0xf8
    mov r0, #0x1
    bl func_02042b4c
L_02043bcc:
    ldr r1, =data_021a90a4
    mov r0, #0x0
    str r0, [sp, #0x8]
    ldr r0, [r1, #0x34]
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x8]
    sub r5, r0, #0x1
    ldr r0, [sp, #0x4]
    cmp r0, #0x0
    addle sp, sp, #0xd0
    ldmlefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addle sp, sp, #0x10
    bxle lr
L_02043c00:
    ldr r0, =data_021a90a4
    ldr r1, [r0, #0x34]
    cmp r1, #0x0
    moveq r6, #0x0
    beq L_02043c58
    ldr r2, [r0, #0x38]
    add r5, r5, #0x1
    cmp r5, r2
    bge L_02043c54
    ldr r3, [r0, #0x2c]
    mov r0, #0xa4
    mla r1, r5, r0, r3
L_02043c30:
    ldrb r0, [r1, #0xa0]
    cmp r0, #0x0
    moveq r0, #0xa4
    mlaeq r6, r5, r0, r3
    beq L_02043c58
    add r5, r5, #0x1
    cmp r5, r2
    add r1, r1, #0xa4
    blt L_02043c30
L_02043c54:
    mov r6, #0x0
L_02043c58:
    ldr r8, [sp, #0xf8]
    mov r0, r8
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x4d
    mov r1, r8
    mov r2, #0x40
    mov r10, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r2, r10
    ble L_02043ccc
    ldr r1, =__upper_mapC
    add r3, sp, #0x4d
L_02043c90:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_02043ca8
    cmp r0, #0x80
    bge L_02043ca8
    ldrb r0, [r1, r0]
L_02043ca8:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r4
    add r0, r0, r10, lsl #0x6
    add r0, r0, r10, lsl #0x10
    sub r0, r0, r10
    and r10, r0, #0x7f
    blt L_02043c90
L_02043ccc:
    mov r9, r10
    mov r11, #0x0
    ldr r7, =data_021a9b18
    mov r4, #0x4c
    b L_02043cf8
L_02043ce0:
    add r9, r9, #0x1
    cmp r9, #0x80
    movge r9, r11
    cmp r9, r10
    mvneq r9, #0x0
    beq L_02043d20
L_02043cf8:
    mla r1, r9, r4, r7
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_02043ce0
    adds r0, r1, #0x9
    beq L_02043ce0
    mov r1, r8
    bl STD_CompareString
    cmp r0, #0x0
    bne L_02043ce0
L_02043d20:
    cmp r9, #0x0
    movlt r1, #0x0
    ldrge r1, =data_021a9b18
    movge r0, #0x4c
    mlage r1, r9, r0, r1
    ldr r0, [r6, #0x9c]
    cmp r0, r1
    bne L_02043f94
    ldr r0, =data_021a90a4
    mvn r1, #0x0
    ldr r4, [r0, #0xa70]
    mov r8, #0x0
    cmp r4, #0x0
    ble L_02043d88
    ldr r3, [r0, #0xa6c]
    ldr r2, =data_021a910c
L_02043d60:
    ldrb r0, [r2, #0x50]
    cmp r0, #0x0
    bne L_02043d88
    add r1, r1, #0x1
    cmp r1, r3
    beq L_02043d88
    add r8, r8, #0x1
    cmp r8, r4
    add r2, r2, #0x50
    blt L_02043d60
L_02043d88:
    cmp r8, r4
    mvnge r8, #0x0
    movge r7, #0x0
    bge L_02043dcc
    mov r0, #0x50
    mul r3, r8, r0
    ldr r0, =data_021a90a4
    ldr r1, =data_021a910c
    ldr r2, [r0, #0xa6c]
    add r1, r1, r3
    add r4, r2, #0x1
    ldr r2, =data_021a9110
    str r4, [r0, #0xa6c]
    add r1, r1, #0x50
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r7, r2, r3
L_02043dcc:
    cmp r7, #0x0
    addeq sp, sp, #0xd0
    ldmeqfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
    mov r0, r6
    str r6, [r7, #0x0]
    mov r1, #0x3f000000
    str r1, [r6, #0x44]
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0xc
    mov r1, r6
    mov r2, #0x40
    mov r10, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r1, r10
    ble L_02043e5c
    ldr r0, =__upper_mapC
    add r2, sp, #0xc
L_02043e20:
    ldrsb r3, [r2, #0x0]
    cmp r3, #0x0
    blt L_02043e38
    cmp r3, #0x80
    bge L_02043e38
    ldrb r3, [r0, r3]
L_02043e38:
    swpb r3, r3, [r2]
    ldrsb r3, [r2], #0x1
    add r1, r1, #0x1
    cmp r1, r4
    add r3, r3, r10, lsl #0x6
    add r3, r3, r10, lsl #0x10
    sub r3, r3, r10
    and r10, r3, #0x7f
    blt L_02043e20
L_02043e5c:
    mov r9, r10
    ldr r4, =data_021a9b18
    mov r11, #0x4c
    b L_02043e84
L_02043e6c:
    add r9, r9, #0x1
    cmp r9, #0x80
    movge r9, #0x0
    cmp r9, r10
    mvneq r9, #0x0
    beq L_02043eac
L_02043e84:
    mla r1, r9, r11, r4
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_02043e6c
    adds r0, r1, #0x9
    beq L_02043e6c
    mov r1, r6
    bl STD_CompareString
    cmp r0, #0x0
    bne L_02043e6c
L_02043eac:
    cmp r9, #0x0
    movlt r0, #0x0
    ldrge r1, =data_021a9b18
    movge r0, #0x4c
    mlage r0, r9, r0, r1
    str r0, [r7, #0x4]
    mov r0, #0x0
    str r0, [r7, #0x8]
    str r0, [r7, #0xc]
    str r0, [r7, #0x10]
    ldr r0, [sp, #0x0]
    ldr r1, [r0, #0x0]
    add r0, r7, #0x2c
    ldrb r1, [r1, #0x28]
    str r1, [r7, #0x28]
    ldr r1, [sp, #0xf8]
    bl STD_CopyString
    ldr r0, [r7, #0x4]
    cmp r0, #0x0
    bne L_02043f94
    ldr r1, =data_021a90a4
    ldr r0, [r1, #0xa70]
    cmp r8, r0
    bgt L_02043f40
    ldr r3, [r1, #0xa6c]
    cmp r3, #0x0
    beq L_02043f40
    ldr r2, =data_021a910c
    mov r0, #0x50
    mla r2, r8, r0, r2
    ldrb r0, [r2, #0x50]
    cmp r0, #0x0
    subeq r0, r3, #0x1
    streq r0, [r1, #0xa6c]
    add r1, r2, #0x50
    mov r0, #0x1
    swpb r0, r0, [r1]
L_02043f40:
    ldr r1, =data_021a90a4
    ldr r0, [r1, #0x38]
    cmp r5, r0
    bgt L_02043f94
    ldr r2, [r1, #0x34]
    cmp r2, #0x0
    beq L_02043f94
    mov r0, #0xa4
    mul r3, r5, r0
    ldr r0, [r1, #0x2c]
    add r0, r0, r3
    ldrb r0, [r0, #0xa0]
    cmp r0, #0x0
    subeq r0, r2, #0x1
    streq r0, [r1, #0x34]
    ldr r0, =data_021a90a4
    mov r2, #0x1
    ldr r0, [r0, #0x2c]
    add r0, r0, r3
    add r1, r0, #0xa0
    swpb r0, r2, [r1]
L_02043f94:
    ldr r0, [sp, #0x8]
    add r1, r0, #0x1
    ldr r0, [sp, #0x4]
    str r1, [sp, #0x8]
    cmp r1, r0
    blt L_02043c00
    add sp, sp, #0xd0
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
