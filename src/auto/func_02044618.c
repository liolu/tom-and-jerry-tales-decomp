#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020037f8();
extern void func_0200496c();
extern void func_02029404();
extern void func_02030ed4();
extern void func_02030ee0();
extern void func_020312cc();
extern void MI_CpuCopy8();
extern void STD_CopyString();
extern void func_020591c0();
extern void STD_GetStringLength();
extern void sprintf();
extern char data_02064110[];
extern char __upper_mapC[];
extern char data_0206ddc4[];
extern char data_0206de04[];
extern char data_0206de1c[];
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_0206e7e8[];
extern char data_0206fcac[];
extern char data_021a90a4[];
extern char data_021a9b18[];
extern char data_021ac118[];
// clang-format off
asm void func_02044618(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x194
    mov r10, r0
    ldr r1, =data_0206ddc4
    add r0, sp, #0x91
    mov r2, r10
    mov r5, #0x0
    bl sprintf
    ldr r1, =data_0206e698
    add r0, sp, #0x8
    bl func_02030ed4
    ldr r2, =data_0206e698
    add r0, sp, #0x91
    add r1, sp, #0xc
    bl func_020312cc
    ldr r0, [sp, #0xc]
    mov r6, r5
    ldr r4, [r0], #0x4
    str r0, [sp, #0xc]
    cmp r4, #0x0
    ble L_0204492c
    ldr r9, =data_021ac118
L_02044670:
    ldr r1, [sp, #0xc]
    add r0, sp, #0x10
    bl STD_CopyString
    add r0, sp, #0x10
    bl func_0200496c
    cmp r0, #0x0
    blt L_02044834
    ldr r2, =data_0206fcac
    ldr r0, =0x1864
    mov r7, #0x0
L_02044698:
    mla r8, r7, r0, r2
    ldrb r1, [r8, #0x8]
    cmp r1, #0x0
    bne L_02044824
    add r0, sp, #0x10
    bl func_0200496c
    ldr r3, =data_02064110
    mov r2, r7
    mov r1, #0x0
    bl func_020037f8
    add r1, r8, #0x8
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r1, =data_0206de04
    ldr r0, =data_0206e7e8
    add r2, sp, #0x10
    mov r3, r10
    bl sprintf
    mov r0, #0x5
    str r0, [sp, #0x4]
    ldr r0, =data_0206e7e8
    ldr r1, =data_0206e6a4
    ldr r2, =data_0206e698
    bl func_02029404
    str r0, [sp, #0x0]
    cmp r0, #0x0
    beq L_02044834
    ldr r0, =data_0206e7e8
    ldr r1, =data_0206de1c
    add r2, sp, #0x10
    mov r3, r10
    bl sprintf
    ldr r0, =data_0206e7e8
    bl STD_GetStringLength
    mov r7, r0
    ldr r1, =data_0206e7e8
    add r0, sp, #0x50
    mov r8, #0x0
    mov r2, #0x40
    bl func_020591c0
    cmp r7, #0x0
    mov r1, r8
    ble L_02044788
    ldr r0, =__upper_mapC
    add r2, sp, #0x50
L_0204474c:
    ldrsb r3, [r2, #0x0]
    cmp r3, #0x0
    blt L_02044764
    cmp r3, #0x80
    bge L_02044764
    ldrb r3, [r0, r3]
L_02044764:
    swpb r3, r3, [r2]
    ldrsb r3, [r2], #0x1
    add r1, r1, #0x1
    cmp r1, r7
    add r3, r3, r8, lsl #0x6
    add r3, r3, r8, lsl #0x10
    sub r3, r3, r8
    and r8, r3, #0x7f
    blt L_0204474c
L_02044788:
    ldr r0, =data_021a9b18
    mov r1, #0x4c
    mla r1, r8, r1, r0
    ldrb r2, [r1, #0x8]
    mov r1, r8
    cmp r2, #0x0
    beq L_020447d8
    mov r7, #0x0
    mov r2, #0x4c
L_020447ac:
    add r1, r1, #0x1
    cmp r1, #0x80
    movge r1, r7
    bge L_020447c8
    cmp r1, r8
    mvneq r1, #0x0
    beq L_020447d8
L_020447c8:
    mla r3, r1, r2, r0
    ldrb r3, [r3, #0x8]
    cmp r3, #0x0
    bne L_020447ac
L_020447d8:
    cmp r1, #0x0
    blt L_02044834
    ldr r2, =data_021a9b18
    mov r0, #0x4c
    mla r7, r1, r0, r2
    add r2, r7, #0x8
    mov r0, #0x1
    swpb r0, r0, [r2]
    ldr r1, =data_0206e7e8
    add r0, r7, #0x9
    bl STD_CopyString
    add r0, sp, #0x0
    mov r1, r7
    mov r2, #0x8
    bl MI_CpuCopy8
    ldr r0, [r9, #0x0]
    add r0, r0, #0x1
    str r0, [r9, #0x0]
    b L_02044834
L_02044824:
    add r1, r7, #0x1
    and r7, r1, #0xff
    cmp r7, #0xf
    blo L_02044698
L_02044834:
    ldr r0, [sp, #0xc]
    add r1, r0, #0x20
    str r1, [sp, #0xc]
    ldr r0, [r0, #0x20]
    ldr r1, [sp, #0xc]
    cmp r5, r0
    movlt r5, r0
    add r2, r1, #0x4
    str r2, [sp, #0xc]
    ldr r0, =data_021a90a4
    ldr r3, [r1, #0x4]
    ldr r1, [r0, #0xc]
    add r2, r2, #0x4
    cmp r3, r1
    strhi r3, [r0, #0xc]
    str r2, [sp, #0xc]
    cmp r3, #0x0
    mov r1, #0x0
    ble L_02044898
    ldr r0, [sp, #0xc]
L_02044884:
    add r1, r1, #0x1
    cmp r1, r3
    add r0, r0, #0x10
    blt L_02044884
    str r0, [sp, #0xc]
L_02044898:
    ldr r2, [sp, #0xc]
    ldr r0, =data_021a90a4
    ldr r3, [r2], #0x4
    ldr r1, [r0, #0x8]
    str r2, [sp, #0xc]
    cmp r3, r1
    strhi r3, [r0, #0x8]
    cmp r3, #0x0
    mov r1, #0x0
    ble L_020448d8
    ldr r0, [sp, #0xc]
L_020448c4:
    add r1, r1, #0x1
    cmp r1, r3
    add r0, r0, #0x14
    blt L_020448c4
    str r0, [sp, #0xc]
L_020448d8:
    ldr r2, [sp, #0xc]
    ldr r0, =data_021a90a4
    ldr r3, [r2], #0x4
    ldr r1, [r0, #0x4]
    str r2, [sp, #0xc]
    cmp r3, r1
    strhi r3, [r0, #0x4]
    cmp r3, #0x0
    beq L_02044920
    cmp r3, #0x0
    mov r1, #0x0
    ble L_02044920
    ldr r0, [sp, #0xc]
L_0204490c:
    add r1, r1, #0x1
    cmp r1, r3
    add r0, r0, #0x8
    blt L_0204490c
    str r0, [sp, #0xc]
L_02044920:
    add r6, r6, #0x1
    cmp r6, r4
    blt L_02044670
L_0204492c:
    ldr r1, =data_0206e698
    add r0, sp, #0x8
    bl func_02030ee0
    mov r0, r5
    add sp, sp, #0x194
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
