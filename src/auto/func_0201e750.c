#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020016a4();
extern void func_02003e84();
extern void func_020163d4();
extern void func_0201f1d0();
extern void func_0201f3f8();
extern void func_0201f4e8();
extern void func_0201f6d4();
extern void func_0201f828();
extern void func_0201f9a0();
extern void func_020200e4();
extern void func_020222b8();
extern void func_02022354();
extern void func_020306fc();
extern void func_0203c24c();
extern void func_0203cdd0();
extern void func_0203d0d8();
extern void func_0203d740();
extern void func_0203d8d8();
extern void func_0203feb4();
extern void func_0203ff1c();
extern void func_02040094();
extern void func_020401e8();
extern void func_02040228();
extern void func_0204221c();
extern void func_0204f490();
extern void func_0205bdf4();
extern char data_020692ec[];
extern char data_0206b25c[];
extern char data_0206b26c[];
extern char data_0206b74c[];
extern char data_0206b75c[];
extern char data_0206b764[];
extern char data_0206b774[];
extern char data_0206e690[];
extern char data_0206e6d4[];
extern char data_020875a8[];
extern char data_020876d0[];
extern char data_020876dc[];
extern char data_020876ec[];
extern char data_020880c0[];
extern char data_020b8b44[];
extern char data_020b8bbc[];
// clang-format off
asm void func_0201e750(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    bl func_02040228
    mov r4, r0
    bl func_020016a4
    bl func_0201f3f8
    bl func_02003e84
    bl func_0201f6d4
    ldr r1, =data_020875a8
    ldr r0, [r1, #0x10]
    cmp r0, #0x14
    addls pc, pc, r0, lsl #0x2
    b L_0201f120
L_0201e784:
    b L_0201f120
    b L_0201e7d8
    b L_0201e7f0
    b L_0201e828
    b L_0201e840
    b L_0201e884
    b L_0201e8bc
    b L_0201e8e0
    b L_0201e968
    b L_0201e968
    b L_0201e968
    b L_0201f120
    b L_0201e974
    b L_0201e9ac
    b L_0201f120
    b L_0201e9f4
    b L_0201ea38
    b L_0201ea50
    b L_0201ea00
    b L_0201efc4
    b L_0201f034
L_0201e7d8:
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    mov r0, #0x2
    str r0, [r1, #0x10]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201e7f0:
    mov r0, #0x0
    bl func_020200e4
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    ldr r0, =data_020875a8
    mov r1, #0x3
    str r1, [r0, #0x10]
    ldrh r1, [r0, #0x50]
    add sp, sp, #0xc
    mov r1, r1, lsl #0xc
    str r1, [r0, #0x18]
    str r1, [r0, #0x2c]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201e828:
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    mov r0, #0x4
    str r0, [r1, #0x10]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201e840:
    mov r0, #0x1
    bl func_020200e4
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    ldr r0, =data_020875a8
    mov r1, #0x5
    str r1, [r0, #0x10]
    mov r1, #0x0
    str r1, [r0, #0x14]
    ldrh r2, [r0, #0x50]
    ldrh r1, [r0, #0x52]
    add sp, sp, #0xc
    add r1, r2, r1
    mov r1, r1, lsl #0xc
    str r1, [r0, #0x2c]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201e884:
    mov r2, #0x0
    swpb r0, r2, [r1]
    mov r0, #0x6
    str r0, [r1, #0x10]
    str r2, [r1, #0x30]
    ldrh r0, [r1, #0x54]
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r3, r4, r5, r6, pc}
    mov r0, #0xf
    str r0, [r1, #0x10]
    strh r2, [r1, #0xc]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201e8bc:
    bl func_0201f1d0
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    ldr r0, =data_020875a8
    mov r1, #0x7
    str r1, [r0, #0x10]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201e8e0:
    mov r0, #0x2
    bl func_020200e4
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    ldr r0, =data_020875a8
    ldrh r1, [r0, #0xc]
    cmp r1, #0x0
    beq L_0201e93c
    mov r1, #0x5
    str r1, [r0, #0x10]
    mov r1, #0x1
    str r1, [r0, #0x30]
    ldrb r2, [r0, #0x7]
    ldr r1, [r0, #0x38]
    ldrh r3, [r0, #0x50]
    mul r1, r2, r1
    ldrh r2, [r0, #0x52]
    add sp, sp, #0xc
    add r2, r3, r2
    add r1, r1, r2, lsl #0xc
    str r1, [r0, #0x2c]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201e93c:
    mov r1, #0xf
    str r1, [r0, #0x10]
    ldrh r2, [r0, #0x50]
    ldrh r1, [r0, #0x52]
    ldrh r3, [r0, #0x54]
    add sp, sp, #0xc
    add r1, r2, r1
    add r1, r3, r1
    mov r1, r1, lsl #0xc
    str r1, [r0, #0x2c]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201e968:
    bl func_0201f9a0
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201e974:
    mov r0, #0x0
    bl func_020306fc
    cmp r0, #0x0
    beq L_0201e9a0
    mvn r0, #0xf
    mov r1, #0x10
    mov r2, #0x3
    bl func_020222b8
    ldr r0, =data_020875a8
    mov r1, #0x14
    str r1, [r0, #0x10]
L_0201e9a0:
    bl func_0201f9a0
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201e9ac:
    ldrh r4, [r1, #0x50]
    ldrh r0, [r1, #0x52]
    ldrh r3, [r1, #0x54]
    ldr r2, =data_020876d0
    add r0, r4, r0
    add r0, r3, r0
    mov r0, r0, lsl #0xc
    str r0, [r1, #0x2c]
    mov r0, r4, lsl #0xc
    str r0, [r1, #0x18]
    mov r3, #0x0
    str r3, [r1, #0x14]
    add r1, r2, #0x1
    swpb r0, r3, [r1]
    swpb r0, r3, [r2]
    bl func_0201f9a0
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201e9f4:
    bl func_0201f9a0
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201ea00:
    mov r0, #0x0
    bl func_020306fc
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    mvn r0, #0xf
    mov r1, #0x10
    mov r2, #0x3
    bl func_020222b8
    ldr r0, =data_020875a8
    mov r1, #0x14
    str r1, [r0, #0x10]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201ea38:
    ldrb r0, [r1, #0xa]
    add sp, sp, #0xc
    cmp r0, #0x0
    moveq r0, #0x11
    streq r0, [r1, #0x10]
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201ea50:
    ldrb r0, [r1, #0xa]
    cmp r0, #0x0
    beq L_0201ec4c
    mov r0, #0x0
    bl func_0201f828
    cmp r0, #0x0
    beq L_0201ee24
    ldr r0, =data_020875a8
    mov r1, #0x12
    str r1, [r0, #0x10]
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r4, =data_020b8bbc
    str r0, [sp, #0x4]
    mov r0, #0x5
    mov r1, #0xa5
    mov r2, #0xfa
    mov r3, #0x19
    str r4, [sp, #0x8]
    bl func_0203d0d8
    ldr r2, =data_020875a8
    mov r0, #0x0
    add r1, r2, #0xa
    swpb r0, r0, [r1]
    ldr r0, [r2, #0x24]
    cmp r0, #0x0
    bne L_0201eae0
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_0201eb98
    ldr r0, =data_020880c0
    ldr r1, [r2, #0x3c]
    ldrh r0, [r0, #0x1e]
    cmp r1, r0
    blt L_0201eb98
L_0201eae0:
    ldr r2, =data_020875a8
    mov r0, #0x0
    add r1, r2, #0x66
    swpb r0, r0, [r1]
    mov r1, #0x1
    ldr r0, [r2, #0x70]
    bl func_0201f4e8
    ldr r0, =data_0206e690
    ldr r1, =data_020875a8
    ldr r4, [r0, #0x0]
    add r2, r1, #0x3
    mov r1, #0x0
    mov r0, #0x51
    swpb r1, r1, [r2]
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    rsb r0, r0, #0xf0
    mov r1, r0, lsl #0x10
    mov r0, #0x51
    mov r5, r1, lsr #0x10
    bl func_0204221c
    mov r1, r5
    mov r3, r4
    mov r2, #0x0
    str r2, [sp, #0x0]
    mov r2, #0x3
    str r2, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r2, #0xaa
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r1, =data_0206e690
    mov r0, #0x53
    ldr r4, [r1, #0x0]
    bl func_0204221c
    mov r3, r4
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r2, =data_020b8bbc
    mov r1, #0x10
    str r2, [sp, #0x8]
    mov r2, #0xaa
    bl func_0203d740
    b L_0201ee24
L_0201eb98:
    ldr r3, =data_020875a8
    mov r1, #0x1
    add r2, r3, #0x66
    swpb r0, r1, [r2]
    ldr r0, [r3, #0x74]
    bl func_0201f4e8
    ldr r0, =data_0206e690
    ldr r1, =data_020875a8
    ldr r4, [r0, #0x0]
    add r2, r1, #0x3
    mov r1, #0x1
    mov r0, #0x51
    swpb r1, r1, [r2]
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    rsb r0, r0, #0xf0
    mov r1, r0, lsl #0x10
    mov r0, #0x51
    mov r5, r1, lsr #0x10
    bl func_0204221c
    mov r1, r5
    mov r3, r4
    mov r2, #0x0
    str r2, [sp, #0x0]
    str r2, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r2, #0xaa
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r1, =data_0206e690
    mov r0, #0x53
    ldr r4, [r1, #0x0]
    bl func_0204221c
    mov r3, r4
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r1, #0x3
    str r1, [sp, #0x4]
    ldr r2, =data_020b8bbc
    mov r1, #0x10
    str r2, [sp, #0x8]
    mov r2, #0xaa
    bl func_0203d740
    b L_0201ee24
L_0201ec4c:
    mov r0, #0x12
    str r0, [r1, #0x10]
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r4, =data_020b8bbc
    str r0, [sp, #0x4]
    mov r0, #0x5
    mov r1, #0xa5
    mov r2, #0xfa
    mov r3, #0x19
    str r4, [sp, #0x8]
    bl func_0203d0d8
    ldr r2, =data_020875a8
    mov r0, #0x0
    add r1, r2, #0xa
    swpb r0, r0, [r1]
    ldr r0, [r2, #0x24]
    cmp r0, #0x0
    bne L_0201ecbc
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_0201ed74
    ldr r0, =data_020880c0
    ldr r1, [r2, #0x3c]
    ldrh r0, [r0, #0x1e]
    cmp r1, r0
    blt L_0201ed74
L_0201ecbc:
    ldr r2, =data_020875a8
    mov r0, #0x0
    add r1, r2, #0x66
    swpb r0, r0, [r1]
    mov r1, #0x1
    ldr r0, [r2, #0x70]
    bl func_0201f4e8
    ldr r0, =data_0206e690
    ldr r1, =data_020875a8
    ldr r4, [r0, #0x0]
    add r2, r1, #0x3
    mov r1, #0x0
    mov r0, #0x51
    swpb r1, r1, [r2]
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    rsb r0, r0, #0xf0
    mov r1, r0, lsl #0x10
    mov r0, #0x51
    mov r5, r1, lsr #0x10
    bl func_0204221c
    mov r1, r5
    mov r3, r4
    mov r2, #0x0
    str r2, [sp, #0x0]
    mov r2, #0x3
    str r2, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r2, #0xaa
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r1, =data_0206e690
    mov r0, #0x53
    ldr r4, [r1, #0x0]
    bl func_0204221c
    mov r3, r4
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r2, =data_020b8bbc
    mov r1, #0x10
    str r2, [sp, #0x8]
    mov r2, #0xaa
    bl func_0203d740
    b L_0201ee24
L_0201ed74:
    ldr r3, =data_020875a8
    mov r1, #0x1
    add r2, r3, #0x66
    swpb r0, r1, [r2]
    ldr r0, [r3, #0x74]
    bl func_0201f4e8
    ldr r0, =data_0206e690
    ldr r1, =data_020875a8
    ldr r4, [r0, #0x0]
    add r2, r1, #0x3
    mov r1, #0x1
    mov r0, #0x51
    swpb r1, r1, [r2]
    bl func_0204221c
    mov r1, r4
    bl func_0203d8d8
    rsb r0, r0, #0xf0
    mov r1, r0, lsl #0x10
    mov r0, #0x51
    mov r5, r1, lsr #0x10
    bl func_0204221c
    mov r1, r5
    mov r3, r4
    mov r2, #0x0
    str r2, [sp, #0x0]
    str r2, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r2, #0xaa
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r1, =data_0206e690
    mov r0, #0x53
    ldr r4, [r1, #0x0]
    bl func_0204221c
    mov r3, r4
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r1, #0x3
    str r1, [sp, #0x4]
    ldr r2, =data_020b8bbc
    mov r1, #0x10
    str r2, [sp, #0x8]
    mov r2, #0xaa
    bl func_0203d740
L_0201ee24:
    ldr r0, =data_020875a8
    ldrb r0, [r0, #0x9]
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    mov r0, #0x0
    ldr r2, =data_020b8bbc
    str r0, [sp, #0x0]
    stmib sp, {r0, r2}
    ldr r1, =data_0206b26c
    mov r2, #0xff
    ldrb r1, [r1, #0x4]
    mov r3, #0x1e
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8bbc
    ldr r0, =data_0206b26c
    str r1, [sp, #0x8]
    ldrb r1, [r0, #0x5]
    ldr r0, =data_0206b25c
    mov r2, #0xc8
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    ldrb r0, [r0, #0x5]
    mov r1, r1, lsr #0x10
    mov r3, #0x1e
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8bbc
    ldr r0, =data_0206b26c
    str r1, [sp, #0x8]
    ldrb r1, [r0, #0x6]
    ldr r0, =data_0206b25c
    mov r2, #0xc8
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    ldrb r0, [r0, #0x6]
    mov r1, r1, lsr #0x10
    mov r3, #0x1e
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8bbc
    ldr r0, =data_0206b26c
    str r1, [sp, #0x8]
    ldrb r1, [r0, #0x7]
    ldr r0, =data_0206b25c
    mov r2, #0xc8
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    ldrb r0, [r0, #0x7]
    mov r1, r1, lsr #0x10
    mov r3, #0x1e
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8bbc
    ldr r0, =data_0206b25c
    str r1, [sp, #0x8]
    ldr r1, =data_0206b26c
    ldrb r0, [r0, #0x8]
    ldrb r1, [r1, #0x8]
    mov r2, #0xc8
    mov r3, #0x1e
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    ldr r1, =data_0206e690
    mov r0, #0x51
    ldr r6, [r1, #0x0]
    bl func_0204221c
    mov r1, r6
    bl func_0203d8d8
    rsb r0, r0, #0xf0
    mov r0, r0, lsl #0x10
    mov r5, r0, lsr #0x10
    mov r0, #0x51
    bl func_0204221c
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r1, #0x3
    str r1, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r1, r5
    mov r3, r6
    mov r2, #0xaa
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r0, =data_020875a8
    mov r2, #0x0
    add r1, r0, #0x9
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201efc4:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    ldr r0, =data_0206b74c
    bl func_0203feb4
    bl func_020401e8
    ldr r1, =data_0206e6d4
    mov r4, r0
    ldrb r2, [r1, #0x18]
    ldr r0, =data_020876ec
    ldr r1, =data_0206b75c
    str r2, [sp, #0x0]
    mov r2, #0x0
    mov r3, #0x6
    bl func_0205bdf4
    ldr r0, [r4, #0x18]
    ldr r2, =data_020876ec
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, =data_0206b764
    bl func_0203feb4
    bl func_020401e8
    ldr r0, [r0, #0x18]
    bl func_02040094
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201f034:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    bl func_020163d4
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cdd0
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x50]
    bl func_0203cdd0
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x28]
    bl func_0203cdd0
    mov r0, #0x19
    mov r1, #0x100
    mov r2, #0x0
    bl func_0203c24c
    mov r0, #0x1a
    mov r1, #0x100
    mov r2, #0x0
    bl func_0203c24c
    mov r0, #0x1b
    mov r1, #0x100
    mov r2, #0x0
    bl func_0203c24c
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x18]
    cmp r0, #0x5
    ldreq r0, =data_020692ec
    ldreq r0, [r0, #0x0]
    cmpeq r0, #0x1
    bne L_0201f0f8
    mov r2, #0x1
    str r2, [sp, #0x0]
    ldr r0, =data_020876dc
    ldr r1, =data_0206b75c
    mov r2, #0x0
    mov r3, #0x9
    bl func_0204f490
    ldr r0, [r4, #0x1c]
    ldr r2, =data_020876dc
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
L_0201f0f8:
    ldr r0, =data_020876dc
    ldr r1, =data_0206b774
    mov r2, #0x4
    bl func_0204f490
    ldr r0, [r4, #0x1c]
    ldr r2, =data_020876dc
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
L_0201f120:
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
