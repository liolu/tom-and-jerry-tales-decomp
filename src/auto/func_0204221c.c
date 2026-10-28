#include "m2c.h"

extern char data_0206dcb8[];
extern char data_0206dcc0[];
extern char data_0206dcd0[];
extern char data_0206dce4[];
extern char data_0206dcf8[];
extern char data_0206dd0c[];
extern char data_0206dd20[];
extern char data_0206dd34[];
extern char data_021a80a4[];
extern char data_021a90a4[];
void func_0204247c(void);
void func_02054c5c(void);
void FS_OpenFile(void);
void func_02054f84(void);
void func_020550c8(void);
void FS_SeekFile(void);
void func_0205bfd4(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0204221c(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x254
    ldr r1, =data_0206dcb8
    mov r7, r0
    ldr r6, [r1, #0x4]
    add r0, sp, #0x20c
    mov r5, r6
    add r4, sp, #0xc
    bl func_02054c5c
    ldr r0, =data_0206dcb8
    ldr r0, [r0, #0x0]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b @L02042270
@L02042254:
    b @L02042270
    b @L02042280
    b @L02042290
    b @L020422a0
    b @L02042270
    b @L020422b0
    b @L020422c0
@L02042270:
    ldr r1, =data_0206dcc0
    add r0, sp, #0x20c
    bl FS_OpenFile
    b @L020422cc
@L02042280:
    ldr r1, =data_0206dcd0
    add r0, sp, #0x20c
    bl FS_OpenFile
    b @L020422cc
@L02042290:
    ldr r1, =data_0206dce4
    add r0, sp, #0x20c
    bl FS_OpenFile
    b @L020422cc
@L020422a0:
    ldr r1, =data_0206dcf8
    add r0, sp, #0x20c
    bl FS_OpenFile
    b @L020422cc
@L020422b0:
    ldr r1, =data_0206dd0c
    add r0, sp, #0x20c
    bl FS_OpenFile
    b @L020422cc
@L020422c0:
    ldr r1, =data_0206dd20
    add r0, sp, #0x20c
    bl FS_OpenFile
@L020422cc:
    mov r1, #0x0
    add r0, sp, #0x20c
    mov r2, r1
    bl FS_SeekFile
    add r0, sp, #0x20c
    add r1, sp, #0x8
    mov r2, #0x4
    bl func_020550c8
    add r0, sp, #0x20c
    mov r1, r7, lsl #0x2
    mov r2, #0x1
    bl FS_SeekFile
    add r0, sp, #0x20c
    add r1, sp, #0x4
    mov r2, #0x4
    bl func_020550c8
    ldr r1, [sp, #0x4]
    add r0, sp, #0x20c
    mov r2, #0x0
    bl FS_SeekFile
    add r10, sp, #0x200
    add r9, sp, #0x20c
    add r8, sp, #0x0
    mov r7, #0x2
    add r10, r10, #0xb
@L02042330:
    cmp r4, r10
    addhs sp, sp, #0x254
    ldrhs r0, =data_0206dd34
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r9
    mov r1, r8
    mov r2, r7
    bl func_020550c8
    ldrh r0, [sp, #0x0]
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    ldrh r0, [sp, #0x0]
    cmp r0, #0x0
    bne @L02042330
    add r0, sp, #0x20c
    add r9, sp, #0xc
    bl func_02054f84
    ldrsb r0, [sp, #0xc]
    cmp r0, #0x22
    bne @L0204239c
    mov r0, r9
    bl func_0205bfd4
    sub r0, r0, #0x1
    add r1, r9, r0
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r9, r9, #0x1
@L0204239c:
    ldr r4, =0xffff
    mov r8, #0xa
    mov r7, #0x2e
@L020423a8:
    ldrb r0, [r9], #0x1
    strh r0, [sp, #0x0]
    ldrh r0, [sp, #0x0]
    cmp r0, #0x5c
    ldreqsb r0, [r9, #0x0]
    cmpeq r0, #0x6e
    streqh r8, [sp, #0x0]
    ldrh r0, [sp, #0x0]
    addeq r9, r9, #0x1
    cmp r0, r4
    bne @L020423e8
    swpb r0, r7, [r5]
    add r1, r5, #0x1
    swpb r0, r7, [r1]
    add r5, r5, #0x2
    strh r7, [sp, #0x0]
@L020423e8:
    ldrh r0, [sp, #0x0]
    bl func_0204247c
    strh r0, [sp, #0x0]
    ldrh r0, [sp, #0x0]
    swpb r0, r0, [r5]
    add r5, r5, #0x1
    ldrh r0, [sp, #0x0]
    cmp r0, #0x0
    bne @L020423a8
    ldr r0, =data_0206dcb8
    ldr r0, [r0, #0x4]
    bl func_0205bfd4
    ldr r1, =data_0206dcb8
    add r0, r0, #0x4
    ldr r2, [r1, #0x4]
    bic r0, r0, #0x3
    add r3, r2, r0
    ldr r0, =data_021a90a4
    add r2, r3, #0x200
    cmp r2, r0
    ldrhi r0, =data_021a80a4
    str r3, [r1, #0x4]
    strhi r0, [r1, #0x4]
    mov r0, r6
    add sp, sp, #0x254
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
