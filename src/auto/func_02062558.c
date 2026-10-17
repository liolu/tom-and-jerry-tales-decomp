#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02062558(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_020625c0
    cmn ip, r3, lsl #0x1
    bhs L_020625d4
L_0206256c:
    orrs ip, r3, r1
    bmi L_02062594
    cmp r1, r3
    cmpeq r0, r2
    bx lr
L_02062580:
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02062594:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    bne L_020625b4
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    orr ip, ip, #0x40000000
    msr cpsr_f, ip
    bxeq lr
L_020625b4:
    cmp r3, r1
    cmpeq r2, r0
    bx lr
L_020625c0:
    bne L_02062580
    cmp r0, #0x0
    bhi L_02062580
    cmn ip, r3, lsl #0x1
    blo L_0206256c
L_020625d4:
    bne L_02062580
    cmp r2, #0x0
    bhi L_02062580
    b L_0206256c
}
// clang-format on
