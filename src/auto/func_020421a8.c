#include "m2c.h"

extern char data_0206dcb4[];
void func_0205c258(void);
void func_0205c314(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020421a8(void) {
    stmdb sp!, {r4, r5, r6, lr}
    movs r5, r0
    mov r4, r2
    ldreq r5, [r4, #0x0]
    mov r6, r1
    mov r0, r5
    mov r1, r6
    bl func_0205c258
    ldrsb r1, [r5, r0]
    add r5, r5, r0
    cmp r1, #0x0
    bne L_020421e8
    ldr r1, =data_0206dcb4
    mov r0, #0x0
    str r1, [r4, #0x0]
    ldmia sp!, {r4, r5, r6, pc}
L_020421e8:
    mov r0, r5
    mov r1, r6
    bl func_0205c314
    ldrsb r1, [r5, r0]
    add r2, r5, r0
    cmp r1, #0x0
    movne r0, #0x0
    swpneb r0, r0, [r2]
    addne r2, r2, #0x1
    mov r0, r5
    str r2, [r4, #0x0]
    ldmia sp!, {r4, r5, r6, pc}
}
// clang-format on
