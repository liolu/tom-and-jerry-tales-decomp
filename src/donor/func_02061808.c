/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* _dfixu from https://github.com/tylzars/bakubrawlers libs/msl/src/rt_soft_float.c (license: none), reused by
 * tools/donor_match.py */
// clang-format off
asm unsigned int func_02061808(double a) {
    tst r1, #0x80000000
    bne L_0201dbcc
    ldr r2, =0x41e
    subs r2, r2, r1, lsr #0x14
    blt L_0201dbe0
    cmp r2, #0x20
    bge L_0201dbc4
    mov r3, r1, lsl #0xb
    orr r3, r3, #0x80000000
    orr r3, r3, r0, lsr #0x15
    mov r0, r3, lsr r2
    bx lr

L_0201dbc4:
    mov r0, #0x0
    bx lr

L_0201dbcc:
    cmn r1, #0x100000
    cmpeq r0, #0x0
    movls r0, #0x0
    mvnhi r0, #0x0
    bx lr

L_0201dbe0:
    mvn r0, #0x0
    bx lr
}
// clang-format on
