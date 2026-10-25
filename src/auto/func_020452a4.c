#include "m2c.h"

void func_01ff9f5c(void);
void func_01ffa2dc(void);
void func_01ffa410(void);
void func_02001654(void);
void func_02001694(void);
void func_02003794(void);
void func_02004330(void);
void func_020222b8(void);
void func_020296ec(void);
void func_02039d0c(void);
void func_02044978(void);
void func_020449dc(void);
void func_02044b1c(void);
void func_02044c5c(void);
void func_02044df4(void);
void func_0204b4a8(void);
void func_0204b77c(void);
void func_0204b918(void);
void func_0204b94c(void);
void func_0205918c(void);
void func_020591c0(void);
void func_02059264(void);
void func_020592b0(void);
void func_0205bdf4(void);
void func_0205c3d4(void);
void func_02062824(void);
void func_02062858(void);
void func_02062a8c(void);
extern char data_02064110[];
extern char data_020690b8[];
extern char data_0206dd38[];
extern char data_0206dde4[];
extern char data_0206ddec[];
extern char data_0206de2c[];
extern char data_0206de34[];
extern char data_0206de4c[];
extern char data_0206de50[];
extern char data_0206e7e8[];
extern char data_0206e9f8[];
extern char data_0206ea14[];
extern char data_02086b08[];
extern char data_021a90a4[];
extern char data_021a9b18[];
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020452a4(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x208
    mov r1, #0x0
    str r1, [sp, #0x10]
    add r2, sp, #0x24
    str r2, [sp, #0x0]
    add r1, sp, #0x1c
    str r1, [sp, #0x4]
    mov r4, r0
    ldr r0, [r4, #0x4]
    add r1, sp, #0x2c
    add r2, sp, #0x28
    add r3, sp, #0x20
    bl func_02044978
    ldr r0, [r4, #0xc]
    cmp r0, #0x0
    bne L_02045674
    add r0, r4, #0x2c
    bl func_02059264
    mov r5, r0
    add r0, sp, #0x100
    add r0, r0, #0xc6
    add r1, r4, #0x2c
    mov r2, #0x40
    mov r7, #0x0
    bl func_020591c0
    cmp r5, #0x0
    mov r2, r7
    ble L_02045360
    add r3, sp, #0x100
    ldr r1, =data_020690b8
    add r3, r3, #0xc6
L_02045324:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_0204533c
    cmp r0, #0x80
    bge L_0204533c
    ldrb r0, [r1, r0]
L_0204533c:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r5
    add r0, r0, r7, lsl #0x6
    add r0, r0, r7, lsl #0x10
    sub r0, r0, r7
    and r7, r0, #0x7f
    blt L_02045324
L_02045360:
    mov r6, r7
    mov r5, #0x0
    ldr r9, =data_021a9b18
    mov r8, #0x4c
    b L_0204538c
L_02045374:
    add r6, r6, #0x1
    cmp r6, #0x80
    movge r6, r5
    cmp r6, r7
    mvneq r6, #0x0
    beq L_020453b4
L_0204538c:
    mla r1, r6, r8, r9
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_02045374
    adds r0, r1, #0x9
    beq L_02045374
    add r1, r4, #0x2c
    bl func_020592b0
    cmp r0, #0x0
    bne L_02045374
L_020453b4:
    cmp r6, #0x0
    movlt r0, #0x0
    ldrge r1, =data_021a9b18
    movge r0, #0x4c
    mlage r0, r6, r0, r1
    ldr r0, [r0, #0x0]
    ldrb r0, [r0, #0x26]
    cmp r0, #0x0
    beq L_02045418
    ldr r3, =data_0206ea14
    ldr r2, =data_02086b08
    ldr r5, [r3, #0x0]
    mov r0, #0x1
    cmp r5, #0x0
    swpb r1, r0, [r2]
    beq L_02045418
    add r2, r5, #0x9
    mov r5, #0x0
    swpb r1, r5, [r2]
    ldr r1, [r3, #0x0]
    add r2, r1, #0xa
    swpb r1, r5, [r2]
    ldr r1, [r3, #0x0]
    add r1, r1, #0x1000
    str r0, [r1, #0x7c0]
L_02045418:
    ldr r3, [sp, #0x20]
    add r1, sp, #0x128
    ldr r2, [r3, #0x24]
    add r0, r4, #0x20
    str r2, [r4, #0x14]
    ldr r2, [r3, #0x28]
    str r2, [r4, #0x18]
    ldr r2, [r3, #0x2c]
    str r2, [r4, #0x1c]
    bl func_01ffa410
    ldr r1, [sp, #0x20]
    bl func_01ff9f5c
    ldr r1, [r4, #0x4]
    ldr r0, [r1, #0x4]
    cmp r0, #0x0
    beq L_02045478
    cmp r0, #0x2
    bne L_02045674
    bl func_02001694
    cmp r0, #0x6
    beq L_02045674
    mov r0, #0x6
    bl func_02001654
    b L_02045674
L_02045478:
    ldr r8, [r1, #0x0]
    mov r2, #0x1
    add r1, r8, #0x8
    swpb r0, r2, [r1]
    add r1, r8, #0x9
    swpb r0, r2, [r1]
    add r1, r8, #0xa
    swpb r0, r2, [r1]
    ldr r1, [r4, #0x0]
    add r0, sp, #0xa8
    bl func_0205918c
    ldr r1, =data_0206de4c
    add r0, sp, #0xa8
    bl func_0205c3d4
    ldr r1, [r4, #0x0]
    mov r2, r0
    ldr r1, [r1, #0x9c]
    add r0, sp, #0xe8
    ldr r3, [r1, #0x0]
    ldr r1, =data_0206dde4
    bl func_0205bdf4
    ldr r0, =data_0206e7e8
    ldr r1, =data_0206de50
    add r2, sp, #0xe8
    bl func_0205bdf4
    ldr r0, =data_0206e7e8
    bl func_02059264
    mov r5, r0
    add r0, sp, #0x100
    ldr r1, =data_0206e7e8
    mov r10, #0x0
    add r0, r0, #0x85
    mov r2, #0x40
    bl func_020591c0
    cmp r5, #0x0
    mov r2, r10
    ble L_02045554
    add r3, sp, #0x100
    ldr r1, =data_020690b8
    add r3, r3, #0x85
L_02045518:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_02045530
    cmp r0, #0x80
    bge L_02045530
    ldrb r0, [r1, r0]
L_02045530:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r5
    add r0, r0, r10, lsl #0x6
    add r0, r0, r10, lsl #0x10
    sub r0, r0, r10
    and r10, r0, #0x7f
    blt L_02045518
L_02045554:
    mov r9, r10
    ldr r11, =data_0206e7e8
    mov r7, #0x0
    ldr r6, =data_021a9b18
    mov r5, #0x4c
    b L_02045584
L_0204556c:
    add r9, r9, #0x1
    cmp r9, #0x80
    movge r9, r7
    cmp r9, r10
    mvneq r9, #0x0
    beq L_020455ac
L_02045584:
    mla r1, r9, r5, r6
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_0204556c
    adds r0, r1, #0x9
    beq L_0204556c
    mov r1, r11
    bl func_020592b0
    cmp r0, #0x0
    bne L_0204556c
L_020455ac:
    cmp r9, #0x0
    ldrge r1, =data_021a9b18
    movlt r5, #0x0
    movge r0, #0x4c
    mlage r5, r9, r0, r1
    cmp r5, #0x0
    beq L_020455f4
    ldr r0, [r5, #0x4]
    cmp r0, #0x5
    bne L_020455f4
    add r0, r8, #0x1000
    ldr r1, [r0, #0x790]
    mov r0, r8
    bl func_020296ec
    ldr r1, [r5, #0x0]
    add r0, r8, #0x1000
    str r1, [r0, #0x790]
    b L_02045600
L_020455f4:
    add r0, r8, #0x1000
    mov r1, #0x0
    str r1, [r0, #0x790]
L_02045600:
    ldr r0, [r8, #0xc]
    bl func_02004330
    mov r2, r0
    ldr r0, =data_0206e7e8
    ldr r1, =data_0206ddec
    add r3, sp, #0xe8
    bl func_0205bdf4
    ldr r0, [r4, #0x28]
    cmp r0, #0x0
    beq L_0204563c
    ldr r1, =data_0206e7e8
    mov r0, r8
    mov r2, #0x1
    bl func_02003794
    b L_0204564c
L_0204563c:
    ldr r1, =data_0206e7e8
    mov r0, r8
    mov r2, #0x3
    bl func_02003794
L_0204564c:
    add r0, r8, #0x1000
    mov r1, #0x1
    str r1, [r0, #0x7c0]
    ldr r1, [r4, #0x0]
    ldr r0, [r1, #0x90]
    str r0, [r8, #0xac]
    ldr r0, [r1, #0x94]
    str r0, [r8, #0xb0]
    ldr r0, [r1, #0x98]
    str r0, [r8, #0xb4]
L_02045674:
    ldr r0, =data_021a90a4
    ldrb r2, [r0, #0x1]
    cmp r2, #0x0
    ldrne r0, [r4, #0x4]
    ldrne r0, [r0, #0x4]
    cmpne r0, #0x2
    bne L_020456e4
    ldr r0, =data_021a90a4
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    ldrne r0, [r4, #0x4]
    ldrne r0, [r0, #0x4]
    cmpne r0, #0x2
    beq L_020456c0
    ldr r0, =data_0206dd38
    ldr r1, [r4, #0xc]
    ldr r0, [r0, #0x0]
    sub r0, r1, r0
    b L_020456d0
L_020456c0:
    ldr r0, =data_0206dd38
    ldr r1, [r4, #0xc]
    ldr r0, [r0, #0x0]
    add r0, r1, r0
L_020456d0:
    str r0, [r4, #0xc]
    ldr r0, [r4, #0xc]
    cmp r0, #0x0
    movlt r0, #0x0
    strlt r0, [r4, #0xc]
L_020456e4:
    ldr r1, [r4, #0x10]
    cmp r1, #0x0
    ble L_020459c0
    ldr r0, [r4, #0xc]
    cmp r0, r1
    ble L_0204570c
    mov r0, #0x0
    str r0, [r4, #0x10]
    str r0, [r4, #0xc]
    b L_020459c0
L_0204570c:
    ldr r8, [r4, #0x0]
    mov r6, #0x0
    mov r3, #0x14
    ldr r9, [r8, #0x54]
    mvn r7, #0x0
    mov lr, r6
    mov r2, r3
L_02045728:
    cmp r9, #0x0
    moveq r5, lr
    beq L_02045770
    ldr ip, [r8, #0x58]
    add r7, r7, #0x1
    cmp r7, ip
    bge L_0204576c
    ldr r11, [r8, #0x4c]
    mla r10, r7, r3, r11
L_0204574c:
    ldrb r5, [r10, #0x10]
    cmp r5, #0x0
    mlaeq r5, r7, r2, r11
    beq L_02045770
    add r10, r10, #0x14
    add r7, r7, #0x1
    cmp r7, ip
    blt L_0204574c
L_0204576c:
    mov r5, #0x0
L_02045770:
    cmp r5, #0x0
    moveq r5, #0x0
    beq L_02045794
    add r6, r6, #0x1
    cmp r6, #0x0
    ble L_02045728
    ldr r3, [r8, #0x4c]
    mov r2, #0x14
    mla r5, r7, r2, r3
L_02045794:
    mov r7, #0x0
    ldr r10, [r8, #0x6c]
    mvn r9, #0x0
    mov lr, r7
    mov r3, r7
L_020457a8:
    cmp r10, #0x0
    moveq r6, r3
    beq L_020457e8
    ldr ip, [r8, #0x70]
    add r9, r9, #0x1
    cmp r9, ip
    bge L_020457e4
    ldr r11, [r8, #0x64]
L_020457c8:
    add r6, r11, r9, lsl #0x4
    ldrb r2, [r6, #0xc]
    cmp r2, #0x0
    beq L_020457e8
    add r9, r9, #0x1
    cmp r9, ip
    blt L_020457c8
L_020457e4:
    mov r6, lr
L_020457e8:
    cmp r6, #0x0
    moveq r2, #0x0
    streq r2, [sp, #0x8]
    beq L_02045810
    add r7, r7, #0x1
    cmp r7, #0x0
    ble L_020457a8
    ldr r2, [r8, #0x64]
    add r2, r2, r9, lsl #0x4
    str r2, [sp, #0x8]
L_02045810:
    mov r2, #0xc
    ldr r6, [r8, #0x84]
    mvn lr, #0x0
    mov ip, #0x0
    mov r11, r2
L_02045824:
    cmp r6, #0x0
    moveq r3, #0x0
    beq L_0204586c
    ldr r10, [r8, #0x88]
    add lr, lr, #0x1
    cmp lr, r10
    bge L_02045868
    ldr r9, [r8, #0x7c]
    mla r7, lr, r2, r9
L_02045848:
    ldrb r3, [r7, #0x8]
    cmp r3, #0x0
    mlaeq r3, lr, r11, r9
    beq L_0204586c
    add r7, r7, #0xc
    add lr, lr, #0x1
    cmp lr, r10
    blt L_02045848
L_02045868:
    mov r3, #0x0
L_0204586c:
    cmp r3, #0x0
    moveq r7, #0x0
    beq L_02045890
    add ip, ip, #0x1
    cmp ip, #0x0
    ble L_02045824
    ldr r3, [r8, #0x7c]
    mov r2, #0xc
    mla r7, lr, r2, r3
L_02045890:
    bl func_0204b77c
    ldr r1, [r4, #0x8]
    mov r6, r0
    cmp r1, #0x0
    beq L_020458f8
    ldr r0, =data_02064110
    add r3, sp, #0x9c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r4, #0x0]
    add r2, sp, #0x90
    mov r0, r3
    add r1, r1, #0x90
    bl func_0204b94c
    ldr r2, [r5, #0x4]
    ldr r1, [sp, #0x90]
    sub r1, r2, r1
    str r1, [r5, #0x4]
    ldr r2, [r5, #0x8]
    ldr r1, [sp, #0x94]
    sub r1, r2, r1
    str r1, [r5, #0x8]
    ldr r2, [r5, #0xc]
    ldr r1, [sp, #0x98]
    sub r1, r2, r1
    str r1, [r5, #0xc]
L_020458f8:
    ldr r1, [sp, #0x8]
    cmp r1, #0x0
    beq L_0204592c
    add r2, sp, #0x14
    mov r3, r6
    add r0, r4, #0x20
    add r1, r1, #0x4
    bl func_01ffa2dc
    add r0, sp, #0x14
    add r1, sp, #0x128
    bl func_01ffa410
    ldr r1, [sp, #0x20]
    bl func_01ff9f5c
L_0204592c:
    cmp r5, #0x0
    beq L_02045980
    add r1, sp, #0x84
    mov r2, r6
    add r0, r5, #0x4
    bl func_02039d0c
    mov r0, r6
    bl func_02062858
    mov r1, r0
    mov r0, #0x3f800000
    bl func_02062a8c
    bl func_02062824
    mov r2, r0
    add r0, r4, #0x14
    add r1, sp, #0x78
    bl func_02039d0c
    ldr r2, [sp, #0x20]
    add r0, sp, #0x84
    add r1, sp, #0x78
    add r2, r2, #0x24
    bl func_0204b918
L_02045980:
    cmp r7, #0x0
    addeq sp, sp, #0x208
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_0206e9f8
    ldr r3, [r7, #0x4]
    ldr r4, [r1, #0x0]
    ldr r2, [r4, #0xa0]
    cmp r3, r2
    addeq sp, sp, #0x208
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    str r3, [r4, #0xa0]
    ldr r1, [r1, #0x0]
    mov r2, #0x1
    str r2, [r1, #0xd4]
    add sp, sp, #0x208
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020459c0:
    cmp r2, #0x0
    ldrne r0, [r4, #0x4]
    ldrne r0, [r0, #0x4]
    cmpne r0, #0x2
    bne L_02045b9c
    ldr r0, [r4, #0x4]
    ldr r1, [r4, #0xc]
    ldr r0, [r0, #0x4]
    add r2, sp, #0x14
    cmp r0, #0x2
    moveq r3, #0x1
    ldr r0, [r4, #0x0]
    movne r3, #0x0
    bl func_02044c5c
    cmp r0, #0x0
    beq L_02045a14
    add r0, sp, #0x14
    add r1, sp, #0x128
    bl func_01ffa410
    ldr r1, [sp, #0x20]
    bl func_01ff9f5c
L_02045a14:
    ldr r0, [r4, #0x4]
    ldr r1, [r4, #0xc]
    ldr r0, [r0, #0x4]
    add r2, sp, #0x138
    cmp r0, #0x2
    moveq r3, #0x1
    ldr r0, [r4, #0x0]
    movne r3, #0x0
    bl func_020449dc
    cmp r0, #0x0
    beq L_02045a58
    ldr r0, [r4, #0x0]
    ldr r2, [sp, #0x20]
    add r1, sp, #0x138
    add r0, r0, #0x90
    add r2, r2, #0x24
    bl func_0204b918
L_02045a58:
    ldr r0, [r4, #0x4]
    ldr r1, [r4, #0xc]
    ldr r0, [r0, #0x4]
    add r2, sp, #0x10
    cmp r0, #0x2
    moveq r3, #0x1
    ldr r0, [r4, #0x0]
    movne r3, #0x0
    bl func_02044b1c
    cmp r0, #0x0
    beq L_02045aac
    ldr r0, =data_0206e9f8
    ldr r2, [sp, #0x10]
    ldr r3, [r0, #0x0]
    ldr r1, [r3, #0xa0]
    cmp r2, r1
    beq L_02045aac
    str r2, [r3, #0xa0]
    ldr r0, [r0, #0x0]
    mov r1, #0x1
    str r1, [r0, #0xd4]
L_02045aac:
    ldr r0, [r4, #0x8]
    cmp r0, #0x0
    beq L_02045b9c
    ldr r0, =data_02064110
    add r3, sp, #0x6c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r4, #0x0]
    add r2, sp, #0x60
    mov r0, r3
    add r1, r1, #0x90
    bl func_0204b94c
    ldr r2, [sp, #0x20]
    ldr r0, [sp, #0x60]
    ldr r1, [r2, #0x24]
    sub r0, r1, r0
    str r0, [r2, #0x24]
    ldr r2, [sp, #0x20]
    ldr r0, [sp, #0x64]
    ldr r1, [r2, #0x28]
    sub r0, r1, r0
    str r0, [r2, #0x28]
    ldr r2, [sp, #0x20]
    ldr r0, [sp, #0x68]
    ldr r1, [r2, #0x2c]
    sub r0, r1, r0
    str r0, [r2, #0x2c]
    ldr r0, [r4, #0x8]
    ldr r1, [r4, #0x4]
    cmp r0, r1
    bne L_02045b6c
    add r1, sp, #0x128
    add r0, r4, #0x20
    bl func_01ffa410
    add r1, sp, #0x30
    bl func_01ff9f5c
    add r1, sp, #0x30
    str r1, [sp, #0xc]
    ldr r3, [r4, #0x14]
    ldr r0, [sp, #0x20]
    str r3, [r1, #0x24]
    ldr r3, [r4, #0x18]
    mov r2, r0
    str r3, [r1, #0x28]
    ldr r3, [r4, #0x1c]
    str r3, [r1, #0x2c]
    bl func_0204b4a8
    b L_02045b9c
L_02045b6c:
    add r1, sp, #0x24
    str r1, [sp, #0x0]
    mov r5, #0x0
    add r1, sp, #0x2c
    add r2, sp, #0x28
    add r3, sp, #0xc
    str r5, [sp, #0x4]
    bl func_02044978
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0xc]
    mov r2, r0
    bl func_0204b4a8
L_02045b9c:
    ldr r1, =data_0206de2c
    add r0, r4, #0x2c
    bl func_020592b0
    cmp r0, #0x0
    beq L_02045bc4
    ldr r1, =data_0206de34
    add r0, r4, #0x2c
    bl func_020592b0
    cmp r0, #0x0
    bne L_02045bec
L_02045bc4:
    ldr r1, [r4, #0x0]
    ldr r0, [r4, #0xc]
    ldr r1, [r1, #0x40]
    rsb r0, r0, r1, lsl #0xc
    cmp r0, #0x10000
    bne L_02045bec
    mvn r0, #0xf
    mov r1, #0x10
    mov r2, #0x1
    bl func_020222b8
L_02045bec:
    ldr r0, [r4, #0x0]
    ldr r1, [r4, #0xc]
    ldr r0, [r0, #0x40]
    cmp r1, r0, lsl #0xc
    ble L_02045d2c
    ldr r0, [r4, #0x28]
    cmp r0, #0x0
    movne r0, #0x0
    strne r0, [r4, #0xc]
    bne L_02045d2c
    add r0, r4, #0x2c
    bl func_02059264
    mov r5, r0
    add r0, sp, #0x144
    add r1, r4, #0x2c
    mov r2, #0x40
    mov r7, #0x0
    bl func_020591c0
    cmp r5, #0x0
    mov r2, r7
    ble L_02045c84
    ldr r1, =data_020690b8
    add r3, sp, #0x144
L_02045c48:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_02045c60
    cmp r0, #0x80
    bge L_02045c60
    ldrb r0, [r1, r0]
L_02045c60:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r5
    add r0, r0, r7, lsl #0x6
    add r0, r0, r7, lsl #0x10
    sub r0, r0, r7
    and r7, r0, #0x7f
    blt L_02045c48
L_02045c84:
    mov r6, r7
    mov r5, #0x0
    ldr r9, =data_021a9b18
    mov r8, #0x4c
    b L_02045cb0
L_02045c98:
    add r6, r6, #0x1
    cmp r6, #0x80
    movge r6, r5
    cmp r6, r7
    mvneq r6, #0x0
    beq L_02045cd8
L_02045cb0:
    mla r1, r6, r8, r9
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_02045c98
    adds r0, r1, #0x9
    beq L_02045c98
    add r1, r4, #0x2c
    bl func_020592b0
    cmp r0, #0x0
    bne L_02045c98
L_02045cd8:
    cmp r6, #0x0
    movlt r1, #0x0
    ldrge r1, =data_021a9b18
    movge r0, #0x4c
    mlage r1, r6, r0, r1
    ldr r0, [r4, #0x4]
    ldr r1, [r1, #0x0]
    ldr r0, [r0, #0x4]
    cmp r0, #0x2
    beq L_02045d18
    ldr r0, =data_02086b08
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    ldrneb r0, [r1, #0x29]
    cmpne r0, #0x0
    beq L_02045d20
L_02045d18:
    mov r0, r4
    bl func_02044df4
L_02045d20:
    add sp, sp, #0x208
    mov r0, #0x0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02045d2c:
    mov r0, #0x1
    add sp, sp, #0x208
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
