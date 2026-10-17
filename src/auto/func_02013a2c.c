#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003794();
extern void func_02005d04();
extern void func_02007450();
extern void func_0200a0f8();
extern void func_0201490c();
extern void func_02015018();
extern void func_020222b8();
extern void func_02036340();
extern void func_0203feb4();
extern void func_02040080();
extern char data_020692ec[];
extern char data_0206ace8[];
extern char data_0206acec[];
extern char data_0206ad10[];
extern char data_0206ad34[];
extern char data_0206e684[];
extern char data_0206e6d4[];
extern char data_0206ea14[];
extern char data_02086d09[];
extern char data_02086fe4[];
extern char data_02086fec[];
extern char data_020880c0[];
extern char data_020aecfc[];
// clang-format off
asm void func_02013a2c(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r2, =data_0206e6d4
    ldr r1, =data_020880c0
    ldrb r2, [r2, #0x80]
    ldrb r1, [r1, #0x24]
    mov r5, r0
    add r0, r2, #0x1
    cmp r0, r1
    bgt L_02013b08
    ldrh r0, [r5, #0x34]
    and r4, r0, #0xff
    bl func_02015018
    ldr r1, =data_0206e6d4
    ldr r0, =data_0206ea14
    ldrb r3, [r1, #0x80]
    ldr r2, [r0, #0x0]
    add r1, r1, #0x80
    add r0, r3, #0x1
    swpb r0, r0, [r1]
    mov r1, r5
    ldr r2, [r2, #0x4]
    mov r3, #0x0
    mov r0, #0x7
    str r3, [r2, #0x28]
    bl func_0201490c
    mov r0, #0x14
    strh r0, [r5, #0x28]
    mov r0, #0x1
    str r0, [r5, #0x4]
    ldrb r0, [r5, #0x3c]
    add r1, r5, #0x3c
    ldr r3, =data_020aecfc
    bic r0, r0, #0x8
    swpb r0, r0, [r1]
    mov ip, #0x0
    strh r4, [r5, #0x34]
    mov r0, #0xbc
L_02013ac0:
    mla r4, ip, r0, r3
    ldr r2, [r4, #0x58]
    add r1, ip, #0x1
    orr r2, r2, #0x40
    and ip, r1, #0xff
    str r2, [r4, #0x58]
    cmp ip, #0xc8
    blo L_02013ac0
    ldr r1, =data_0206e6d4
    ldr r0, =data_020880c0
    ldrb r1, [r1, #0x80]
    ldrb r0, [r0, #0x24]
    cmp r1, r0
    bhs L_02013b00
    mov r0, #0x1
    bl func_02005d04
L_02013b00:
    mov r0, #0x2
    ldmfd sp!, {r3, r4, r5, pc}
L_02013b08:
    ldrb r0, [r5, #0x3c]
    mov r1, r0, lsl #0x1e
    movs r1, r1, lsr #0x1f
    bne L_02013be8
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    bne L_02013be0
    ldr r0, =data_0206ace8
    mov r1, #0x0
    str r1, [r0, #0x0]
    mov r0, #0x7
    bl func_02007450
    ldrb r0, [r5, #0x3c]
    add r1, r5, #0x3c
    ldr r2, =data_020692ec
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    ldr r3, =data_0206e6d4
    ldr r4, [r2, #0x0]
    add r1, r3, #0x16
    mov r0, #0x1
    cmp r4, #0x2
    swpb r0, r0, [r1]
    bne L_02013b8c
    ldr r1, =data_02086fe4
    ldr r0, =data_02086fec
    ldr r2, [r1, #0x0]
    ldr r1, [r1, #0x4]
    str r2, [r0, #0x0]
    str r1, [r0, #0x4]
    str r2, [r3, #0x74]
    str r1, [r3, #0x78]
L_02013b8c:
    cmp r4, #0x4
    bne L_02013bb8
    mov r0, #0x16
    bl func_0200a0f8
    mov r0, #0x19
    bl func_0200a0f8
    ldr r0, =data_0206ea14
    ldr r1, =data_0206acec
    ldr r0, [r0, #0x0]
    mov r2, #0x3
    bl func_02003794
L_02013bb8:
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    sub r0, r0, #0x2
    cmp r0, #0x1
    bhi L_02013be0
    ldr r0, =data_0206ea14
    ldr r1, =data_0206ad10
    ldr r0, [r0, #0x0]
    mov r2, #0x3
    bl func_02003794
L_02013be0:
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, pc}
L_02013be8:
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    sub r0, r0, #0x2
    cmp r0, #0x2
    bhi L_02013c3c
    ldr r0, =data_0206ea14
    ldr r0, [r0, #0x0]
    add r0, r0, #0x104
    bl func_02036340
    cmp r0, #0x0
    bne L_02013c3c
    ldr r0, =data_0206e6d4
    mov r2, #0x0
    add r1, r0, #0x8a
    swpb r0, r2, [r1]
    ldrb r1, [r5, #0x3c]
    add r2, r5, #0x3c
    mov r0, #0x1
    bic r1, r1, #0x2
    swpb r1, r1, [r2]
    ldmfd sp!, {r3, r4, r5, pc}
L_02013c3c:
    ldr r0, =data_0206e684
    mov r3, #0x0
    ldr r0, [r0, #0x0]
    mov r2, #0x3
    cmp r0, #0x0
    ldrne r1, =data_02086d09
    movne r0, #0x4
    ldreq r1, =data_02086d09
    moveq r0, #0x3
    swpb r0, r0, [r1]
    mov r1, #0x1e
    ldr r0, =data_0206e6d4
    add r4, r0, #0x16
    sub r0, r3, #0x10
    swpb r3, r3, [r4]
    bl func_020222b8
    ldr r0, =data_0206ad34
    bl func_0203feb4
    bl func_02040080
    mov r0, #0x2
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
