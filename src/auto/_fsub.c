/* compiler: 2.0/sp1p5 */
#include "m2c.h"
void _fadd_join(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _fsub(void) {
    eors r2, r0, r1
    eormi r1, r1, #0x80000000
    bmi _fadd_join
}

asm void _fsub_join(void) {
    subs ip, r0, r1
    eorlo ip, ip, #0x80000000
    sublo r0, r0, ip
    addlo r1, r1, ip
    mov r2, #0x80000000
    mov r3, r0, lsr #0x17
    orr r0, r2, r0, lsl #0x8
    ands ip, r3, #0xff
    cmpne ip, #0xff
    beq L_02062bb4
    mov ip, r1, lsr #0x17
    orr r1, r2, r1, lsl #0x8
    ands r2, ip, #0xff
    beq L_02062bf4
L_02062ad0:
    subs ip, r3, ip
    beq L_02062b18
    rsb r2, ip, #0x20
    movs r2, r1, lsl r2
    mov r1, r1, lsr ip
    orrne r1, r1, #0x1
    subs r0, r0, r1
    bpl L_02062b5c
    ands r1, r0, #0xff
    add r0, r0, r0
    mov r0, r0, lsr #0x9
    orr r0, r0, r3, lsl #0x17
    tst r1, #0x80
    bxeq lr
    ands r1, r1, #0x7f
    andeqs r1, r0, #0x1
    addne r0, r0, #0x1
    bx lr
L_02062b18:
    subs r0, r0, r1
    beq L_02062cc0
    mov r2, r3, lsl #0x17
    and r2, r2, #0x80000000
    bic r3, r3, #0x100
    clz ip, r0
    movs r0, r0, lsl ip
    sub r3, r3, ip
    cmp r3, #0x0
    bgt L_02062b4c
    rsb r3, r3, #0x9
    orr r0, r2, r0, lsr r3
    bx lr
L_02062b4c:
    add r0, r0, r0
    orr r0, r2, r0, lsr #0x9
    orr r0, r0, r3, lsl #0x17
    bx lr
L_02062b5c:
    mov r2, r3, lsl #0x17
    and r2, r2, #0x80000000
    bic r3, r3, #0x100
    clz ip, r0
    movs r0, r0, lsl ip
    sub r3, r3, ip
    cmp r3, #0x0
    bgt L_02062b88
    rsb r3, r3, #0x9
    orr r0, r2, r0, lsr r3
    bx lr
L_02062b88:
    ands r1, r0, #0xff
    add r0, r0, r0
    orr r0, r2, r0, lsr #0x9
    orr r0, r0, r3, lsl #0x17
    bxeq lr
    tst r1, #0x80
    bxeq lr
    ands r1, r1, #0x7f
    andeqs r1, r0, #0x1
    addne r0, r0, #0x1
    bx lr
L_02062bb4:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0x0
    ands r3, r3, #0xff
    beq L_02062c1c
    movs r0, r0, lsl #0x1
    bne L_02062cf4
    mov ip, r1, lsr #0x17
    mov r1, r1, lsl #0x9
    ands ip, ip, #0xff
    beq L_02062ce8
    cmp ip, #0xff
    blt L_02062ce8
    cmp r1, #0x0
    beq L_02062cfc
    b L_02062cf4
L_02062bf4:
    cmp ip, #0x100
    movge r2, #0x80000000
    movlt r2, #0x0
    and r3, r3, #0xff
    ands ip, ip, #0xff
    beq L_02062c84
L_02062c0c:
    eor r2, r2, #0x80000000
    movs r1, r1, lsl #0x1
    bne L_02062cf4
    b L_02062ce8
L_02062c1c:
    movs r0, r0, lsl #0x1
    beq L_02062c54
    mov r0, r0, lsr #0x1
    mov r3, #0x1
    mov ip, r1, lsr #0x17
    mov r1, r1, lsl #0x8
    ands ip, ip, #0xff
    beq L_02062c84
    cmp ip, #0xff
    beq L_02062c0c
    orr r1, r1, #0x80000000
    orr r3, r3, r2, lsr #0x17
    orr ip, ip, r2, lsr #0x17
    b L_02062ad0
L_02062c54:
    mov r3, r1, lsr #0x17
    mov r0, r1, lsl #0x9
    ands r2, r3, #0xff
    beq L_02062c78
    cmp r2, #0xff
    blt L_02062ca0
    cmp r0, #0x0
    bne L_02062ce0
    b L_02062ce8
L_02062c78:
    cmp r0, #0x0
    beq L_02062cc0
    b L_02062ca0
L_02062c84:
    movs r1, r1, lsl #0x1
    beq L_02062ca8
    mov r1, r1, lsr #0x1
    mov ip, #0x1
    orr ip, ip, r2, lsr #0x17
    orr r3, r3, r2, lsr #0x17
    b L_02062ad0
L_02062ca0:
    mov r0, r1
    bx lr
L_02062ca8:
    cmp r0, #0x0
    subges r3, r3, #0x1
    add r0, r0, r0
    orr r0, r2, r0, lsr #0x9
    orr r0, r0, r3, lsl #0x17
    bx lr
L_02062cc0:
    mov r0, #0x0
    bx lr
    cmp r0, #0x0
    subges r3, r3, #0x1
    add r0, r0, r0
    mov r0, r0, lsr #0x9
    orr r0, r0, r3, lsl #0x17
    bx lr
L_02062ce0:
    mvn r0, #0x80000000
    bx lr
L_02062ce8:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #0x1
    bx lr
L_02062cf4:
    mvn r0, #0x80000000
    bx lr
L_02062cfc:
    mvn r0, #0x80000000
    bx lr
}
// clang-format on
