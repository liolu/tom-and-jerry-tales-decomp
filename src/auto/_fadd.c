/* compiler: 2.0/sp1p5 */
/* _fadd: soft-float float add (r0 + r1, IEEE bit patterns). Operands of opposite sign go to
 * _fsub_join with b negated; same signs fall through into _fadd_join, where _fsub also enters.
 * ASM: Metrowerks runtime, hand-written assembly in the original (GoldieLeGenie/DQIV-DECOMP
 * libs/Runtime/src/fp_emu.s, pret/pokediamond arm9/asm/RUNTIME_f_add.s have the same instructions). */
void _fsub_join(void);
// clang-format off
asm void _fadd(void) {
    eors r2, r0, r1
    eormi r1, r1, #0x80000000
    bmi _fsub_join
}

asm void _fadd_join(void) {
    subs ip, r0, r1
    sublo r0, r0, ip
    addlo r1, r1, ip
    mov r2, #0x80000000
    mov r3, r0, lsr #0x17
    orr r0, r2, r0, lsl #0x8
    ands ip, r3, #0xff
    cmpne ip, #0xff
    beq L_020622d4
    mov ip, r1, lsr #0x17
    orr r1, r2, r1, lsl #0x8
    ands r2, ip, #0xff
    beq L_02062314
L_02062274:
    subs ip, r3, ip
    beq L_0206228c
    rsb r2, ip, #0x20
    movs r2, r1, lsl r2
    mov r1, r1, lsr ip
    orrne r1, r1, #0x1
L_0206228c:
    adds r0, r0, r1
    blo L_020622ac
    and r1, r0, #0x1
    orr r0, r1, r0, rrx
    add r3, r3, #0x1
    and r2, r3, #0xff
    cmp r2, #0xff
    beq L_0206241c
L_020622ac:
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
L_020622d4:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0x0
    ands r3, r3, #0xff
    beq L_02062338
    movs r0, r0, lsl #0x1
    bne L_02062448
    mov ip, r1, lsr #0x17
    mov r1, r1, lsl #0x9
    ands ip, ip, #0xff
    beq L_0206243c
    cmp ip, #0xff
    blt L_0206243c
    cmp r1, #0x0
    beq L_0206243c
    b L_02062448
L_02062314:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0x0
    and r3, r3, #0xff
    ands ip, ip, #0xff
    beq L_02062394
L_0206232c:
    movs r1, r1, lsl #0x1
    bne L_02062448
    b L_0206243c
L_02062338:
    movs r0, r0, lsl #0x1
    beq L_02062370
    mov r3, #0x1
    mov r0, r0, lsr #0x1
    mov ip, r1, lsr #0x17
    mov r1, r1, lsl #0x8
    ands ip, ip, #0xff
    beq L_02062394
    cmp ip, #0xff
    beq L_0206232c
    orr r1, r1, #0x80000000
    orr r3, r3, r2, lsr #0x17
    orr ip, ip, r2, lsr #0x17
    b L_02062274
L_02062370:
    mov r3, r1, lsr #0x17
    mov r0, r1, lsl #0x9
    ands r3, r3, #0xff
    beq L_020623fc
    cmp r3, #0xff
    blt L_020623fc
    cmp r0, #0x0
    beq L_0206243c
    b L_02062434
L_02062394:
    movs r1, r1, lsl #0x1
    beq L_02062404
    mov r1, r1, lsr #0x1
    mov ip, #0x1
    orr r3, r3, r2, lsr #0x17
    orr ip, ip, r2, lsr #0x17
    cmp r0, #0x0
    bmi L_02062274
    adds r0, r0, r1
    blo L_020623c8
    and r1, r0, #0x1
    orr r0, r1, r0, rrx
    add ip, ip, #0x1
L_020623c8:
    cmp r0, #0x0
    subge ip, ip, #0x1
    ands r1, r0, #0xff
    add r0, r0, r0
    mov r0, r0, lsr #0x9
    orr r0, r0, ip, lsl #0x17
    bxeq lr
    tst r1, #0x80
    bxeq lr
    ands r1, r1, #0x7f
    andeqs r1, r0, #0x1
    addne r0, r0, #0x1
    bx lr
L_020623fc:
    mov r0, r1
    bx lr
L_02062404:
    cmp r0, #0x0
    subges r3, r3, #0x1
    add r0, r0, r0
    orr r0, r2, r0, lsr #0x9
    orr r0, r0, r3, lsl #0x17
    bx lr
L_0206241c:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0x0
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #0x1
    bx lr
L_02062434:
    mvn r0, #0x80000000
    bx lr
L_0206243c:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #0x1
    bx lr
L_02062448:
    mvn r0, #0x80000000
    bx lr
}
// clang-format on
