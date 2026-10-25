#include "m2c.h"

extern char data_0206b158[];
extern char data_020875a8[];
extern char data_020875f8[];
extern char data_02087600[];
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020200e4(void) {
    ldr r1, =data_020875a8
    ldr r2, =data_0206b158+0x6
    mov r3, r0, lsl #0x1
    ldrb ip, [r1, #0x0]
    ldrh r2, [r2, r3]
    cmp ip, r2
    ldrne r2, =data_020875f8
    ldrneh r2, [r2, r3]
    cmpne r2, #0x0
    moveq r0, #0x1
    bxeq lr
    ldr r3, =data_02087600
    ldr r2, [r1, #0x2c]
    ldr r3, [r3, r0, lsl #0x2]
    cmp r0, #0x0
    add r2, r2, r3
    str r2, [r1, #0x2c]
    beq @L0202013c
    cmp r0, #0x1
    beq @L0202014c
    cmp r0, #0x2
    b @L0202015c
@L0202013c:
    ldr r0, [r1, #0x18]
    add r0, r0, r3
    str r0, [r1, #0x18]
    b @L0202015c
@L0202014c:
    ldr r2, [r1, #0x14]
    ldr r0, [r1, #0x34]
    sub r0, r2, r0
    str r0, [r1, #0x14]
@L0202015c:
    ldr r2, =data_020875a8
    mov r0, #0x0
    ldrb r1, [r2, #0x0]
    add r1, r1, #0x1
    swpb r1, r1, [r2]
    bx lr
}
// clang-format on
