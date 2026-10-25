#include "m2c.h"

extern char data_020692ec[];
extern char data_0206b918[];
extern char data_0206c1f8[];
extern char data_0206c240[];
extern char data_0206c268[];
extern char data_0206c28c[];
extern char data_0206c298[];
extern char data_0206c29c[];
extern char data_0206e680[];
extern char data_0206e684[];
extern char data_0206e690[];
extern char data_0206e694[];
extern char data_0206e698[];
extern char data_0206e6d4[];
extern char data_0206fcac[];
extern char data_02086b08[];
extern char data_020877d0[];
extern char data_02087844[];
extern char data_020878d4[];
extern char data_020878e0[];
extern char data_02087908[];
extern char data_02087998[];
extern char data_02087a70[];
extern char data_02087c20[];
extern char data_02087d40[];
extern char data_02087e10[];
extern char data_02087f78[];
extern char data_02087f90[];
extern char data_020b8b44[];
extern char data_020b8b6c[];
extern char data_020b8bbc[];
void func_02001654(void);
void func_020016a4(void);
void func_02007450(void);
void func_0200a0f8(void);
void func_0200ad74(void);
void func_0200b6f8(void);
void func_02014ea4(void);
void func_0201d10c(void);
void func_0201d3e0(void);
void func_0201d548(void);
void func_020222b8(void);
void func_02022354(void);
void func_02022b98(void);
void func_02022d20(void);
void func_020252a4(void);
void func_0202541c(void);
void func_0202569c(void);
void func_020259d4(void);
void func_02025a60(void);
void func_02025c84(void);
void func_02026dd4(void);
void func_020276b4(void);
void func_02027794(void);
void func_02027820(void);
void func_02027a38(void);
void func_02027ac8(void);
void func_02027f3c(void);
void func_0202ab18(void);
void func_0202af8c(void);
void func_020306c0(void);
void func_020306fc(void);
void func_02030794(void);
void func_02030878(void);
void func_0203b96c(void);
void func_0203c24c(void);
void func_0203cd5c(void);
void func_0203cdd0(void);
void func_0203cf48(void);
void func_0203d0d8(void);
void func_0203d498(void);
void func_0203d740(void);
void func_0203f930(void);
void func_0203f948(void);
void func_0203feb4(void);
void func_0203ff1c(void);
void func_02040094(void);
void func_020401e8(void);
void func_02040228(void);
void func_0204221c(void);
void func_0204d600(void);
void func_0204f490(void);
void func_02051a48(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02023c58(void) {
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x20
    ldr r0, =data_020878d4
    mov r1, #0x1
    bl func_02022b98
    bl func_02014ea4
    bl func_020016a4
    ldr r3, =data_020877d0
    ldr r0, [r3, #0x2c]
    cmp r0, #0xd
    addls pc, pc, r0, lsl #0x2
    b L_02024bc8
L_02023c88:
    b L_02023cc0
    b L_02024bc8
    b L_02023ce0
    b L_02024564
    b L_02024bc8
    b L_02024694
    b L_02024bc8
    b L_02024854
    b L_02024824
    b L_02024bc8
    b L_02024950
    b L_020249d8
    b L_02024a84
    b L_02024ae4
L_02023cc0:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    beq L_02024bcc
    ldr r0, =data_020877d0
    mov r1, #0x2
    str r1, [r0, #0x2c]
    b L_02024bcc
L_02023ce0:
    ldr r1, =data_02087f90
    mov r0, #0x1
    str r0, [r1, #0x0]
    ldrb r1, [r3, #0x13]
    cmp r1, #0x0
    beq L_02023d3c
    ldrb r1, [r3, #0x15]
    cmp r1, #0x0
    bne L_02023d3c
    add r2, r3, #0x13
    mov r4, #0x0
    swpb r1, r4, [r2]
    add r2, r3, #0xb
    mov r1, #0x3
    str r1, [r3, #0x2c]
    swpb r1, r4, [r2]
    add r2, r3, #0x9
    mov r1, #0xf
    swpb r1, r1, [r2]
    add sp, sp, #0x20
    add r1, r3, #0x19
    swpb r0, r0, [r1]
    ldmia sp!, {r3, r4, r5, pc}
L_02023d3c:
    ldr r0, =data_020877d0
    ldrb r1, [r0, #0x15]
    cmp r1, #0x0
    subne r2, r1, #0x1
    addne r1, r0, #0x15
    swpneb r0, r2, [r1]
    ldr r0, =data_0206e694
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02023eac
    ldr r0, =data_0206e6d4
    ldrb r1, [r0, #0x5f]
    mov r1, r1, lsl #0x1f
    movs r1, r1, lsr #0x1f
    beq L_02023eac
    ldr r1, =data_020877d0
    ldrb r2, [r1, #0x8]
    cmp r2, #0x0
    ldreqsb r2, [r0, #0xa0]
    mvneq r0, #0x0
    cmpeq r2, r0
    ldreqb r0, [r1, #0x0]
    cmpeq r0, #0x0
    bne L_02023eac
    ldr r0, =data_0206c240
    bl func_0203feb4
    bl func_020401e8
    ldr r1, [r0, #0x24]
    bic r1, r1, #0x2
    str r1, [r0, #0x24]
    bl func_020276b4
    mov r0, #0x7
    bl func_02007450
    mov r0, #0x33
    bl func_0204221c
    mov r1, r0
    mov r0, #0xe6
    str r0, [sp, #0x0]
    mov r0, #0x29
    str r0, [sp, #0x4]
    ldr r0, =data_0206e680
    mov r2, #0x0
    ldr r3, [r0, #0x0]
    ldr r0, =0x4001
    str r3, [sp, #0x8]
    str r2, [sp, #0xc]
    str r2, [sp, #0x10]
    str r0, [sp, #0x14]
    mov r0, #0x1
    mov r2, #0xa
    mov r3, #0x94
    bl func_0202af8c
    ldr r2, =data_020877d0
    mov r4, #0x1
    add r1, r2, #0x6
    swpb r0, r4, [r1]
    mov r3, #0xa
    swpb r0, r4, [r2]
    add r1, r2, #0x16
    swpb r0, r3, [r1]
    add r2, r2, #0x3
    mov r0, #0x3e
    swpb r0, r0, [r2]
    mov r0, #0x0
    bl func_0203b96c
    mov r5, #0x0
    mov r4, #0x7f
L_02023e48:
    add r0, r5, #0x3a
    mov r0, r0, lsl #0x10
    mov r1, r5, lsl #0x16
    mov r2, r4
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    bl func_0203c24c
    add r0, r5, #0x1
    and r5, r0, #0xff
    cmp r5, #0x4
    blo L_02023e48
    ldr r0, =data_020877d0
    mov r1, #0xef
    ldrb r0, [r0, #0x3]
    mov r2, #0x9f
    bl func_0203c24c
    ldr r1, =data_0206e6d4
    ldr r0, =data_020877d0
    ldrb r3, [r1, #0x5f]
    add r1, r1, #0x5f
    add r2, r0, #0x7
    bic r0, r3, #0x1
    mov r3, #0x1
    swpb r0, r0, [r1]
    swpb r0, r3, [r2]
L_02023eac:
    ldr r0, =data_0206e694
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02024010
    ldr r0, =data_0206e6d4
    ldrb r1, [r0, #0x5f]
    mov r1, r1, lsl #0x1e
    movs r1, r1, lsr #0x1f
    beq L_02024010
    ldr r1, =data_020877d0
    ldrb r2, [r1, #0x6]
    cmp r2, #0x0
    ldreqsb r2, [r0, #0xa0]
    mvneq r0, #0x0
    cmpeq r2, r0
    ldreq r0, =data_02087f78
    ldreq r0, [r0, #0x0]
    cmpeq r0, #0x0
    ldreqb r0, [r1, #0x0]
    cmpeq r0, #0x0
    bne L_02024010
    ldr r0, =data_0206c240
    bl func_0203feb4
    bl func_020401e8
    ldr r1, [r0, #0x24]
    bic r1, r1, #0x2
    str r1, [r0, #0x24]
    bl func_020276b4
    mov r0, #0x7
    bl func_02007450
    mov r0, #0x35
    bl func_0204221c
    mov r1, r0
    mov r0, #0xe6
    str r0, [sp, #0x0]
    mov r0, #0x29
    str r0, [sp, #0x4]
    ldr r0, =data_0206e680
    mov r2, #0x0
    ldr r3, [r0, #0x0]
    ldr r0, =0x4001
    str r3, [sp, #0x8]
    str r2, [sp, #0xc]
    str r2, [sp, #0x10]
    str r0, [sp, #0x14]
    mov r0, #0x1
    mov r2, #0xa
    mov r3, #0x94
    bl func_0202af8c
    ldr r2, =data_020877d0
    mov r4, #0x1
    add r1, r2, #0x8
    swpb r0, r4, [r1]
    mov r3, #0xa
    swpb r0, r4, [r2]
    add r1, r2, #0x16
    swpb r0, r3, [r1]
    add r2, r2, #0x3
    mov r0, #0x3e
    swpb r0, r0, [r2]
    mov r0, #0x0
    bl func_0203b96c
    mov r5, #0x0
    mov r4, #0x7f
L_02023fac:
    add r0, r5, #0x3a
    mov r0, r0, lsl #0x10
    mov r1, r5, lsl #0x16
    mov r2, r4
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    bl func_0203c24c
    add r0, r5, #0x1
    and r5, r0, #0xff
    cmp r5, #0x4
    blo L_02023fac
    ldr r0, =data_020877d0
    mov r1, #0xef
    ldrb r0, [r0, #0x3]
    mov r2, #0x9f
    bl func_0203c24c
    ldr r1, =data_0206e6d4
    ldr r0, =data_020877d0
    ldrb r3, [r1, #0x5f]
    add r1, r1, #0x5f
    add r2, r0, #0x7
    bic r0, r3, #0x2
    mov r3, #0x1
    swpb r0, r0, [r1]
    swpb r0, r3, [r2]
L_02024010:
    ldr r0, =data_02087f78
    ldr r1, [r0, #0x0]
    cmp r1, #0x0
    beq L_020240bc
    mov r0, #0x1
    bl func_0202ab18
    ldr r0, =data_020877d0
    ldrb r1, [r0, #0x16]
    cmp r1, #0x0
    bne L_020240ac
    mov r0, #0x0
    bl func_0203b96c
    ldr r2, =data_020877d0
    mov r0, #0xa
    add r1, r2, #0x16
    swpb r0, r0, [r1]
    mov r1, #0x0
    ldrb r0, [r2, #0x3]
    mov r2, #0xc0
    cmp r0, #0x3e
    bne L_02024088
    bl func_0203c24c
    ldr r1, =data_020877d0
    mov r0, #0x3f
    add r4, r1, #0x3
    swpb r3, r0, [r4]
    mov r1, #0xef
    mov r2, #0x9f
    bl func_0203c24c
    b L_020241fc
L_02024088:
    bl func_0203c24c
    ldr r1, =data_020877d0
    mov r0, #0x3e
    add r4, r1, #0x3
    swpb r3, r0, [r4]
    mov r1, #0xef
    mov r2, #0x9f
    bl func_0203c24c
    b L_020241fc
L_020240ac:
    sub r2, r1, #0x1
    add r1, r0, #0x16
    swpb r0, r2, [r1]
    b L_020241fc
L_020240bc:
    ldr r0, =data_020877d0
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_020241fc
    cmp r1, #0x0
    bne L_020241fc
    bl func_02030878
    cmp r0, #0x0
    beq L_02024100
    add r0, sp, #0x18
    mov r1, #0x0
    bl func_02030794
    cmp r0, #0x0
    beq L_02024110
    ldrh r0, [sp, #0x1c]
    cmp r0, #0x1
    bne L_02024110
L_02024100:
    mov r0, #0x0
    bl func_020306fc
    cmp r0, #0x0
    beq L_020241fc
L_02024110:
    ldr r0, =data_0206c240
    bl func_0203feb4
    bl func_020401e8
    ldr r1, [r0, #0x24]
    orr r1, r1, #0x2
    str r1, [r0, #0x24]
    mov r0, #0x5
    bl func_02007450
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r2, =data_020b8b6c
    mov r0, #0xa
    str r2, [sp, #0x8]
    mov r1, #0x96
    mov r2, #0xe6
    mov r3, #0x29
    bl func_0203d0d8
    ldr r2, =data_020877d0
    mov r0, #0x0
    swpb r1, r0, [r2]
    bl func_0203b96c
    mov r5, #0x0
    mov r4, #0xc0
L_02024170:
    add r0, r5, #0x3a
    mov r0, r0, lsl #0x10
    mov r1, r5, lsl #0x16
    mov r2, r4
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    bl func_0203c24c
    add r0, r5, #0x1
    and r5, r0, #0xff
    cmp r5, #0x4
    blo L_02024170
    mov r0, #0x3e
    mov r1, #0x0
    mov r2, #0xc0
    bl func_0203c24c
    mov r0, #0x3f
    mov r1, #0x0
    mov r2, #0xc0
    bl func_0203c24c
    ldr r0, =data_020877d0
    mov r2, #0x0
    ldrb r1, [r0, #0x8]
    cmp r1, #0x0
    addne r1, r0, #0x8
    movne r0, #0x0
    swpneb r0, r0, [r1]
    ldr r0, =data_020877d0
    ldrb r1, [r0, #0x6]
    cmp r1, #0x0
    addne r1, r0, #0x6
    movne r0, #0x0
    swpneb r0, r0, [r1]
    ldr r0, =data_020877d0
    add r1, r0, #0x7
    swpb r0, r2, [r1]
L_020241fc:
    bl func_020016a4
    bl func_0200ad74
    bl func_0200b6f8
    ldr r0, =data_020877d0
    ldr r1, [r0, #0x30]
    cmp r1, #0x3
    moveq r1, #0x4
    streq r1, [r0, #0x30]
    ldr r1, =data_02086b08
    ldrb r0, [r1, #0x0]
    cmp r0, #0x0
    beq L_02024240
    ldr r0, =data_0206e694
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
L_02024240:
    ldr r2, =data_020877d0
    ldr r0, [r2, #0x30]
    cmp r0, #0x1
    bne L_02024294
    mov r0, #0x3
    str r0, [r2, #0x2c]
    add r1, r2, #0x9
    mov r0, #0xf
    swpb r0, r0, [r1]
    add r1, r2, #0xb
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r1, =data_0206e6d4
    ldr r0, =data_0206b918
    ldrb r1, [r1, #0x60]
    mov r3, #0x2
    str r3, [r2, #0x30]
    mov r1, r1, lsl #0x1d
    mov r1, r1, lsr #0x1d
    str r1, [r0, #0x4]
    b L_020242a0
L_02024294:
    cmp r0, #0x4
    moveq r0, #0x0
    streq r0, [r2, #0x30]
L_020242a0:
    ldr r0, =data_020877d0
    ldrb r1, [r0, #0x11]
    cmp r1, #0x0
    ldreqb r1, [r0, #0x18]
    cmpeq r1, #0x0
    ldreqb r0, [r0, #0x2]
    cmpeq r0, #0x0
    beq L_02024490
    ldr r0, =data_0206b918
    ldrb r0, [r0, #0x0]
    cmp r0, #0xa
    beq L_02024490
    ldr r0, =data_02087f78
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldreq r0, =data_0206e694
    ldreq r0, [r0, #0x0]
    cmpeq r0, #0x0
    bne L_02024490
    ldr r2, =data_020877d0
    ldrb r0, [r2, #0x5]
    cmp r0, #0x14
    blo L_02024304
    bl func_02025c84
    b L_02024320
L_02024304:
    add r0, r0, #0x1
    add r1, r2, #0x5
    swpb r0, r0, [r1]
    ldrb r0, [r2, #0x5]
    cmp r0, #0x14
    movhi r0, #0x14
    swphib r0, r0, [r1]
L_02024320:
    ldr r0, =data_020877d0
    ldrb r1, [r0, #0x11]
    cmp r1, #0x0
    ldreqb r0, [r0, #0x2]
    cmpeq r0, #0x0
    beq L_02024414
    ldr r0, =data_0206b918
    ldrb r0, [r0, #0x0]
    cmp r0, #0x7
    beq L_020243cc
    mov r0, #0x0
    bl func_0203b96c
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x50]
    cmp r0, #0x0
    beq L_02024388
    ldr r0, =data_0206b918
    ldrb r0, [r0, #0x0]
    bl func_0201d3e0
    cmp r0, #0x0
    beq L_02024388
    mov r0, #0x1d
    mov r1, #0xa0
    mov r2, #0x87
    bl func_0203c24c
    b L_02024398
L_02024388:
    mov r0, #0x1d
    mov r1, #0x25
    mov r2, #0xc0
    bl func_0203c24c
L_02024398:
    ldr r0, =data_0206b918
    ldrb r0, [r0, #0x0]
    bl func_0201d548
    cmp r0, #0x1
    mov r0, #0x1e
    mov r1, #0x20
    bls L_020243c0
    mov r2, #0x87
    bl func_0203c24c
    b L_02024414
L_020243c0:
    mov r2, #0xc0
    bl func_0203c24c
    b L_02024414
L_020243cc:
    mov r0, #0x7
    bl func_0201d548
    cmp r0, #0x1
    bhi L_020243f0
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x5f]
    mov r0, r0, lsl #0x1b
    movs r0, r0, lsr #0x1f
    bne L_02024404
L_020243f0:
    mov r0, #0x22
    mov r1, #0x20
    mov r2, #0x87
    bl func_0203c24c
    b L_02024414
L_02024404:
    mov r0, #0x22
    mov r1, #0x20
    mov r2, #0xc0
    bl func_0203c24c
L_02024414:
    ldr r0, =data_020877d0
    ldrb r1, [r0, #0x18]
    cmp r1, #0x0
    beq L_0202447c
    ldr r1, [r0, #0x20]
    cmp r1, #0x9
    beq L_0202452c
    cmp r1, #0x0
    cmpne r1, #0x2
    cmpne r1, #0x7
    cmpne r1, #0x1
    beq L_02024454
    ldrb r0, [r0, #0x17]
    bl func_0201d10c
    cmp r0, #0x0
    beq L_02024468
L_02024454:
    mov r0, #0x21
    mov r1, #0x60
    mov r2, #0x87
    bl func_0203c24c
    b L_0202452c
L_02024468:
    mov r0, #0x21
    mov r1, #0x60
    mov r2, #0xc0
    bl func_0203c24c
    b L_0202452c
L_0202447c:
    mov r0, #0x21
    mov r1, #0x60
    mov r2, #0xc0
    bl func_0203c24c
    b L_0202452c
L_02024490:
    ldr r0, =data_020877d0
    ldrb r1, [r0, #0xc]
    cmp r1, #0x0
    beq L_02024510
    ldr r1, =data_0206e690
    mov r0, #0x39
    ldr r5, [r1, #0x0]
    bl func_0204221c
    mov r1, #0x0
    str r1, [sp, #0x0]
    ldr r4, =data_020b8b6c
    str r1, [sp, #0x4]
    mov r3, r5
    mov r1, #0x20
    mov r2, #0x87
    str r4, [sp, #0x8]
    bl func_0203d740
    mov r0, #0x0
    bl func_020306c0
    cmp r0, #0x0
    beq L_0202452c
    mvn r0, #0xf
    mov r1, #0x1e
    mov r2, #0x3
    bl func_020222b8
    ldr r1, =data_020877d0
    mov r3, #0xc
    ldr r0, =data_02087f90
    mov r2, #0x0
    str r3, [r1, #0x2c]
    str r2, [r0, #0x0]
    b L_0202452c
L_02024510:
    ldrb r1, [r0, #0xa]
    cmp r1, #0x0
    beq L_0202452c
    ldrb r0, [r0, #0x7]
    cmp r0, #0x0
    bne L_0202452c
    bl func_020276b4
L_0202452c:
    ldr r1, =data_020877d0
    mov r0, #0x1
    ldrb r3, [r1, #0x2]
    ldrb r2, [r1, #0xc]
    ldrb r4, [r1, #0x11]
    ldrb ip, [r1, #0x18]
    orr r2, r3, r2
    orr r2, r4, r2
    orr r3, ip, r2
    add r2, r1, #0xa
    swpb r1, r3, [r2]
    bl func_02027a38
    bl func_02027794
    b L_02024bcc
L_02024564:
    ldrb r0, [r3, #0xb]
    cmp r0, #0xf
    addhi r1, r3, #0xb
    movhi r0, #0xf
    swphib r0, r0, [r1]
    mov r1, #0x0
    ldr r0, =data_02087f90
    str r1, [r0, #0x0]
    bl func_020016a4
    ldr r1, =data_020877d0
    mov r0, #0x2
    ldrb r5, [r1, #0xb]
    bl func_0203cf48
    mov r1, r0
    rsb r4, r5, #0xf
    ldr r0, =0x4000050
    mov r3, r5
    mov r2, #0x1
    str r4, [sp, #0x0]
    bl func_0204d600
    ldr r0, =data_020877d0
    ldrb r1, [r0, #0xb]
    ldrb r0, [r0, #0x9]
    cmp r1, r0
    beq L_02024604
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x50]
    bl func_0203cd5c
    ldr r3, =data_020877d0
    mov r4, #0x4
    ldrb r0, [r3, #0xb]
    add r1, r3, #0xb
    add r2, r3, #0xf
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    mov r0, #0x0
    str r4, [r3, #0x24]
    swpb r0, r0, [r2]
    bl func_020276b4
    b L_02024664
L_02024604:
    mov r0, #0x0
    bl func_0203b96c
    ldr r0, =data_0206b918
    ldr r2, =data_020877d0
    ldr r0, [r0, #0x4]
    add r1, r2, #0x6a
    swpb r0, r0, [r1]
    mov r1, #0x1
    ldr r0, [r2, #0x74]
    bl func_020252a4
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    and r0, r0, #0xff
    bl func_02027820
    ldr r0, =data_020877d0
    mov r1, #0x5
    str r1, [r0, #0x2c]
    ldr r1, =data_020b8bbc
    ldr r0, =data_0206c268
    str r1, [sp, #0x0]
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    bl func_0203d498
L_02024664:
    ldr r0, =data_020b8b44
    ldr r1, =data_020877d0
    ldr r0, [r0, #0x0]
    ldr r4, =data_020692ec
    mov ip, #0x0
    ldr r3, =data_0206e684
    add r2, r1, #0x12
    str ip, [r4, #0x0]
    str ip, [r3, #0x0]
    swpb r1, ip, [r2]
    bl func_0203cdd0
    b L_02024bcc
L_02024694:
    bl func_020016a4
    bl func_0200ad74
    bl func_0202569c
    mov r0, #0x1
    bl func_020306fc
    cmp r0, #0x0
    beq L_02024738
    mov r0, #0x20
    bl func_0200a0f8
    ldr r3, =data_0206b918
    mov r0, #0x0
    ldr r1, [r3, #0x4]
    mov r2, r1, lsr #0x1f
    rsb r1, r2, r1, lsl #0x1d
    add r1, r2, r1, ror #0x1d
    str r1, [r3, #0x4]
    bl func_0203b96c
    ldr r3, =data_020877d0
    mov r0, #0xa
    str r0, [r3, #0x2c]
    add r2, r3, #0x9
    mov r0, #0x0
    swpb r1, r0, [r2]
    add r2, r3, #0xb
    mov r1, #0xf
    swpb r1, r1, [r2]
    ldr r2, =data_020692ec
    mov r1, #0x3
    str r1, [r3, #0x30]
    ldr r1, =data_0206e684
    str r0, [r2, #0x0]
    str r0, [r1, #0x0]
    bl func_02027f3c
    mov r0, #0x0
    ldr r1, =data_020b8b6c
    str r0, [sp, #0x0]
    stmib sp, {r0, r1}
    mov r1, #0x52
    mov r2, #0xff
    mov r3, #0x1e
    bl func_0203d0d8
L_02024738:
    ldr r0, =data_020877d0
    ldrb r0, [r0, #0x19]
    cmp r0, #0x0
    beq L_02024bcc
    mov r0, #0x7
    bl func_02001654
    ldr r0, =data_020877d0
    mov r3, #0x0
    add r1, r0, #0x19
    ldr r2, =data_0206fcac
    swpb r0, r3, [r1]
    str r3, [r2, #0xac]
    str r3, [r2, #0xb4]
    bl func_020016a4
    ldr r0, =data_0206b918
    mov r2, #0x6
    str r2, [r0, #0x4]
    ldr r3, =data_020877d0
    mov r1, #0x8
    str r1, [r3, #0x2c]
    mov r4, #0x0
    str r4, [r3, #0x1c]
    ldr r0, =data_02087a70
    ldr r1, =data_02087998
    mov r2, #0x4
    str r4, [r3, #0x28]
    bl func_02022d20
    ldr r0, =data_02087d40
    ldr r1, =data_02087a70
    mov r2, #0x4
    bl func_02022d20
    ldr r0, =data_020877d0
    ldr r2, =data_02087844
    ldr r3, [r0, #0x1c]
    add r0, r0, #0x6
    add r1, r0, #0x100
    swpb r0, r3, [r1]
    mov r1, #0x1
    ldr r0, [r2, r3, lsl #0x2]
    bl func_0202541c
    ldr r0, =data_02087998
    ldr r1, =data_02087c20
    mov r2, #0x4
    bl func_02022d20
    ldr r0, =data_02087c20
    ldr r1, =data_02087908
    mov r2, #0x4
    bl func_02022d20
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    and r0, r0, #0xff
    bl func_02027820
    ldr r0, =data_020877d0
    ldr r0, [r0, #0x1c]
    and r0, r0, #0xff
    bl func_02027ac8
    mov r0, r4
    bl func_02027f3c
    b L_02024bcc
L_02024824:
    add r0, r3, #0x6
    ldr r2, [r3, #0x28]
    add r1, r0, #0x100
    swpb r0, r2, [r1]
    ldr r0, =data_020878e0
    mov r1, #0x1
    ldr r0, [r0, r2, lsl #0x2]
    bl func_0202541c
    ldr r0, =data_020877d0
    mov r1, #0x7
    str r1, [r0, #0x2c]
    b L_02024bcc
L_02024854:
    bl func_02025a60
    mov r0, #0x1
    bl func_020306fc
    cmp r0, #0x0
    beq L_02024908
    mov r0, #0x20
    bl func_0200a0f8
    ldr r0, =data_0206b918
    ldr r1, =data_020877d0
    mov r3, #0x3
    ldr r2, [r0, #0x4]
    str r3, [r1, #0x2c]
    add r1, r1, #0x6a
    swpb r0, r2, [r1]
    ldr r0, =data_02087844
    mov r1, #0x1
    ldr r0, [r0, r2, lsl #0x2]
    bl func_020252a4
    ldr r1, =data_020877d0
    mov r2, #0x4
    mov r0, #0x1
    str r2, [r1, #0x24]
    bl func_02027a38
    mov r0, #0x0
    bl func_02027a38
    ldr r0, =data_020877d0
    ldrb r0, [r0, #0xf]
    cmp r0, #0x0
    beq L_02024900
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r4, =data_020b8b6c
    str r0, [sp, #0x4]
    mov r0, #0x40
    mov r1, #0x4d
    mov r2, #0x80
    mov r3, #0x1e
    str r4, [sp, #0x8]
    bl func_0203d0d8
    ldr r0, =data_020877d0
    mov r2, #0x0
    add r1, r0, #0xf
    swpb r0, r2, [r1]
L_02024900:
    mov r0, #0x0
    bl func_02027f3c
L_02024908:
    mov r0, #0x0
    bl func_020306fc
    cmp r0, #0x0
    ldrne r0, =data_020877d0
    ldrne r0, [r0, #0x28]
    cmpne r0, #0x5
    beq L_02024bcc
    mov r0, #0x1f
    bl func_0200a0f8
    bl func_020259d4
    mov r4, #0xb
    ldr r3, =data_020877d0
    sub r0, r4, #0x1b
    mov r1, #0x1e
    mov r2, #0x3
    str r4, [r3, #0x2c]
    bl func_020222b8
    b L_02024bcc
L_02024950:
    bl func_020016a4
    ldr r1, =data_020877d0
    mov r0, #0x2
    ldrb r5, [r1, #0xb]
    bl func_0203cf48
    mov r1, r0
    rsb r4, r5, #0xf
    ldr r0, =0x4000050
    mov r3, r5
    mov r2, #0x1
    str r4, [sp, #0x0]
    bl func_0204d600
    ldr r1, =data_020877d0
    ldrb r2, [r1, #0xb]
    ldrb r0, [r1, #0x9]
    cmp r2, r0
    beq L_020249b0
    sub r0, r2, #0x1
    add r1, r1, #0xb
    swpb r0, r0, [r1]
    bl func_02027794
    mov r0, #0x1
    bl func_02027a38
    b L_02024bcc
L_020249b0:
    mov r2, #0x2
    ldr r0, =data_0206c1f8
    ldr r4, =data_020b8bbc
    str r2, [r1, #0x2c]
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    b L_02024bcc
L_020249d8:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    beq L_02024bcc
    bl func_02040228
    ldr r2, =data_0206b918
    ldr r1, =data_0206e6d4
    ldr r2, [r2, #0x4]
    add r1, r1, #0x18
    mov r4, r0
    swpb r0, r2, [r1]
    bl func_02026dd4
    mov r0, #0x0
    bl func_0203f930
    bl func_0203f948
    ldr r0, =data_020692ec
    mov r2, #0x0
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_02024a4c
    ldr r0, =data_0206b918
    str r2, [sp, #0x0]
    ldr ip, [r0, #0x4]
    ldr r0, =data_02087e10
    ldr r1, =data_0206c28c
    mov r3, #0x5
    str ip, [sp, #0x4]
    bl func_0204f490
    b L_02024a68
L_02024a4c:
    ldr r1, =data_0206b918
    ldr r0, =data_02087e10
    ldr ip, [r1, #0x4]
    ldr r1, =data_0206c28c
    mov r3, #0x6
    str ip, [sp, #0x0]
    bl func_0204f490
L_02024a68:
    ldr r0, [r4, #0x1c]
    ldr r2, =data_02087e10
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    b L_02024bcc
L_02024a84:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    beq L_02024bcc
    bl func_02040228
    mov r4, r0
    bl func_02026dd4
    ldr r1, =data_020692ec
    mov r2, #0x1
    mov r0, #0x0
    str r2, [r1, #0x0]
    bl func_0203f930
    bl func_0203f948
    ldr r0, =data_02087e10
    ldr r1, =data_0206c298
    mov r2, #0x1
    bl func_0204f490
    ldr r0, [r4, #0x1c]
    mov r1, #0x2
    ldr r2, =data_02087e10
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    b L_02024bcc
L_02024ae4:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    beq L_02024bcc
    bl func_02040228
    mov r4, r0
    bl func_02026dd4
    mov r0, #0x0
    bl func_0203f930
    bl func_0203f948
    mov r0, #0x1
    str r0, [sp, #0x0]
    ldr r0, =data_02087e10
    ldr r1, =data_0206c29c
    mov r2, #0x0
    mov r3, #0x8
    bl func_0204f490
    ldr r0, [r4, #0x1c]
    mov r1, #0x2
    ldr r2, =data_02087e10
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    b L_02024bcc
L_02024bc8:
    bl func_02051a48
L_02024bcc:
    ldr r2, =data_020877d0
    ldrb r0, [r2, #0x4]
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1f
    adds r0, r1, r0, ror #0x1f
    bne L_02024cb0
    add r1, r2, #0x11
    mov r3, #0x0
    swpb r0, r3, [r1]
    add r1, r2, #0x1
    swpb r0, r3, [r1]
    add r1, r2, #0xc
    swpb r0, r3, [r1]
    add r1, r2, #0x2
    swpb r0, r3, [r1]
    add r2, r2, #0x4
    mov r0, #0x4
    swpb r1, r3, [r2]
    bl func_020306c0
    cmp r0, #0x0
    bne L_02024c90
    mov r0, #0x5
    bl func_020306c0
    cmp r0, #0x0
    bne L_02024c90
    mov r0, #0x6
    bl func_020306c0
    cmp r0, #0x0
    bne L_02024c90
    mov r0, #0x7
    bl func_020306c0
    cmp r0, #0x0
    bne L_02024c90
    mov r0, #0x0
    bl func_020306c0
    cmp r0, #0x0
    bne L_02024c90
    mov r0, #0x1
    bl func_020306c0
    cmp r0, #0x0
    bne L_02024c90
    mov r0, #0xa
    bl func_020306c0
    cmp r0, #0x0
    bne L_02024c90
    mov r0, #0xb
    bl func_020306c0
    cmp r0, #0x0
    beq L_02024ca0
L_02024c90:
    ldr r0, =data_020877d0
    mov r2, #0x0
    add r1, r0, #0x18
    swpb r0, r2, [r1]
L_02024ca0:
    ldr r0, =data_020877d0
    mov r2, #0x0
    add r1, r0, #0xd
    swpb r0, r2, [r1]
L_02024cb0:
    ldr r0, =data_020877d0
    ldrb r2, [r0, #0x4]
    add r1, r0, #0x4
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, pc}
}
// clang-format on
