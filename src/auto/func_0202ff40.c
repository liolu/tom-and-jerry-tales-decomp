#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022144();
extern void func_0203c24c();
extern char data_02088424[];
// clang-format off
asm void func_0202ff40(void) {
    stmfd sp!, {r3, lr}
    mov r0, #0x1
    bl func_02022144
    ldr r0, =data_02088424
    ldrb r0, [r0, #0x1]
    cmp r0, #0x0
    bne L_0202ff8c
    mov r0, #0x40
    mov r1, #0xb4
    mov r2, #0xc0
    bl func_0203c24c
    mov r0, #0x41
    mov r1, #0xb4
    mov r2, #0xc0
    bl func_0203c24c
    mov r0, #0x42
    mov r1, #0xb4
    mov r2, #0xc0
    bl func_0203c24c
L_0202ff8c:
    ldr r0, =data_02088424
    ldrb r0, [r0, #0x1]
    cmp r0, #0x1
    bne L_0202ffb0
    mov r0, #0x40
    mov r1, #0xbe
    mov r2, #0xa0
    bl func_0203c24c
    b L_0202ffe4
L_0202ffb0:
    cmp r0, #0x2
    bne L_0202ffcc
    mov r0, #0x41
    mov r1, #0xd2
    mov r2, #0xa0
    bl func_0203c24c
    b L_0202ffe4
L_0202ffcc:
    cmp r0, #0x3
    bne L_0202ffe4
    mov r0, #0x42
    mov r1, #0xe6
    mov r2, #0xa0
    bl func_0203c24c
L_0202ffe4:
    ldr r0, =data_02088424
    ldrb r1, [r0, #0x2]
    cmp r1, #0xa
    bne L_02030010
    ldrb r3, [r0, #0x1]
    add r1, r0, #0x1
    add r2, r0, #0x2
    add r0, r3, #0x1
    swpb r0, r0, [r1]
    mov r0, #0x0
    swpb r0, r0, [r2]
L_02030010:
    ldr ip, =data_02088424
    ldrb r0, [ip, #0x1]
    add r2, ip, #0x1
    add r3, ip, #0x2
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1e
    add r0, r1, r0, ror #0x1e
    swpb r0, r0, [r2]
    ldrb r0, [ip, #0x2]
    add r0, r0, #0x1
    swpb r0, r0, [r3]
    ldmfd sp!, {r3, pc}
}
// clang-format on
