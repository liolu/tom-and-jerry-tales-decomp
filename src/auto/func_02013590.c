#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003568();
extern void func_02006b08();
extern void func_02007450();
extern void func_0200a0f8();
extern void func_020119a4();
extern void func_020119d4();
extern void func_02011a04();
extern void func_0203f870();
extern void func_02047150();
extern void func_020617bc();
extern void func_020618ec();
extern void func_02061968();
extern char data_020692ec[];
extern char data_0206e684[];
extern char data_0206e6d4[];
extern char data_0206ea14[];
extern char data_0208703c[];
extern char data_020880c0[];
// clang-format off
asm void func_02013590(void) {
    stmfd sp!, {r3, lr}
    ldr r1, =data_0208703c
    ldr r1, [r1, #0x4]
    cmp r1, #0x0
    beq L_020135b4
    ldrb r1, [r0, #0x3c]
    add r2, r0, #0x3c
    orr r1, r1, #0x2
    swpb r1, r1, [r2]
L_020135b4:
    ldrb r2, [r0, #0x3c]
    mov r1, r2, lsl #0x1e
    movs r1, r1, lsr #0x1f
    bne L_020137d4
    mov r1, r2, lsl #0x1f
    movs r1, r1, lsr #0x1f
    bne L_020137cc
    bic r1, r2, #0x1
    orr r1, r1, #0x1
    add r2, r0, #0x3c
    swpb r1, r1, [r2]
    ldrb r0, [r0, #0x40]
    cmp r0, #0x0
    beq L_02013600
    cmp r0, #0x1
    beq L_0201361c
    cmp r0, #0x2
    beq L_0201372c
    b L_020137cc
L_02013600:
    mov r0, #0x1
    bl func_02007450
    ldr r0, =data_0206ea14
    mov r1, #0x3
    ldr r0, [r0, #0x0]
    bl func_02003568
    b L_020137cc
L_0201361c:
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne L_02013654
    ldr r0, =data_020880c0
    ldrsh r1, [r0, #0xe]
    ldrsh r0, [r0, #0x6]
    smull r2, r0, r1, r0
    adds r2, r2, #0x800
    adc r1, r0, #0x0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    bl func_020119a4
    b L_02013698
L_02013654:
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0xe]
    bl func_020618ec
    mov r2, r0
    mov r3, r1
    ldr r0, =0xcccccccd
    ldr r1, =0x3ff4cccc
    bl func_02061968
    bl func_020617bc
    ldr r1, =data_020880c0
    ldrsh r1, [r1, #0x6]
    smull r2, r1, r0, r1
    adds r0, r2, #0x800
    adc r1, r1, #0x0
    mov r0, r0, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    bl func_020119a4
L_02013698:
    ldr r0, =data_020880c0
    ldrsh r1, [r0, #0xe]
    ldrsh r0, [r0, #0x8]
    smull r2, r0, r1, r0
    adds r2, r2, #0x800
    adc r1, r0, #0x0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    bl func_020119d4
    ldr r0, =data_020880c0
    ldrsh r1, [r0, #0xe]
    ldrsh r0, [r0, #0x4]
    smull r2, r0, r1, r0
    adds r2, r2, #0x800
    adc r1, r0, #0x0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    bl func_02011a04
    mov r0, #0x2
    bl func_02007450
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne L_02013700
    mov r0, #0x18
    bl func_0200a0f8
L_02013700:
    ldr r0, =data_0206e6d4
    mov r1, #0x1
    str r1, [r0, #0x8c]
    bl func_0203f870
    ldr r1, =0x166
    bl func_02047150
    ldr r0, =data_0206ea14
    mov r1, #0x1
    ldr r0, [r0, #0x0]
    bl func_02003568
    b L_020137cc
L_0201372c:
    ldr r0, =data_020880c0
    ldrsh r1, [r0, #0xc]
    ldrsh r0, [r0, #0x6]
    smull r2, r0, r1, r0
    adds r2, r2, #0x800
    adc r1, r0, #0x0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    bl func_020119a4
    ldr r0, =data_020880c0
    ldrsh r1, [r0, #0xc]
    ldrsh r0, [r0, #0x8]
    smull r2, r0, r1, r0
    adds r2, r2, #0x800
    adc r1, r0, #0x0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    bl func_020119d4
    ldr r0, =data_020880c0
    ldrsh r1, [r0, #0xc]
    ldrsh r0, [r0, #0x4]
    smull r2, r0, r1, r0
    adds r2, r2, #0x800
    adc r1, r0, #0x0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #0x14
    bl func_02011a04
    mov r0, #0x3
    bl func_02007450
    ldr r0, =data_0206e6d4
    mov r2, #0x1
    add r1, r0, #0xd6
    swpb r0, r2, [r1]
    bl func_0203f870
    mov r1, #0xb3
    bl func_02047150
    ldr r0, =data_0206ea14
    mov r1, #0x2
    ldr r0, [r0, #0x0]
    bl func_02003568
L_020137cc:
    mov r0, #0x1
    ldmfd sp!, {r3, pc}
L_020137d4:
    ldrb r0, [r0, #0x40]
    cmp r0, #0x0
    beq L_020137f4
    cmp r0, #0x1
    beq L_02013800
    cmp r0, #0x2
    beq L_02013878
    b L_020138d0
L_020137f4:
    mov r0, #0x0
    bl func_02007450
    b L_020138d0
L_02013800:
    ldr r2, =data_0206e6d4
    mov r0, #0x0
    ldr r1, =data_020692ec
    str r0, [r2, #0x8c]
    ldr r1, [r1, #0x0]
    cmp r1, #0x4
    bne L_02013828
    mov r0, #0x17
    bl func_0200a0f8
    b L_0201382c
L_02013828:
    bl func_02006b08
L_0201382c:
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x6]
    bl func_020119a4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x8]
    bl func_020119d4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x4]
    bl func_02011a04
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02013868
    mov r0, #0x0
    bl func_02007450
L_02013868:
    bl func_0203f870
    mov r1, #0x100
    bl func_02047150
    b L_020138d0
L_02013878:
    ldr r0, =data_0206e6d4
    mov r2, #0x0
    add r1, r0, #0xd6
    swpb r0, r2, [r1]
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x6]
    bl func_020119a4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x8]
    bl func_020119d4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x4]
    bl func_02011a04
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_020138c4
    mov r0, #0x0
    bl func_02007450
L_020138c4:
    bl func_0203f870
    mov r1, #0x100
    bl func_02047150
L_020138d0:
    ldr r0, =data_0206ea14
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    bl func_02003568
    mov r0, #0x2
    ldmfd sp!, {r3, pc}
}
// clang-format on
