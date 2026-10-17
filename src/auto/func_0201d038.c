#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0206e6d4[];
// clang-format off
asm void func_0201d038(void) {
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    bx lr
L_0201d044:
    b L_0201d078
    b L_0201d05c
    b L_0201d090
    b L_0201d0a8
    b L_0201d0d8
    b L_0201d0c0
L_0201d05c:
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0x1f]
    add r1, r0, #0x1f
    bic r0, r2, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    bx lr
L_0201d078:
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0x1f]
    add r1, r0, #0x1f
    orr r0, r2, #0x2
    swpb r0, r0, [r1]
    bx lr
L_0201d090:
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0x1f]
    add r1, r0, #0x1f
    orr r0, r2, #0x4
    swpb r0, r0, [r1]
    bx lr
L_0201d0a8:
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0x1f]
    add r1, r0, #0x1f
    orr r0, r2, #0x10
    swpb r0, r0, [r1]
    bx lr
L_0201d0c0:
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0x1f]
    add r1, r0, #0x1f
    orr r0, r2, #0x8
    swpb r0, r0, [r1]
    bx lr
L_0201d0d8:
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0x1f]
    add r1, r0, #0x1f
    orr r0, r2, #0x20
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
