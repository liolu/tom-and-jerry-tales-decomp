#include "m2c.h"

// clang-format on

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dgr(void) {
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

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dleq(void) {
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

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dls(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0214c860
    cmn ip, r3, lsl #0x1
    bhs L_0214c874
L_0214c814:
    orrs ip, r3, r1
    bmi L_0214c838
    cmp r1, r3
    cmpeq r0, r2
    bx lr
L_0214c828:
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_0214c838:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    bne L_0214c854
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
L_0214c854:
    cmp r3, r1
    cmpeq r2, r0
    bx lr
L_0214c860:
    bne L_0214c828
    cmp r0, #0x0
    bhi L_0214c828
    cmn ip, r3, lsl #0x1
    blo L_0214c814
L_0214c874:
    bne L_0214c828
    cmp r2, #0x0
    bhi L_0214c828
    b L_0214c814
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _deq(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0214c8d4
    cmn ip, r3, lsl #0x1
    bhs L_0214c8e8
L_0214c898:
    orrs ip, r3, r1
    bmi L_0214c8bc
    cmp r1, r3
    cmpeq r0, r2
    bx lr
L_0214c8ac:
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_0214c8bc:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    bx lr
L_0214c8d4:
    bne L_0214c8ac
    cmp r0, #0x0
    bhi L_0214c8ac
    cmn ip, r3, lsl #0x1
    blo L_0214c898
L_0214c8e8:
    bne L_0214c8ac
    cmp r2, #0x0
    bhi L_0214c8ac
    b L_0214c898
}

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dneq(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0214c8d4
    cmn ip, r3, lsl #0x1
    bhs L_0214c8e8
L_0214c898:
    orrs ip, r3, r1
    bmi L_0214c8bc
    cmp r1, r3
    cmpeq r0, r2
    bx lr
L_0214c8ac:
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_0214c8bc:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    bx lr
L_0214c8d4:
    bne L_0214c8ac
    cmp r0, #0x0
    bhi L_0214c8ac
    cmn ip, r3, lsl #0x1
    blo L_0214c898
L_0214c8e8:
    bne L_0214c8ac
    cmp r2, #0x0
    bhi L_0214c8ac
    b L_0214c898
}
