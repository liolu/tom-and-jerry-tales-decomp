#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203c24c();
extern char data_020b84dc[];
extern char data_020b84e0[];
// clang-format off
asm void func_0203c1e8(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr ip, =data_020b84dc
    ldr r5, =data_020b84e0
    ldr r4, [ip, #0x0]
    mov ip, #0x32c
    mla ip, r4, ip, r5
    add r5, ip, r1, lsl #0x3
    add r4, ip, r0, lsl #0x3
    mov lr, #0x4
L_0203c20c:
    ldrb r0, [r4, #0x0]
    ldrb ip, [r4, #0x1]
    add r4, r4, #0x2
    subs lr, lr, #0x1
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    swpb r0, ip, [r5]
    add r5, r5, #0x1
    bne L_0203c20c
    mov r0, r1
    mov r1, r2
    mov r2, r3
    bl func_0203c24c
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
