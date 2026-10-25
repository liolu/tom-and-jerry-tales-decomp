#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a0f8();
extern void func_0201f828();
extern void func_0202bf6c();
extern void func_0202bf7c();
extern void func_0202bf8c();
extern void func_0202bf9c();
extern void func_0202bfac();
extern void func_0202bfe4();
extern void func_0203d0d8();
extern void func_0203d740();
extern void func_0203d8d8();
extern void func_0204221c();
extern char data_020692ec[];
extern char data_0206b158[];
extern char data_0206b25c[];
extern char data_0206b26c[];
extern char data_0206e680[];
extern char data_0206e690[];
extern char data_020875a8[];
extern char data_020b8bbc[];
// clang-format off
asm void func_0201f9a0(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    ldrne r0, =data_020875a8
    movne r2, #0x37
    ldreq r0, =data_020875a8
    moveq r2, #0x0
    add r1, r0, #0x4
    swpb r0, r2, [r1]
    ldr r0, =data_020875a8
    ldr r0, [r0, #0x48]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_0201ff88
L_0201f9e0:
    b L_0201f9fc
    b L_0201fb78
    b L_0201fce0
    b L_0201fd94
    b L_0201fc2c
    b L_0201feec
    b L_0201fe48
L_0201f9fc:
    bl func_0202bf7c
    cmp r0, #0x0
    bne L_0201fa2c
    bl func_0202bf6c
    cmp r0, #0x0
    bne L_0201fa2c
    bl func_0202bf8c
    cmp r0, #0x0
    bne L_0201fa2c
    bl func_0202bf9c
    cmp r0, #0x0
    beq L_0201fb64
L_0201fa2c:
    ldr r0, =data_020875a8
    ldrb r0, [r0, #0x1]
    cmp r0, #0x0
    bne L_0201fa74
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
    ldr r0, =data_020875a8
    mov r2, #0x1
    add r1, r0, #0x1
    swpb r0, r2, [r1]
L_0201fa74:
    mov r0, #0x1
    bl func_0201f828
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, pc}
    ldr r2, =data_020875a8
    mov r0, #0x1
    add r1, r2, #0x9
    swpb r0, r0, [r1]
    add r1, r2, #0x8
    mov r0, #0x4
    swpb r0, r0, [r1]
    ldr r3, =data_0206e680
    ldr r0, =data_0206b158
    ldr r2, =data_0206b26c
    ldr r1, =data_0206b25c
    ldr r7, [r3, #0x0]
    ldr r0, [r0, #0xb0]
    ldrb r6, [r2, #0x4]
    ldrb r5, [r1, #0x4]
    bl func_0204221c
    ldr r2, [r7, #0x14]
    mov r1, r7
    ldrb r2, [r7, r2]
    mov r4, r0
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    sub r2, r6, r2, asr #0x1
    mov r2, r2, lsl #0x10
    mov r6, r2, lsr #0x10
    bl func_0203d8d8
    sub r1, r5, r0, asr #0x1
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r1, r1, lsl #0x10
    str r0, [sp, #0x4]
    ldr r5, =data_020b8bbc
    mov r0, r4
    mov r2, r6
    mov r3, r7
    mov r1, r1, lsr #0x10
    str r5, [sp, #0x8]
    bl func_0203d740
    ldr r2, =data_020875a8
    ldr r3, =data_0206b158
    ldrb r0, [r2, #0x8]
    mov r5, #0xa
    add r1, r2, #0x8
    add r4, r0, #0x1
    swpb r0, r5, [r3]
    swpb r0, r4, [r1]
    mov r1, #0x1
    str r1, [r2, #0x48]
    add r2, r2, #0xa
    swpb r1, r1, [r2]
    mov r0, #0x24
    bl func_0200a0f8
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, pc}
L_0201fb64:
    ldr r0, =data_020875a8
    mov r1, #0x5
    str r1, [r0, #0x48]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, pc}
L_0201fb78:
    bl func_0202bf7c
    cmp r0, #0x0
    beq L_0201fc18
    ldr r0, =data_020875a8
    ldr r1, =data_0206e680
    ldrb r3, [r0, #0x8]
    ldr r2, =data_0206b26c
    ldr r0, =data_0206b25c
    ldrb r6, [r2, r3]
    ldrb r5, [r0, r3]
    ldr r7, [r1, #0x0]
    mov r0, #0x7a
    bl func_0204221c
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r1, r5
    mov r2, r6
    mov r3, r7
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r2, =data_0206b158
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    subne r0, r0, #0x1
    swpneb r0, r0, [r2]
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, pc}
    mov r0, #0xa
    ldr r1, =data_020875a8
    mov r3, #0x4
    swpb r0, r0, [r2]
    str r3, [r1, #0x48]
    ldrb r0, [r1, #0x8]
    add r1, r1, #0x8
    add sp, sp, #0xc
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, r7, pc}
L_0201fc18:
    ldr r0, =data_020875a8
    mov r1, #0x4
    str r1, [r0, #0x48]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, pc}
L_0201fc2c:
    bl func_0202bf6c
    cmp r0, #0x0
    beq L_0201fccc
    ldr r0, =data_020875a8
    ldr r1, =data_0206e680
    ldrb r3, [r0, #0x8]
    ldr r2, =data_0206b26c
    ldr r0, =data_0206b25c
    ldrb r6, [r2, r3]
    ldrb r5, [r0, r3]
    ldr r7, [r1, #0x0]
    mov r0, #0x0
    bl func_0202bfe4
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r1, r5
    mov r2, r6
    mov r3, r7
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r2, =data_0206b158
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    subne r0, r0, #0x1
    swpneb r0, r0, [r2]
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, pc}
    mov r0, #0xa
    ldr r1, =data_020875a8
    mov r3, #0x2
    swpb r0, r0, [r2]
    str r3, [r1, #0x48]
    ldrb r0, [r1, #0x8]
    add r1, r1, #0x8
    add sp, sp, #0xc
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, r7, pc}
L_0201fccc:
    ldr r0, =data_020875a8
    mov r1, #0x2
    str r1, [r0, #0x48]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, pc}
L_0201fce0:
    bl func_0202bf8c
    cmp r0, #0x0
    beq L_0201fd80
    ldr r0, =data_020875a8
    ldr r1, =data_0206e680
    ldrb r3, [r0, #0x8]
    ldr r2, =data_0206b26c
    ldr r0, =data_0206b25c
    ldrb r6, [r2, r3]
    ldrb r5, [r0, r3]
    ldr r7, [r1, #0x0]
    mov r0, #0x7b
    bl func_0204221c
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r1, r5
    mov r2, r6
    mov r3, r7
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r2, =data_0206b158
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    subne r0, r0, #0x1
    swpneb r0, r0, [r2]
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, pc}
    mov r0, #0xa
    ldr r1, =data_020875a8
    mov r3, #0x3
    swpb r0, r0, [r2]
    str r3, [r1, #0x48]
    ldrb r0, [r1, #0x8]
    add r1, r1, #0x8
    add sp, sp, #0xc
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, r7, pc}
L_0201fd80:
    ldr r0, =data_020875a8
    mov r1, #0x3
    str r1, [r0, #0x48]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, pc}
L_0201fd94:
    bl func_0202bf9c
    cmp r0, #0x0
    beq L_0201fe34
    ldr r0, =data_020875a8
    ldr r1, =data_0206e680
    ldrb r3, [r0, #0x8]
    ldr r2, =data_0206b26c
    ldr r0, =data_0206b25c
    ldrb r6, [r2, r3]
    ldrb r5, [r0, r3]
    ldr r7, [r1, #0x0]
    mov r0, #0x7c
    bl func_0204221c
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r1, r5
    mov r2, r6
    mov r3, r7
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r2, =data_0206b158
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    subne r0, r0, #0x1
    swpneb r0, r0, [r2]
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, r6, r7, pc}
    mov r0, #0xa
    ldr r1, =data_020875a8
    mov r3, #0x6
    swpb r0, r0, [r2]
    str r3, [r1, #0x48]
    ldrb r0, [r1, #0x8]
    add r1, r1, #0x8
    add sp, sp, #0xc
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, r7, pc}
L_0201fe34:
    ldr r0, =data_020875a8
    mov r1, #0x6
    str r1, [r0, #0x48]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, pc}
L_0201fe48:
    bl func_0202bfac
    cmp r0, #0x0
    beq L_0201fee0
    ldr r0, =data_020875a8
    ldr r1, =data_0206e680
    ldrb r3, [r0, #0x8]
    ldr r2, =data_0206b26c
    ldr r0, =data_0206b25c
    ldrb r6, [r2, r3]
    ldrb r5, [r0, r3]
    ldr r7, [r1, #0x0]
    mov r0, #0x7d
    bl func_0204221c
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r1, r5
    mov r2, r6
    mov r3, r7
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r2, =data_0206b158
    ldrb r0, [r2, #0x0]
    cmp r0, #0x0
    subne r0, r0, #0x1
    swpneb r0, r0, [r2]
    bne L_0201feec
    mov r0, #0xa
    ldr r1, =data_020875a8
    mov r3, #0x5
    swpb r0, r0, [r2]
    str r3, [r1, #0x48]
    ldrb r0, [r1, #0x8]
    add r1, r1, #0x8
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    b L_0201feec
L_0201fee0:
    ldr r0, =data_020875a8
    mov r1, #0x6
    str r1, [r0, #0x48]
L_0201feec:
    ldr r0, =data_020875a8
    mov r1, #0x10
    str r1, [r0, #0x10]
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r4, =data_020b8bbc
    mov r0, #0x5
    mov r1, #0xa5
    mov r2, #0xfa
    mov r3, #0x19
    str r4, [sp, #0x8]
    bl func_0203d0d8
    ldr r0, =data_020875a8
    ldrb r0, [r0, #0xa]
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, pc}
    ldr r1, =data_0206e690
    mov r0, #0x52
    ldr r5, [r1, #0x0]
    bl func_0204221c
    mov r1, r5
    bl func_0203d8d8
    rsb r0, r0, #0xf0
    mov r1, r0, lsl #0x10
    mov r0, #0x52
    mov r4, r1, lsr #0x10
    bl func_0204221c
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r1, #0x3
    str r1, [sp, #0x4]
    ldr r2, =data_020b8bbc
    mov r1, r4
    str r2, [sp, #0x8]
    mov r3, r5
    mov r2, #0xaa
    bl func_0203d740
L_0201ff88:
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
