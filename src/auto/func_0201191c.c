#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8000();
extern void func_020118b0();
extern char data_0206e6a4[];
extern char data_02086ff4[];
extern char data_02086ffc[];
// clang-format off
asm void func_0201191c(void) {
    stmfd sp!, {r4, lr}
    ldr r3, =data_02086ff4
    mov ip, #0x0
    swpb r1, ip, [r3]
    add r2, r3, #0x1
    swpb r1, ip, [r2]
    mov r4, r0
    ldr r0, =data_02086ffc
    str ip, [r3, #0x4]
    bl func_020118b0
    mov r0, #0x14
    ldr r3, =data_02086ff4
    mul r1, r4, r0
    ldr r0, =data_0206e6a4
    swpb r2, r4, [r3]
    bl func_01ff8000
    ldr r1, =data_02086ff4
    str r0, [r1, #0x4]
    ldmfd sp!, {r4, pc}
}
// clang-format on
