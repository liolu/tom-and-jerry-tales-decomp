#include "m2c.h"

void _dmul(void);
extern char data_02064104[];
extern char data_02064110[];
extern char data_02064348[];
extern char data_02068248[];
extern char data_0206c93c[];
extern char data_0206c988[];
extern char data_0206c9c8[];
extern char data_0206c9e4[];
extern char data_0206ca10[];
extern char data_0206ca1c[];
extern char data_0206e6a4[];
extern char data_0206e6d4[];
extern char data_0206fcac[];
extern char data_02087ef0[];
extern char data_0208ece4[];
void func_020015d4(void);
void func_02003658(void);
void func_020037f8(void);
void func_020293f8(void);
void func_02033d1c(void);
void func_02033df8(void);
void func_02034368(void);
void func_0203437c(void);
void func_02039d0c(void);
void func_02039dd0(void);
void func_0203a58c(void);
void func_0203a5a0(void);
void func_0203a95c(void);
void func_0203f60c(void);
void func_0203f660(void);
void func_0203f684(void);
void func_0203f6fc(void);
void func_0203f87c(void);
void func_0203f9a4(void);
void func_0203fa64(void);
void func_0204b014(void);
void func_0204b070(void);
void func_0204b404(void);
void func_0204b77c(void);
void func_0204b918(void);
void func_0204b94c(void);
void func_0204b980(void);
void func_0204b9bc(void);
void func_0204baa0(void);
void func_0204c27c(void);
void func_02051f18(void);
void func_0205918c(void);
void func_0205ff08(void);
void func_0205ff14(void);
void func_020617bc(void);
void func_020618ec(void);
void func_02063314(void);
// clang-format off
asm void func_020299e4(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc4
    ldr r4, =data_0206fcac
    ldr r2, =0x1864
    mov r11, #0x0
    mla r6, r0, r2, r4
    str r0, [sp, #0x10]
    add r4, r6, #0x1000
    ldrsh r0, [r6, #0x4c]
    ldr r2, [r6, #0x58]
    ldr r5, [r4, #0x790]
    add r0, r2, r0
    str r0, [r6, #0x40]
    add r0, r6, #0xa0
    str r1, [sp, #0x14]
    add r7, r6, #0x34
    ldmia r0, {r0, r1, r2}
    stmia r7, {r0, r1, r2}
    add r1, r6, #0x44
    swpb r0, r11, [r1]
    str r3, [sp, #0x18]
    ldr r0, [r4, #0x7c0]
    str r11, [sp, #0x34]
    cmp r0, #0x0
    bne L_02029a54
    ldr r0, [r4, #0x830]
    cmp r0, #0x2
    bne L_02029a5c
L_02029a54:
    mov r1, #0x1
    b L_02029a60
L_02029a5c:
    mov r1, r11
L_02029a60:
    add r0, r6, #0x1000
    cmp r5, #0x0
    str r1, [r0, #0x7c0]
    addeq sp, sp, #0xc4
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x14]
    mov r9, #0x0
    cmp r0, #0x0
    mvneq r0, #0x0
    streq r0, [sp, #0x18]
    add r0, r6, #0x1700
    ldrsb r2, [r0, #0xa4]
    cmp r2, #0x0
    ldrge r1, =data_0206fcac
    ldrge r0, =0x1864
    movlt r10, #0x0
    mlage r10, r2, r0, r1
    ldr r2, =data_02064348
    ldr r1, =data_02068248
    ldrsh r0, [r2, #0x7e]
    str r0, [sp, #0x2c]
    ldrsh r0, [r2, #0x7c]
    str r0, [sp, #0x28]
    ldrsh r0, [r1, #0x82]
    str r0, [sp, #0x24]
    ldrsh r0, [r1, #0x80]
    str r0, [sp, #0x20]
L_02029acc:
    add r0, r5, r9, lsl #0x4
    ldr r0, [r0, #0x50]
    cmp r0, #0x0
    beq L_0202a8c0
    add r0, r5, #0x50
    add r7, r0, r9, lsl #0x4
    ldr r0, [sp, #0x34]
    ldrsh r2, [r7, #0x4]
    cmp r11, r0
    movne r11, r0
    mvn r0, #0x1
    cmp r2, r0
    bne L_02029b14
    cmp r10, #0x0
    movne r0, #0x1
    moveq r0, #0x0
    and r1, r0, #0xff
    b L_02029b3c
L_02029b14:
    ldr r0, [sp, #0x14]
    mov r3, #0x0
    cmp r0, r2
    blt L_02029b38
    ldrsh r1, [r7, #0x6]
    cmp r0, r1
    ldrge r0, [sp, #0x18]
    cmpge r0, r2
    movlt r3, #0x1
L_02029b38:
    and r1, r3, #0xff
L_02029b3c:
    ldr r0, [r7, #0x0]
    cmp r0, #0xf
    addls pc, pc, r0, lsl #0x2
    b L_0202a8c0
L_02029b4c:
    b L_0202a8c0
    b L_02029b8c
    b L_02029dd8
    b L_02029dd8
    b L_0202a8c0
    b L_0202a8c0
    b L_0202a8c0
    b L_0202a2c4
    b L_0202a400
    b L_0202a448
    b L_0202a48c
    b L_0202a514
    b L_0202a55c
    b L_0202a63c
    b L_0202a6f8
    b L_0202a7b8
L_02029b8c:
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r0, [r0, #0x78]
    cmp r0, #0x0
    blt L_02029ba8
    cmp r10, #0x0
    beq L_02029ca8
L_02029ba8:
    cmp r1, #0x0
    beq L_02029ca8
    ldrsh r1, [r7, #0x8]
    cmp r1, #0x0
    blt L_02029bcc
    mov r0, r6
    add r2, sp, #0xb8
    bl func_02003658
    b L_02029c5c
L_02029bcc:
    ldrsh r2, [r7, #0xa]
    cmp r2, #0x0
    blt L_02029bf8
    cmp r10, #0x0
    addeq sp, sp, #0xc4
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r1, r2
    mov r0, r10
    add r2, sp, #0xb8
    bl func_02003658
    b L_02029c5c
L_02029bf8:
    add r0, r6, #0x1000
    ldr r0, [r0, #0x794]
    cmp r0, #0x0
    beq L_02029c20
    add r0, r6, #0x398
    add r0, r0, #0x1400
    add r1, sp, #0xb8
    mov r2, #0xc
    bl func_02051f18
    b L_02029c5c
L_02029c20:
    cmp r11, #0x0
    beq L_02029c4c
    mvn r0, #0x1
    cmp r1, r0
    cmpne r2, r0
    bne L_02029c4c
    mov r0, r11
    add r1, sp, #0xb8
    mov r2, #0xc
    bl func_02051f18
    b L_02029c5c
L_02029c4c:
    add r0, r6, #0xa0
    add r1, sp, #0xb8
    mov r2, #0xc
    bl func_02051f18
L_02029c5c:
    ldr r0, [r7, #0xc]
    add r1, sp, #0xb8
    bl func_02033d1c
    add r1, r6, r9, lsl #0x1
    add r1, r1, #0x1700
    strh r0, [r1, #0x78]
    ldrsh r0, [r1, #0x78]
    ldr r2, [r7, #0xc]
    ldr r1, =data_0208ece4
    stmia sp, {r0, r2}
    mov r0, #0xbc
    mla r0, r2, r0, r1
    add r0, r0, #0xa4
    str r0, [sp, #0x8]
    ldr r0, =data_0206c93c
    ldr r1, [sp, #0x14]
    ldr r2, [sp, #0x10]
    mov r3, r9
    bl func_020293f8
L_02029ca8:
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r0, [r0, #0x78]
    cmp r0, #0x0
    blt L_0202a8c0
    ldrsh r2, [r7, #0x6]
    ldr r1, [sp, #0x14]
    cmp r1, r2
    cmpge r2, #0x0
    blt L_02029ce8
    bl func_02033df8
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    mvn r1, #0x0
    strh r1, [r0, #0x78]
    b L_0202a8c0
L_02029ce8:
    ldrsh r1, [r7, #0x8]
    cmp r1, #0x0
    blt L_02029d18
    add r2, sp, #0xac
    mov r0, r6
    bl func_02003658
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r0, [r0, #0x78]
    add r1, sp, #0xac
    bl func_0203437c
    b L_02029dbc
L_02029d18:
    ldrsh r3, [r7, #0xa]
    cmp r3, #0x0
    blt L_02029d54
    cmp r10, #0x0
    beq L_02029d54
    add r2, sp, #0xac
    mov r1, r3
    mov r0, r10
    bl func_02003658
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r0, [r0, #0x78]
    add r1, sp, #0xac
    bl func_0203437c
    b L_02029dbc
L_02029d54:
    cmp r11, #0x0
    beq L_02029d78
    mvn r2, #0x1
    cmp r1, r2
    cmpne r3, r2
    bne L_02029d78
    mov r1, r11
    bl func_0203437c
    b L_0202a8c0
L_02029d78:
    add r1, r6, #0x1000
    ldr r1, [r1, #0x794]
    cmp r1, #0x0
    beq L_02029d98
    add r1, r6, #0x398
    add r1, r1, #0x1400
    bl func_0203437c
    b L_02029dbc
L_02029d98:
    add r2, sp, #0xac
    mov r0, r6
    mov r1, #0x0
    bl func_02003658
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r0, [r0, #0x78]
    add r1, sp, #0xac
    bl func_0203437c
L_02029dbc:
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r0, [r0, #0x78]
    bl func_02034368
    add r0, r0, #0x8
    str r0, [sp, #0x34]
    b L_0202a8c0
L_02029dd8:
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r0, [r0, #0x78]
    cmp r0, #0x0
    bge L_0202a2b4
    cmp r1, #0x0
    beq L_0202a8c0
    ldrsh r1, [r7, #0x8]
    cmp r1, #0x0
    blt L_02029e10
    mov r0, r6
    add r2, sp, #0xa0
    bl func_02003658
    b L_02029e50
L_02029e10:
    cmp r11, #0x0
    beq L_02029e40
    mvn r0, #0x1
    cmp r1, r0
    ldrnesh r1, [r7, #0xa]
    cmpne r1, r0
    bne L_02029e40
    add r1, sp, #0xa0
    mov r0, r11
    mov r2, #0xc
    bl func_02051f18
    b L_02029e50
L_02029e40:
    add r1, sp, #0xa0
    add r0, r6, #0xa0
    mov r2, #0xc
    bl func_02051f18
L_02029e50:
    ldr r0, [r7, #0xc]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    bl func_0203a58c
    ldr r1, [r7, #0xc]
    mov r4, r0
    add r0, r4, #0xc
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r0, =data_0206c988
    ldr r1, [r6, #0xc]
    ldr r2, [r6, #0x24]
    ldr r3, [sp, #0x14]
    bl func_020293f8
    mov r0, #0x1
    str r0, [sp, #0x0]
    mov r3, #0x0
    ldr r0, =data_0206e6a4
    str r3, [sp, #0x4]
    str r0, [sp, #0x8]
    ldr r0, [r7, #0xc]
    add r1, sp, #0xa0
    add r2, r6, #0x88
    bl func_0203a5a0
    add r1, r6, r9, lsl #0x1
    add r1, r1, #0x1700
    strh r0, [r1, #0x78]
    ldrsh r0, [r1, #0x78]
    bl func_0203a95c
    mov r8, r0
    mov r1, #0x0
    str r1, [r8, #0x44]
    mov r0, #0x1000
    str r0, [r8, #0x48]
    str r1, [r8, #0x4c]
    strh r1, [r8, #0x6]
    add r0, r6, #0x1000
    ldr r0, [r0, #0x794]
    cmp r0, #0x0
    beq L_02029f50
    add r0, r6, #0x398
    add r0, r0, #0x1400
    add r1, sp, #0xa0
    add r2, sp, #0x88
    bl func_0204b94c
    ldr r0, [sp, #0x88]
    cmp r0, #0x0
    ldreq r0, [sp, #0x8c]
    cmpeq r0, #0x0
    ldreq r0, [sp, #0x90]
    cmpeq r0, #0x0
    bne L_02029f34
    add r0, r6, #0x94
    add r1, r8, #0x88
    mov r2, #0xc
    bl func_02051f18
    b L_02029f40
L_02029f34:
    add r0, sp, #0x88
    add r1, r8, #0x88
    bl func_0204baa0
L_02029f40:
    mov r1, #0x0
    add r0, r6, #0x1000
    str r1, [r0, #0x794]
    b L_02029fdc
L_02029f50:
    cmp r10, #0x0
    beq L_02029fcc
    add r0, r10, #0xa0
    add r1, r6, #0xa0
    add r2, sp, #0x88
    bl func_0204b94c
    add r0, sp, #0x88
    add r1, r8, #0x88
    bl func_0204baa0
    add r0, r8, #0x88
    add r1, r6, #0x94
    bl func_0204b980
    bl func_02039dd0
    str r0, [sp, #0x38]
    ldr r0, =data_0206c9c8
    ldr r1, [sp, #0x38]
    bl func_020293f8
    ldr r0, [sp, #0x38]
    cmp r0, #0x1e
    bls L_02029fdc
    mov r1, r0
    ldr r0, =data_0206c9e4
    mov r2, #0x1e
    bl func_020293f8
    add r0, r6, #0x94
    add r3, r8, #0x88
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov ip, #0x0
    str ip, [r8, #0x8c]
    b L_02029fdc
L_02029fcc:
    add r0, r5, #0x2c
    add r1, r6, #0x7c
    add r2, r8, #0x88
    bl func_0204b404
L_02029fdc:
    ldr r2, [r6, #0x4]
    add r1, sp, #0x94
    add r0, r2, #0x1c
    ldr r2, [r2, #0x30]
    bl func_02039d0c
    add r0, r8, #0x88
    ldrsh r2, [r7, #0x6]
    mov r1, r0
    bl func_02039d0c
    add r0, r8, #0x88
    add r1, sp, #0x94
    mov r2, r0
    bl func_0204b918
    mov r1, #0x10000
    mov r0, #0x1000
    str r1, [r4, #0x2c]
    bl func_0204b77c
    mov r0, r0, lsl #0x8
    str r0, [r4, #0x30]
    add r0, r8, #0x88
    ldr r2, [r4, #0x2c]
    mov r1, r0
    bl func_02039d0c
    ldr r0, [r8, #0xb8]
    mov r2, #0x28
    str r0, [sp, #0x30]
    ldr r1, [sp, #0x30]
    mov r0, #0x1
    strh r0, [r1, #0x4c]
    strh r2, [r1, #0x0]
    sub r2, r2, #0x29
    strh r2, [r1, #0x2]
    add r1, r1, #0x6
    swpb r0, r0, [r1]
    ldr r1, =data_0206ca10
    ldr r0, [sp, #0x30]
    add r0, r0, #0x8
    bl func_0205918c
    ldr r0, [sp, #0x30]
    mov r2, #0x1
    add r1, r0, #0x4e
    swpb r0, r2, [r1]
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x5e]
    cmp r0, #0x2
    bne L_0202a278
    add r0, r8, #0x88
    mov r4, #0x0
    str r0, [sp, #0x3c]
L_0202a0a0:
    mov r0, #0x1
    str r0, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r0, =data_0206e6a4
    add r1, sp, #0xa0
    str r0, [sp, #0x8]
    ldr r0, [r7, #0xc]
    add r2, r6, #0x88
    mov r3, #0x0
    bl func_0203a5a0
    mov r2, r4, lsl #0x1
    add r1, sp, #0x48
    strh r0, [r1, r2]
    mov r0, r1
    ldrsh r0, [r0, r2]
    bl func_0203a95c
    add r1, sp, #0x40
    mov ip, r0
    str r0, [r1, r4, lsl #0x2]
    mov r0, #0x0
    str r0, [ip, #0x44]
    mov r0, #0x1000
    str r0, [ip, #0x48]
    mov r0, #0x0
    str r0, [ip, #0x4c]
    strh r0, [ip, #0x6]
    ldr r0, [sp, #0x3c]
    add r3, ip, #0x88
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [ip, #0x58]
    orr r0, r0, #0x140
    str r0, [ip, #0x58]
    ldr r0, [r7, #0x0]
    ldr r2, [ip, #0xa0]
    cmp r0, #0x3
    movne r0, #0x1
    moveq r0, #0x0
    and r1, r0, #0x1
    add r0, r4, #0x1
    bic r2, r2, #0x1
    mov r0, r0, lsl #0x10
    orr r1, r2, r1
    mov r4, r0, lsr #0x10
    str r1, [ip, #0xa0]
    cmp r4, #0x2
    bcc L_0202a0a0
    add r0, sp, #0x64
    bl func_0204b014
    ldr r1, [sp, #0x28]
    ldr r2, [sp, #0x2c]
    add r0, sp, #0x64
    bl func_0204b070
    ldr r2, [sp, #0x40]
    add r1, sp, #0x64
    add r0, r2, #0x88
    add r2, r2, #0x88
    bl func_0204b404
    add r0, sp, #0x64
    bl func_0204b014
    ldr r1, [sp, #0x20]
    ldr r2, [sp, #0x24]
    add r0, sp, #0x64
    bl func_0204b070
    ldr r0, [sp, #0x44]
    add r1, sp, #0x64
    str r0, [sp, #0x1c]
    ldr r2, [sp, #0x1c]
    add r0, r0, #0x88
    add r2, r2, #0x88
    bl func_0204b404
    ldrsh r2, [sp, #0x48]
    ldr r0, [sp, #0x30]
    ldrsh r4, [sp, #0x4a]
    strh r2, [r0, #0x50]
    ldr r1, [sp, #0x40]
    strh r4, [r0, #0x52]
    ldr r3, [r1, #0xb8]
    mov ip, #0x1
    strh ip, [r3, #0x4c]
    mov r0, #0x28
    strh r0, [r3, #0x0]
    sub r0, r0, #0x29
    strh r0, [r3, #0x2]
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r2, [r0, #0x78]
    add r0, r3, #0x4e
    add r1, r3, #0x6
    strh r2, [r3, #0x50]
    strh r4, [r3, #0x52]
    swpb r2, ip, [r0]
    add r0, r3, #0x8
    swpb r2, ip, [r1]
    ldr r1, =data_0206ca10
    bl func_0205918c
    ldr r0, [sp, #0x1c]
    mov r2, #0x28
    ldr r1, [r0, #0xb8]
    mov r0, #0x1
    strh r0, [r1, #0x4c]
    strh r2, [r1, #0x0]
    sub r2, r2, #0x29
    strh r2, [r1, #0x2]
    add r2, r6, r9, lsl #0x1
    add r2, r2, #0x1700
    ldrsh r4, [r2, #0x78]
    ldrsh r2, [sp, #0x48]
    add r3, r1, #0x4e
    strh r4, [r1, #0x50]
    strh r2, [r1, #0x52]
    swpb r2, r0, [r3]
    add r2, r1, #0x6
    swpb r0, r0, [r2]
    add r0, r1, #0x8
    ldr r1, =data_0206ca10
    bl func_0205918c
L_0202a278:
    ldr r0, [r8, #0x58]
    orr r0, r0, #0x140
    str r0, [r8, #0x58]
    ldr r0, [r7, #0x0]
    ldr r2, [r8, #0xa0]
    cmp r0, #0x3
    movne r0, #0x1
    moveq r0, #0x0
    and r1, r0, #0x1
    add r0, r8, #0x2c
    str r0, [sp, #0x34]
    bic r0, r2, #0x1
    orr r0, r0, r1
    str r0, [r8, #0xa0]
    b L_0202a8c0
L_0202a2b4:
    bl func_0203a95c
    add r0, r0, #0x2c
    str r0, [sp, #0x34]
    b L_0202a8c0
L_0202a2c4:
    cmp r1, #0x0
    ldrsh r4, [r7, #0x8]
    ldrsh r8, [r7, #0xa]
    beq L_0202a3b0
    add r0, r6, #0x1600
    ldrh r0, [r0, #0x98]
    cmp r0, #0x0
    bne L_0202a3b0
    ldrb r0, [r6, #0xa]
    cmp r0, #0x0
    beq L_0202a3b0
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r1, [r7, #0x6]
    ldrsh r0, [r0, #0x78]
    cmp r0, r1
    cmplt r1, #0x0
    blt L_0202a3b0
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r2, [r0, #0x78]
    mvn r1, #0x2
    cmp r8, r1
    sub r2, r2, #0x1
    strh r2, [r0, #0x78]
    beq L_0202a354
    add r0, r1, #0x1
    cmp r8, r0
    bne L_0202a370
    mov r0, r4
    bl func_0203f87c
    cmp r0, #0x0
    bne L_0202a3b0
    mov r0, r4
    bl func_0203fa64
    b L_0202a3b0
L_0202a354:
    mov r0, r4
    bl func_0203f660
    cmp r0, #0x0
    bne L_0202a3b0
    mov r0, r4
    bl func_0203f60c
    b L_0202a3b0
L_0202a370:
    str r9, [sp, #0x0]
    str r8, [sp, #0x4]
    str r4, [sp, #0x8]
    ldrsh r2, [r7, #0x6]
    ldr r0, =data_0206ca1c
    ldr r1, [sp, #0x14]
    str r2, [sp, #0xc]
    ldr r2, [r6, #0xc]
    ldr r3, [r6, #0x24]
    bl func_020293f8
    mov r0, r8
    mov r1, r4
    bl func_0203f6fc
    add r1, r6, r9, lsl #0x1
    add r1, r1, #0x1700
    strh r0, [r1, #0x78]
L_0202a3b0:
    ldrsh r1, [r7, #0x6]
    ldr r0, [sp, #0x14]
    cmp r0, r1
    bne L_0202a8c0
    cmp r1, #0x0
    ble L_0202a8c0
    mvn r0, #0x2
    cmp r8, r0
    beq L_0202a3f0
    add r0, r0, #0x1
    cmp r8, r0
    bne L_0202a8c0
    mov r0, r4
    mov r1, #0x0
    bl func_0203f9a4
    b L_0202a8c0
L_0202a3f0:
    mov r0, r4
    mov r1, #0x0
    bl func_0203f684
    b L_0202a8c0
L_0202a400:
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r0, [r0, #0x78]
    cmp r0, #0x0
    bge L_0202a8c0
    cmp r1, #0x0
    beq L_0202a8c0
    add r0, r5, r9, lsl #0x4
    ldrsh r1, [r0, #0x56]
    ldr r2, =data_02087ef0
    ldr r0, =0x400006c
    strh r1, [r2, #0x0]
    bl func_0204c27c
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    mov r1, #0x0
    strh r1, [r0, #0x78]
    b L_0202a8c0
L_0202a448:
    cmp r1, #0x0
    beq L_0202a460
    add r0, r6, #0x1000
    mov r1, #0x1
    str r1, [r0, #0x7c0]
    b L_0202a8c0
L_0202a460:
    ldrsh r1, [r7, #0x6]
    ldr r0, [sp, #0x14]
    cmp r0, r1
    blt L_0202a8c0
    ldr r0, [sp, #0x18]
    cmp r0, r1
    bge L_0202a8c0
    add r0, r6, #0x1000
    mov r1, #0x0
    str r1, [r0, #0x7c0]
    b L_0202a8c0
L_0202a48c:
    cmp r1, #0x0
    beq L_0202a8c0
    add r0, r5, r9, lsl #0x4
    ldrsh r1, [r0, #0x58]
    cmp r1, #0x1
    addeq r3, r6, #0x1600
    ldreqh r1, [r3, #0x98]
    cmpeq r1, #0x0
    bne L_0202a4d8
    add r1, r6, r9, lsl #0x1
    add r1, r1, #0x1700
    ldrsh r4, [r1, #0x78]
    mvn r2, #0x0
    cmp r4, r2
    bne L_0202a4d8
    ldrsh r2, [r0, #0x56]
    mov r0, #0x1
    strh r2, [r3, #0x98]
    strh r0, [r1, #0x78]
L_0202a4d8:
    add r1, r5, r9, lsl #0x4
    ldrsh r0, [r1, #0x5a]
    cmp r0, #0x1
    bne L_0202a8c0
    cmp r10, #0x0
    beq L_0202a8c0
    ldrsh r1, [r1, #0x56]
    add r0, r10, #0x1600
    mvn r2, #0x0
    strh r1, [r0, #0x98]
    add r0, r10, #0x1000
    add r0, r0, #0x3a4
    add r1, r0, #0x400
    swpb r0, r2, [r1]
    b L_0202a8c0
L_0202a514:
    cmp r1, #0x0
    beq L_0202a8c0
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r0, [r0, #0x78]
    cmp r0, #0x0
    bge L_0202a8c0
    add r1, r5, r9, lsl #0x4
    ldrsh r2, [r1, #0x56]
    ldrsh r1, [r1, #0x54]
    mov r0, #0x1000
    sub r1, r2, r1
    mov r1, r1, lsl #0xc
    bl func_0204b77c
    add r1, r6, r9, lsl #0x1
    add r1, r1, #0x1700
    strh r0, [r1, #0x78]
    b L_0202a8c0
L_0202a55c:
    cmp r1, #0x0
    beq L_0202a8c0
    cmp r11, #0x0
    mov r4, #0x0
    beq L_0202a590
    add r2, r5, r9, lsl #0x4
    ldrsh r1, [r2, #0x58]
    sub r0, r4, #0x2
    cmp r1, r0
    ldrnesh r1, [r2, #0x5a]
    cmpne r1, r0
    moveq r4, r11
    beq L_0202a5d4
L_0202a590:
    add r0, r6, #0x1000
    ldr r0, [r0, #0x794]
    cmp r0, #0x0
    addne r0, r6, #0x398
    addne r4, r0, #0x1400
    bne L_0202a5d4
    add r0, r5, r9, lsl #0x4
    ldrsh r0, [r0, #0x5a]
    cmp r0, #0x0
    addge r0, r6, #0x1700
    ldrgesb r2, [r0, #0xa4]
    cmpge r2, #0x0
    blt L_0202a5d4
    ldr r1, =data_0206fcac
    ldr r0, =0x1864
    mla r0, r2, r0, r1
    add r4, r0, #0xa0
L_0202a5d4:
    cmp r4, #0x0
    beq L_0202a8c0
    add r0, r6, #0x1700
    ldrsb r2, [r0, #0xa4]
    ldr r3, =data_0206fcac
    ldr r0, =0x1864
    add r1, r6, #0xa0
    mla r0, r2, r0, r3
    add r0, r0, #0xa0
    add r2, sp, #0x58
    bl func_0204b94c
    mov r0, #0x0
    str r0, [sp, #0x5c]
    add r0, sp, #0x58
    mov r1, r0
    bl func_0204baa0
    ldr r1, =data_02064104
    add r0, sp, #0x58
    add r2, r6, #0x7c
    bl func_0204b9bc
    add r0, sp, #0x58
    add r3, r6, #0x94
    ldmia r0, {r0, r1, r2}
    str r4, [sp, #0x34]
    stmia r3, {r0, r1, r2}
    b L_0202a8c0
L_0202a63c:
    cmp r1, #0x0
    beq L_0202a8c0
    add r0, r5, r9, lsl #0x4
    ldrsh r1, [r0, #0x56]
    ldrsh r0, [r0, #0x54]
    sub r4, r1, r0
    cmp r4, #0x0
    ble L_0202a6e4
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r0, [r0, #0x78]
    cmp r0, #0x0
    bge L_0202a6c8
    ldr r0, =0x47ae147b
    ldr r1, =0x3fa47ae1
    bl func_0205ff14
    mov r7, r0
    mov r0, r4
    mov r4, r1
    bl func_020618ec
    mov r2, r0
    mov r0, r7
    mov r3, r1
    mov r1, r4
    bl func_02063314
    bl func_0205ff08
    mov r2, r0
    mov r3, r1
    mov r0, #0x0
    ldr r1, =0x40b00000
    bl _dmul
    bl func_020617bc
    add r1, r6, r9, lsl #0x1
    add r1, r1, #0x1700
    strh r0, [r1, #0x78]
L_0202a6c8:
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r1, [r0, #0x78]
    mov r0, #0x1000
    mov r2, #0x51
    bl func_020015d4
    b L_0202a8c0
L_0202a6e4:
    ldr r1, =0xf2a
    mov r0, #0x3000
    mov r2, #0x51
    bl func_020015d4
    b L_0202a8c0
L_0202a6f8:
    cmp r1, #0x0
    beq L_0202a764
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r1, [r0, #0x78]
    cmp r1, #0x1
    beq L_0202a764
    mov r1, #0x1
    strh r1, [r0, #0x78]
    add r1, r5, r9, lsl #0x4
    ldrsh r0, [r1, #0x58]
    cmp r0, #0x1
    bne L_0202a73c
    ldrsh r1, [r1, #0x56]
    ldrh r0, [r6, #0x70]
    cmp r0, r1
    strlth r1, [r6, #0x70]
L_0202a73c:
    add r1, r5, r9, lsl #0x4
    ldrsh r0, [r1, #0x5a]
    cmp r0, #0x1
    bne L_0202a764
    cmp r10, #0x0
    beq L_0202a764
    ldrsh r1, [r1, #0x56]
    ldrh r0, [r10, #0x70]
    cmp r0, r1
    strlth r1, [r10, #0x70]
L_0202a764:
    add r1, r5, r9, lsl #0x4
    ldrsh r0, [r1, #0x56]
    cmp r0, #0x0
    bge L_0202a8c0
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r0, [r0, #0x78]
    cmp r0, #0x1
    bne L_0202a8c0
    ldrsh r0, [r1, #0x58]
    cmp r0, #0x1
    moveq r0, #0x2
    streqh r0, [r6, #0x70]
    add r0, r5, r9, lsl #0x4
    ldrsh r0, [r0, #0x5a]
    cmp r0, #0x1
    bne L_0202a8c0
    cmp r10, #0x0
    movne r0, #0x2
    strneh r0, [r10, #0x70]
    b L_0202a8c0
L_0202a7b8:
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    ldrsh r0, [r0, #0x78]
    cmp r0, #0x0
    bge L_0202a8c0
    cmp r1, #0x0
    beq L_0202a8c0
    ldr r3, =data_0206fcac
    ldr r0, =0x1864
    mvn r4, #0x0
    mov r7, #0x3
    mov r1, #0xf
L_0202a7e8:
    mla r2, r7, r0, r3
    ldrb r2, [r2, #0x8]
    cmp r2, #0x0
    moveq r4, r7
    moveq r7, r1
    add r7, r7, #0x1
    cmp r7, #0xf
    blt L_0202a7e8
    cmp r4, #0x0
    blt L_0202a8c0
    add r0, r6, #0x1000
    ldr r0, [r0, #0x794]
    cmp r0, #0x0
    addne r0, r6, #0x398
    addne r0, r0, #0x1400
    bne L_0202a888
    cmp r11, #0x0
    beq L_0202a844
    add r0, r5, r9, lsl #0x4
    ldrsh r1, [r0, #0x58]
    mvn r0, #0x1
    cmp r1, r0
    beq L_0202a858
L_0202a844:
    add r2, r5, r9, lsl #0x4
    ldrsh r1, [r2, #0x5a]
    mvn r0, #0x1
    cmp r1, r0
    bne L_0202a860
L_0202a858:
    mov r0, r11
    b L_0202a888
L_0202a860:
    ldrsh r0, [r2, #0x58]
    cmp r0, #0x0
    addge r0, r6, #0xa0
    bge L_0202a888
    cmp r1, #0x0
    blt L_0202a884
    cmp r10, #0x0
    addne r0, r10, #0xa0
    bne L_0202a888
L_0202a884:
    ldr r0, =data_02064110
L_0202a888:
    cmp r0, #0x0
    beq L_0202a8c0
    add r1, r5, #0x2c
    add r2, sp, #0x4c
    bl func_0204b918
    add r0, r5, r9, lsl #0x4
    ldrsh r0, [r0, #0x56]
    mov r1, #0x0
    and r2, r4, #0xff
    add r3, sp, #0x4c
    bl func_020037f8
    add r0, r6, r9, lsl #0x1
    add r0, r0, #0x1700
    strh r4, [r0, #0x78]
L_0202a8c0:
    add r0, r9, #0x1
    mov r0, r0, lsl #0x10
    mov r9, r0, lsr #0x10
    cmp r9, #0xc
    bcc L_02029acc
    add sp, sp, #0xc4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
