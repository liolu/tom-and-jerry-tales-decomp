#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02062458(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_020624b4
    cmn ip, r3, lsl #0x1
    bhs L_020624c8
L_0206246c:
    orrs ip, r3, r1
    bmi L_02062490
    cmp r1, r3
    cmpeq r0, r2
    bx lr
L_02062480:
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02062490:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    bx lr
L_020624b4:
    bne L_02062480
    cmp r0, #0x0
    bhi L_02062480
    cmn ip, r3, lsl #0x1
    blo L_0206246c
L_020624c8:
    bne L_02062480
    cmp r2, #0x0
    bhi L_02062480
    b L_0206246c
}
// clang-format on
