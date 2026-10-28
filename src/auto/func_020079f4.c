#include "m2c.h"

void func_02002dac(void);
void func_02004b10(void);
void func_02007480(void);
void func_02007690(void);
void func_02007770(void);
void func_020085c8(void);
void func_02013198(void);
void func_020306c0(void);
void func_020306fc(void);
void func_02030878(void);
void func_02030898(void);
void func_02039d0c(void);
void VEC_Add(void);
void VEC_CrossProduct(void);
void VEC_Normalize(void);
void FX_Atan2Idx(void);
extern char data_020692ec[];
extern char data_0206acc8[];
extern char data_0206accc[];
extern char data_0206acd0[];
extern char data_0206acd8[];
extern char data_0206acdc[];
extern char data_0206ace8[];
extern char data_0206e674[];
extern char data_0206e678[];
extern char data_0206e6d4[];
extern char data_0206ea14[];
extern char data_02086b08[];
extern char data_02087034[];
extern char data_02087038[];
extern char data_020880c0[];
// clang-format off
asm void func_020079f4(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x20
    mov r5, r0
    mov r4, r1
    add r0, sp, #0x0
    add r1, sp, #0x4
    mov r8, r2
    mov r7, r3
    mov r6, #0x0
    bl func_02030898
    mov r0, r5
    bl func_02004b10
    bl func_02007770
    ldr r0, =data_0206e674
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq @2
    add r0, sp, #0x0
    bl func_020085c8
    mov r0, #0x9
    bl func_020306fc
    cmp r0, #0x0
    bne @1
    mov r0, #0x8
    bl func_020306fc
    cmp r0, #0x0
    bne @1
    mov r0, r6
    bl func_020306c0
    cmp r0, #0x0
    bne @1
    mov r0, #0x1
    bl func_020306c0
    cmp r0, #0x0
    bne @1
    mov r0, #0xa
    bl func_020306c0
    cmp r0, #0x0
    bne @1
    mov r0, #0xb
    bl func_020306c0
    cmp r0, #0x0
    bne @1
    mov r0, #0x5
    bl func_020306c0
    cmp r0, #0x0
    bne @1
    mov r0, #0x4
    bl func_020306c0
    cmp r0, #0x0
    bne @1
    mov r0, #0x6
    bl func_020306c0
    cmp r0, #0x0
    bne @1
    mov r0, #0x7
    bl func_020306c0
    cmp r0, #0x0
    beq @4
@1
    mov r6, #0x1
    b @4
@2
    mov r0, #0x9
    bl func_020306fc
    cmp r0, #0x0
    bne @3
    mov r0, #0x8
    bl func_020306fc
    cmp r0, #0x0
    beq @4
@3
    mov r6, #0x1
@4
    ldr r0, =data_0206ace8
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq @24
    cmp r8, #0x0
    bne @7
    ldr r0, =data_0206e678
    ldrb r0, [r0, #0x0]
    tst r0, #0x8
    beq @7
    cmp r7, #0x0
    bne @7
    add r0, r5, #0x1000
    ldr r0, [r0, #0x83c]
    cmp r0, #0x5
    ldrne r0, =data_020692ec
    ldrne r0, [r0, #0x0]
    cmpne r0, #0x2
    cmpne r0, #0x4
    beq @5
    ldr r1, =data_0206e6d4
    ldr r0, =data_020880c0
    ldrsh r2, [r1, #0xe]
    ldrsh r0, [r0, #0x12]
    ldrsh r3, [r1, #0xa]
    add r0, r0, r2
    add r0, r3, r0
    strh r0, [r1, #0xa]
@5
    ldr r2, [r5, #0x4]
    ldr r0, =data_0206acd8
    ldr r1, [r2, #0x30]
    ldr r0, [r0, #0x0]
    cmp r1, r0
    ble @6
    ldr r0, =data_02087034
    ldr r0, [r0, #0x0]
    sub r0, r1, r0
    str r0, [r2, #0x30]
@6
    ldr r2, [r5, #0x4]
    ldr r0, =data_0206acd8
    ldr r1, [r2, #0x30]
    ldr r0, [r0, #0x0]
    cmp r1, r0
    strlt r0, [r2, #0x30]
    b @10
@7
    ldr r2, =data_0206e6d4
    ldrsh r0, [r2, #0xa]
    cmp r0, #0x0
    ble @10
    cmp r8, #0x0
    bne @10
    ldr r1, =data_0206e678
    ldrb r1, [r1, #0x0]
    tst r1, #0x4
    beq @10
    add r1, r5, #0x1000
    ldr r1, [r1, #0x83c]
    cmp r1, #0x5
    ldrne r1, =data_020692ec
    ldrne r1, [r1, #0x0]
    cmpne r1, #0x2
    cmpne r1, #0x4
    beq @8
    ldr r1, =data_020880c0
    ldrsh r1, [r1, #0x14]
    add r0, r0, r1
    strh r0, [r2, #0xa]
@8
    ldr r2, [r5, #0x4]
    ldr r0, =data_0206acdc
    ldr r1, [r2, #0x30]
    ldr r0, [r0, #0x0]
    cmp r1, r0
    bge @9
    ldr r0, =data_02087034
    ldr r0, [r0, #0x0]
    add r0, r1, r0
    str r0, [r2, #0x30]
@9
    ldr r2, [r5, #0x4]
    ldr r0, =data_0206acdc
    ldr r1, [r2, #0x30]
    ldr r0, [r0, #0x0]
    cmp r1, r0
    strgt r0, [r2, #0x30]
@10
    ldr r0, =data_02086b08
    ldr r0, [r0, #0xc]
    cmp r0, #0x0
    bne @23
    cmp r8, #0x0
    bne @11
    ldr r0, =data_0206e678
    ldrb r3, [r0, #0x0]
    tst r3, #0x1
    bne @12
@11
    cmp r8, #0x0
    beq @16
    ldr r0, =data_0206e678
    ldrb r3, [r0, #0x0]
    tst r3, #0x2
    beq @16
@12
    ldr r1, =data_02086b08
    ldr r0, =data_020692ec
    ldr r2, [r1, #0x10]
    ldr r0, [r0, #0x0]
    add r2, r2, #0xc
    str r2, [r1, #0x10]
    cmp r0, #0x4
    bne @15
    cmp r8, #0x0
    bne @13
    tst r3, #0x10
    bne @14
@13
    cmp r8, #0x0
    beq @15
    tst r3, #0x20
    beq @15
@14
    ldr r0, =data_0206e6d4
    mov r1, #0x28
    str r1, [r0, #0xac]
@15
    ldr r1, =data_0206acd0
    ldr r0, =data_02087038
    ldr r1, [r1, #0x0]
    ldr r0, [r0, #0x0]
    cmp r0, r1
    ble @22
    mov r2, #0x0
    bl func_02013198
    ldr r1, =data_02087038
    str r0, [r1, #0x0]
    b @22
@16
    cmp r8, #0x0
    bne @17
    ldr r0, =data_0206e678
    ldrb r3, [r0, #0x0]
    tst r3, #0x2
    bne @18
@17
    cmp r8, #0x0
    beq @22
    ldr r0, =data_0206e678
    ldrb r3, [r0, #0x0]
    tst r3, #0x1
    beq @22
@18
    ldr r1, =data_02086b08
    ldr r0, =data_020692ec
    ldr r2, [r1, #0x10]
    ldr r0, [r0, #0x0]
    sub r2, r2, #0xc
    str r2, [r1, #0x10]
    cmp r0, #0x4
    bne @21
    cmp r8, #0x0
    bne @19
    tst r3, #0x20
    bne @20
@19
    cmp r8, #0x0
    beq @21
    tst r3, #0x10
    beq @21
@20
    ldr r0, =data_0206e6d4
    mov r1, #0x28
    str r1, [r0, #0xac]
@21
    ldr r1, =data_0206accc
    ldr r0, =data_02087038
    ldr r1, [r1, #0x0]
    ldr r0, [r0, #0x0]
    cmp r0, r1
    bge @22
    mov r2, #0x0
    bl func_02013198
    ldr r1, =data_02087038
    str r0, [r1, #0x0]
@22
    ldr r0, =data_0206accc
    ldr r1, =data_02087038
    ldr r2, [r0, #0x0]
    ldr r3, [r1, #0x0]
    cmp r3, r2
    ldrgt r0, =0x266
    subgt r2, r3, r2
    cmpgt r2, r0
    subgt r0, r3, r0
    strgt r0, [r1, #0x0]
    bgt @23
    ldr r0, =data_0206acd0
    ldr r1, [r0, #0x0]
    cmp r3, r1
    bge @23
    ldr r0, =0x266
    sub r1, r1, r3
    cmp r1, r0
    ble @23
    ldr r1, =data_02087038
    ldr r0, [r1, #0x0]
    add r0, r0, #0x66
    add r0, r0, #0x200
    str r0, [r1, #0x0]
@23
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne @24
    bl func_02007690
    ldr r1, =data_02086b08
    cmp r0, #0x0
    ldr r2, [r1, #0xc]
    str r2, [r1, #0x8]
    cmpne r2, r0
    beq @24
    str r0, [r1, #0xc]
    add r1, r1, #0x4
    mov r0, #0x0
    swpb r0, r0, [r1]
@24
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne @25
    ldr r0, =data_02086b08
    ldr r0, [r0, #0xc]
    cmp r0, #0x0
    beq @25
    bl func_02007480
@25
    ldr r0, =data_0206e678
    ldrb r0, [r0, #0x0]
    tst r0, #0x1
    bne @27
    tst r0, #0x2
    bne @27
    ldr r0, =data_02086b08
    ldr r1, [r0, #0x10]
    cmp r1, #0x0
    bge @26
    add r1, r1, #0xc
    str r1, [r0, #0x10]
    cmp r1, #0x0
    movgt r1, #0x0
    strgt r1, [r0, #0x10]
    b @27
@26
    ble @27
    subs r1, r1, #0xc
    str r1, [r0, #0x10]
    movmi r1, #0x0
    strmi r1, [r0, #0x10]
@27
    ldr r0, =data_02086b08
    mvn r1, #0x27
    ldr r2, [r0, #0x10]
    cmp r2, r1
    strlt r1, [r0, #0x10]
    ldr r0, =data_02086b08
    ldr r1, [r0, #0x10]
    cmp r1, #0x28
    movgt r1, #0x28
    strgt r1, [r0, #0x10]
    ldr r1, =data_02086b08
    mov r0, #0x28
    ldr r1, [r1, #0x10]
    bl FX_Atan2Idx
    mov r0, r0, asr #0x8
    sub r1, r0, #0x40
    ldrh r2, [r5, #0xea]
    ldr r0, =data_0206e678
    sub r1, r2, r1
    strh r1, [r5, #0xea]
    ldrb r0, [r0, #0x0]
    tst r0, #0x4
    bne @28
    tst r0, #0x8
    beq @29
@28
    tst r0, #0x8
    cmpne r7, #0x0
    bne @29
    ldr r0, =data_0206ace8
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne @31
@29
    ldr r3, [r5, #0x4]
    ldr r1, =data_0206acc8
    ldr r2, [r3, #0x30]
    ldr r0, [r1, #0x0]
    cmp r2, r0
    ble @30
    ldr r0, =data_02087034
    ldr r0, [r0, #0x0]
    sub r0, r2, r0
    str r0, [r3, #0x30]
    ldr r2, [r5, #0x4]
    ldr r1, [r1, #0x0]
    ldr r0, [r2, #0x30]
    cmp r0, r1
    strlt r1, [r2, #0x30]
    b @31
@30
    bge @31
    ldr r0, =data_02087034
    ldr r0, [r0, #0x0]
    add r0, r2, r0
    str r0, [r3, #0x30]
    ldr r2, [r5, #0x4]
    ldr r1, [r1, #0x0]
    ldr r0, [r2, #0x30]
    cmp r0, r1
    strgt r1, [r2, #0x30]
@31
    ldr r0, [r5, #0x4]
    add r3, r5, #0x94
    add r0, r0, #0x1c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r5, #0x4]
    add r0, r5, #0x88
    add r1, r1, #0x1c
    add r2, r5, #0x7c
    bl VEC_CrossProduct
    add r0, r5, #0x7c
    mov r1, r0
    bl VEC_Normalize
    ldr r0, =data_02087038
    add r1, sp, #0x14
    ldr r2, [r0, #0x0]
    add r0, r5, #0x7c
    rsb r2, r2, #0x0
    bl func_02039d0c
    add r0, r5, #0xac
    add r1, sp, #0x14
    mov r2, r0
    bl VEC_Add
    and r0, r4, #0x7
    add r1, r5, #0x48
    add r0, r0, r0, lsl #0x1
    add r1, r1, #0x1800
    add r7, r1, r0
    mov r1, #0x2
    swpb r1, r1, [r7]
    add r1, r5, #0x49
    add r1, r1, #0x1800
    add r8, r1, r0
    add r1, r5, #0x4a
    add r1, r1, #0x1800
    add r9, r1, r0
    ldrh r2, [r5, #0xea]
    add r1, r5, #0x1000
    swpb r0, r2, [r8]
    swpb r0, r4, [r9]
    ldr r0, [r1, #0x83c]
    cmp r0, #0x0
    bne @36
    ldr r0, =data_02086b08
    ldrb r0, [r0, #0x3]
    cmp r0, #0x0
    bne @33
    ldr r0, =data_0206e6d4
    ldrh r2, [r0, #0x4]
    ldrh r1, [r0, #0x6]
    cmp r2, r1
    blo @33
    ldrh r0, [r0, #0x14]
    cmp r0, #0x0
    bne @33
    ldr r0, =data_0206ace8
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq @33
    bl func_02030878
    cmp r0, #0x0
    beq @33
    ldr r0, =data_02086b08
    ldrb r0, [r0, #0x1]
    cmp r0, #0x0
    bne @32
    add r0, sp, #0x0
    add r1, sp, #0x8
    bl func_02002dac
    ldr r0, =data_0206ea14
    ldr r3, [sp, #0x8]
    ldr r2, [r0, #0x0]
    ldr r1, [sp, #0x10]
    ldr r0, [r2, #0xa0]
    ldr r2, [r2, #0xa8]
    sub r0, r0, r3
    sub r1, r2, r1
    bl FX_Atan2Idx
    mov r0, r0, lsl #0x8
    mov r0, r0, lsr #0x10
    add r0, r0, #0x80
    strh r0, [r5, #0xea]
    add r0, r5, #0x1000
    mov r1, #0x0
    str r1, [r0, #0x834]
    mov r0, #0x5
    swpb r0, r0, [r7]
    ldrh r0, [r5, #0xea]
    swpb r0, r0, [r8]
    swpb r0, r4, [r9]
@32
    ldr r0, =data_02086b08
    mov r2, #0x1
    add r1, r0, #0x1
    swpb r0, r2, [r1]
    b @34
@33
    ldr r0, =data_02086b08
    mov r2, #0x0
    add r1, r0, #0x1
    swpb r0, r2, [r1]
@34
    ldr r0, =data_020692ec
    ldr r3, [r0, #0x0]
    cmp r3, #0x4
    beq @35
    ldr r1, =data_0206e6d4
    ldrsh r2, [r1, #0xa]
    cmp r2, #0x19
    ble @35
    cmp r6, #0x0
    ldrne r0, =data_0206ace8
    ldrne r0, [r0, #0x0]
    cmpne r0, #0x0
    beq @35
    ldr r0, [sp, #0x40]
    cmp r0, #0x0
    bne @35
    cmp r3, #0x3
    subne r0, r2, #0x14
    strneh r0, [r1, #0xa]
    add r0, r5, #0x1000
    mov r1, #0x0
    str r1, [r0, #0x834]
    mov r0, #0x4
    swpb r0, r0, [r7]
    ldrh r0, [r5, #0xea]
    swpb r0, r0, [r8]
    swpb r0, r4, [r9]
@35
    ldr r0, =data_0206e6d4
    ldrsh r1, [r0, #0xa]
    add r1, r1, #0x1
    strh r1, [r0, #0xa]
@36
    add r0, r5, #0x1000
    ldr r0, [r0, #0x83c]
    cmp r0, #0x16
    bne @37
    ldr r0, =data_0206e6d4
    ldrsh r1, [r0, #0xa]
    add r1, r1, #0x1
    strh r1, [r0, #0xa]
@37
    ldr r0, =data_0206e6d4
    ldrh r1, [r0, #0x14]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0x14]
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
