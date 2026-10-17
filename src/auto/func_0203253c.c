#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0208a358[];
extern char data_0208a360[];
// clang-format off
asm void func_0203253c(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_0208a358
    mov r1, #0x0
    ldr r4, [r0, #0x0]
    cmp r4, #0x0
    ble L_02032580
    ldr ip, =data_0208a360
    mov lr, r1
    mov r0, #0x68
L_02032560:
    mla r2, r1, r0, ip
    add r1, r1, #0x1
    mov r3, r1, lsl #0x10
    add r2, r2, #0x58
    cmp r4, r3, lsr #0x10
    swpb r1, lr, [r2]
    mov r1, r3, lsr #0x10
    bgt L_02032560
L_02032580:
    ldr r0, =data_0208a358
    mov r1, #0x0
    str r1, [r0, #0x0]
    ldmfd sp!, {r4, pc}
}
// clang-format on
