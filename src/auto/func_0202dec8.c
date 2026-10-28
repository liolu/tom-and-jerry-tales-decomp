#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020163b0();
extern void func_020163c4();
extern void func_0201666c();
extern void func_020169f8();
extern void func_02016a4c();
extern void func_0202203c();
extern void func_020222b8();
extern void func_02022354();
extern void func_020223e8();
extern void func_020224f8();
extern void func_02022714();
extern void func_02022b60();
extern void func_02022c30();
extern void func_02022cf0();
extern void func_02022d20();
extern void func_0202e838();
extern void func_0202eed4();
extern void func_0202f11c();
extern void func_0202f5e8();
extern void func_020306fc();
extern void func_0203bc90();
extern void func_0203cdd0();
extern void func_0203d098();
extern void func_0203d498();
extern void func_0203d740();
extern void func_0203d8d8();
extern void func_0204221c();
extern void sprintf();
extern char data_0206ccb0[];
extern char data_0206cd2c[];
extern char data_0206cd44[];
extern char data_0206cd5c[];
extern char data_0206cd74[];
extern char data_0206cd8c[];
extern char data_0206cda4[];
extern char data_0206cdbc[];
extern char data_0206cdcc[];
extern char data_0206cddc[];
extern char data_0206dcb8[];
extern char data_0206e698[];
extern char data_020881e0[];
extern char data_02088200[];
extern char data_02088268[];
extern char data_0208829c[];
extern char data_020882e4[];
extern char data_0208832c[];
extern char data_02088374[];
extern char data_020883bc[];
extern char data_020b8b44[];
extern char data_020b8b6c[];
extern char data_020b8bbc[];
extern char func_0202fc08[];
// clang-format off
asm void func_0202dec8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r2, =data_020881e0
    ldrb r0, [r2, #0xa]
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_0202e7cc
L_0202dee4:
    b L_0202defc
    b L_0202e6b8
    b L_0202e704
    b L_0202e784
    b L_0202e7a4
    b L_0202e7b0
L_0202defc:
    add r1, r2, #0xb
    mov r3, #0x0
    swpb r0, r3, [r1]
    add r1, r2, #0x8
    swpb r0, r3, [r1]
    bl func_0201666c
    cmp r0, #0x1
    bne L_0202df30
    ldr r0, =data_020881e0
    mov r2, #0x3
    add r1, r0, #0xa
    swpb r0, r2, [r1]
    b L_0202df80
L_0202df30:
    mvn r1, #0x0
    cmp r0, r1
    bne L_0202df50
    ldr r0, =data_020881e0
    mov r2, #0x1
    add r1, r0, #0xa
    swpb r0, r2, [r1]
    b L_0202df80
L_0202df50:
    sub r1, r1, #0x1
    cmp r0, r1
    bne L_0202df70
    ldr r0, =data_020881e0
    mov r2, #0x2
    add r1, r0, #0xa
    swpb r0, r2, [r1]
    b L_0202df80
L_0202df70:
    ldr r0, =data_020881e0
    mov r2, #0x3
    add r1, r0, #0xa
    swpb r0, r2, [r1]
L_0202df80:
    ldr r0, =data_020881e0
    mov r3, #0x20
    add r2, r0, #0x3
    swpb r1, r3, [r2]
    add r2, r0, #0xc
    mov r5, #0x60
    swpb r1, r5, [r2]
    add r2, r0, #0xd
    mov r4, #0xa0
    swpb r1, r4, [r2]
    add r2, r0, #0xe
    swpb r1, r3, [r2]
    add r2, r0, #0xf
    swpb r1, r5, [r2]
    add r2, r0, #0x10
    swpb r1, r4, [r2]
    add r4, r0, #0x5
    mov r1, #0xc0
    swpb r2, r1, [r4]
    add r4, r0, #0x6
    swpb r2, r1, [r4]
    add r4, r0, #0x11
    swpb r2, r1, [r4]
    add r4, r0, #0x12
    swpb r2, r1, [r4]
    add r4, r0, #0x2
    swpb r2, r1, [r0]
    swpb r0, r1, [r4]
    mov r5, #0x1
    stmia sp, {r1, r5}
    mov r0, #0x0
    str r0, [sp, #0x8]
    ldr r0, =data_0206cd2c
    ldr r1, =data_0206e698
    mov r2, #0x7
    str r5, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r4, r5
    str r4, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    ldr r0, =data_0206cd44
    ldr r1, =data_0206e698
    mov r2, #0x8
    mov r3, #0x60
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    stmia sp, {r0, r4}
    mov r0, #0x0
    str r0, [sp, #0x8]
    ldr r0, =data_0206cd5c
    ldr r1, =data_0206e698
    mov r2, #0x9
    mov r3, #0xa0
    str r4, [sp, #0xc]
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r1, r5
    str r1, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    str r1, [sp, #0xc]
    ldr r0, =data_0206cd74
    ldr r1, =data_0206e698
    mov r2, #0xa
    mov r3, #0x20
    bl func_0203bc90
    mov r0, #0xc0
    str r0, [sp, #0x0]
    mov r1, r5
    str r1, [sp, #0x4]
    mov r0, #0x0
    str r0, [sp, #0x8]
    str r1, [sp, #0xc]
    ldr r0, =data_0206cd8c
    ldr r1, =data_0206e698
    mov r2, #0xb
    mov r3, #0x60
    bl func_0203bc90
    mov r0, #0xc0
    stmia sp, {r0, r4}
    mov r0, #0x0
    str r0, [sp, #0x8]
    ldr r0, =data_0206cda4
    ldr r1, =data_0206e698
    mov r2, #0xc
    mov r3, #0xa0
    str r4, [sp, #0xc]
    bl func_0203bc90
    ldr r0, =data_02088268
    bl func_020223e8
    ldr r2, =func_0202f5e8
    ldr r0, =data_020883bc
    str r2, [sp, #0x0]
    mov r2, #0x0
    ldr r1, =data_02088268
    mov r3, #0x14
    str r2, [sp, #0x4]
    bl func_02022c30
    mov r1, #0x28
    str r1, [sp, #0x0]
    ldr r0, =data_020883bc
    mov r1, #0x0
    mov r2, #0x14
    mov r3, #0x99
    bl func_02022714
    ldr r0, =data_020881e0
    mov r2, r5
    str r2, [r0, #0x200]
    ldr r1, =func_0202f5e8
    ldr r0, =data_02088374
    str r1, [sp, #0x0]
    mov r2, #0x0
    ldr r1, =data_02088268
    mov r3, #0x4c
    str r2, [sp, #0x4]
    bl func_02022c30
    mov r0, #0x28
    str r0, [sp, #0x0]
    ldr r0, =data_02088374
    mov r1, #0x0
    mov r2, #0x4c
    mov r3, #0x99
    bl func_02022714
    ldr r0, =data_020881e0
    mov r2, #0x2
    str r2, [r0, #0x1b8]
    ldr r1, =func_0202f5e8
    ldr r0, =data_0208832c
    str r1, [sp, #0x0]
    mov r2, #0x0
    ldr r1, =data_02088268
    mov r3, #0x84
    str r2, [sp, #0x4]
    bl func_02022c30
    mov r0, #0x28
    str r0, [sp, #0x0]
    ldr r0, =data_0208832c
    mov r1, #0x0
    mov r2, #0x84
    mov r3, #0x99
    bl func_02022714
    ldr r3, =data_020881e0
    mov r4, #0x3
    ldr r0, =data_020883bc
    ldr r1, =data_02088374
    mov r2, #0x5
    str r4, [r3, #0x170]
    bl func_02022d20
    ldr r0, =data_02088374
    ldr r1, =data_0208832c
    mov r2, #0x5
    bl func_02022d20
    ldr r0, =data_0208832c
    ldr r1, =data_020883bc
    mov r2, #0x5
    bl func_02022d20
    mov r0, #0x4c
    bl func_0204221c
    mov r4, r0
    ldr r0, =data_02088200
    bl func_020223e8
    ldr r1, =data_020881e0
    mov r0, r4
    ldr r1, [r1, #0x18]
    bl func_0203d8d8
    mov r0, r0, asr #0x1
    ldr r1, =func_0202fc08
    rsb r0, r0, #0x5b
    and r2, r0, #0xff
    str r1, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r0, =data_020882e4
    ldr r1, =data_02088200
    mov r3, #0x6e
    bl func_02022c30
    ldr r1, =data_020881e0
    mov r0, r4
    ldr r6, [r1, #0x18]
    mov r1, r6
    bl func_0203d8d8
    mov r5, r0
    mov r0, r4
    mov r1, r6
    bl func_0203d8d8
    mov r1, r5, asr #0x1
    ldr r2, [r6, #0x14]
    rsb r1, r1, #0x5b
    ldrb r5, [r6, r2]
    and r3, r0, #0xff
    ldr r0, =data_020882e4
    add r5, r5, #0x6
    mov r5, r5, lsl #0x10
    mov r5, r5, lsr #0x10
    and r5, r5, #0xff
    and r1, r1, #0xff
    mov r2, #0x6e
    str r5, [sp, #0x0]
    bl func_02022714
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    ldr r2, =data_020881e0
    str r3, [sp, #0x8]
    ldr r0, =data_020882e4
    ldr r2, [r2, #0x18]
    mov r1, r4
    bl func_020224f8
    mov r1, #0x0
    ldr r0, =data_020882e4
    mov r2, r1
    mov r3, r1
    bl func_02022cf0
    ldr r0, =data_020882e4
    mov r1, #0x1
    mov r2, #0x0
    mov r3, #0x3
    bl func_02022cf0
    ldr r1, =data_020881e0
    mov r2, #0x1
    mov r0, #0x4b
    str r2, [r1, #0x128]
    bl func_0204221c
    ldr r1, =data_020881e0
    mov r4, r0
    ldr r1, [r1, #0x18]
    bl func_0203d8d8
    mov r0, r0, asr #0x1
    ldr r1, =func_0202fc08
    rsb r0, r0, #0xb0
    and r2, r0, #0xff
    str r1, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r0, =data_0208829c
    ldr r1, =data_02088200
    mov r3, #0x6e
    bl func_02022c30
    ldr r1, =data_020881e0
    mov r0, r4
    ldr r6, [r1, #0x18]
    mov r1, r6
    bl func_0203d8d8
    mov r5, r0
    mov r0, r4
    mov r1, r6
    bl func_0203d8d8
    mov r1, r5, asr #0x1
    ldr r2, [r6, #0x14]
    rsb r1, r1, #0xb0
    ldrb r5, [r6, r2]
    and r3, r0, #0xff
    ldr r0, =data_0208829c
    add r5, r5, #0x6
    mov r5, r5, lsl #0x10
    mov r5, r5, lsr #0x10
    and r5, r5, #0xff
    and r1, r1, #0xff
    mov r2, #0x6e
    str r5, [sp, #0x0]
    bl func_02022714
    mov r3, #0x0
    str r3, [sp, #0x0]
    str r3, [sp, #0x4]
    ldr r2, =data_020881e0
    str r3, [sp, #0x8]
    ldr r0, =data_0208829c
    ldr r2, [r2, #0x18]
    mov r1, r4
    bl func_020224f8
    mov r1, #0x0
    ldr r0, =data_0208829c
    mov r2, r1
    mov r3, r1
    bl func_02022cf0
    ldr r0, =data_0208829c
    mov r1, #0x1
    mov r2, #0x0
    mov r3, #0x3
    bl func_02022cf0
    ldr r3, =data_020881e0
    mov r4, #0x2
    ldr r0, =data_020882e4
    ldr r1, =data_0208829c
    mov r2, #0x4
    str r4, [r3, #0xe0]
    bl func_02022d20
    ldr r0, =data_0208829c
    ldr r1, =data_020882e4
    mov r2, #0x4
    bl func_02022d20
    ldr r4, =data_020881e0
    mov r7, #0x0
    ldrb r0, [r4, #0x91]
    cmp r0, #0x0
    bls L_0202e460
    ldr r6, =data_02088268
    mov r5, r7
L_0202e43c:
    add r0, r6, r7, lsl #0x2
    ldr r0, [r0, #0xc]
    mov r1, r5
    bl func_02022b60
    add r1, r7, #0x1
    ldrb r0, [r4, #0x91]
    and r7, r1, #0xff
    cmp r7, r0
    blo L_0202e43c
L_0202e460:
    ldr r0, =data_020881e0
    ldrb r0, [r0, #0xa]
    cmp r0, #0x3
    bne L_0202e62c
    bl func_020163b0
    str r0, [sp, #0x10]
    bl func_020163c4
    ldr r7, =data_020b8b44
    ldr r5, =data_020881e0
    and r11, r0, #0xff
    mov r4, #0x0
    add r9, sp, #0x1f
    add r8, sp, #0x19
L_0202e494:
    mov r0, r11, asr r4
    tst r0, #0x1
    beq L_0202e4b8
    ldr r0, =data_020881e0
    mov r2, #0x2
    add r1, r0, #0xa
    swpb r0, r2, [r1]
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0202e4b8:
    ldr r0, [sp, #0x10]
    mov r0, r0, asr r4
    tst r0, #0x1
    beq L_0202e5cc
    mov r0, r4
    add r1, sp, #0x14
    bl func_02016a4c
    mov r0, r4
    add r1, sp, #0x16
    bl func_020169f8
    ldr r0, =data_0206dcb8
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_0202e510
    ldrb r2, [sp, #0x16]
    ldr r1, =data_0206cdbc
    mov r0, r9
    str r2, [sp, #0x0]
    ldrb r2, [sp, #0x17]
    ldrb r3, [sp, #0x18]
    bl sprintf
    b L_0202e52c
L_0202e510:
    ldrb r2, [sp, #0x16]
    ldr r1, =data_0206cdcc
    mov r0, r9
    str r2, [sp, #0x0]
    ldrb r2, [sp, #0x18]
    ldrb r3, [sp, #0x17]
    bl sprintf
L_0202e52c:
    ldrb r2, [sp, #0x14]
    ldrb r3, [sp, #0x15]
    ldr r1, =data_0206cddc
    mov r0, r8
    bl sprintf
    ldr r6, [r5, #0x18]
    mov r0, r9
    mov r1, r6
    bl func_0203d8d8
    mov r1, #0x0
    rsb r0, r0, #0x8a
    str r1, [sp, #0x0]
    mov r0, r0, lsl #0x10
    stmib sp, {r1, r7}
    mov r1, r0, lsr #0x10
    mov r0, #0x38
    mov r3, r6
    mul r6, r4, r0
    add r2, r6, #0x14
    mov r2, r2, lsl #0x10
    mov r0, r9
    mov r2, r2, lsr #0x10
    bl func_0203d740
    ldr r10, [r5, #0x18]
    mov r0, r8
    mov r1, r10
    bl func_0203d8d8
    add r1, r6, #0x23
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
    mov r1, #0x0
    rsb r0, r0, #0x8a
    str r1, [sp, #0x0]
    mov r0, r0, lsl #0x10
    stmib sp, {r1, r7}
    mov r1, r0, lsr #0x10
    mov r3, r10
    mov r0, r8
    bl func_0203d740
    b L_0202e61c
L_0202e5cc:
    ldr r10, [r5, #0x18]
    mov r0, #0x46
    bl func_0204221c
    mov r1, r10
    mov r6, r0
    bl func_0203d8d8
    mov r2, #0x38
    mul r2, r4, r2
    mov r1, #0x0
    rsb r0, r0, #0x8a
    add r2, r2, #0x1b
    str r1, [sp, #0x0]
    mov r2, r2, lsl #0x10
    mov r0, r0, lsl #0x10
    stmib sp, {r1, r7}
    mov r1, r0, lsr #0x10
    mov r3, r10
    mov r0, r6
    mov r2, r2, lsr #0x10
    bl func_0203d740
L_0202e61c:
    add r0, r4, #0x1
    and r4, r0, #0xff
    cmp r4, #0x3
    blo L_0202e494
L_0202e62c:
    mov r0, #0x56
    bl func_0204221c
    ldr r1, =data_020881e0
    ldr r1, [r1, #0x18]
    bl func_0203d8d8
    ldr r2, =data_020881e0
    add r1, r2, #0x9
    swpb r0, r0, [r1]
    ldr r5, [r2, #0x18]
    mov r0, #0x56
    bl func_0204221c
    mov r1, r5
    mov r4, r0
    bl func_0203d8d8
    rsb r0, r0, #0xf5
    mov r0, r0, lsl #0x10
    mov r2, #0x0
    mov r1, r0, lsr #0x10
    mov r0, r4
    str r2, [sp, #0x0]
    str r2, [sp, #0x4]
    ldr r4, =data_020b8b44
    mov r3, r5
    mov r2, #0x9b
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r3, =data_020881e0
    mov r0, #0x0
    add r2, r3, #0x8a
    swpb r0, r0, [r2]
    mov r1, #0x1
    ldr r0, [r3, #0x94]
    bl func_0202f5e8
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0202e6b8:
    ldrb r0, [r2, #0x8]
    cmp r0, #0x0
    bne L_0202e6dc
    mvn r0, #0x0
    bl func_0202e838
    ldr r0, =data_020881e0
    mov r2, #0x1
    add r1, r0, #0x8
    swpb r0, r2, [r1]
L_0202e6dc:
    ldr r0, =data_020881e0
    mov r3, #0x5
    add r4, r0, #0xa
    sub r0, r3, #0x15
    swpb r3, r3, [r4]
    mov r1, #0x0
    mov r2, #0x3
    bl func_020222b8
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0202e704:
    ldrb r0, [r2, #0x8]
    cmp r0, #0x0
    bne L_0202e728
    mvn r0, #0x1
    bl func_0202e838
    ldr r0, =data_020881e0
    mov r2, #0x1
    add r1, r0, #0x8
    swpb r0, r2, [r1]
L_0202e728:
    mov r0, #0x0
    bl func_020306fc
    cmp r0, #0x0
    addeq sp, sp, #0x2c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_020881e0
    ldr r0, =data_020b8b44
    add r2, r1, #0xa
    mov r1, #0x0
    swpb r1, r1, [r2]
    ldr r0, [r0, #0x50]
    bl func_0203cdd0
    ldr r0, =data_020b8bbc
    bl func_0203d098
    ldr r4, =data_020b8b6c
    ldr r0, =data_0206ccb0
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0202e784:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    addeq sp, sp, #0x2c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_0202eed4
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0202e7a4:
    bl func_0202f11c
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0202e7b0:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    addeq sp, sp, #0x2c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #0x7
    bl func_0202203c
L_0202e7cc:
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
