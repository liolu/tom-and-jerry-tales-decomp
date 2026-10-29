/* compiler: 2.0/sp1p5 */
/* _ddiv: soft-float double divide (a in r0:r1, b in r2:r3), reciprocal estimate from the byte
 * table inside the function, refined with umull.
 * ASM: Metrowerks runtime, hand-written assembly in the original (pret/pokediamond
 * arm9/asm/RUNTIME_d_div.s has the same instructions and table). */
// clang-format off
asm void _ddiv(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr lr, =0xffe
    eor r4, r1, r3
    ands ip, lr, r1, lsr #0x13
    cmpne ip, lr
    beq L_020636c0
    bic r1, r1, lr, lsl #0x14
    orr r1, r1, #0x100000
    add ip, ip, r4, lsr #0x1f
L_02063338:
    ands r4, lr, r3, lsr #0x13
    cmpne r4, lr
    beq L_02063758
    bic r3, r3, lr, lsl #0x14
    orr r3, r3, #0x100000
L_0206334c:
    sub ip, ip, r4
    cmp r1, r3
    cmpeq r0, r2
    bhs L_02063368
    adds r0, r0, r0
    adc r1, r1, r1
    sub ip, ip, #0x2
L_02063368:
    sub r4, pc, #0x24
    ldrb lr, [r4, r3, lsr #0xc]
    rsbs r2, r2, #0x0
    rsc r3, r3, #0x0
    mov r4, #0x20000000
    mla r5, lr, r3, r4
    mov r6, r3, lsl #0xa
    mov r5, r5, lsr #0x7
    mul lr, r5, lr
    orr r6, r6, r2, lsr #0x16
    mov lr, lr, lsr #0xd
    mul r5, lr, r6
    mov r6, r1, lsl #0xa
    orr r6, r6, r0, lsr #0x16
    mov r5, r5, lsr #0x10
    mul r5, lr, r5
    mov lr, lr, lsl #0xe
    add lr, lr, r5, lsr #0x10
    umull r5, r6, lr, r6
    umull r4, r5, r6, r2
    mla r5, r3, r6, r5
    mov r4, r4, lsr #0x1a
    orr r4, r4, r5, lsl #0x6
    add r4, r4, r0, lsl #0x2
    umull lr, r5, r4, lr
    mov r4, #0x0
    adds r5, r5, r6, lsl #0x18
    adc r4, r4, r6, lsr #0x8
    cmp ip, #0x800
    bge L_0206354c
    add ip, ip, #0x7f0
    adds ip, ip, #0xc
    bmi L_02063564
    orr r1, r4, ip, lsl #0x1f
    bic ip, ip, #0x1
    add r1, r1, ip, lsl #0x13
    tst lr, #0x80000000
    bne L_0206343c
    rsbs r2, r2, #0x0
    mov r4, r4, lsl #0x1
    add r4, r4, r5, lsr #0x1f
    mul lr, r2, r4
    mov r6, #0x0
    mov r4, r5, lsl #0x1
    orr r4, r4, #0x1
    umlal r6, lr, r4, r2
    rsc r3, r3, #0x0
    mla lr, r4, r3, lr
    cmp lr, r0, lsl #0x15
    bmi L_0206343c
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0206343c:
    adds r0, r5, #0x1
    adc r1, r1, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0206344c:
    /* reciprocal estimate table, 256 bytes indexed by the top divisor mantissa bits */
    dcd 0xfdfeffff
    dcd 0xf9fafbfc
    dcd 0xf5f6f7f8
    dcd 0xf1f2f3f4
    dcd 0xeeeff0f0
    dcd 0xeaebeced
    dcd 0xe7e8e9ea
    dcd 0xe4e5e6e6
    dcd 0xe1e2e2e3
    dcd 0xdedfdfe0
    dcd 0xdbdcdcdd
    dcd 0xd8d9d9da
    dcd 0xd5d6d7d7
    dcd 0xd2d3d4d4
    dcd 0xd0d0d1d2
    dcd 0xcdcececf
    dcd 0xcbcbcccc
    dcd 0xc8c9c9ca
    dcd 0xc6c6c7c8
    dcd 0xc3c4c5c5
    dcd 0xc1c2c2c3
    dcd 0xbfbfc0c0
    dcd 0xbdbdbebe
    dcd 0xbabbbcbc
    dcd 0xb8b9b9ba
    dcd 0xb6b7b7b8
    dcd 0xb4b5b5b6
    dcd 0xb2b3b3b4
    dcd 0xb0b1b1b2
    dcd 0xafafafb0
    dcd 0xadadaeae
    dcd 0xababacac
    dcd 0xa9aaaaaa
    dcd 0xa7a8a8a9
    dcd 0xa6a6a7a7
    dcd 0xa4a4a5a5
    dcd 0xa2a3a3a4
    dcd 0xa1a1a2a2
    dcd 0x9fa0a0a0
    dcd 0x9e9e9e9f
    dcd 0x9c9d9d9d
    dcd 0x9b9b9b9c
    dcd 0x999a9a9a
    dcd 0x98989999
    dcd 0x96979798
    dcd 0x95959696
    dcd 0x94949495
    dcd 0x92939393
    dcd 0x91919292
    dcd 0x90909191
    dcd 0x8f8f8f90
    dcd 0x8d8e8e8e
    dcd 0x8c8c8d8d
    dcd 0x8b8b8c8c
    dcd 0x8a8a8a8b
    dcd 0x8989898a
    dcd 0x88888888
    dcd 0x86878787
    dcd 0x85868686
    dcd 0x84858585
    dcd 0x83838484
    dcd 0x82828383
    dcd 0x81818282
    dcd 0x80808181
L_0206354c:
    movs r1, ip, lsl #0x1f
    orr r1, r1, #0x7f000000
    orr r1, r1, #0xf00000
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02063564:
    mvn r6, ip, asr #0x1
    cmp r6, #0x34
    bgt L_020636b0
    beq L_0206368c
    cmp r6, #0x14
    bge L_020635ac
    rsb r6, r6, #0x13
    mov lr, r0, lsl r6
    rsb r6, r6, #0x14
    mov r0, r5, lsr r6
    rsb r6, r6, #0x20
    orr r0, r0, r4, lsl r6
    rsb r6, r6, #0x20
    mov r4, r4, lsr r6
    orr r1, r4, ip, lsl #0x1f
    mov ip, lr
    mov lr, #0x0
    b L_020635dc
L_020635ac:
    rsb r6, r6, #0x33
    mov lr, r1, lsl r6
    mov r1, ip, lsl #0x1f
    rsb r6, r6, #0x20
    orr ip, lr, r0, lsr r6
    rsb r6, r6, #0x20
    mov lr, r0, lsl r6
    mov r5, r5, lsr #0x15
    orr r5, r5, r4, lsl #0xb
    rsb r6, r6, #0x1f
    mov r0, r5, lsr r6
    mov r4, #0x0
L_020635dc:
    rsbs r2, r2, #0x0
    mul r4, r2, r4
    mov r5, #0x0
    umlal r5, r4, r2, r0
    rsc r3, r3, #0x0
    mla r4, r0, r3, r4
    cmp r4, ip
    cmpeq r5, lr
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    adds r5, r5, r2
    adc r4, r4, r3
    cmp r4, ip
    bmi L_02063680
    bne L_02063624
    cmp r5, lr
    beq L_02063670
    blo L_02063680
L_02063624:
    subs r5, r5, r2
    sbc r4, r4, r3
L_0206362c:
    adds r5, r5, r5
    adc r4, r4, r4
    adds r5, r5, r2
    adc r4, r4, r3
    adds lr, lr, lr
    adc ip, ip, ip
    cmp r4, ip
    bmi L_02063670
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    cmp r5, lr
    blo L_02063670
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    tst r0, #0x1
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
L_02063670:
    adds r0, r0, #0x1
    adc r1, r1, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02063680:
    adds r0, r0, #0x1
    adc r1, r1, #0x0
    b L_0206362c
L_0206368c:
    rsbs r2, r2, #0x0
    rsc r3, r3, #0x0
    cmp r1, r3
    cmpeq r0, r2
    mov r1, ip, lsl #0x1f
    mov r0, #0x0
    movne r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020636b0:
    mov r1, ip, lsl #0x1f
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020636c0:
    orrs r5, r0, r1, lsl #0x1
    beq L_020637e4
    cmp ip, lr
    beq L_02063728
    movs r1, r1, lsl #0xc
    beq L_02063704
    clz r5, r1
    movs r1, r1, lsl r5
    sub ip, ip, r5
    add r5, ip, #0x1f
    mov r1, r1, lsr #0xb
    orr r1, r1, r0, lsr r5
    rsb r5, r5, #0x20
    mov r0, r0, lsl r5
    mov ip, ip, lsl #0x1
    orr ip, ip, r4, lsr #0x1f
    b L_02063338
L_02063704:
    mvn ip, #0x13
    clz r5, r0
    movs r0, r0, lsl r5
    sub ip, ip, r5
    mov r1, r0, lsr #0xb
    mov r0, r0, lsl #0x15
    mov ip, ip, lsl #0x1
    orr ip, ip, r4, lsr #0x1f
    b L_02063338
L_02063728:
    orrs r5, r0, r1, lsl #0xc
    bne L_0206380c
    bic r5, r3, #0x80000000
    cmp r5, lr, lsl #0x13
    bhs L_0206374c
    and r5, r3, #0x80000000
    eor r1, r5, r1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0206374c:
    orrs r5, r2, r3, lsl #0xc
    bne L_0206382c
    b L_02063844
L_02063758:
    orrs r5, r2, r3, lsl #0x1
    beq L_020637d0
    cmp r4, lr
    beq L_020637b8
    movs r3, r3, lsl #0xc
    beq L_02063798
    clz r5, r3
    movs r3, r3, lsl r5
    sub r4, r4, r5
    add r5, r4, #0x1f
    mov r3, r3, lsr #0xb
    orr r3, r3, r2, lsr r5
    rsb r5, r5, #0x20
    mov r2, r2, lsl r5
    mov r4, r4, lsl #0x1
    b L_0206334c
L_02063798:
    mvn r4, #0x13
    clz r5, r2
    movs r2, r2, lsl r5
    sub r4, r4, r5
    mov r3, r2, lsr #0xb
    mov r2, r2, lsl #0x15
    mov r4, r4, lsl #0x1
    b L_0206334c
L_020637b8:
    orrs r5, r2, r3, lsl #0xc
    bne L_0206382c
    mov r1, ip, lsl #0x1f
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020637d0:
    mov r1, ip, lsl #0x1f
    orr r1, r1, lr, lsl #0x13
    mov r0, #0x0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020637e4:
    orrs r5, r2, r3, lsl #0x1
    beq L_02063844
    bic r5, r3, #0x80000000
    cmp r5, lr, lsl #0x13
    cmpeq r2, #0x0
    bhi L_0206382c
    eor r1, r1, r3
    and r1, r1, #0x80000000
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0206380c:
    tst r1, #0x80000
    beq L_02063844
    bic r5, r3, #0x80000000
    cmp r5, lr, lsl #0x13
    cmpeq r2, #0x0
    bhi L_0206382c
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0206382c:
    tst r3, #0x80000
    beq L_02063844
    mov r1, r3
    mov r0, r2
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02063844:
    orr r1, r1, #0x7f000000
    orr r1, r1, #0xf80000
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
