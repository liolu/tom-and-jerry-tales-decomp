#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014cf0();
extern void func_02014e34();
extern char data_0206e6d4[];
// clang-format off
asm void func_02005ad4(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x5e]
    cmp r0, #0x3
    ldmeqfd sp!, {r3, pc}
    mov r0, #0x5
    bl func_02014cf0
    add r2, r0, #0x40
    mov r1, #0x0
    swpb r1, r1, [r2]
    add r2, r0, #0x42
    mov r1, #0xe
    swpb r1, r1, [r2]
    add r2, r0, #0x41
    mov r1, #0x3c
    swpb r1, r1, [r2]
    bl func_02014e34
    ldmfd sp!, {r3, pc}
}
// clang-format on
