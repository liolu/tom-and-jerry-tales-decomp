#include "m2c.h"

void func_02022354(void);
void func_0202274c(void);
void func_02022b98(void);
void func_0202861c(void);
void func_0202b224(void);
void func_0202b278(void);
void func_020306fc(void);
void func_0203d098(void);
void func_0203f6fc(void);
void func_0203f870(void);
void func_0203f948(void);
void func_0203fb50(void);
void func_0203fbdc(void);
void func_0203feb4(void);
void func_0203ff1c(void);
void func_02040094(void);
void func_020401e8(void);
void func_02040228(void);
void func_02047108(void);
void func_0204f490(void);
extern char data_0206cb34[];
extern char data_0206cb40[];
extern char data_0206cb50[];
extern char data_0206e67c[];
extern char data_0206e694[];
extern char data_02086b08[];
extern char data_02087f80[];
extern char data_02087fac[];
extern char data_020880b8[];
extern char data_020b8b6c[];
// clang-format off
asm s32 func_0202b3c8(s32 arg0) {
    stmdb sp!, {r4, lr}
    ldr r1, =data_02087f80
    ldr r0, [r1, #0x10]
    cmp r0, #0x0
    ldmeqia sp!, {r4, pc}
    ldr r0, =data_0206e694
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldmneia sp!, {r4, pc}
    ldrb r0, [r1, #0x1]
    cmp r0, #0x0
    beq @L_0202b3fc
    bl func_0202b278
@L_0202b3fc:
    mov r0, #0x3
    bl func_020306fc
    cmp r0, #0x0
    ldrne r0, =data_02087f80
    ldrneb r1, [r0, #0x1]
    cmpne r1, #0x8
    beq @L_0202b448
    ldr r0, [r0, #0x28]
    cmp r0, #0x0
    moveq r1, #0x1
    movne r1, #0x0
    ldr r0, =data_02087f80
    cmp r1, #0x0
    str r1, [r0, #0x28]
    add r1, r0, #0x1
    movne r0, #0x1
    swpneb r0, r0, [r1]
    moveq r0, #0x5
    swpeqb r0, r0, [r1]
@L_0202b448:
    ldr r0, =data_02087f80
    ldrb r1, [r0, #0x1]
    cmp r1, #0x8
    addls pc, pc, r1, lsl #0x2
    ldmia sp!, {r4, pc}
@L_0202b45c:
    ldmia sp!, {r4, pc}
    b @L_0202b480
    b @L_0202b4f0
    ldmia sp!, {r4, pc}
    b @L_0202b500
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_0202b554
    b @L_0202b5a8
@L_0202b480:
    ldr r0, =data_0206cb34
    bl func_0203feb4
    bl func_020401e8
    ldr r2, [r0, #0x24]
    ldr r1, =data_02087f80
    bic r2, r2, #0x2
    str r2, [r0, #0x24]
    mov r2, #0x1
    ldr r0, =data_0206e67c
    str r2, [r1, #0x28]
    str r2, [r0, #0x0]
    add r2, r1, #0x1
    mov r1, #0x2
    swpb r1, r1, [r2]
    ldr r0, =data_020b8b6c
    bl func_0203d098
    ldr r1, =data_02086b08
    mov r0, #0x1
    swpb r0, r0, [r1]
    bl func_0203fb50
    bl func_0203f870
    ldr r1, =0xffff
    mov r2, #0x28
    bl func_02047108
    mov r0, #0x0
    mov r1, r0
    bl func_0203f6fc
    ldmia sp!, {r4, pc}
@L_0202b4f0:
    add r1, r0, #0x3
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmia sp!, {r4, pc}
@L_0202b500:
    ldr r0, =data_02087fac
    mov r1, #0x0
    mov r2, #0x1
    bl func_0202274c
    mov r4, r0
    ldr r0, =data_02087fac
    mov r1, #0x1
    bl func_02022b98
    tst r4, #0x1000000
    beq @L_0202b530
    and r0, r4, #0xff
    bl func_0202b224
@L_0202b530:
    mov r0, #0x1
    bl func_020306fc
    cmp r0, #0x0
    ldmeqia sp!, {r4, pc}
    ldr r0, =data_02087f80
    mov r2, #0x5
    add r1, r0, #0x1
    swpb r0, r2, [r1]
    ldmia sp!, {r4, pc}
@L_0202b554:
    ldr r0, =data_0206cb34
    bl func_0203feb4
    bl func_020401e8
    ldr r2, [r0, #0x24]
    ldr r3, =data_02086b08
    orr r2, r2, #0x2
    str r2, [r0, #0x24]
    mov r4, #0x0
    ldr r1, =data_02087f80
    ldr r2, =data_0206e67c
    str r4, [r1, #0x28]
    swpb r0, r4, [r3]
    str r4, [r2, #0x0]
    add r1, r1, #0x1
    swpb r0, r4, [r1]
    bl func_0203fbdc
    bl func_0203f870
    ldr r1, =0xffff
    mov r2, #0x7f
    bl func_02047108
    ldmia sp!, {r4, pc}
@L_0202b5a8:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    ldmeqia sp!, {r4, pc}
    bl func_0202861c
    ldr r0, =data_0206cb40
    bl func_0203feb4
    bl func_020401e8
    mov r4, r0
    ldr r0, =data_020880b8
    ldr r1, =data_0206cb50
    mov r2, #0x0
    mov r3, #0x8
    bl func_0204f490
    ldr r0, [r4, #0x18]
    mov r1, #0x2
    ldr r2, =data_020880b8
    bl func_0203ff1c
    bl func_02040228
    ldr r0, [r0, #0x1c]
    bl func_02040094
    bl func_0203f948
    ldmia sp!, {r4, pc}
}
// clang-format on
