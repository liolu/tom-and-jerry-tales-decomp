#include "m2c.h"

extern char data_02064110[];
extern char data_020692e4[];
extern char data_020692e8[];
extern char data_020692ec[];
extern char data_02069390[];
extern char data_0206a378[];
extern char data_0206a488[];
extern char data_0206a490[];
extern char data_0206a498[];
extern char data_0206a4a0[];
extern char data_0206a4b0[];
extern char data_0206a4bc[];
extern char data_0206a4cc[];
extern char data_0206a4dc[];
extern char data_0206a4ec[];
extern char data_0206accc[];
extern char data_0206acd0[];
extern char data_0206ace0[];
extern char data_0206ace4[];
extern char data_0206ace8[];
extern char data_0206e67c[];
extern char data_0206e684[];
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_0206e6d4[];
extern char data_0206e7b0[];
extern char data_0206ea14[];
extern char data_0206fcac[];
extern char data_02086b08[];
extern char data_02086b08[];
extern char data_02086d08[];
extern char data_02086fe4[];
extern char data_02087034[];
extern char data_02087038[];
extern char data_02087044[];
extern char data_020880c0[];
void func_020037f8(void);
void func_02003d94(void);
void func_02004ac4(void);
void func_02005d04(void);
void func_02005d38(void);
void func_020069e0(void);
void func_02006a04(void);
void func_02007450(void);
void func_02007738(void);
void func_0200a0a0(void);
void func_020118b0(void);
void func_02011994(void);
void func_020119a4(void);
void func_020119d4(void);
void func_02011a04(void);
void func_02012e28(void);
void func_02014be4(void);
void func_02015070(void);
void func_020187c0(void);
void func_0201d10c(void);
void func_0201db5c(void);
void func_0202bd5c(void);
void func_0202be78(void);
void func_0202fc98(void);
void func_02030044(void);
void func_0203179c(void);
void func_02032604(void);
void func_02033200(void);
void func_02033ad0(void);
void func_02039e28(void);
void func_0203a4a8(void);
void func_0204089c(void);
void func_02040bc4(void);
void func_02042944(void);
void OS_Terminate(void);
void STD_CopyString(void);
void STD_ConcatenateString(void);
// clang-format off
asm void func_0200b734(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x3c
    ldr r1, =data_02086b08
    mov r4, #0x0
    swpb r0, r4, [r1]
    bl func_02007738
    ldr r0, =data_02064110
    add r3, sp, #0x10
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_0206e6a4
    bl func_02014be4
    ldr r0, =data_0206e6a4
    bl func_02015070
    bl func_02042944
    bl func_02003d94
    ldr r2, =data_0206e6d4
    mov r0, r4
    add r1, r2, #0xd5
    strh r0, [r2, #0x6c]
    swpb r0, r0, [r1]
    add r2, r2, #0xd4
    mov r1, #0x7
    swpb r0, r1, [r2]
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0200b954
L_0200b7a8:
    b L_0200b94c
    b L_0200b7bc
    b L_0200b810
    b L_0200b87c
    b L_0200b8e4
L_0200b7bc:
    ldr r2, =0x4001000
    mov r0, #0x4000000
    ldr r2, [r2, #0x0]
    ldr r0, [r0, #0x0]
    and r2, r2, #0x1f00
    and r0, r0, #0x1f00
    ldr r4, =func_020187c0
    mov r3, r2, lsr #0x8
    mov r2, r0, lsr #0x8
    mov r0, #0x1
    str r4, [sp, #0x0]
    bl func_0202fc98
    ldr r0, =data_02086d08
    ldr r3, =data_02069390
    ldrb r0, [r0, #0x2]
    ldr r1, =data_0206e6a4
    ldr r2, =data_0206e698
    ldr r0, [r3, r0, lsl #0x2]
    bl func_0204089c
    mov r4, #0x1
    b L_0200b958
L_0200b810:
    ldr r1, =0x4001000
    mov r0, #0x4000000
    ldr r1, [r1, #0x0]
    ldr r0, [r0, #0x0]
    and r1, r1, #0x1f00
    and r0, r0, #0x1f00
    ldr r4, =func_020187c0
    mov r3, r1, lsr #0x8
    mov r2, r0, lsr #0x8
    mov r0, #0x1
    mov r1, #0x5
    str r4, [sp, #0x0]
    bl func_0202fc98
    ldr r0, =data_02086d08
    ldr r1, =data_02069390
    ldrb r2, [r0, #0x2]
    add r0, sp, #0x1c
    ldr r1, [r1, r2, lsl #0x2]
    bl STD_CopyString
    ldr r1, =data_0206a488
    add r0, sp, #0x1c
    bl STD_ConcatenateString
    ldr r1, =data_0206e6a4
    ldr r2, =data_0206e698
    bl func_0204089c
    mov r4, #0x1
    b L_0200b958
L_0200b87c:
    ldr r2, =0x4001000
    mov r0, #0x4000000
    ldr r2, [r2, #0x0]
    ldr r0, [r0, #0x0]
    and r2, r2, #0x1f00
    ldr r4, =func_020187c0
    and r0, r0, #0x1f00
    mov r3, r2, lsr #0x8
    mov r2, r0, lsr #0x8
    mov r0, #0x1
    str r4, [sp, #0x0]
    bl func_0202fc98
    ldr r0, =data_02086d08
    ldr r1, =data_02069390
    ldrb r2, [r0, #0x2]
    add r0, sp, #0x1c
    ldr r1, [r1, r2, lsl #0x2]
    bl STD_CopyString
    ldr r1, =data_0206a490
    add r0, sp, #0x1c
    bl STD_ConcatenateString
    ldr r1, =data_0206e6a4
    ldr r2, =data_0206e698
    bl func_0204089c
    mov r4, #0x1
    b L_0200b958
L_0200b8e4:
    ldr r2, =0x4001000
    mov r0, #0x4000000
    ldr r2, [r2, #0x0]
    ldr r0, [r0, #0x0]
    and r2, r2, #0x1f00
    ldr r4, =func_020187c0
    and r0, r0, #0x1f00
    mov r3, r2, lsr #0x8
    mov r2, r0, lsr #0x8
    mov r0, #0x1
    str r4, [sp, #0x0]
    bl func_0202fc98
    ldr r0, =data_02086d08
    ldr r1, =data_02069390
    ldrb r2, [r0, #0x2]
    add r0, sp, #0x1c
    ldr r1, [r1, r2, lsl #0x2]
    bl STD_CopyString
    ldr r1, =data_0206a498
    add r0, sp, #0x1c
    bl STD_ConcatenateString
    ldr r1, =data_0206e6a4
    ldr r2, =data_0206e698
    bl func_0204089c
    mov r4, #0x1
    b L_0200b958
L_0200b94c:
    bl OS_Terminate
    b L_0200b958
L_0200b954:
    bl OS_Terminate
L_0200b958:
    ldr r0, =data_02086d08
    ldr r1, =data_020692ec
    ldrb r0, [r0, #0x2]
    ldr r1, [r1, #0x0]
    and r1, r1, #0xff
    bl func_0202bd5c
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    bl func_0202be78
    bl func_02004ac4
    ldr r0, =data_020692ec
    ldr r1, =data_02087034
    ldr r0, [r0, #0x0]
    mov r2, #0x51
    str r2, [r1, #0x0]
    cmp r0, #0x4
    add r3, sp, #0x10
    bne L_0200b9b4
    mov r0, #0x0
    mov r2, r0
    mov r1, #0x5
    bl func_020037f8
    b L_0200b9e8
L_0200b9b4:
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    mov r0, #0x0
    beq L_0200b9d8
    mov r2, r0
    mov r1, #0x4
    bl func_020037f8
    b L_0200b9e8
L_0200b9d8:
    ldr r1, =data_0206e6d4
    mov r2, r0
    ldrb r1, [r1, #0x5e]
    bl func_020037f8
L_0200b9e8:
    ldr r6, =data_0206e6d4
    mov r0, #0x0
    strh r0, [r6, #0x4]
    add r2, r6, #0x8
    swpb r1, r0, [r2]
    add r2, r6, #0x70
    swpb r1, r0, [r2]
    ldr r5, =data_0206e684
    strh r0, [r6, #0x6a]
    strh r0, [r6, #0x64]
    add r2, r6, #0x71
    swpb r1, r0, [r2]
    add r3, r6, #0x80
    strh r0, [r6, #0x6a]
    ldr r1, [sp, #0x18]
    ldr r8, [r5, #0x0]
    ldr r5, =data_0206e67c
    sub lr, r1, #0x4000
    ldr ip, =data_0206fcac
    str r0, [r5, #0x0]
    add r1, ip, #0x1800
    cmp r8, #0x0
    ldr r7, =data_0206ea14
    str lr, [sp, #0x18]
    str ip, [r7, #0x0]
    strh r0, [r6, #0x7c]
    mov r2, #0x1
    swpb r2, r2, [r3]
    strh r0, [r1, #0x60]
    mov r2, #0x64
    strh r2, [r6, #0x88]
    movne r0, #0x26
    strneh r0, [r6, #0x88]
    ldr r0, =data_0206e6d4
    mov r2, #0x0
    add r3, r0, #0x8a
    swpb r1, r2, [r3]
    add ip, r0, #0xa1
    str r2, [r0, #0x8c]
    ldr r1, =data_020880c0
    strh r2, [r0, #0x90]
    ldrsh r3, [r1, #0x10]
    ldrsh r1, [r1, #0x0]
    ldr r7, =data_02086d08
    strh r3, [r0, #0xa]
    strh r3, [r0, #0xc]
    strh r2, [r0, #0x14]
    strh r1, [r0, #0x64]
    str r2, [r0, #0x9c]
    swpb r1, r2, [ip]
    add ip, r0, #0xb4
    ldr r1, =0x266
    str r2, [r0, #0xa4]
    str r1, [r0, #0xac]
    str r2, [r0, #0xb0]
    swpb r1, r2, [ip]
    ldr r6, =data_02086b08+0x3
    str r2, [r0, #0xb8]
    str r2, [r0, #0xbc]
    str r2, [r0, #0xcc]
    str r2, [r0, #0xc4]
    str r2, [r0, #0xc8]
    mov r1, #0x1
    str r2, [r0, #0xd8]
    str r1, [r0, #0xc0]
    swpb ip, r2, [r7]
    ldr r8, =data_020692e8
    swpb ip, r2, [r6]
    ldr r5, =data_02087044
    ldr lr, =data_02086fe4
    str r1, [r8, #0x0]
    str r1, [r5, #0x0]
    str r2, [lr, #0x0]
    add ip, r0, #0x16
    str r2, [lr, #0x4]
    swpb r2, r2, [ip]
    mov r2, #0x63
    str r2, [r7, #0x18]
    ldrb r2, [r0, #0x5e]
    cmp r2, #0x2
    moveq r1, #0x3
    strh r1, [r0, #0x6]
    ldr r1, =data_0206e6d4
    ldrb r0, [r1, #0x5e]
    cmp r0, #0x4
    strneh r3, [r1, #0xa]
    strneh r3, [r1, #0xc]
    movne r0, #0x0
    bne L_0200bb60
    mov r0, r3, lsl #0x11
    mov r0, r0, asr #0x10
    strh r0, [r1, #0xa]
    strh r0, [r1, #0xc]
    mov r0, #0x1
L_0200bb60:
    strh r0, [r1, #0xe]
    ldr r1, =data_0206e6d4
    ldrb r0, [r1, #0x5e]
    cmp r0, #0x3
    movne r0, #0x1000
    strne r0, [r1, #0x84]
    bne L_0200bba4
    ldr r0, =data_02087034
    ldr r3, =0xccc
    ldr r2, [r0, #0x0]
    str r3, [r1, #0x84]
    smull r3, r1, r2, r3
    adds r2, r3, #0x800
    adc r1, r1, #0x0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #0x14
    str r2, [r0, #0x0]
L_0200bba4:
    bl func_0201db5c
    bl func_02011994
    cmp r0, #0x0
    beq L_0200bc50
    ldr r2, =data_0206ea14
    ldr r0, =data_02087038
    ldr r1, [r2, #0x0]
    mov r3, #0x0
    str r3, [r0, #0x0]
    ldr r0, [r1, #0x4]
    add r1, r0, #0x2c
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x0]
    ldr r0, [r0, #0x4]
    str r3, [r0, #0x28]
    ldr r0, [r2, #0x0]
    ldr r0, [r0, #0x4]
    bl func_02012e28
    ldr r3, =data_0206ea14
    add r8, sp, #0x4
    ldr r6, [r3, #0x0]
    ldr r5, [r6, #0x4]
    add r0, r5, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r8, {r0, r1, r2}
    ldrh r0, [r5, #0x18]
    strh r0, [r6, #0xea]
    ldr r7, [r3, #0x0]
    ldmia r8, {r0, r1, r2}
    add r3, r7, #0xac
    stmia r3, {r0, r1, r2}
    add r3, r7, #0xa0
    ldmia r8, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r6, r7, #0xc4
    ldmia r8, {r0, r1, r2}
    stmia r6, {r0, r1, r2}
    add r5, r7, #0xd0
    ldmia r8, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    add r3, r7, #0xdc
    ldmia r8, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
L_0200bc50:
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x6]
    bl func_020119a4
    ldr r1, =data_0206ea14
    ldr r0, =data_020880c0
    ldr r2, [r1, #0x0]
    ldrsh r3, [r0, #0x6]
    ldr r2, [r2, #0x4]
    ldr r0, =data_020692ec
    str r3, [r2, #0x30]
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne L_0200bc94
    ldr r0, [r1, #0x0]
    ldr r1, =0x199
    ldr r0, [r0, #0x4]
    str r1, [r0, #0x30]
L_0200bc94:
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x8]
    bl func_020119d4
    ldr r0, =data_020880c0
    ldrsh r0, [r0, #0x4]
    bl func_02011a04
    ldr r0, =data_0206e7b0
    bl func_020118b0
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    beq L_0200bce0
    ldr r6, =0x14cc
    ldr ip, =data_0206accc
    ldr r3, =data_0206ace4
    ldr r2, =data_0206acd0
    rsb r5, r6, #0x0
    ldr r1, =data_0206ace0
    b L_0200bcf8
L_0200bce0:
    ldr r6, =0x2333
    ldr ip, =data_0206accc
    ldr r3, =data_0206ace4
    ldr r2, =data_0206acd0
    ldr r1, =data_0206ace0
    rsb r5, r6, #0x0
L_0200bcf8:
    str r6, [ip, #0x0]
    str r6, [r3, #0x0]
    str r5, [r2, #0x0]
    str r5, [r1, #0x0]
    cmp r0, #0x4
    bne L_0200bd1c
    mov r0, #0x2
    bl func_02007450
    b L_0200bd24
L_0200bd1c:
    mov r0, #0x0
    bl func_02007450
L_0200bd24:
    ldr r0, =data_0206a4a0
    bl func_02039e28
    ldr r2, =data_020692e4
    mvn r1, #0x0
    str r0, [r2, #0x0]
    cmp r0, r1
    bne L_0200bd58
    ldr r0, =data_0206a4a0
    ldr r1, =data_0206e6a4
    ldr r2, =data_0206e698
    bl func_02040bc4
    ldr r1, =data_020692e4
    str r0, [r1, #0x0]
L_0200bd58:
    ldr r2, =data_0206ace8
    mov r3, #0x1
    ldr r0, =data_0206e698
    ldr r1, =data_0206e6a4
    str r3, [r2, #0x0]
    bl func_0203a4a8
    ldr r0, =data_0206e698
    mov r1, r0
    bl func_02033200
    ldr r3, =0x2d8b6127
    ldr r2, =0x40004c8
    ldr r0, =0x7fff
    str r3, [r2, #0x0]
    ldr r1, =0x6d8b62d8
    str r0, [r2, #0x4]
    ldr r0, =0x40006318
    str r1, [r2, #0x0]
    str r0, [r2, #0x4]
    sub r0, r3, #0x80000000
    str r0, [r2, #0x0]
    mov r0, #0x80000000
    str r0, [r2, #0x4]
    sub r0, r3, #0x40000000
    str r0, [r2, #0x0]
    mov r1, #0xc0000000
    ldr r0, =data_020692ec
    str r1, [r2, #0x4]
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne L_0200be0c
    ldr r0, =data_0206a4b0
    mov r1, #0x1
    bl func_020069e0
    ldr r0, =data_0206a4bc
    mov r1, #0x2
    bl func_020069e0
    ldr r0, =data_0206a4cc
    mov r1, #0x3
    bl func_020069e0
    ldr r1, =data_0206ea14
    mov r0, #0x1
    ldr r1, [r1, #0x0]
    add r1, r1, #0xa0
    bl func_02006a04
    b L_0200be30
L_0200be0c:
    ldr r0, =data_0206a4dc
    mov r1, #0x0
    bl func_020069e0
    ldr r0, =data_0206a4ec
    mov r1, #0x4
    bl func_020069e0
    ldr r0, =data_0206a4ec
    mov r1, #0x5
    bl func_020069e0
L_0200be30:
    ldr r0, =data_0206e698
    ldr r1, =data_0206e6a4
    bl func_02033ad0
    ldr r0, =data_0206e698
    bl func_02032604
    ldr r0, =data_0206e698
    bl func_0203179c
    ldr r0, =data_02086d08
    ldrb r0, [r0, #0x2]
    bl func_0200a0a0
    ldr r1, =data_0206e6d4
    ldr r0, =data_020692ec
    ldrb r3, [r1, #0x18]
    ldr r0, [r0, #0x0]
    ldr r2, =data_0206a378
    sub r1, r0, #0x1
    add r0, r2, r3, lsl #0x2
    ldrb r0, [r1, r0]
    bl func_0201d10c
    cmp r0, #0x0
    beq L_0200be8c
    bl func_02005d38
    b L_0200beac
L_0200be8c:
    ldr r1, =data_0206e6d4
    ldr r0, =data_020880c0
    ldrb r1, [r1, #0x80]
    ldrb r0, [r0, #0x24]
    cmp r1, r0
    bcs L_0200beac
    mov r0, #0x1
    bl func_02005d04
L_0200beac:
    cmp r4, #0x0
    beq L_0200beb8
    bl func_02030044
L_0200beb8:
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x3c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, #0x7
    bl func_02007450
    add sp, sp, #0x3c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}
// clang-format on
