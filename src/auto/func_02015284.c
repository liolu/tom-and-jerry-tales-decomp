#include "m2c.h"

void func_02001694(void);
void func_02013f04(void);
void func_020145d8(void);
void func_02014e34(void);
void func_02015da4(void);
void func_02015ecc(void);
void func_02016058(void);
void func_0201609c(void);
void func_0201617c(void);
void func_02016228(void);
void func_0201c54c(void);
void func_0203b96c(void);
void func_0203c24c(void);
void func_0203d0d8(void);
void func_0203feb4(void);
void func_020401e8(void);
void func_02043fd0(void);
void func_020440e8(void);
void func_020442a8(void);
void func_02044460(void);
void OS_SetTick(void);
extern char data_020692ec[];
extern char data_0206ad48[];
extern char data_0206ad4c[];
extern char data_0206e684[];
extern char data_0206e694[];
extern char data_0206e6d4[];
extern char data_0206ea14[];
extern char data_02087044[];
extern char data_0208705c[];
extern char data_020880c0[];
extern char data_020b8b44[];
// clang-format off
asm s32 func_02015284(s32 arg0) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r4, r0
    ldrb r0, [r4, #0xa]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    ldrneh r0, [r4, #0x8]
    addne r0, r0, #0x1
    strneh r0, [r4, #0x8]
    ldr r2, [r4, #0x0]
    and r0, r2, #0xff
    cmp r0, #0xb
    addls pc, pc, r0, lsl #0x2
    b @L_02015d70
@L_020152bc:
    b @L_02015d70
    b @L_02015d50
    b @L_02015d70
    b @L_02015830
    b @L_02015648
    b @L_02015864
    b @L_02015af8
    b @L_02015c3c
    b @L_02015d20
    b @L_020155e8
    b @L_020152ec
    b @L_02015538
@L_020152ec:
    ldrb r0, [r4, #0xb]
    mov r5, #0x0
    cmp r0, #0x0
    bne @L_0201533c
    ldrb r0, [r4, #0xa]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    bne @L_02015414
    ldr r0, =data_0206ea14
    ldr r1, [r4, #0x30]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x28]
    cmp r0, r1
    blt @L_02015414
    ldr r0, =data_0208705c
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    moveq r5, #0x1
    b @L_02015414
@L_0201533c:
    cmp r0, #0x1
    ldreq r0, =data_0206e6d4
    ldreqsh r0, [r0, #0x64]
    cmpeq r0, #0x0
    ldreq r0, =data_0206e694
    ldreq r0, [r0, #0x0]
    cmpeq r0, #0x0
    bne @L_02015414
    bl func_02001694
    cmp r0, #0x5
    bne @L_02015414
    ldr r3, =data_0206e6d4
    ldr r2, =data_020880c0
    ldrb r6, [r3, #0xa1]
    add r1, r3, #0xa1
    add r0, r6, #0x1
    swpb r0, r0, [r1]
    ldrb r0, [r2, #0x18]
    cmp r6, r0
    bne @L_020153a4
    mov r0, #0x1
    str r0, [r3, #0xa4]
    str r0, [r4, #0x54]
    mov r0, #0x6
    str r0, [r4, #0x0]
    b @L_02015414
@L_020153a4:
    bl func_02016228
    ldr r1, [r0, #0x50]
    add r3, r4, #0x4c
    str r1, [r4, #0x50]
    ldrb r2, [r0, #0x4c]
    add r5, r4, #0x58
    mov r1, #0x0
    swpb r2, r2, [r3]
    ldrb r0, [r0, #0x58]
    swpb r0, r0, [r5]
    ldrb r0, [r4, #0x4c]
    cmp r0, #0x0
    bls @L_02015408
    mov r0, #0x58
@L_020153dc:
    ldr r3, [r4, #0x50]
    add r2, r1, #0x1
    mla r3, r1, r0, r3
    ldrb r5, [r3, #0x3c]
    add r3, r3, #0x3c
    and r1, r2, #0xff
    bic r2, r5, #0x8
    swpb r2, r2, [r3]
    ldrb r2, [r4, #0x4c]
    cmp r1, r2
    blo @L_020153dc
@L_02015408:
    ldr r1, =data_0208705c
    mov r5, #0x1
    swpb r0, r5, [r1]
@L_02015414:
    cmp r5, #0x0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r4, #0x38]
    cmp r0, #0x0
    movne r0, #0xb
    strne r0, [r4, #0x0]
    bne @L_02015450
    mov r0, #0x9
    str r0, [r4, #0x0]
    ldrb r0, [r4, #0xa]
    add r1, r4, #0xa
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
@L_02015450:
    ldr r0, =data_0206ea14
    ldr r1, [r4, #0x34]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x28]
    cmp r0, r1
    movgt r0, #0x2
    addgt sp, sp, #0xc
    strgt r0, [r4, #0x0]
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r1, [r4, #0x3f]
    ldr r0, [r4, #0x40]
    mov r3, r4
    mov r2, #0x1
    bl func_0201609c
    ldrb r1, [r4, #0x44]
    ldr r0, [r4, #0x48]
    mov r3, r4
    mov r2, #0x0
    bl func_0201609c
    ldrb r1, [r4, #0x5a]
    ldr r0, [r4, #0x5c]
    mov r3, r4
    mov r2, #0x0
    bl func_0201609c
    ldrb r1, [r4, #0x60]
    ldr r0, [r4, #0x64]
    mov r2, #0x0
    mov r3, r4
    bl func_0201609c
    ldr r0, [r4, #0x0]
    cmp r0, #0xb
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r1, r4
    mov r0, #0x0
    bl func_02015da4
    mov r1, r4
    mov r0, #0x4
    bl func_02015da4
    ldrb r0, [r4, #0x4c]
    cmp r0, #0x0
    movne r0, #0x4
    addne sp, sp, #0xc
    strne r0, [r4, #0x0]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_0206e684
    add sp, sp, #0xc
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldrne r0, [r4, #0x40]
    ldrne r0, [r0, #0x0]
    cmpne r0, #0x7
    movne r0, #0x4
    strne r0, [r4, #0x0]
    moveq r0, #0x3
    streq r0, [r4, #0x0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015538:
    ldr r0, =data_0206ea14
    ldr r1, [r4, #0x38]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x28]
    cmp r0, r1
    addle sp, sp, #0xc
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_0208705c
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, #0x9
    str r0, [r4, #0x0]
    ldrb r0, [r4, #0xa]
    add r2, r4, #0xa
    mov r1, r4
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r2]
    mov r0, #0x0
    bl func_02015da4
    mov r1, r4
    mov r0, #0x4
    bl func_02015da4
    ldrb r0, [r4, #0x4c]
    cmp r0, #0x0
    movne r0, #0x4
    addne sp, sp, #0xc
    strne r0, [r4, #0x0]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_0206e684
    add sp, sp, #0xc
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldrne r0, [r4, #0x40]
    ldrne r0, [r0, #0x0]
    cmpne r0, #0x7
    movne r0, #0x4
    strne r0, [r4, #0x0]
    moveq r0, #0x3
    streq r0, [r4, #0x0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020155e8:
    mov r1, r4
    mov r0, #0x0
    bl func_02015da4
    mov r1, r4
    mov r0, #0x4
    bl func_02015da4
    ldrb r0, [r4, #0x4c]
    cmp r0, #0x0
    movne r0, #0x4
    addne sp, sp, #0xc
    strne r0, [r4, #0x0]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_0206e684
    add sp, sp, #0xc
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldrne r0, [r4, #0x40]
    ldrne r0, [r0, #0x0]
    cmpne r0, #0x7
    movne r0, #0x4
    strne r0, [r4, #0x0]
    moveq r0, #0x3
    streq r0, [r4, #0x0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015648:
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq @L_02015770
    mov r0, r4
    bl func_02016058
    cmp r0, #0x0
    ldrne r0, =data_02087044
    ldrne r0, [r0, #0x0]
    cmpne r0, #0x0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r4
    bl func_02015ecc
    str r0, [r4, #0x54]
    cmp r0, #0x2
    beq @L_020156ac
    ldr r2, =data_0206ad48
    ldrb r0, [r2, #0x3]
    add r1, r2, #0x3
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrb r0, [r2, #0x3]
    cmp r0, #0x0
    bne @L_02015758
@L_020156ac:
    ldrb r0, [r4, #0x3f]
    mov r5, #0x0
    cmp r0, #0x0
    ble @L_02015724
    mov r6, r5
    mov r9, r5
    mov r8, #0x5
@L_020156c8:
    ldr r1, [r4, #0x40]
    ldr r0, [r1, r6]
    add r7, r1, r6
    cmp r0, #0x2
    bne @L_02015710
    add r0, r7, #0x40
    bl func_020440e8
    mov r10, r0
    add r0, r7, #0x40
    bl func_02043fd0
    cmp r10, r0
    bge @L_02015710
    ldr r0, [r4, #0x40]
    mov r1, r9
    add r0, r0, r6
    add r0, r0, #0x40
    bl func_020442a8
    str r8, [r4, #0x0]
@L_02015710:
    ldrb r0, [r4, #0x3f]
    add r5, r5, #0x1
    add r6, r6, #0x64
    cmp r5, r0
    blt @L_020156c8
@L_02015724:
    ldr r0, =data_0206ad48
    ldrb r0, [r0, #0x3]
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_0206e6d4
    mov r2, #0x1
    add r1, r0, #0xa8
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    mov r0, #0x5
    str r0, [r4, #0x0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015758:
    ldr r0, [r4, #0x54]
    add sp, sp, #0xc
    cmp r0, #0x1
    moveq r0, #0x5
    streq r0, [r4, #0x0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015770:
    ldrb r0, [r4, #0x2e]
    cmp r0, #0x0
    beq @L_020157d0
    mov r0, r4
    bl func_02016058
    cmp r0, #0x0
    bne @L_020157b4
    ldr r0, [r4, #0x40]
    ldr r2, [r0, #0x2c]
    ldrh r1, [r0, #0x30]
    ldrh r0, [r0, #0x28]
    mov r2, r2, lsr #0xc
    add r2, r2, #0xf
    add r0, r1, r0
    cmp r2, r0
    addls sp, sp, #0xc
    ldmlsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020157b4:
    mov r0, r4
    bl func_02015ecc
    str r0, [r4, #0x54]
    mov r0, #0x6
    add sp, sp, #0xc
    str r0, [r4, #0x0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020157d0:
    ldrb r0, [r4, #0x59]
    cmp r0, #0x0
    beq @L_020157ec
    mov r0, r4
    bl func_02016058
    cmp r0, #0x0
    bne @L_02015814
@L_020157ec:
    ldrb r0, [r4, #0x59]
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r0, [r4, #0x3c]
    ldrh r1, [r4, #0x8]
    sub r0, r0, #0x1
    cmp r1, r0
    addlt sp, sp, #0xc
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015814:
    mov r0, r4
    bl func_02015ecc
    str r0, [r4, #0x54]
    mov r0, #0x6
    add sp, sp, #0xc
    str r0, [r4, #0x0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015830:
    ldr r0, =data_0206ea14
    ldr r1, [r4, #0x34]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x28]
    cmp r0, r1
    addlt sp, sp, #0xc
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r2, #0x2
    movne r0, #0x8
    add sp, sp, #0xc
    strne r0, [r4, #0x0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015864:
    ldr r2, [r4, #0x54]
    cmp r2, #0x2
    ldrne r1, =data_0206ad48
    ldrneb r0, [r1, #0x0]
    cmpne r0, #0x0
    beq @L_0201588c
    subne r0, r0, #0x1
    swpneb r0, r0, [r1]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0201588c:
    cmp r2, #0x2
    ldrne r0, =data_0206ad48
    ldrneb r0, [r0, #0x3]
    cmpne r0, #0x0
    ldrneb r0, [r4, #0x4c]
    cmpne r0, #0x0
    bne @L_02015acc
    ldrb r0, [r4, #0x4c]
    mov r2, #0x0
    cmp r0, #0x0
    moveq r2, #0x1
    beq @L_02015948
    ldrb r0, [r4, #0x3f]
    mov r7, r2
    cmp r0, #0x0
    bls @L_02015948
    mov r5, #0x1
    mov r9, #0x64
@L_020158d4:
    mul r8, r7, r9
    ldr r1, [r4, #0x40]
    ldr r0, [r1, r8]
    add r1, r1, r8
    cmp r0, #0x2
    bne @L_02015934
    add r0, r1, #0x40
    bl func_020440e8
    ldr r1, [r4, #0x40]
    mov r6, r0
    add r0, r1, r8
    add r0, r0, #0x40
    bl func_02043fd0
    cmp r6, r0
    blo @L_0201592c
    ldr r0, [r4, #0x40]
    add r0, r0, r8
    add r0, r0, #0x40
    bl func_02044460
    cmp r0, #0x0
    moveq r2, r5
    beq @L_02015934
@L_0201592c:
    mov r2, #0x0
    b @L_02015948
@L_02015934:
    ldrb r0, [r4, #0x3f]
    add r1, r7, #0x1
    and r7, r1, #0xff
    cmp r7, r0
    blo @L_020158d4
@L_02015948:
    cmp r2, #0x0
    beq @L_02015ae4
    ldr r0, =data_0206ad4c
    bl func_0203feb4
    bl func_020401e8
    ldr r2, [r0, #0x24]
    ldr r1, =data_0206e6d4
    orr r2, r2, #0x2
    str r2, [r0, #0x24]
    ldr r0, [r1, #0xc4]
    ldr r1, [r1, #0xc8]
    bl OS_SetTick
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8b44
    mov r0, #0xa
    str r1, [sp, #0x8]
    mov r1, #0x96
    mov r2, #0xeb
    mov r3, #0x29
    bl func_0203d0d8
    mov r0, #0x0
    bl func_0203b96c
    mov r6, #0x0
    mov r5, #0xc0
@L_020159b0:
    add r0, r6, #0xc
    mov r0, r0, lsl #0x10
    mov r1, r6, lsl #0x16
    mov r2, r5
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    bl func_0203c24c
    add r0, r6, #0x1
    and r6, r0, #0xff
    cmp r6, #0x4
    blo @L_020159b0
    ldr r0, =data_0206ad48
    mov r1, #0x3
    str r1, [r4, #0x0]
    add r2, r0, #0x3
    mov r1, #0x5
    mov r0, #0x0
    swpb r1, r1, [r2]
    bl func_02013f04
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne @L_02015a24
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0xb4]
    cmp r0, #0x6
    blo @L_02015a24
    mov r0, #0x7
    bl func_02013f04
@L_02015a24:
    ldrb r0, [r4, #0x4c]
    mov r6, #0x0
    cmp r0, #0x0
    bls @L_02015a78
    mov r7, #0x58
@L_02015a38:
    mul r5, r6, r7
    ldr r0, [r4, #0x50]
    add r0, r0, r5
    ldrsb r0, [r0, #0x54]
    bl func_0201c54c
    ldr r1, [r4, #0x50]
    add r0, r6, #0x1
    add r1, r1, r5
    ldrb r2, [r1, #0x57]
    add r1, r1, #0x57
    and r6, r0, #0xff
    bic r0, r2, #0x1
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x4c]
    cmp r6, r0
    blo @L_02015a38
@L_02015a78:
    ldr r0, [r4, #0x54]
    cmp r0, #0x2
    bne @L_02015ae4
    ldrb r0, [r4, #0x5a]
    mov r6, #0x0
    cmp r0, #0x0
    bls @L_02015ae4
    mov r5, #0x64
@L_02015a98:
    mul r7, r6, r5
    ldr r0, [r4, #0x5c]
    add r0, r0, r7
    bl func_020145d8
    ldr r0, [r4, #0x5c]
    add r0, r0, r7
    bl func_02014e34
    add r1, r6, #0x1
    ldrb r0, [r4, #0x5a]
    and r6, r1, #0xff
    cmp r6, r0
    blo @L_02015a98
    b @L_02015ae4
@L_02015acc:
    cmp r2, #0x1
    bne @L_02015ae4
    mov r0, #0x4
    mov r1, r4
    str r0, [r4, #0x0]
    bl func_02015da4
@L_02015ae4:
    ldr r1, =data_0206ad48
    mov r0, #0xa
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015af8:
    ldr r0, [r4, #0x54]
    cmp r0, #0x2
    bne @L_02015bd0
    mov r1, r4
    mov r0, #0x2
    bl func_02015da4
    ldrb r0, [r4, #0xb]
    cmp r0, #0x1
    bne @L_02015b98
    mov r1, #0xa
    str r1, [r4, #0x0]
    ldr r0, =data_020880c0
    ldr r1, =data_0206e6d4
    ldrsh r2, [r0, #0x2]
    mov r0, #0x0
    ldr r5, =data_0208705c
    strh r2, [r1, #0x64]
    str r0, [r4, #0x54]
    strh r0, [r4, #0x8]
    ldrb r1, [r4, #0xa]
    add r2, r4, #0xa
    add r3, r4, #0x58
    bic r1, r1, #0x1
    swpb r1, r1, [r2]
    add r2, r4, #0x4c
    ldr r1, [r5, #0x8]
    add sp, sp, #0xc
    ldr r1, [r1, #0x50]
    str r1, [r4, #0x50]
    ldr r1, [r5, #0x8]
    ldrb r1, [r1, #0x4c]
    swpb r1, r1, [r2]
    ldr r1, [r5, #0x8]
    ldrb r1, [r1, #0x58]
    swpb r1, r1, [r3]
    ldr r1, [r5, #0x8]
    ldrh r1, [r1, #0x3c]
    strh r1, [r4, #0x3c]
    swpb r0, r0, [r5]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015b98:
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    movne r0, #0x5
    addne sp, sp, #0xc
    strne r0, [r4, #0x0]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [r4, #0x2e]
    cmp r0, #0x0
    beq @L_02015c2c
    mov r0, #0x7
    add sp, sp, #0xc
    str r0, [r4, #0x0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015bd0:
    ldrb r0, [r4, #0xb]
    cmp r0, #0x1
    bne @L_02015bec
    ldr r0, =data_0206e6d4
    mov r2, #0x0
    add r1, r0, #0xa0
    swpb r0, r2, [r1]
@L_02015bec:
    mov r1, r4
    mov r0, #0x3
    bl func_02015da4
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    movne r0, #0x5
    addne sp, sp, #0xc
    strne r0, [r4, #0x0]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [r4, #0x2e]
    cmp r0, #0x0
    movne r0, #0x7
    addne sp, sp, #0xc
    strne r0, [r4, #0x0]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015c2c:
    mov r0, #0x3
    add sp, sp, #0xc
    str r0, [r4, #0x0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015c3c:
    ldr r0, =data_0206ad48
    ldrb r2, [r0, #0x2]
    add r1, r0, #0x2
    sub r0, r2, #0x1
    swpb r0, r0, [r1]
    cmp r2, #0x0
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r4, #0x40]
    ldr r2, [r0, #0x2c]
    ldrh r1, [r0, #0x30]
    ldrh r0, [r0, #0x28]
    mov r2, r2, lsr #0xc
    add r2, r2, #0xf
    add r0, r1, r0
    cmp r2, r0
    bhs @L_02015c94
    mov r0, #0x4
    mov r1, r4
    str r0, [r4, #0x0]
    bl func_02015da4
    b @L_02015d08
@L_02015c94:
    ldrb r0, [r4, #0x4c]
    mov r5, #0x0
    cmp r0, #0x0
    bls @L_02015d00
    mov r7, #0x58
@L_02015ca8:
    mul r6, r5, r7
    ldr r0, [r4, #0x50]
    add r0, r0, r6
    ldrsb r0, [r0, #0x54]
    bl func_0201c54c
    ldr r1, [r4, #0x50]
    add r0, r5, #0x1
    add r1, r1, r6
    ldrb r2, [r1, #0x57]
    add r1, r1, #0x57
    and r5, r0, #0xff
    bic r0, r2, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x50]
    add r1, r0, r6
    ldrb r0, [r1, #0x3c]
    add r1, r1, #0x3c
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x4c]
    cmp r5, r0
    blo @L_02015ca8
@L_02015d00:
    mov r0, #0x3
    str r0, [r4, #0x0]
@L_02015d08:
    ldr r0, =data_0206ad48
    mov r2, #0xa
    add r1, r0, #0x2
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015d20:
    mov r1, r4
    mov r0, #0x1
    bl func_02015da4
    mov r0, r4
    bl func_0201617c
    add r1, r4, #0x4
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    mov r0, #0x2
    str r0, [r4, #0x0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02015d50:
    ldrb r0, [r4, #0x4]
    cmp r0, #0x0
    bne @L_02015d68
    mov r1, r4
    mov r0, #0x1
    bl func_02015da4
@L_02015d68:
    mov r0, #0x2
    str r0, [r4, #0x0]
@L_02015d70:
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
