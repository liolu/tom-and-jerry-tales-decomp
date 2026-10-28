#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8000();
extern void memset();
extern char data_0206e6a4[];
extern char data_0206e9e8[];
// clang-format off
asm void func_0200160c(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_0206e6a4
    mov r1, #0xd8
    bl func_01ff8000
    ldr r3, =data_0206e9e8
    mov r1, #0x0
    mov r2, #0xd8
    str r0, [r3, #0x10]
    bl memset
    ldr r2, =data_0206e9e8
    mov r3, #0x0
    add r1, r2, #0x2
    swpb r0, r3, [r1]
    add r1, r2, #0x4
    swpb r0, r3, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
