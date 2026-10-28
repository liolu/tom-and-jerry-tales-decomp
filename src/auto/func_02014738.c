#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020119a4();
extern void func_020119d4();
extern void func_02011a04();
extern void _dfix();
extern void _dflt();
extern void _dmul();
extern char data_0206ace8[];
extern char data_0206ea14[];
extern char data_020880c0[];
// clang-format off
asm void func_02014738(void) {
    stmfd sp!, {r3, lr}
    ldrb r2, [r0, #0x3c]
    mov r1, r2, lsl #0x1e
    movs r1, r1, lsr #0x1f
    bne L_0201485c
    mov r1, r2, lsl #0x1f
    movs r1, r1, lsr #0x1f
    bne L_020148f0
    bic r1, r2, #0x1
    orr r2, r1, #0x1
    add r1, r0, #0x3c
    swpb r0, r2, [r1]
    ldr r2, =data_0206ea14
    mov ip, #0x8
    ldr r0, [r2, #0x0]
    mov r1, #0x17
    add r0, r0, #0x1000
    str r1, [r0, #0x83c]
    ldr r0, [r2, #0x0]
    mov r1, #0x6
    add r0, r0, #0x1000
    str r1, [r0, #0x834]
    ldr r0, [r2, #0x0]
    mov r1, #0x0
    add r0, r0, #0x1000
    str r1, [r0, #0x830]
    ldr r0, [r2, #0x0]
    sub r3, ip, #0x9
    add r0, r0, #0x1000
    add r0, r0, #0x48
    add r1, r0, #0x800
    swpb r0, ip, [r1]
    ldr r1, =data_020880c0
    ldr r0, [r2, #0x0]
    ldrh ip, [r0, #0xea]
    add r0, r0, #0x1800
    strh ip, [r0, #0x40]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x1000
    str r3, [r0, #0x844]
    ldrsh r0, [r1, #0x6]
    bl _dflt
    mov r2, r0
    mov r3, r1
    ldr r0, =0xcccccccd
    ldr r1, =0x3ffccccc
    bl _dmul
    bl _dfix
    bl func_020119a4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x6]
    bl _dflt
    mov r2, r0
    mov r3, r1
    ldr r0, =0xcccccccd
    ldr r1, =0x3ffccccc
    bl _dmul
    bl _dfix
    bl func_020119d4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x6]
    bl _dflt
    mov r2, r0
    mov r3, r1
    ldr r0, =0xcccccccd
    ldr r1, =0x3ffccccc
    bl _dmul
    bl _dfix
    bl func_02011a04
    mov r1, #0x0
    ldr r0, =data_0206ace8
    str r1, [r0, #0x0]
    b L_020148f0
L_0201485c:
    ldr r2, =data_0206ea14
    mov ip, #0x2
    ldr r0, [r2, #0x0]
    mov r1, #0x4
    add r0, r0, #0x1000
    str r1, [r0, #0x83c]
    ldr r0, [r2, #0x0]
    mov r1, #0x0
    add r0, r0, #0x1000
    str r1, [r0, #0x834]
    ldr r0, [r2, #0x0]
    sub r3, ip, #0x3
    add r0, r0, #0x1000
    add r0, r0, #0x48
    add r1, r0, #0x800
    swpb r0, ip, [r1]
    ldr r1, =data_020880c0
    ldr r0, [r2, #0x0]
    ldrh ip, [r0, #0xea]
    add r0, r0, #0x1800
    strh ip, [r0, #0x40]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x1000
    str r3, [r0, #0x844]
    ldrsh r0, [r1, #0x6]
    bl func_020119a4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x8]
    bl func_020119d4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x4]
    bl func_02011a04
    ldr r0, =data_0206ace8
    mov r1, #0x1
    str r1, [r0, #0x0]
    mov r0, #0x2
    ldmfd sp!, {r3, pc}
L_020148f0:
    mov r0, #0x1
    ldmfd sp!, {r3, pc}
}
// clang-format on
