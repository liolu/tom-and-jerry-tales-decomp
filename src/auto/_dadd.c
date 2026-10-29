/* compiler: 2.0/sp1p5 */
/* _dadd: soft-float double add (a in r0:r1, b in r2:r3). Operands of opposite sign go to
 * _dsub_join with b negated; same signs fall through into _dadd_join, where _dsub also enters.
 * ASM: Metrowerks runtime, hand-written assembly in the original (GoldieLeGenie/DQIV-DECOMP
 * libs/Runtime/src/fp_emu.s, pret/pokediamond arm9/asm/RUNTIME_d_add.s have the same instructions). */
void _dsub_join(void);
// clang-format off
asm void _dadd(void) {
    stmfd sp!, {r4, lr}
    eors ip, r1, r3
    eormi r3, r3, #0x80000000
    bmi _dsub_join
}

asm void _dadd_join(void) {
    subs ip, r0, r2
    sbcs lr, r1, r3
    bhs L_020614d0
    adds r2, r2, ip
    adc r3, r3, lr
    subs r0, r0, ip
    sbc r1, r1, lr
L_020614d0:
    mov lr, #0x80000000
    mov ip, r1, lsr #0x14
    orr r1, lr, r1, lsl #0xb
    orr r1, r1, r0, lsr #0x15
    mov r0, r0, lsl #0xb
    movs r4, ip, lsl #0x15
    cmnne r4, #0x200000
    beq L_020615cc
    mov r4, r3, lsr #0x14
    orr r3, lr, r3, lsl #0xb
    orr r3, r3, r2, lsr #0x15
    mov r2, r2, lsl #0xb
    movs lr, r4, lsl #0x15
    beq L_02061614
L_02061508:
    subs r4, ip, r4
    beq L_02061560
    cmp r4, #0x20
    ble L_02061544
    cmp r4, #0x38
    movge r4, #0x3f
    sub r4, r4, #0x20
    rsb lr, r4, #0x20
    orrs lr, r2, r3, lsl lr
    mov r2, r3, lsr r4
    orrne r2, r2, #0x1
    adds r0, r0, r2
    adcs r1, r1, #0x0
    blo L_02061588
    b L_0206156c
L_02061544:
    rsb lr, r4, #0x20
    movs lr, r2, lsl lr
    rsb lr, r4, #0x20
    mov r2, r2, lsr r4
    orr r2, r2, r3, lsl lr
    mov r3, r3, lsr r4
    orrne r2, r2, #0x1
L_02061560:
    adds r0, r0, r2
    adcs r1, r1, r3
    blo L_02061588
L_0206156c:
    add ip, ip, #0x1
    and r4, r0, #0x1
    movs r1, r1, rrx
    orr r0, r4, r0, rrx
    mov lr, ip, lsl #0x15
    cmn lr, #0x200000
    beq L_02061798
L_02061588:
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
L_020615cc:
    cmp ip, #0x800
    movge lr, #0x80000000
    movlt lr, #0x0
    bics ip, ip, #0x800
    beq L_02061638
    orrs r4, r0, r1, lsl #0x1
    bne L_02061774
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #0x15
    mov r2, r2, lsl #0xb
    movs r4, r4, lsl #0x15
    beq L_02061760
    cmn r4, #0x200000
    bne L_02061760
    orrs r4, r2, r3, lsl #0x1
    beq L_02061760
    b L_02061774
L_02061614:
    cmp r4, #0x800
    movge lr, #0x80000000
    movlt lr, #0x0
    bic ip, ip, #0x800
    bics r4, r4, #0x800
    beq L_020616a4
    orrs r4, r2, r3, lsl #0x1
    bne L_02061774
    b L_02061760
L_02061638:
    orrs r4, r0, r1, lsl #0x1
    beq L_02061678
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
    beq L_02061614
    orr r3, r3, #0x80000000
    orr ip, ip, lr, lsr #0x14
    b L_02061508
L_02061678:
    mov ip, r3, lsr #0x14
    mov r1, r3, lsl #0xb
    orr r1, r1, r2, lsr #0x15
    mov r0, r2, lsl #0xb
    movs r4, ip, lsl #0x15
    beq L_0206172c
    cmn r4, #0x200000
    bne L_0206172c
    orrs r4, r0, r1, lsl #0x1
    beq L_02061760
    b L_02061778
L_020616a4:
    orrs r4, r2, r3, lsl #0x1
    beq L_0206173c
    mov r4, #0x1
    bic r3, r3, #0x80000000
    cmp r1, #0x0
    bpl L_020616c8
    orr ip, ip, lr, lsr #0x14
    orr r4, r4, lr, lsr #0x14
    b L_02061508
L_020616c8:
    adds r0, r0, r2
    adcs r1, r1, r3
    blo L_020616e8
    add ip, ip, #0x1
    and r4, r0, #0x1
    movs r1, r1, rrx
    mov r0, r0, rrx
    orr r0, r0, r4
L_020616e8:
    cmp r1, #0x0
    subges ip, ip, #0x1
    movs r2, r0, lsl #0x15
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #0x15
    add r1, r1, r1
    orr r1, lr, r1, lsr #0xc
    orr r1, r1, ip, lsl #0x14
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    tst r2, #0x80000000
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    movs r2, r2, lsl #0x1
    andeqs r2, r0, #0x1
    ldmeqfd sp!, {r4, lr}
    bxeq lr
L_0206172c:
    mov r1, r3
    mov r0, r2
    ldmfd sp!, {r4, lr}
    bx lr
L_0206173c:
    cmp r1, #0x0
    subges ip, ip, #0x1
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #0x15
    add r1, r1, r1
    orr r1, lr, r1, lsr #0xc
    orr r1, r1, ip, lsl #0x14
    ldmfd sp!, {r4, lr}
    bx lr
L_02061760:
    ldr r1, =0x7ff00000
    orr r1, lr, r1
    mov r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
L_02061774:
    mov r1, r3
L_02061778:
    mvn r0, #0x0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, lr}
    bx lr
    mvn r0, #0x0
    bic r1, r0, #0x80000000
    ldmfd sp!, {r4, lr}
    bx lr
L_02061798:
    cmp ip, #0x800
    movge lr, #0x80000000
    movlt lr, #0x0
    ldr r1, =0x7ff00000
    orr r1, lr, r1
    mov r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
