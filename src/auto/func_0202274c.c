#include "m2c.h"

extern char data_0206b908[];
void func_020223dc(void);
void func_02022d94(void);
void func_020306c0(void);
void func_020306fc(void);
void func_02030878(void);
void func_02030898(void);
// clang-format off
asm void func_0202274c(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x8
    movs r6, r0
    mov r8, #0x0
    mov r5, r1
    mov r4, r2
    addeq sp, sp, #0x8
    moveq r0, r8
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [r6, #0x9]
    cmp r0, #0x0
    addeq sp, sp, #0x8
    moveq r0, r8
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    bl func_02030878
    cmp r0, #0x0
    beq L_02022874
    add r0, sp, #0x4
    add r1, sp, #0x0
    bl func_02030898
    ldr r1, [sp, #0x4]
    ldr r2, [sp, #0x0]
    ldr r0, =data_0206b908
    bl func_020223dc
    cmp r4, #0x4
    bne L_020227c8
    ldr r1, [sp, #0x0]
    cmp r1, #0xa8
    addhi sp, sp, #0x8
    movhi r0, r8
    ldmhiia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_020227c8:
    ldrb r2, [r6, #0x9]
    mov r7, #0xff
    sub r1, r2, #0x1
    cmp r2, #0x0
    and r2, r1, #0xff
    beq L_0202283c
    ldr r3, [sp, #0x0]
    ldr r9, [sp, #0x4]
L_020227e8:
    add r1, r6, r2, lsl #0x2
    ldr r1, [r1, #0xc]
    ldrb ip, [r1, #0x4]
    cmp r3, ip
    bls L_0202282c
    ldrb ip, [r1, #0x5]
    cmp r3, ip
    ldrlob ip, [r1, #0x7]
    cmplo r9, ip
    bhs L_0202282c
    ldrb ip, [r1, #0x6]
    cmp r9, ip
    bls L_0202282c
    ldrb ip, [r1, #0x8]
    tst ip, #0x8
    ldrneb r7, [r1, #0x28]
    bne L_0202283c
L_0202282c:
    sub r1, r2, #0x1
    cmp r2, #0x0
    and r2, r1, #0xff
    bne L_020227e8
L_0202283c:
    cmp r7, #0xff
    bne L_02022858
    add r2, r6, #0x8
    mov r1, #0x0
    swpb r1, r1, [r2]
    add sp, sp, #0x8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_02022858:
    ldrb r0, [r6, #0x8]
    add r1, r6, #0x8
    cmp r0, #0x0
    swpeqb r0, r7, [r6]
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_02022a3c
L_02022874:
    ldrb r0, [r6, #0x8]
    cmp r4, #0x4
    moveq r4, #0x1
    cmp r0, #0x0
    bne L_02022a2c
    ldrb r7, [r6, #0x2]
    cmp r7, #0xfe
    movhs r7, #0xfe
    cmp r4, #0x0
    beq L_02022a30
    mov r0, #0x0
    bl func_020306c0
    cmp r0, #0x0
    bne L_020228ec
    mov r0, #0x6
    bl func_020306c0
    cmp r0, #0x0
    bne L_020228ec
    mov r0, #0x7
    bl func_020306c0
    cmp r0, #0x0
    bne L_020228ec
    mov r0, #0x5
    bl func_020306c0
    cmp r0, #0x0
    bne L_020228ec
    mov r0, #0x4
    bl func_020306c0
    cmp r0, #0x0
    beq L_02022a30
L_020228ec:
    ldrb r0, [r6, #0x2]
    cmp r0, #0xfe
    cmpne r0, #0xff
    beq L_020229e4
    add r1, r6, r0, lsl #0x2
    mov r0, #0x6
    ldr r10, [r1, #0xc]
    bl func_020306fc
    cmp r0, #0x0
    beq L_02022924
    mov r0, r10
    mov r1, #0x0
    bl func_02022d94
    mov r9, r0
L_02022924:
    mov r0, #0x7
    bl func_020306fc
    cmp r0, #0x0
    beq L_02022944
    mov r0, r10
    mov r1, #0x1
    bl func_02022d94
    mov r9, r0
L_02022944:
    mov r0, #0x5
    bl func_020306fc
    cmp r0, #0x0
    beq L_02022964
    mov r0, r10
    mov r1, #0x2
    bl func_02022d94
    mov r9, r0
L_02022964:
    mov r0, #0x4
    bl func_020306fc
    cmp r0, #0x0
    beq L_02022984
    mov r0, r10
    mov r1, #0x3
    bl func_02022d94
    mov r9, r0
L_02022984:
    cmp r4, #0x2
    bhs L_020229ac
    mov r0, #0x0
    bl func_020306fc
    cmp r0, #0x0
    beq L_020229ac
    ldrb r0, [r6, #0x2]
    mov r7, #0xfe
    swpb r0, r0, [r6]
    b L_02022a30
L_020229ac:
    mov r1, #0x0
    b L_020229c8
L_020229b4:
    cmp r9, r0
    moveq r7, r1
    beq L_02022a30
    add r0, r1, #0x1
    and r1, r0, #0xff
L_020229c8:
    cmp r1, #0xa
    bhs L_02022a30
    add r0, r6, r1, lsl #0x2
    ldr r0, [r0, #0xc]
    cmp r0, #0x0
    bne L_020229b4
    b L_02022a30
L_020229e4:
    ldrb r1, [r6, #0x9]
    mov r7, #0xfe
    mov r2, #0x0
    cmp r1, #0x0
    bls L_02022a30
L_020229f8:
    add r0, r6, r2, lsl #0x2
    ldr r0, [r0, #0xc]
    ldrb r0, [r0, #0x8]
    tst r0, #0x8
    beq L_02022a18
    tst r0, #0x20
    movne r7, r2
    bne L_02022a30
L_02022a18:
    add r0, r2, #0x1
    and r2, r0, #0xff
    cmp r2, r1
    blo L_020229f8
    b L_02022a30
L_02022a2c:
    mov r7, #0xfe
L_02022a30:
    add r1, r6, #0x8
    mov r0, #0x0
    swpb r0, r0, [r1]
L_02022a3c:
    ldrb r0, [r6, #0x2]
    add r1, r6, #0x1
    swpb r0, r0, [r1]
    ldrb r0, [r6, #0x2]
    ldrb r2, [r6, #0x1]
    cmp r0, r7
    addne r1, r6, #0x2
    swpneb r0, r7, [r1]
    cmp r2, r7
    beq L_02022b48
    cmp r2, #0xfe
    beq L_02022a78
    cmp r2, #0xff
    beq L_02022aa0
    b L_02022ac8
L_02022a78:
    cmp r7, #0xff
    beq L_02022a98
    add r0, r6, r7, lsl #0x2
    ldr r0, [r0, #0xc]
    mov r1, #0x1
    ldr r2, [r0, #0x20]
    blx r2
    mov r8, r0
L_02022a98:
    swpb r0, r7, [r6]
    b L_02022b48
L_02022aa0:
    cmp r7, #0xfe
    swpeqb r0, r7, [r6]
    beq L_02022b48
    add r0, r6, r7, lsl #0x2
    ldr r0, [r0, #0xc]
    mov r1, #0x3
    ldr r2, [r0, #0x20]
    blx r2
    mov r8, r0
    b L_02022b48
L_02022ac8:
    cmp r7, #0xfe
    beq L_02022b1c
    cmp r7, #0xff
    add r0, r6, r2, lsl #0x2
    mov r1, #0x4
    bne L_02022af4
    ldr r0, [r0, #0xc]
    ldr r2, [r0, #0x20]
    blx r2
    mov r8, r0
    b L_02022b48
L_02022af4:
    ldr r0, [r0, #0xc]
    ldr r2, [r0, #0x20]
    blx r2
    add r0, r6, r7, lsl #0x2
    ldr r0, [r0, #0xc]
    mov r1, #0x3
    ldr r2, [r0, #0x20]
    blx r2
    mov r8, r0
    b L_02022b48
L_02022b1c:
    add r0, r6, r2, lsl #0x2
    ldr r0, [r0, #0xc]
    mov r1, #0x2
    ldr r2, [r0, #0x20]
    blx r2
    cmp r4, #0x3
    mov r8, r0
    swpneb r0, r7, [r6]
    addeq r1, r6, #0x2
    ldreqb r0, [r6, #0x0]
    swpeqb r0, r0, [r1]
L_02022b48:
    cmp r8, #0x0
    movne r5, r8
    mov r0, r5
    add sp, sp, #0x8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
