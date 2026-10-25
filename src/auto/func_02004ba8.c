#include "m2c.h"

extern char data_02069a70[];
extern char data_0206e694[];
extern char data_0206ea14[];
extern char data_02086a98[];
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02004ba8(void) {
    ldr r1, =data_02086a98
    mov r3, #0x0
L_02004bb0:
    mov r2, r3, lsl #0x1
    ldrh r0, [r1, r2]
    cmp r0, #0x0
    subne r0, r0, #0x1
    strneh r0, [r1, r2]
    add r0, r3, #0x1
    and r3, r0, #0xff
    cmp r3, #0x8
    blo L_02004bb0
    ldr r0, =data_0206e694
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02004bf8
    ldr r0, =data_0206ea14
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1800
    strh r1, [r0, #0x60]
L_02004bf8:
    ldr r2, =data_0206ea14
    ldr r3, [r2, #0x0]
    add r0, r3, #0x1800
    ldrh r1, [r0, #0x60]
    cmp r1, #0x0
    beq L_02004c60
    sub r3, r1, #0x1
    ldr r1, =data_02069a70
    strh r3, [r0, #0x60]
    ldrb r0, [r1, #0x0]
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrb r0, [r1, #0x0]
    cmp r0, #0x0
    bxne lr
    ldr r1, [r2, #0x0]
    ldrb r0, [r1, #0x9]
    add r1, r1, #0x9
    cmp r0, #0x0
    moveq r0, #0x1
    movne r0, #0x0
    swpb r0, r0, [r1]
    ldr r1, =data_02069a70
    mov r0, #0x3
    swpb r0, r0, [r1]
    bx lr
L_02004c60:
    add r1, r3, #0x9
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r1, =data_02069a70
    mov r0, #0x3
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
