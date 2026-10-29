/* compiler: 2.0/sp1p5 */
#include "m2c.h"
void _dadd_join(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void _dsub(void) {
    stmfd sp!, {r4, lr}
    eors ip, r1, r3
    eormi r3, r3, #0x80000000
    bmi _dadd_join
}

asm void _dsub_join(void) {
    subs ip, r0, r2
    sbcs lr, r1, r3
    bhs L_02061eb0
    eor lr, lr, #0x80000000
    adds r2, r2, ip
    adc r3, r3, lr
    subs r0, r0, ip
    sbc r1, r1, lr
L_02061eb0:
    mov lr, #0x80000000
    mov ip, r1, lsr #0x14
    orr r1, lr, r1, lsl #0xb
    orr r1, r1, r0, lsr #0x15
    mov r0, r0, lsl #0xb
    movs r4, ip, lsl #0x15
    cmnne r4, #0x200000
    beq L_020620b4
    mov r4, r3, lsr #0x14
    orr r3, lr, r3, lsl #0xb
    orr r3, r3, r2, lsr #0x15
    mov r2, r2, lsl #0xb
    movs lr, r4, lsl #0x15
    beq L_020620fc
L_02061ee8:
    subs r4, ip, r4
    beq L_02061f90
    cmp r4, #0x20
    ble L_02061f24
    cmp r4, #0x38
    movge r4, #0x3f
    sub r4, r4, #0x20
    rsb lr, r4, #0x20
    orrs lr, r2, r3, lsl lr
    mov r2, r3, lsr r4
    orrne r2, r2, #0x1
    subs r0, r0, r2
    sbcs r1, r1, #0x0
    bmi L_02061f4c
    b L_0206203c
L_02061f24:
    rsb lr, r4, #0x20
    movs lr, r2, lsl lr
    rsb lr, r4, #0x20
    mov r2, r2, lsr r4
    orr r2, r2, r3, lsl lr
    mov r3, r3, lsr r4
    orrne r2, r2, #0x1
    subs r0, r0, r2
    sbcs r1, r1, r3
    bpl L_0206203c
L_02061f4c:
    movs r2, r0, lsl #0x15
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #0x15
    add r1, r1, r1
    mov r1, r1, lsr #0xc
    orr r1, r1, ip, lsl #0x14
    tst r2, #0x80000000
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    movs r2, r2, lsl #0x1
    andeqs r2, r0, #0x1
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    adds r0, r0, #0x1
    adc r1, r1, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
L_02061f90:
    subs r0, r0, r2
    sbc r1, r1, r3
    orrs lr, r1, r0
    beq L_02062220
    mov lr, ip, lsl #0x14
    and lr, lr, #0x80000000
    bic ip, ip, #0x800
    cmp r1, #0x0
    bmi L_02062018
    bne L_02061fc8
    sub ip, ip, #0x20
    movs r1, r0
    mov r0, #0x0
    bmi L_02061fe4
L_02061fc8:
    clz r4, r1
    movs r1, r1, lsl r4
    rsb r4, r4, #0x20
    orr r1, r1, r0, lsr r4
    rsb r4, r4, #0x20
    mov r0, r0, lsl r4
    sub ip, ip, r4
L_02061fe4:
    cmp ip, #0x0
    bgt L_02062020
    rsb ip, ip, #0xc
    cmp ip, #0x20
    movge r0, r1
    movge r1, #0x0
    subge ip, ip, #0x20
    rsb r4, ip, #0x20
    mov r0, r0, lsr ip
    orr r0, r0, r1, lsl r4
    orr r1, lr, r1, lsr ip
    ldmfd sp!, {r4, lr}
    bx lr
L_02062018:
    cmp r1, #0x0
    subges ip, ip, #0x1
L_02062020:
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #0x15
    add r1, r1, r1
    orr r1, lr, r1, lsr #0xc
    orr r1, r1, ip, lsl #0x14
    ldmfd sp!, {r4, lr}
    bx lr
L_0206203c:
    mov lr, ip, lsl #0x14
    and lr, lr, #0x80000000
    bic ip, ip, #0x800
    cmp r1, #0x0
    bne L_02062060
    sub ip, ip, #0x20
    movs r1, r0
    mov r0, #0x0
    bmi L_0206207c
L_02062060:
    clz r4, r1
    movs r1, r1, lsl r4
    rsb r4, r4, #0x20
    orr r1, r1, r0, lsr r4
    rsb r4, r4, #0x20
    mov r0, r0, lsl r4
    sub ip, ip, r4
L_0206207c:
    cmp ip, #0x0
    orrgt ip, ip, lr, lsr #0x14
    bgt L_02061f4c
    rsb ip, ip, #0xc
    cmp ip, #0x20
    movge r0, r1
    movge r1, #0x0
    subge ip, ip, #0x20
    rsb r4, ip, #0x20
    mov r0, r0, lsr ip
    orr r0, r0, r1, lsl r4
    orr r1, lr, r1, lsr ip
    ldmfd sp!, {r4, lr}
    bx lr
L_020620b4:
    cmp ip, #0x800
    movge lr, #0x80000000
    movlt lr, #0x0
    bics ip, ip, #0x800
    beq L_02062120
    orrs r4, r0, r1, lsl #0x1
    bne L_020621fc
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #0x15
    mov r2, r2, lsl #0xb
    movs r4, r4, lsl #0x15
    beq L_020621e8
    cmn r4, #0x200000
    bne L_020621e8
    orrs r4, r2, r3, lsl #0x1
    beq L_02062210
    b L_020621fc
L_020620fc:
    cmp r4, #0x800
    movge lr, #0x80000000
    movlt lr, #0x0
    bic ip, ip, #0x800
    bics r4, r4, #0x800
    beq L_02062198
    orrs r4, r2, r3, lsl #0x1
    bne L_020621fc
    b L_020621e8
L_02062120:
    orrs r4, r0, r1, lsl #0x1
    beq L_02062160
    mov ip, #0x1
    bic r1, r1, #0x80000000
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #0x15
    mov r2, r2, lsl #0xb
    movs r4, r4, lsl #0x15
    cmnne r4, #0x200000
    mov r4, r4, lsr #0x15
    orr r4, r4, lr, lsr #0x14
    beq L_020620fc
    orr r3, r3, #0x80000000
    orr ip, ip, lr, lsr #0x14
    b L_02061ee8
L_02062160:
    mov ip, r3, lsr #0x14
    mov r1, r3, lsl #0xb
    orr r1, r1, r2, lsr #0x15
    mov r0, r2, lsl #0xb
    movs r4, ip, lsl #0x15
    beq L_0206218c
    cmn r4, #0x200000
    bne L_020621b4
    orrs r4, r0, r1, lsl #0x1
    bne L_02062200
    b L_020621e8
L_0206218c:
    orrs r4, r0, r1, lsl #0x1
    beq L_02062220
    b L_020621b4
L_02062198:
    orrs r4, r2, r3, lsl #0x1
    beq L_020621c4
    mov r4, #0x1
    bic r3, r3, #0x80000000
    orr ip, ip, lr, lsr #0x14
    orr r4, r4, lr, lsr #0x14
    b L_02061ee8
L_020621b4:
    mov r1, r3
    mov r0, r2
    ldmfd sp!, {r4, lr}
    bx lr
L_020621c4:
    cmp r1, #0x0
    subges ip, ip, #0x1
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #0x15
    add r1, r1, r1
    orr r1, lr, r1, lsr #0xc
    orr r1, r1, ip, lsl #0x14
    ldmfd sp!, {r4, lr}
    bx lr
L_020621e8:
    ldr r1, =0x7ff00000
    orr r1, lr, r1
    mov r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
L_020621fc:
    mov r1, r3
L_02062200:
    mvn r0, #0x0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, lr}
    bx lr
L_02062210:
    mvn r0, #0x0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, lr}
    bx lr
L_02062220:
    mov r1, #0x0
    mov r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
