#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02011974();
extern void func_020222b8();
extern void func_0204c1b0();
extern void func_02051868();
extern char data_0206e66c[];
extern char data_0206e670[];
extern char data_02086d08[];
// clang-format off
asm void func_0200a838(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_02086d08
    ldr r3, =data_0206e670
    mov lr, #0xb6
    ldr r2, =data_0206e66c
    add r1, r0, #0x1
    mov ip, #0x0
    swpb r0, lr, [r3]
    swpb r0, lr, [r2]
    swpb r0, ip, [r1]
    bl func_02051868
    ldr r1, =0x4001000
    ldr r0, [r1, #0x0]
    orr r0, r0, #0x10000
    str r0, [r1, #0x0]
    bl func_0204c1b0
    mvn r0, #0xf
    mov r1, #0x1e
    mov r2, #0x3
    bl func_020222b8
    bl func_02011974
    ldmfd sp!, {r3, pc}
}
// clang-format on
