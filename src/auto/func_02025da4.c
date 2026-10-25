#include "m2c.h"

extern char data_0206b928[];
extern char data_0206b930[];
extern char data_0206b93c[];
extern char data_0206b964[];
extern char data_0206b984[];
extern char data_0206b994[];
extern char data_0206c240[];
extern char data_0206e680[];
extern char data_0206e694[];
extern char data_0206e6d4[];
extern char data_0206ea14[];
extern char data_020877d0[];
extern char data_02087f78[];
void func_02007450(void);
void func_0201d5c0(void);
void func_0201d654(void);
void func_0201d6cc(void);
void func_0201d72c(void);
void func_0201d7a4(void);
void func_0201d7e4(void);
void func_0201d878(void);
void func_02024ec0(void);
void func_02026cf4(void);
void func_0202af8c(void);
void func_0203b96c(void);
void func_0203c24c(void);
void func_0203feb4(void);
void func_020401e8(void);
void func_0204221c(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02025da4(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    cmp r0, #0x8
    addls pc, pc, r0, lsl #0x2
    b L_02026308
L_02025db8:
    b L_02025ddc
    b L_02025e78
    b L_02025f04
    b L_02025f9c
    b L_02026028
    b L_02026308
    b L_02026308
    b L_0202614c
    b L_020260b4
L_02025ddc:
    ldr r5, =data_0206e6d4
    ldr r4, =0x66666667
    mov r7, #0x1
    mov r8, #0x5
L_02025dec:
    ldrh r0, [r5, #0x5c]
    mov r0, r0, lsl #0x1d
    add r2, r7, r0, lsr #0x1d
    mov r0, r2, lsr #0x1f
    smull r1, r3, r4, r2
    add r3, r0, r3, asr #0x1
    smull r0, r1, r8, r3
    sub r3, r2, r0
    and r6, r3, #0xff
    mov r0, r6
    bl func_0201d5c0
    cmp r0, #0x0
    beq L_02025e60
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206b994
    ldrh r1, [r0, #0x5c]
    ldr r0, [r2, r6, lsl #0x2]
    mov r1, r1, lsl #0x1d
    mov r1, r1, lsr #0x1d
    ldr r1, [r2, r1, lsl #0x2]
    bl func_02026cf4
    ldr r0, =data_0206e6d4
    and r1, r6, #0x7
    ldrh r2, [r0, #0x5c]
    add sp, sp, #0x18
    bic r2, r2, #0x7
    orr r1, r2, r1
    strh r1, [r0, #0x5c]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02025e60:
    add r0, r7, #0x1
    and r7, r0, #0xff
    cmp r7, #0x5
    bls L_02025dec
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02025e78:
    ldr r6, =data_0206e6d4
    mov r4, #0x1
L_02025e80:
    ldrh r0, [r6, #0x5c]
    mov r0, r0, lsl #0x1a
    add r0, r4, r0, lsr #0x1d
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1e
    add r0, r1, r0, ror #0x1e
    and r5, r0, #0xff
    mov r0, r5
    bl func_0201d654
    cmp r0, #0x0
    beq L_02025eec
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206b964
    ldrh r1, [r0, #0x5c]
    ldr r0, [r2, r5, lsl #0x2]
    mov r1, r1, lsl #0x1a
    mov r1, r1, lsr #0x1d
    ldr r1, [r2, r1, lsl #0x2]
    bl func_02026cf4
    ldr r0, =data_0206e6d4
    mov r1, r5, lsl #0x1d
    ldrh r2, [r0, #0x5c]
    add sp, sp, #0x18
    bic r2, r2, #0x38
    orr r1, r2, r1, lsr #0x1a
    strh r1, [r0, #0x5c]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02025eec:
    add r0, r4, #0x1
    and r4, r0, #0xff
    cmp r4, #0x4
    bls L_02025e80
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02025f04:
    ldr r5, =data_0206e6d4
    ldr r4, =0x55555556
    mov r6, #0x1
    mov r8, #0x3
L_02025f14:
    ldrh r0, [r5, #0x5c]
    mov r0, r0, lsl #0x18
    add r2, r6, r0, lsr #0x1e
    smull r0, r1, r4, r2
    add r1, r1, r2, lsr #0x1f
    smull r0, r1, r8, r1
    sub r1, r2, r0
    and r7, r1, #0xff
    mov r0, r7
    bl func_0201d6cc
    cmp r0, #0x0
    beq L_02025f84
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206b930
    ldrh r1, [r0, #0x5c]
    ldr r0, [r2, r7, lsl #0x2]
    mov r1, r1, lsl #0x18
    mov r1, r1, lsr #0x1e
    ldr r1, [r2, r1, lsl #0x2]
    bl func_02026cf4
    ldr r0, =data_0206e6d4
    mov r1, r7, lsl #0x1e
    ldrh r2, [r0, #0x5c]
    add sp, sp, #0x18
    bic r2, r2, #0xc0
    orr r1, r2, r1, lsr #0x18
    strh r1, [r0, #0x5c]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02025f84:
    add r0, r6, #0x1
    and r6, r0, #0xff
    cmp r6, #0x3
    bls L_02025f14
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02025f9c:
    ldr r6, =data_0206e6d4
    mov r4, #0x1
L_02025fa4:
    ldrh r0, [r6, #0x5c]
    mov r0, r0, lsl #0x16
    add r0, r4, r0, lsr #0x1e
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1e
    add r0, r1, r0, ror #0x1e
    and r5, r0, #0xff
    mov r0, r5
    bl func_0201d72c
    cmp r0, #0x0
    beq L_02026010
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206b984
    ldrh r1, [r0, #0x5c]
    ldr r0, [r2, r5, lsl #0x2]
    mov r1, r1, lsl #0x16
    mov r1, r1, lsr #0x1e
    ldr r1, [r2, r1, lsl #0x2]
    bl func_02026cf4
    ldr r0, =data_0206e6d4
    mov r1, r5, lsl #0x1e
    ldrh r2, [r0, #0x5c]
    add sp, sp, #0x18
    bic r2, r2, #0x300
    orr r1, r2, r1, lsr #0x16
    strh r1, [r0, #0x5c]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02026010:
    add r0, r4, #0x1
    and r4, r0, #0xff
    cmp r4, #0x4
    bls L_02025fa4
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02026028:
    ldr r6, =data_0206e6d4
    mov r4, #0x1
L_02026030:
    ldrh r0, [r6, #0x5c]
    mov r0, r0, lsl #0x15
    add r0, r4, r0, lsr #0x1f
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1f
    add r0, r1, r0, ror #0x1f
    and r5, r0, #0xff
    mov r0, r5
    bl func_0201d7a4
    cmp r0, #0x0
    beq L_0202609c
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206b928
    ldrh r1, [r0, #0x5c]
    ldr r0, [r2, r5, lsl #0x2]
    mov r1, r1, lsl #0x15
    mov r1, r1, lsr #0x1f
    ldr r1, [r2, r1, lsl #0x2]
    bl func_02026cf4
    ldr r0, =data_0206e6d4
    mov r1, r5, lsl #0x1f
    ldrh r2, [r0, #0x5c]
    add sp, sp, #0x18
    bic r2, r2, #0x400
    orr r1, r2, r1, lsr #0x15
    strh r1, [r0, #0x5c]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0202609c:
    add r0, r4, #0x1
    and r4, r0, #0xff
    cmp r4, #0x2
    bls L_02026030
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020260b4:
    ldr r5, =data_0206e6d4
    ldr r4, =0x55555556
    mov r6, #0x1
    mov r8, #0x3
L_020260c4:
    ldrh r0, [r5, #0x5c]
    mov r0, r0, lsl #0x13
    add r2, r6, r0, lsr #0x1e
    smull r0, r1, r4, r2
    add r1, r1, r2, lsr #0x1f
    smull r0, r1, r8, r1
    sub r1, r2, r0
    and r7, r1, #0xff
    mov r0, r7
    bl func_0201d878
    cmp r0, #0x0
    beq L_02026134
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206b93c
    ldrh r1, [r0, #0x5c]
    ldr r0, [r2, r7, lsl #0x2]
    mov r1, r1, lsl #0x13
    mov r1, r1, lsr #0x1e
    ldr r1, [r2, r1, lsl #0x2]
    bl func_02026cf4
    ldr r0, =data_0206e6d4
    mov r1, r7, lsl #0x1e
    ldrh r2, [r0, #0x5c]
    add sp, sp, #0x18
    bic r2, r2, #0x1800
    orr r1, r2, r1, lsr #0x13
    strh r1, [r0, #0x5c]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02026134:
    add r0, r6, #0x1
    and r6, r0, #0xff
    cmp r6, #0x3
    bls L_020260c4
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0202614c:
    ldr r8, =data_0206e6d4
    mov r11, #0x5
    ldr r7, =data_0206ea14
    ldr r6, =0x66666667
    mov r9, #0x1
    add r4, r8, #0x5e
    mov r5, r11
L_02026168:
    ldrb r0, [r8, #0x5e]
    add r2, r0, r9
    mov r0, r2, lsr #0x1f
    smull r1, r3, r6, r2
    add r3, r0, r3, asr #0x1
    smull r0, r1, r5, r3
    sub r3, r2, r0
    and r10, r3, #0xff
    mov r0, r10
    bl func_0201d7e4
    cmp r0, #0x0
    beq L_020261ac
    swpb r0, r10, [r4]
    ldr r0, [r7, #0x0]
    ldrb r1, [r8, #0x5e]
    bl func_02024ec0
    mov r9, r11
L_020261ac:
    add r0, r9, #0x1
    and r9, r0, #0xff
    cmp r9, #0x5
    blo L_02026168
    ldr r2, =data_0206e6d4
    ldrb r1, [r2, #0x5f]
    mov r0, r1, lsl #0x1b
    movs r0, r0, lsr #0x1f
    addne sp, sp, #0x18
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =data_0206e694
    orr r3, r1, #0x10
    ldr r0, [r0, #0x0]
    add r1, r2, #0x5f
    cmp r0, #0x0
    swpb r0, r3, [r1]
    ldreqsb r1, [r2, #0xa0]
    mvneq r0, #0x0
    cmpeq r1, r0
    ldreq r0, =data_02087f78
    ldreq r0, [r0, #0x0]
    cmpeq r0, #0x0
    ldreq r0, =data_020877d0
    ldreqb r0, [r0, #0x0]
    cmpeq r0, #0x0
    addne sp, sp, #0x18
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =data_0206c240
    bl func_0203feb4
    bl func_020401e8
    ldr r1, [r0, #0x24]
    bic r1, r1, #0x2
    str r1, [r0, #0x24]
    mov r0, #0x7
    bl func_02007450
    mov r0, #0x34
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
    mov r0, #0x1
    swpb r0, r0, [r2]
    mov r3, #0xa
    add r1, r2, #0x16
    swpb r0, r3, [r1]
    add r1, r2, #0xe
    mov r0, #0x3e
    swpb r0, r0, [r1]
    mov r0, #0x0
    bl func_0203b96c
    mov r5, #0x0
    mov r4, #0x7f
L_020262b8:
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
    blo L_020262b8
    ldr r0, =data_020877d0
    mov r1, #0xef
    ldrb r0, [r0, #0xe]
    mov r2, #0x9f
    bl func_0203c24c
    ldr r0, =data_020877d0
    mov r2, #0x1
    add r1, r0, #0x7
    swpb r0, r2, [r1]
L_02026308:
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
