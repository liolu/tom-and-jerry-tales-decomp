#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020624d8(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02062534
    cmn ip, r3, lsl #0x1
    bhs L_02062548
L_020624ec:
    orrs ip, r3, r1
    bmi L_02062510
    cmp r1, r3
    cmpeq r0, r2
    bx lr
L_02062500:
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02062510:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    bx lr
L_02062534:
    bne L_02062500
    cmp r0, #0x0
    bhi L_02062500
    cmn ip, r3, lsl #0x1
    blo L_020624ec
L_02062548:
    bne L_02062500
    cmp r2, #0x0
    bhi L_02062500
    b L_020624ec
}
// clang-format on
