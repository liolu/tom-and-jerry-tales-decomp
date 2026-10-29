#include "m2c.h"

void func_01ff8000(void);
void func_02003658(void);
void func_02003794(void);
void func_020037f8(void);
void func_02004330(void);
void func_0200496c(void);
void func_02030ed4(void);
void func_02030ee0(void);
void func_020312cc(void);
void func_02035ab0(void);
void VEC_Add(void);
void OS_Terminate(void);
void MI_CpuCopy8(void);
void STD_CopyString(void);
void func_020591c0(void);
void STD_GetStringLength(void);
void STD_CompareString(void);
void sprintf(void);
void func_0205c3d4(void);
void _fadd(void);
void func_02062750(void);
void _ffix(void);
void _fmul(void);
void _fsub(void);
extern char data_02064110[];
extern char __upper_mapC[];
extern char data_0206ddc4[];
extern char data_0206ddd8[];
extern char data_0206dde0[];
extern char data_0206dde4[];
extern char data_0206ddec[];
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_0206e7e8[];
extern char data_0206fcac[];
extern char data_021a90a4[];
extern char data_021a9b18[];
extern char data_021ac118[];
// clang-format off
asm void func_02042b4c(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x284
    ldr r5, [r1, #0x0]
    str r1, [sp, #0x0]
    mov r0, r5
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x100
    add r0, r0, #0x43
    mov r1, r5
    mov r2, #0x40
    mov r7, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r2, r7
    ble @3
    add r3, sp, #0x100
    ldr r1, =__upper_mapC
    add r3, r3, #0x43
@1
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt @2
    cmp r0, #0x80
    bge @2
    ldrb r0, [r1, r0]
@2
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r4
    add r0, r0, r7, lsl #0x6
    add r0, r0, r7, lsl #0x10
    sub r0, r0, r7
    and r7, r0, #0x7f
    blt @1
@3
    mov r6, r7
    mov r4, #0x0
    ldr r9, =data_021a9b18
    mov r8, #0x4c
    b @5
@4
    add r6, r6, #0x1
    cmp r6, #0x80
    movge r6, r4
    cmp r6, r7
    mvneq r6, #0x0
    beq @6
@5
    mla r1, r6, r8, r9
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq @4
    adds r0, r1, #0x9
    beq @4
    mov r1, r5
    bl STD_CompareString
    cmp r0, #0x0
    bne @4
@6
    cmp r6, #0x0
    movlt r0, #0x0
    strlt r0, [sp, #0x4]
    blt @7
    ldr r1, =data_021a9b18
    mov r0, #0x4c
    mla r0, r6, r0, r1
    str r0, [sp, #0x4]
@7
    ldr r0, [sp, #0x4]
    cmp r0, #0x0
    beq @8
    ldr r0, [r0, #0x4]
    cmp r0, #0x4
    beq @9
@8
    add sp, sp, #0x284
    mov r0, #0x1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@9
    ldr r0, [sp, #0x4]
    ldr r1, =data_0206ddc4
    ldr r0, [r0, #0x0]
    str r0, [sp, #0x1c]
    ldr r2, [sp, #0x1c]
    add r0, sp, #0x184
    bl sprintf
    ldr r1, =data_0206e698
    add r0, sp, #0x2c
    bl func_02030ed4
    ldr r2, =data_0206e698
    add r0, sp, #0x184
    add r1, sp, #0x30
    bl func_020312cc
    mov r0, #0x0
    ldr r1, [sp, #0x30]
    str r0, [sp, #0x18]
    ldr r0, [r1, #0x0]
    str r0, [sp, #0x20]
    add r0, r1, #0x4
    str r0, [sp, #0x30]
    ldr r0, [sp, #0x20]
    cmp r0, #0x0
    ble @82
    ldr r1, =data_02064110
    ldr r0, [r1, #0x0]
    str r0, [sp, #0x10]
    ldr r0, [r1, #0x4]
    str r0, [sp, #0xc]
    ldr r0, [r1, #0x8]
    str r0, [sp, #0x8]
@10
    ldr r0, =data_021a90a4
    mvn r1, #0x0
    ldr r5, [r0, #0x38]
    mov r4, #0x0
    cmp r5, #0x0
    ble @12
    ldr r2, [r0, #0x2c]
    ldr r3, [r0, #0x34]
@11
    ldrb r0, [r2, #0xa0]
    cmp r0, #0x0
    bne @12
    add r1, r1, #0x1
    cmp r1, r3
    beq @12
    add r2, r2, #0xa4
    add r4, r4, #0x1
    cmp r4, r5
    blt @11
@12
    cmp r4, r5
    mvnge r4, #0x0
    movge r8, #0x0
    bge @13
    ldr r2, =data_021a90a4
    mov r0, #0xa4
    ldr r1, [r2, #0x34]
    mul r5, r4, r0
    add r0, r1, #0x1
    str r0, [r2, #0x34]
    ldr r0, [r2, #0x2c]
    mov r3, #0x0
    add r0, r0, r5
    add r1, r0, #0xa0
    swpb r0, r3, [r1]
    ldr r0, [r2, #0x2c]
    add r8, r0, r5
@13
    cmp r8, #0x0
    bne @14
    ldr r1, =data_0206e698
    add r0, sp, #0x2c
    bl func_02030ee0
    add sp, sp, #0x284
    mov r0, #0x0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@14
    ldr r0, [sp, #0x4]
    ldr r1, =data_0206ddd8
    str r0, [r8, #0x9c]
    ldr r0, [sp, #0x0]
    ldr r2, [sp, #0x30]
    ldr r3, [r0, #0x0]
    mov r0, r8
    bl sprintf
    ldr r11, [sp, #0x30]
    add r0, r11, #0x20
    str r0, [sp, #0x30]
    ldr r0, [r11, #0x20]
    str r0, [r8, #0x40]
    ldr r0, [sp, #0x30]
    add r0, r0, #0x4
    str r0, [sp, #0x30]
    ldr r0, [sp, #0x1c]
    ldrb r0, [r0, #0x25]
    cmp r0, #0x1
    bne @15
    ldr r0, [sp, #0x10]
    str r0, [r8, #0x90]
    ldr r0, [sp, #0xc]
    str r0, [r8, #0x94]
    ldr r0, [sp, #0x8]
    b @16
@15
    ldr r0, [sp, #0x1c]
    ldr r0, [r0, #0x2c]
    str r0, [r8, #0x90]
    ldr r0, [sp, #0x1c]
    ldr r0, [r0, #0x30]
    str r0, [r8, #0x94]
    ldr r0, [sp, #0x1c]
    ldr r0, [r0, #0x34]
@16
    ldr r1, =data_0206dde0
    str r0, [r8, #0x98]
    mov r0, r11
    bl func_0205c3d4
    bl func_0200496c
    str r0, [sp, #0x14]
    cmp r0, #0x0
    mov r0, r8
    blt @43
    bl STD_GetStringLength
    mov r5, r0
    add r0, sp, #0x100
    mov r10, #0x0
    add r0, r0, #0x2
    mov r1, r8
    mov r2, #0x40
    bl func_020591c0
    cmp r5, #0x0
    mov r2, r10
    ble @19
    add r3, sp, #0x100
    ldr r1, =__upper_mapC
    add r3, r3, #0x2
@17
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt @18
    cmp r0, #0x80
    bge @18
    ldrb r0, [r1, r0]
@18
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r5
    add r0, r0, r10, lsl #0x6
    add r0, r0, r10, lsl #0x10
    sub r0, r0, r10
    and r10, r0, #0x7f
    blt @17
@19
    mov r9, r10
    mov r7, #0x0
    ldr r6, =data_021a9b18
    mov r5, #0x4c
    b @21
@20
    add r9, r9, #0x1
    cmp r9, #0x80
    movge r9, r7
    cmp r9, r10
    mvneq r9, #0x0
    beq @22
@21
    mla r1, r9, r5, r6
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq @20
    adds r0, r1, #0x9
    beq @20
    mov r1, r8
    bl STD_CompareString
    cmp r0, #0x0
    bne @20
@22
    cmp r9, #0x0
    ldrge r1, =data_021a9b18
    movlt r5, #0x0
    movge r0, #0x4c
    mlage r5, r9, r0, r1
    cmp r5, #0x0
    beq @23
    ldr r2, [r5, #0x0]
    ldr r0, [sp, #0x14]
    ldr r1, [r2, #0xc]
    cmp r1, r0
    bne @23
    ldr r3, [sp, #0x1c]
    ldrb r2, [r2, #0x0]
    mov r1, #0x0
    add r3, r3, #0x2c
    bl func_020037f8
    ldr r0, [r5, #0x0]
    ldrb r5, [r0, #0x0]
    b @41
@23
    cmp r5, #0x0
    ldrne r0, =data_021ac118
    ldrne r0, [r0, #0x0]
    cmpne r0, #0x0
    beq @30
    mov r0, r8
    bl STD_GetStringLength
    mov r5, r0
    mov r10, #0x0
    add r0, sp, #0xc1
    mov r1, r8
    mov r2, #0x40
    bl func_020591c0
    cmp r5, #0x0
    mov r2, r10
    ble @26
    ldr r1, =__upper_mapC
    add r3, sp, #0xc1
@24
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt @25
    cmp r0, #0x80
    bge @25
    ldrb r0, [r1, r0]
@25
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r5
    add r0, r0, r10, lsl #0x6
    add r0, r0, r10, lsl #0x10
    sub r0, r0, r10
    and r10, r0, #0x7f
    blt @24
@26
    mov r9, r10
    mov r7, #0x0
    ldr r6, =data_021a9b18
    mov r5, #0x4c
    b @28
@27
    add r9, r9, #0x1
    cmp r9, #0x80
    movge r9, r7
    cmp r9, r10
    mvneq r9, #0x0
    beq @29
@28
    mla r1, r9, r5, r6
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq @27
    adds r0, r1, #0x9
    beq @27
    mov r1, r8
    bl STD_CompareString
    cmp r0, #0x0
    bne @27
@29
    cmp r9, #0x0
    blt @30
    ldr r1, =data_021a9b18
    mov r0, #0x4c
    mla r1, r9, r0, r1
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq @30
    add r1, r1, #0x8
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, =data_021ac118
    ldr r0, [r0, #0x0]
    sub r1, r0, #0x1
    ldr r0, =data_021ac118
    str r1, [r0, #0x0]
@30
    mov r0, #0x0
    str r0, [sp, #0x28]
    ldr r2, =data_0206fcac
    ldr r0, =0x1864
    mov r5, #0x1
@31
    mla r6, r5, r0, r2
    ldrb r1, [r6, #0x8]
    cmp r1, #0x0
    bne @38
    ldr r3, [sp, #0x1c]
    ldr r0, [sp, #0x14]
    mov r1, #0x0
    mov r2, r5
    add r3, r3, #0x2c
    bl func_020037f8
    mov r0, r8
    str r6, [sp, #0x24]
    bl STD_GetStringLength
    mov r6, r0
    mov r7, #0x0
    add r0, sp, #0x80
    mov r1, r8
    mov r2, #0x40
    bl func_020591c0
    cmp r6, #0x0
    mov r1, r7
    ble @34
    ldr r0, =__upper_mapC
    add r2, sp, #0x80
@32
    ldrsb r3, [r2, #0x0]
    cmp r3, #0x0
    blt @33
    cmp r3, #0x80
    bge @33
    ldrb r3, [r0, r3]
@33
    swpb r3, r3, [r2]
    ldrsb r3, [r2], #0x1
    add r1, r1, #0x1
    cmp r1, r6
    add r3, r3, r7, lsl #0x6
    add r3, r3, r7, lsl #0x10
    sub r3, r3, r7
    and r7, r3, #0x7f
    blt @32
@34
    mov r1, r7
    mov r2, #0x4c
    ldr r0, =data_021a9b18
    mla r2, r7, r2, r0
    ldrb r2, [r2, #0x8]
    cmp r2, #0x0
    beq @37
    mov r6, #0x0
    mov r2, #0x4c
@35
    add r1, r1, #0x1
    cmp r1, #0x80
    movge r1, r6
    bge @36
    cmp r1, r7
    mvneq r1, #0x0
    beq @37
@36
    mla r3, r1, r2, r0
    ldrb r3, [r3, #0x8]
    cmp r3, #0x0
    bne @35
@37
    cmp r1, #0x0
    blt @39
    ldr r2, =data_021a9b18
    mov r0, #0x4c
    mla r6, r1, r0, r2
    mov r0, #0x1
    add r1, r6, #0x8
    swpb r0, r0, [r1]
    mov r1, r8
    add r0, r6, #0x9
    bl STD_CopyString
    mov r1, r6
    add r0, sp, #0x24
    mov r2, #0x8
    bl MI_CpuCopy8
    ldr r0, =data_021ac118
    ldr r0, [r0, #0x0]
    add r1, r0, #0x1
    ldr r0, =data_021ac118
    str r1, [r0, #0x0]
    b @39
@38
    add r1, r5, #0x1
    and r5, r1, #0xff
    cmp r5, #0xf
    blo @31
@39
    cmp r5, #0xf
    blo @41
    ldr r1, =data_021a90a4
    ldr r0, [r1, #0x38]
    cmp r4, r0
    bgt @40
    ldr r2, [r1, #0x34]
    cmp r2, #0x0
    beq @40
    mov r0, #0xa4
    mul r3, r4, r0
    ldr r0, [r1, #0x2c]
    add r0, r0, r3
    ldrb r0, [r0, #0xa0]
    cmp r0, #0x0
    subeq r0, r2, #0x1
    streq r0, [r1, #0x34]
    ldr r0, =data_021a90a4
    mov r2, #0x1
    ldr r0, [r0, #0x2c]
    add r0, r0, r3
    add r1, r0, #0xa0
    swpb r0, r2, [r1]
@40
    bl OS_Terminate
    b @81
@41
    cmp r5, #0xf
    bhs @44
    ldr r0, =0x1864
    ldr r1, =data_0206fcac
    mla r4, r5, r0, r1
    ldrh r0, [r4, #0x60]
    cmp r0, #0x0
    ldrne r0, [sp, #0x1c]
    ldrneb r0, [r0, #0x27]
    cmpne r0, #0x0
    addeq r1, r4, #0x9
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
    beq @42
    ldr r1, [r8, #0x9c]
    add r0, sp, #0x40
    ldr r3, [r1, #0x0]
    ldr r1, =data_0206dde4
    mov r2, r11
    bl sprintf
    ldr r0, [r4, #0xc]
    bl func_02004330
    mov r2, r0
    ldr r0, =data_0206e7e8
    ldr r1, =data_0206ddec
    add r3, sp, #0x40
    bl sprintf
    ldr r1, =data_0206e7e8
    mov r0, r4
    mov r2, #0x3
    bl func_02003794
    add r0, r4, #0x104
    add r1, r4, #0x154
    mov r2, #0x0
    bl func_02035ab0
    mov r0, r4
    mov r1, #0x0
    add r2, r4, #0xa0
    bl func_02003658
@42
    add r1, r4, #0xa
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r0, r4, #0x1000
    mov r2, #0x1
    str r2, [r0, #0x7c0]
    add r1, r4, #0x51
    swpb r0, r2, [r1]
    b @44
@43
    mov r1, r11
    bl STD_CopyString
@44
    ldr r0, [sp, #0x30]
    mov r2, #0x0
    ldr r6, [r0], #0x4
    str r0, [sp, #0x30]
    str r2, [r8, #0x4c]
    cmp r6, #0x0
    str r2, [r8, #0x54]
    ldrgt r0, =data_021a90a4
    str r2, [r8, #0x58]
    ldrgt r2, [r0, #0xc]
    mov r0, #0x0
    str r0, [r8, #0x54]
    cmp r2, #0x0
    beq @46
    ldr r1, [r8, #0x50]
    cmp r1, #0x0
    beq @45
    ldr r0, =data_0206e6a4
    ldr r0, [r0, #0x0]
    cmp r1, r0
    blo @45
    ldr r0, [r8, #0x5c]
    str r0, [r8, #0x58]
    ldr r0, [r8, #0x50]
    str r0, [r8, #0x4c]
    b @46
@45
    mov r0, #0x14
    mul r1, r2, r0
    str r2, [r8, #0x5c]
    ldr r0, =data_0206e6a4
    str r2, [r8, #0x58]
    bl func_01ff8000
    str r0, [r8, #0x4c]
    str r0, [r8, #0x50]
@46
    cmp r6, #0x0
    mov r7, #0x0
    ble @57
    ldr r4, =0x45800000
    mov r11, r7
    mvn r5, #0x0
@47
    ldr r9, [r8, #0x58]
    mov r2, r5
    mov r1, #0x0
    cmp r9, #0x0
    ble @49
    ldr r3, [r8, #0x4c]
@48
    ldrb r0, [r3, #0x10]
    cmp r0, #0x0
    bne @49
    add r2, r2, #0x1
    ldr r0, [r8, #0x54]
    cmp r2, r0
    beq @49
    add r3, r3, #0x14
    add r1, r1, #0x1
    cmp r1, r9
    blt @48
@49
    cmp r1, r9
    movge r9, #0x0
    bge @50
    mov r0, #0x14
    mul r2, r1, r0
    ldr r0, [r8, #0x54]
    add r0, r0, #0x1
    str r0, [r8, #0x54]
    ldr r0, [r8, #0x4c]
    add r0, r0, r2
    add r1, r0, #0x10
    swpb r0, r11, [r1]
    ldr r0, [r8, #0x4c]
    add r9, r0, r2
@50
    ldr r0, [sp, #0x30]
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r0, [r9, #0x0]
    ldr r0, [sp, #0x30]
    add r10, r0, #0x4
    str r10, [sp, #0x30]
    ldr r0, [r0, #0x4]
    bl func_02062750
    ldr r1, [r10, #0x0]
    mov r0, r4
    bls @51
    bl _fmul
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @52
@51
    bl _fmul
    mov r1, #0x3f000000
    bl _fsub
@52
    bl _ffix
    str r0, [r9, #0x4]
    ldr r10, [sp, #0x30]
    mov r1, #0x0
    ldr r0, [r10, #0x4]
    bl func_02062750
    ldr r1, [r10, #0x4]
    mov r0, r4
    bls @53
    bl _fmul
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @54
@53
    bl _fmul
    mov r1, #0x3f000000
    bl _fsub
@54
    bl _ffix
    str r0, [r9, #0x8]
    ldr r10, [sp, #0x30]
    mov r1, #0x0
    ldr r0, [r10, #0x8]
    bl func_02062750
    ldr r1, [r10, #0x8]
    mov r0, r4
    bls @55
    bl _fmul
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @56
@55
    bl _fmul
    mov r1, #0x3f000000
    bl _fsub
@56
    bl _ffix
    str r0, [r9, #0xc]
    ldr r0, [sp, #0x10]
    add r1, sp, #0x34
    str r0, [sp, #0x34]
    ldr r0, [sp, #0xc]
    str r0, [sp, #0x38]
    ldr r0, [sp, #0x8]
    str r0, [sp, #0x3c]
    add r0, r9, #0x4
    mov r2, r0
    bl VEC_Add
    ldr r0, [sp, #0x30]
    add r7, r7, #0x1
    add r0, r0, #0xc
    str r0, [sp, #0x30]
    cmp r7, r6
    blt @47
@57
    ldr r0, [sp, #0x30]
    mov r2, #0x0
    ldr r6, [r0], #0x4
    str r0, [sp, #0x30]
    str r2, [r8, #0x64]
    cmp r6, #0x0
    str r2, [r8, #0x6c]
    ldrgt r0, =data_021a90a4
    str r2, [r8, #0x70]
    ldrgt r2, [r0, #0x8]
    mov r0, #0x0
    str r0, [r8, #0x6c]
    cmp r2, #0x0
    beq @59
    ldr r1, [r8, #0x68]
    cmp r1, #0x0
    beq @58
    ldr r0, =data_0206e6a4
    ldr r0, [r0, #0x0]
    cmp r1, r0
    blo @58
    ldr r0, [r8, #0x74]
    str r0, [r8, #0x70]
    ldr r0, [r8, #0x68]
    str r0, [r8, #0x64]
    b @59
@58
    ldr r0, =data_0206e6a4
    str r2, [r8, #0x74]
    mov r1, r2, lsl #0x4
    str r2, [r8, #0x70]
    bl func_01ff8000
    str r0, [r8, #0x64]
    str r0, [r8, #0x68]
@59
    cmp r6, #0x0
    mov r7, #0x0
    ble @72
    ldr r4, =0x45800000
    mov r11, r7
    mvn r5, #0x0
@60
    ldr r9, [r8, #0x70]
    mov r2, r5
    mov r0, #0x0
    cmp r9, #0x0
    ble @62
    ldr r3, [r8, #0x64]
@61
    add r1, r3, r0, lsl #0x4
    ldrb r1, [r1, #0xc]
    cmp r1, #0x0
    bne @62
    add r2, r2, #0x1
    ldr r1, [r8, #0x6c]
    cmp r2, r1
    beq @62
    add r0, r0, #0x1
    cmp r0, r9
    blt @61
@62
    cmp r0, r9
    movge r9, #0x0
    bge @63
    ldr r1, [r8, #0x6c]
    add r1, r1, #0x1
    str r1, [r8, #0x6c]
    ldr r1, [r8, #0x64]
    add r1, r1, r0, lsl #0x4
    add r2, r1, #0xc
    swpb r1, r11, [r2]
    ldr r1, [r8, #0x64]
    add r9, r1, r0, lsl #0x4
@63
    ldr r0, [sp, #0x30]
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r0, [r9, #0x0]
    ldr r0, [sp, #0x30]
    add r10, r0, #0x4
    str r10, [sp, #0x30]
    ldr r0, [r0, #0x4]
    bl func_02062750
    ldr r1, [r10, #0x0]
    mov r0, r4
    bls @64
    bl _fmul
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @65
@64
    bl _fmul
    mov r1, #0x3f000000
    bl _fsub
@65
    bl _ffix
    strh r0, [r9, #0x4]
    ldr r10, [sp, #0x30]
    mov r1, #0x0
    ldr r0, [r10, #0x4]
    bl func_02062750
    ldr r1, [r10, #0x4]
    mov r0, r4
    bls @66
    bl _fmul
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @67
@66
    bl _fmul
    mov r1, #0x3f000000
    bl _fsub
@67
    bl _ffix
    strh r0, [r9, #0x6]
    ldr r10, [sp, #0x30]
    mov r1, #0x0
    ldr r0, [r10, #0x8]
    bl func_02062750
    ldr r1, [r10, #0x8]
    mov r0, r4
    bls @68
    bl _fmul
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @69
@68
    bl _fmul
    mov r1, #0x3f000000
    bl _fsub
@69
    bl _ffix
    strh r0, [r9, #0x8]
    ldr r10, [sp, #0x30]
    mov r1, #0x0
    ldr r0, [r10, #0xc]
    bl func_02062750
    ldr r1, [r10, #0xc]
    mov r0, r4
    bls @70
    bl _fmul
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @71
@70
    bl _fmul
    mov r1, #0x3f000000
    bl _fsub
@71
    bl _ffix
    strh r0, [r9, #0xa]
    ldr r0, [sp, #0x30]
    add r7, r7, #0x1
    add r0, r0, #0x10
    str r0, [sp, #0x30]
    cmp r7, r6
    blt @60
@72
    ldr r0, [sp, #0x30]
    mov r2, #0x0
    ldr r6, [r0], #0x4
    str r0, [sp, #0x30]
    str r2, [r8, #0x7c]
    cmp r6, #0x0
    str r2, [r8, #0x84]
    ldrgt r0, =data_021a90a4
    str r2, [r8, #0x88]
    ldrgt r2, [r0, #0x4]
    mov r0, #0x0
    str r0, [r8, #0x84]
    cmp r2, #0x0
    beq @74
    ldr r1, [r8, #0x80]
    cmp r1, #0x0
    beq @73
    ldr r0, =data_0206e6a4
    ldr r0, [r0, #0x0]
    cmp r1, r0
    blo @73
    ldr r0, [r8, #0x8c]
    str r0, [r8, #0x88]
    ldr r0, [r8, #0x80]
    str r0, [r8, #0x7c]
    b @74
@73
    mov r0, #0xc
    mul r1, r2, r0
    str r2, [r8, #0x8c]
    ldr r0, =data_0206e6a4
    str r2, [r8, #0x88]
    bl func_01ff8000
    str r0, [r8, #0x7c]
    str r0, [r8, #0x80]
@74
    cmp r6, #0x0
    beq @81
    cmp r6, #0x0
    mov r7, #0x0
    ble @81
    ldr r4, =0x45800000
    mov r11, r7
    mvn r5, #0x0
@75
    ldr r9, [r8, #0x88]
    mov r2, r5
    mov r1, #0x0
    cmp r9, #0x0
    ble @77
    ldr r3, [r8, #0x7c]
@76
    ldrb r0, [r3, #0x8]
    cmp r0, #0x0
    bne @77
    add r2, r2, #0x1
    ldr r0, [r8, #0x84]
    cmp r2, r0
    beq @77
    add r3, r3, #0xc
    add r1, r1, #0x1
    cmp r1, r9
    blt @76
@77
    cmp r1, r9
    movge r9, #0x0
    bge @78
    mov r0, #0xc
    mul r2, r1, r0
    ldr r0, [r8, #0x84]
    add r0, r0, #0x1
    str r0, [r8, #0x84]
    ldr r0, [r8, #0x7c]
    add r0, r0, r2
    add r1, r0, #0x8
    swpb r0, r11, [r1]
    ldr r0, [r8, #0x7c]
    add r9, r0, r2
@78
    ldr r0, [sp, #0x30]
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r0, [r9, #0x0]
    ldr r0, [sp, #0x30]
    add r10, r0, #0x4
    str r10, [sp, #0x30]
    ldr r0, [r0, #0x4]
    bl func_02062750
    ldr r1, [r10, #0x0]
    mov r0, r4
    bls @79
    bl _fmul
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @80
@79
    bl _fmul
    mov r1, #0x3f000000
    bl _fsub
@80
    bl _ffix
    str r0, [r9, #0x4]
    ldr r0, [sp, #0x30]
    add r7, r7, #0x1
    add r0, r0, #0x4
    str r0, [sp, #0x30]
    cmp r7, r6
    blt @75
@81
    ldr r0, [sp, #0x18]
    add r1, r0, #0x1
    ldr r0, [sp, #0x20]
    str r1, [sp, #0x18]
    cmp r1, r0
    blt @10
@82
    ldr r1, =data_0206e698
    add r0, sp, #0x2c
    bl func_02030ee0
    mov r0, #0x1
    add sp, sp, #0x284
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
