#include "m2c.h"

extern char data_020692ec[];
extern char data_0206de28[];
extern char data_0206de2c[];
extern char data_0206de34[];
extern char data_0206de3c[];
extern char data_0206de44[];
extern char data_0206e684[];
extern char data_0206e6d4[];
extern char data_0206e9e8[];
extern char data_0206ea14[];
extern char data_02086b08[];
extern char data_020881b8[];
extern char data_021a90a4[];
extern char data_021a910c[];
extern char data_021a9110[];
extern char data_021a915c[];
void func_02001654(void);
void func_02001694(void);
void func_020132f0(void);
void func_02014cf0(void);
void func_02014e34(void);
void func_02015194(void);
void func_020296ec(void);
void OS_Terminate(void);
void STD_SearchString(void);
void STD_CompareString(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02044df4(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r4, r0
    ldr r1, [r4, #0x4]
    ldr r0, [r1, #0x4]
    cmp r0, #0x0
    beq L_02044e18
    cmp r0, #0x2
    beq L_02044e44
    b L_02045030
L_02044e18:
    ldr r5, [r1, #0x0]
    add r0, r5, #0x1000
    ldr r1, [r0, #0x790]
    cmp r1, #0x0
    beq L_02044e34
    mov r0, r5
    bl func_020296ec
L_02044e34:
    add r1, r5, #0x8
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_02045034
L_02044e44:
    ldr r0, [r4, #0x0]
    ldr r0, [r0, #0x9c]
    ldr r5, [r0, #0x0]
    bl func_02001694
    cmp r0, #0x6
    bne L_02044e70
    ldr r1, =data_0206de28
    add r0, r4, #0x2c
    bl STD_SearchString
    cmp r0, #0x0
    beq L_02044e8c
L_02044e70:
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldrne r0, =data_0206e6d4
    ldrneb r0, [r0, #0xa8]
    cmpne r0, #0x0
    beq L_02044fe4
L_02044e8c:
    ldr r2, =data_0206ea14
    ldr r1, [r2, #0x0]
    cmp r1, #0x0
    ldrneb r0, [r5, #0x29]
    cmpne r0, #0x0
    beq L_02044ee8
    add r1, r1, #0x9
    mov r6, #0x1
    swpb r0, r6, [r1]
    mov r3, #0x0
    ldr r0, [r2, #0x0]
    add r1, r0, #0xa
    swpb r0, r6, [r1]
    ldr r0, [r2, #0x0]
    add r0, r0, #0x1000
    str r3, [r0, #0x7c0]
    ldr r1, [r2, #0x0]
    ldr r0, [r1, #0x104]
    add r1, r1, #0x100
    add r0, r0, #0x1000
    ldr r0, [r0, #0xe90]
    sub r0, r0, #0x1
    strh r0, [r1, #0x18]
L_02044ee8:
    ldr r1, =data_0206de2c
    add r0, r4, #0x2c
    bl STD_CompareString
    cmp r0, #0x0
    beq L_02044f10
    ldr r1, =data_0206de34
    add r0, r4, #0x2c
    bl STD_CompareString
    cmp r0, #0x0
    bne L_02044f1c
L_02044f10:
    ldr r1, =data_020881b8+0x1
    mov r0, #0x1
    swpb r0, r0, [r1]
L_02044f1c:
    ldr r0, =data_02086b08
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    ldrne r0, =data_0206ea14
    ldrne r0, [r0, #0x0]
    cmpne r0, #0x0
    ldrne r0, =data_020692ec
    ldrne r0, [r0, #0x0]
    cmpne r0, #0x0
    beq L_02044fcc
    mov r0, #0xb
    bl func_02014cf0
    mov r6, r0
    mov r0, #0xb
    str r0, [r6, #0x0]
    ldrb r0, [r5, #0x24]
    add r1, r6, #0x40
    swpb r0, r0, [r1]
    ldr r0, [r5, #0x20]
    str r0, [r6, #0x48]
    ldr r0, [r5, #0x20]
    cmp r0, #0x0
    bge L_02044fa4
    ldr r1, =data_0206ea14
    ldr r0, =data_0206e6d4
    ldr r2, [r1, #0x0]
    ldr r1, [r0, #0xd0]
    ldr r0, [r2, #0x4]
    ldr r2, [r0, #0x28]
    add r0, r2, #0x99
    add r0, r0, #0x100
    cmp r0, r1
    strlt r0, [r6, #0x48]
    strge r2, [r6, #0x48]
L_02044fa4:
    ldrb r1, [r6, #0x4c]
    mov r0, r6
    add r2, r6, #0x4c
    bic r1, r1, #0x1
    orr r1, r1, #0x1
    swpb r1, r1, [r2]
    bl func_02014e34
    mov r0, r6
    bl func_020132f0
    bl func_02015194
L_02044fcc:
    ldrb r0, [r5, #0x29]
    cmp r0, #0x0
    beq L_02044fe4
    ldr r0, =data_0206e9e8+0x2
    ldrb r0, [r0, #0x0]
    bl func_02001654
L_02044fe4:
    ldr r1, =data_0206de3c
    add r0, r4, #0x2c
    bl STD_CompareString
    cmp r0, #0x0
    beq L_0204500c
    ldr r1, =data_0206de44
    add r0, r4, #0x2c
    bl STD_CompareString
    cmp r0, #0x0
    bne L_02045034
L_0204500c:
    ldr r0, =data_0206ea14
    ldr r3, [r5, #0x20]
    ldr r0, [r0, #0x0]
    ldr r1, =data_02086b08
    ldr r2, [r0, #0x4]
    mov r0, #0x0
    str r3, [r2, #0x28]
    swpb r0, r0, [r1]
    b L_02045034
L_02045030:
    bl OS_Terminate
L_02045034:
    ldr r1, [r4, #0x0]
    mov r0, #0x0
    str r0, [r1, #0x54]
    str r0, [r1, #0x58]
    ldr r1, [r4, #0x0]
    ldr r3, =data_021a90a4
    str r0, [r1, #0x6c]
    str r0, [r1, #0x70]
    ldr r2, [r4, #0x0]
    sub r1, r0, #0x1
    str r0, [r2, #0x84]
    str r0, [r2, #0x88]
    ldr r2, [r3, #0x34]
    ldr lr, [r4, #0x0]
    cmp r2, #0x0
    ble L_02045134
    ldr r5, [r3, #0x2c]
    mov ip, #0xa4
    ldr r3, [r3, #0x38]
    mov r7, r0
    mov r9, r0
    mov r6, ip
L_0204508c:
    cmp r2, #0x0
    moveq r8, r9
    beq L_020450cc
    add r1, r1, #0x1
    cmp r1, r3
    bge L_020450c8
    mla r10, r1, ip, r5
L_020450a8:
    ldrb r8, [r10, #0xa0]
    cmp r8, #0x0
    mlaeq r8, r1, r6, r5
    beq L_020450cc
    add r1, r1, #0x1
    cmp r1, r3
    add r10, r10, #0xa4
    blt L_020450a8
L_020450c8:
    mov r8, r7
L_020450cc:
    cmp r8, lr
    bne L_02045128
    cmp r1, r3
    bgt L_02045134
    cmp r2, #0x0
    beq L_02045134
    mov r0, #0xa4
    mul r3, r1, r0
    add r0, r5, r3
    ldrb r0, [r0, #0xa0]
    cmp r0, #0x0
    bne L_0204510c
    ldr r0, =data_021a90a4
    ldr r1, [r0, #0x34]
    sub r1, r1, #0x1
    str r1, [r0, #0x34]
L_0204510c:
    ldr r0, =data_021a90a4
    mov r2, #0x1
    ldr r0, [r0, #0x2c]
    add r0, r0, r3
    add r1, r0, #0xa0
    swpb r0, r2, [r1]
    b L_02045134
L_02045128:
    add r0, r0, #0x1
    cmp r0, r2
    blt L_0204508c
L_02045134:
    ldr r3, =data_021a90a4
    mvn r1, #0x0
    ldr r2, [r3, #0xa6c]
    mov r0, #0x0
    cmp r2, #0x0
    ble L_02045204
    mov r6, #0x50
    ldr r3, [r3, #0xa70]
    ldr r8, =data_021a910c
    ldr lr, =data_021a9110
    mov ip, r0
    mov r9, r0
    mov r5, r6
L_02045168:
    cmp r2, #0x0
    moveq r7, r9
    beq L_020451a8
    add r1, r1, #0x1
    cmp r1, r3
    bge L_020451a4
    mla r10, r1, r6, r8
L_02045184:
    ldrb r7, [r10, #0x50]
    cmp r7, #0x0
    mlaeq r7, r1, r5, lr
    beq L_020451a8
    add r1, r1, #0x1
    cmp r1, r3
    add r10, r10, #0x50
    blt L_02045184
L_020451a4:
    mov r7, ip
L_020451a8:
    cmp r7, r4
    bne L_020451f8
    cmp r1, r3
    bgt L_02045204
    cmp r2, #0x0
    beq L_02045204
    mov r0, #0x50
    mul r2, r1, r0
    ldr r1, =data_021a915c
    ldrb r0, [r1, r2]
    add r2, r1, r2
    cmp r0, #0x0
    bne L_020451ec
    ldr r0, =data_021a90a4
    ldr r1, [r0, #0xa6c]
    sub r1, r1, #0x1
    str r1, [r0, #0xa6c]
L_020451ec:
    mov r0, #0x1
    swpb r0, r0, [r2]
    b L_02045204
L_020451f8:
    add r0, r0, #0x1
    cmp r0, r2
    blt L_02045168
L_02045204:
    ldr r0, =data_021a90a4
    ldr r0, [r0, #0xa6c]
    cmp r0, #0x0
    bgt L_02045238
    ldr r0, =data_02086b08
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02045238
    ldr r1, =data_0206de28
    add r0, r4, #0x2c
    bl STD_SearchString
    cmp r0, #0x0
    beq L_02045254
L_02045238:
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldrne r0, =data_0206e6d4
    ldrneb r0, [r0, #0xa8]
    cmpne r0, #0x0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_02045254:
    ldr r1, =data_02086b08
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
