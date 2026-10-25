#include "m2c.h"

void func_02007450(void);
void func_0200a07c(void);
void func_0200a0f8(void);
void func_0200fab8(void);
void func_0200ffbc(void);
void func_02010f08(void);
void func_02010fac(void);
void func_0201153c(void);
void func_0201156c(void);
void func_0201159c(void);
void func_020115ec(void);
void func_0201168c(void);
void func_0201db7c(void);
void func_0203b96c(void);
void func_0203c24c(void);
void func_0203cd5c(void);
void func_0203d0d8(void);
void func_0203d1b8(void);
void func_0203d740(void);
void func_0203d8d8(void);
void func_0203de64(void);
void func_0203f60c(void);
void func_0203f930(void);
void func_0204221c(void);
void func_0205172c(void);
void func_0205918c(void);
void func_0205bdf4(void);
void func_02061808(void);
void func_020618ec(void);
void func_02063314(void);
extern char data_020692ec[];
extern char data_0206a994[];
extern char data_0206abb8[];
extern char data_0206ac58[];
extern char data_0206ac84[];
extern char data_0206ac90[];
extern char data_0206ac94[];
extern char data_0206ac9c[];
extern char data_0206e684[];
extern char data_0206e694[];
extern char data_0206e698[];
extern char data_0206e6d4[];
extern char data_0206ea14[];
extern char data_02086fa8[];
extern char data_02087044[];
extern char data_02087210[];
extern char data_020880c0[];
extern char data_020b8b44[];
extern char data_020b8be4[];
// clang-format off
asm void func_02010294(void) {
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x74
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x2
    cmpne r0, #0x4
    bne L_020103a8
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_020103a8
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086fa8
    ldrb r5, [r1, #0x80]
    ldrb r0, [r0, #0x7]
    cmp r0, r5
    beq L_020103a8
    mov r0, #0x37
    bl func_0204221c
    ldr r1, =data_020880c0
    mov r2, r0
    ldrb r4, [r1, #0x24]
    ldr r1, =data_0206ac84
    add r0, sp, #0x54
    mov r3, r5
    str r4, [sp, #0x0]
    bl func_0205bdf4
    ldr r1, =data_02087210
    add r0, sp, #0x54
    ldr r1, [r1, #0x0]
    bl func_0203d8d8
    ldr r1, =data_020b8b44
    mov r4, r0
    ldr r0, [r1, #0x0]
    bl func_0203cd5c
    ldr r1, =data_02087210
    add r0, sp, #0x54
    ldr r1, [r1, #0x0]
    bl func_0203d8d8
    add r0, r0, #0x5
    mov r0, r0, lsl #0x10
    rsb r1, r4, #0xfd
    mov r2, r0, lsr #0x10
    mov r0, #0x0
    and r4, r1, #0xff
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8b44
    mov r0, r4
    str r1, [sp, #0x8]
    mov r1, #0x7
    mov r3, #0x14
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r2, =data_020b8b44
    ldr r3, =data_02087210
    str r2, [sp, #0x8]
    ldr r3, [r3, #0x0]
    mov r1, r4
    add r0, sp, #0x54
    mov r2, #0xa
    bl func_0203d740
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086fa8
    ldrb r2, [r1, #0x80]
    add r1, r0, #0x7
    swpb r0, r2, [r1]
L_020103a8:
    ldr r0, =data_0206e6d4
    ldr r0, [r0, #0xc0]
    cmp r0, #0x0
    beq L_020103e4
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x2
    bne L_020103d8
    mov r0, #0x0
    mov r1, r0
    bl func_0205172c
    bl func_0200fab8
L_020103d8:
    ldr r0, =data_0206e6d4
    mov r1, #0x0
    str r1, [r0, #0xc0]
L_020103e4:
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02010440
    ldr r0, =data_02086fa8
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02010410
    cmp r0, #0x1
    beq L_02010438
    b L_0201044c
L_02010410:
    mov r0, #0x7
    bl func_02007450
    ldr r2, =data_02086fa8
    mov r0, #0x0
    add r1, r2, #0x11
    swpb r0, r0, [r1]
    ldrb r0, [r2, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r2]
    b L_0201044c
L_02010438:
    bl func_0200ffbc
    b L_0201044c
L_02010440:
    ldr r1, =data_02086fa8
    mov r0, #0x2
    swpb r0, r0, [r1]
L_0201044c:
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_02010df8
L_02010460:
    b L_02010df8
    b L_02010474
    b L_02010c6c
    b L_020106dc
    b L_0201094c
L_02010474:
    ldr r1, =data_0206e6d4
    mov r0, #0x64
    ldr r3, [r1, #0x10]
    ldr r2, =data_02086fa8
    mul r0, r3, r0
    ldrsh r4, [r1, #0x64]
    add r1, r2, #0x8
    mov r3, r0, asr #0xc
    swpb r0, r4, [r1]
    add r1, r2, #0x10
    swpb r0, r3, [r1]
    ldr r0, =data_0206e694
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldreqb r0, [r2, #0x0]
    cmpeq r0, #0x2
    bne L_020104d8
    ldr r1, =data_0206ea14
    ldr r0, =data_020880c0
    ldr r1, [r1, #0x0]
    ldrsh r0, [r0, #0xa]
    ldr r1, [r1, #0x4]
    ldr r1, [r1, #0x30]
    sub r0, r1, r0
    bl func_0201db7c
L_020104d8:
    ldr r1, =data_02086fa8
    ldrb r0, [r1, #0x8]
    cmp r0, #0xf
    bhs L_02010514
    mov r2, #0x1
    str r2, [r1, #0x24]
    str r2, [r1, #0x2c]
    ldrb r0, [r1, #0xc]
    cmp r2, r0
    beq L_02010540
    mov r0, #0x0
    bl func_0203f930
    mov r0, #0x8
    bl func_0203f60c
    b L_02010540
L_02010514:
    mov r0, #0x0
    str r0, [r1, #0x24]
    str r0, [r1, #0x2c]
    ldrb r1, [r1, #0xc]
    cmp r0, r1
    beq L_02010540
    bl func_0203f930
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x18]
    bl func_0200a07c
    bl func_0203f60c
L_02010540:
    ldr r2, =data_02086fa8
    ldr r0, [r2, #0x24]
    add r1, r2, #0xc
    swpb r0, r0, [r1]
    ldrb r0, [r2, #0x0]
    cmp r0, #0x2
    bne L_0201058c
    ldrb r0, [r2, #0x2]
    add r1, r2, #0x2
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrb r0, [r2, #0x2]
    cmp r0, #0x2
    bls L_0201058c
    bl func_02010f08
    ldr r0, =data_02086fa8
    mov r2, #0x0
    add r1, r0, #0x2
    swpb r0, r2, [r1]
L_0201058c:
    mov r0, #0x0
    bl func_0203b96c
    mov r0, #0x1
    bl func_0201153c
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086fa8
    ldrh r2, [r1, #0x4]
    ldrsh r0, [r0, #0x12]
    cmp r0, r2
    beq L_020105f8
    ldr r1, =data_0206ac90
    add r0, sp, #0x54
    bl func_0205bdf4
    mov r0, #0x32
    mov r1, #0x2
    bl func_0201168c
    mov r4, #0x32
    add r0, sp, #0x54
    mov r1, #0x2d
    mov r2, #0x2
    mov r3, #0x28
    str r4, [sp, #0x0]
    bl func_020115ec
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086fa8
    ldrh r1, [r1, #0x4]
    strh r1, [r0, #0x12]
L_020105f8:
    ldr r4, =data_02086fa8
    ldrb r0, [r4, #0x0]
    cmp r0, #0x2
    addne sp, sp, #0x74
    ldmneia sp!, {r4, r5, pc}
    ldr r3, =data_0206a994
    add r1, r4, #0x6
    ldrsb r0, [r3, #0x1]
    cmp r0, #0x0
    ldrsb r0, [r4, #0x6]
    beq L_02010648
    add r0, r0, #0x4
    swpb r0, r0, [r1]
    ldrsb r0, [r4, #0x6]
    cmp r0, #0x7
    blt L_02010668
    add r1, r3, #0x1
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_02010668
L_02010648:
    sub r0, r0, #0x4
    swpb r0, r0, [r1]
    mvn r2, #0x6
    ldrsb r0, [r4, #0x6]
    cmp r0, r2
    addle r1, r3, #0x1
    movle r0, #0x1
    swpleb r0, r0, [r1]
L_02010668:
    ldr r3, =data_02086fa8
    ldrsb r0, [r3, #0xf]
    add r1, r3, #0xe
    cmp r0, #0x0
    ldrsb r0, [r3, #0xe]
    beq L_020106ac
    add r0, r0, #0x3
    swpb r0, r0, [r1]
    ldrsb r0, [r3, #0xe]
    cmp r0, #0x3
    addlt sp, sp, #0x74
    ldmltia sp!, {r4, r5, pc}
    add r1, r3, #0xf
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x74
    ldmia sp!, {r4, r5, pc}
L_020106ac:
    sub r0, r0, #0x3
    swpb r0, r0, [r1]
    mvn r2, #0x2
    ldrsb r0, [r3, #0xe]
    cmp r0, r2
    addgt sp, sp, #0x74
    ldmgtia sp!, {r4, r5, pc}
    add r1, r3, #0xf
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x74
    ldmia sp!, {r4, r5, pc}
L_020106dc:
    mov r0, #0x0
    bl func_0203b96c
    mov r0, #0x1
    bl func_0201153c
    mov r0, #0x1
    bl func_0201156c
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086fa8
    ldrh r2, [r1, #0x4]
    ldrsh r0, [r0, #0x12]
    cmp r0, r2
    beq L_02010750
    ldr r1, =data_0206ac90
    add r0, sp, #0x54
    bl func_0205bdf4
    mov r0, #0x32
    mov r1, #0x2
    bl func_0201168c
    mov r4, #0x32
    add r0, sp, #0x54
    mov r1, #0x2d
    mov r2, #0x2
    mov r3, #0x28
    str r4, [sp, #0x0]
    bl func_020115ec
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086fa8
    ldrh r1, [r1, #0x4]
    strh r1, [r0, #0x12]
L_02010750:
    ldr r1, =data_02086fa8
    ldr r0, =data_0206e6d4
    ldrh r1, [r1, #0x16]
    ldrh r0, [r0, #0x6a]
    cmp r1, r0
    beq L_02010810
    mov r0, #0x4f
    bl func_0204221c
    ldr r1, =data_0206e6d4
    mov r2, r0
    ldrh r3, [r1, #0x6a]
    ldr r1, =data_0206ac94
    add r0, sp, #0x54
    bl func_0205bdf4
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cd5c
    ldr r1, =data_02087210
    add r0, sp, #0x54
    ldr r1, [r1, #0x0]
    bl func_0203d8d8
    add r0, r0, #0x5
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8b44
    mov r0, #0xa
    str r1, [sp, #0x8]
    mov r1, #0xa2
    mov r3, #0x14
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8b44
    ldr r3, =data_02087210
    str r1, [sp, #0x8]
    ldr r3, [r3, #0x0]
    add r0, sp, #0x54
    mov r1, #0xa
    mov r2, #0xa5
    bl func_0203d740
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086fa8
    ldrh r1, [r1, #0x6a]
    strh r1, [r0, #0x16]
L_02010810:
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086fa8
    ldrb r2, [r1, #0x71]
    ldrh r0, [r0, #0x14]
    cmp r0, r2
    beq L_0201086c
    ldr r1, =data_0206ac90
    add r0, sp, #0x54
    bl func_0205bdf4
    mov r0, #0xa
    mov r1, #0x2
    bl func_0201168c
    mov r4, #0xa
    add r0, sp, #0x54
    mov r1, #0xe1
    mov r2, #0x4
    mov r3, #0x28
    str r4, [sp, #0x0]
    bl func_020115ec
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086fa8
    ldrb r1, [r1, #0x71]
    strh r1, [r0, #0x14]
L_0201086c:
    ldr r1, =data_02086fa8
    ldr r0, =data_0206e6d4
    ldrb r1, [r1, #0xb]
    ldrb r0, [r0, #0x8]
    cmp r1, r0
    addeq sp, sp, #0x74
    ldmeqia sp!, {r4, r5, pc}
    mov r0, #0x1
    bl func_0203b96c
    mov r0, #0x0
    mov r1, #0x2
    mov r2, #0x19
    bl func_0203c24c
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x8]
    cmp r0, #0x2
    mov r0, #0x1
    blo L_020108c4
    mov r1, #0x23
    mov r2, #0x19
    bl func_0203c24c
    b L_020108d0
L_020108c4:
    mov r1, #0x100
    mov r2, #0x0
    bl func_0203c24c
L_020108d0:
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x8]
    cmp r0, #0x4
    mov r0, #0x2
    blo L_020108f4
    mov r1, #0x44
    mov r2, #0x19
    bl func_0203c24c
    b L_02010900
L_020108f4:
    mov r1, #0x100
    mov r2, #0x0
    bl func_0203c24c
L_02010900:
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x8]
    cmp r0, #0x6
    mov r0, #0x3
    blo L_02010924
    mov r1, #0x65
    mov r2, #0x19
    bl func_0203c24c
    b L_02010930
L_02010924:
    mov r1, #0x100
    mov r2, #0x0
    bl func_0203c24c
L_02010930:
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086fa8
    ldrb r2, [r1, #0x8]
    add r1, r0, #0xb
    add sp, sp, #0x74
    swpb r0, r2, [r1]
    ldmia sp!, {r4, r5, pc}
L_0201094c:
    mov r0, #0x0
    bl func_0203b96c
    mov r0, #0x1
    bl func_0201159c
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086fa8
    ldrh r2, [r1, #0x7c]
    ldrsh r0, [r0, #0x12]
    cmp r0, r2
    beq L_020109b8
    ldr r1, =data_0206ac90
    add r0, sp, #0x54
    bl func_0205bdf4
    mov r0, #0x20
    mov r1, #0x5
    bl func_0201168c
    mov r4, #0x20
    add r0, sp, #0x54
    mov r1, #0x2d
    mov r2, #0x2
    mov r3, #0x16
    str r4, [sp, #0x0]
    bl func_020115ec
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086fa8
    ldrh r1, [r1, #0x7c]
    strh r1, [r0, #0x12]
L_020109b8:
    ldr r2, =data_02086fa8
    ldrb r0, [r2, #0x3]
    cmp r0, #0x0
    beq L_020109dc
    cmp r0, #0x1
    beq L_02010a20
    cmp r0, #0x2
    beq L_02010a7c
    b L_02010abc
L_020109dc:
    ldr r0, =data_0206e6d4
    ldrsh r0, [r0, #0x88]
    cmp r0, #0xa
    bgt L_02010abc
    ldr r0, =data_0206e684
    add r1, r2, #0x3
    ldr r0, [r0, #0x0]
    mov r2, #0x1
    cmp r0, #0x0
    swpb r0, r2, [r1]
    beq L_02010a14
    mov r0, #0x15
    bl func_0200a0f8
    b L_02010abc
L_02010a14:
    mov r0, #0x14
    bl func_0200a0f8
    b L_02010abc
L_02010a20:
    ldrb r0, [r2, #0x2]
    add r1, r2, #0x2
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrb r0, [r2, #0x2]
    cmp r0, #0x2
    bls L_02010a50
    bl func_02010fac
    ldr r0, =data_02086fa8
    mov r2, #0x0
    add r1, r0, #0x2
    swpb r0, r2, [r1]
L_02010a50:
    ldr r0, =data_0206e6d4
    ldrsh r0, [r0, #0x88]
    cmp r0, #0xa
    ble L_02010abc
    ldr r0, =data_02086fa8
    mov r1, #0x2
    add r2, r0, #0x3
    mov r0, #0x16
    swpb r1, r1, [r2]
    bl func_0200a0f8
    b L_02010abc
L_02010a7c:
    ldrb r0, [r2, #0x9]
    cmp r0, #0x0
    beq L_02010a8c
    bl func_02010fac
L_02010a8c:
    ldr r0, =data_02086fa8
    ldrb r0, [r0, #0x9]
    cmp r0, #0x0
    beq L_02010aac
    ldr r0, =data_0206e6d4
    ldrsh r0, [r0, #0x88]
    cmp r0, #0xa
    bgt L_02010abc
L_02010aac:
    ldr r0, =data_02086fa8
    mov r2, #0x0
    add r1, r0, #0x3
    swpb r0, r2, [r1]
L_02010abc:
    mov r0, #0x1
    bl func_0203b96c
    mov r0, #0x1
    bl func_0203de64
    ldr r0, =data_02086fa8
    ldrb r2, [r0, #0xd]
    add r1, r0, #0xd
    add r0, r2, #0x1
    cmp r2, #0x4
    addls sp, sp, #0x74
    swpb r0, r0, [r1]
    ldmlsia sp!, {r4, r5, pc}
    ldr r1, =data_0206e6d4
    mov r0, #0x94
    ldrh r1, [r1, #0x88]
    mul r0, r1, r0
    bl func_020618ec
    ldr r3, =0x40590000
    mov r2, #0x0
    bl func_02063314
    bl func_02061808
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    add r4, r0, #0x36
    mov r0, r4, lsl #0x8
    and r0, r0, #0xff00
    orr r0, r0, #0xd9
    mov r0, r0, lsl #0x10
    mov r3, r0, lsr #0x10
    ldr r2, =0x4001040
    ldr r0, =0x3555
    strh r3, [r2, #0x0]
    strh r0, [r2, #0x4]
    ldr r1, =0x6a8a
    strh r3, [r2, #0x2]
    strh r1, [r2, #0x6]
    ldr r0, =data_0206a994
    ldr r1, =data_0206abb8
    ldrb r2, [r0, #0x2]
    add r0, sp, #0x34
    bl func_0205bdf4
    ldr r0, =data_0206a994
    mov r1, #0x0
    ldrb r0, [r0, #0x3]
    mov r2, #0xc0
    sub r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_0203c24c
    ldr r0, =data_0206a994
    mov r1, #0x0
    ldrb r0, [r0, #0x3]
    mov r2, #0xc0
    add r0, r0, #0x5
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_0206a994
    mov r0, r4, lsl #0x10
    ldrb r3, [r1, #0x2]
    mov r1, r0, lsr #0x10
    mov r2, #0x35
    sub r0, r3, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_0203c24c
    mov r0, r4, lsl #0x10
    mov r1, r0, lsr #0x10
    ldr r0, =data_0206a994
    mov r2, #0x6a
    ldrb r0, [r0, #0x2]
    add r0, r0, #0x5
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_0203c24c
    ldr r2, =data_0206a994
    mov r4, #0x0
    ldrb r3, [r2, #0x2]
    add r1, r2, #0x3
    swpb r0, r3, [r1]
    add r1, r2, #0x2
    ldr r0, [r2, #0x8]
    ldr r2, =data_0206a994
    cmp r0, #0x0
    addne r0, r3, #0x1
    subeq r0, r3, #0x1
    swpb r0, r0, [r1]
    ldr r0, =data_02086fa8
    ldrb r3, [r2, #0x2]
    add r1, r0, #0xd
    swpb r0, r4, [r1]
    cmp r3, #0x7
    bne L_02010c40
    add r1, r2, #0x2
    mov r0, #0x6
    swpb r0, r0, [r1]
    str r4, [r2, #0x8]
L_02010c40:
    ldr r2, =data_0206a994
    ldrb r0, [r2, #0x2]
    cmp r0, #0x0
    addne sp, sp, #0x74
    ldmneia sp!, {r4, r5, pc}
    add r1, r2, #0x2
    mov r3, #0x1
    swpb r0, r3, [r1]
    add sp, sp, #0x74
    str r3, [r2, #0x8]
    ldmia sp!, {r4, r5, pc}
L_02010c6c:
    ldr r1, =data_0206ac58
    add r0, sp, #0x10
    bl func_0205918c
    ldr r0, =data_02086fa8
    ldrb r2, [r0, #0x1]
    add r1, r0, #0x1
    add r0, r2, #0x1
    cmp r2, #0x2
    swpb r0, r0, [r1]
    bls L_02010d18
    ldr r0, =data_0206a994
    ldr r1, =data_0206ac9c
    ldrb r3, [r0, #0x0]
    add r2, sp, #0x10
    cmp r3, #0x9
    movhi r0, #0x0
    strhib r0, [sp, #0x10]
    add r0, sp, #0x14
    bl func_0205bdf4
    mov r0, #0x1
    str r0, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    ldr r4, =data_020b8be4
    ldr r1, =data_0206e698
    add r0, sp, #0x14
    mov r2, #0x70
    mov r3, #0x27
    str r4, [sp, #0xc]
    bl func_0203d1b8
    ldr r2, =data_0206a994
    ldr r0, =data_02086fa8
    ldrb r4, [r2, #0x0]
    add r1, r0, #0x1
    mov r3, #0x0
    add r0, r4, #0x1
    swpb r0, r0, [r2]
    swpb r0, r3, [r1]
    ldrb r0, [r2, #0x0]
    cmp r0, #0x16
    moveq r0, #0x1
    swpeqb r0, r0, [r2]
L_02010d18:
    ldr r1, =data_02086fa8
    ldrb r0, [r1, #0x0]
    cmp r0, #0x2
    addne sp, sp, #0x74
    ldmneia sp!, {r4, r5, pc}
    ldr r0, =data_02087044
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x74
    ldmeqia sp!, {r4, r5, pc}
    ldr r0, [r1, #0x48]
    ldr r2, [r1, #0x44]
    cmp r0, #0x0
    cmpeq r2, #0x0
    mov r2, #0x0
    bne L_02010db4
    ldrb r3, [r1, #0x5]
    add r1, r1, #0x5
    add r0, r3, #0x1
    swpb r0, r0, [r1]
    cmp r3, #0x2
    addne sp, sp, #0x74
    ldmneia sp!, {r4, r5, pc}
    str r2, [sp, #0x0]
    str r2, [sp, #0x4]
    ldr r4, =data_020b8be4
    mov r0, #0x62
    mov r1, #0x79
    mov r2, #0x4f
    mov r3, #0x14
    str r4, [sp, #0x8]
    bl func_0203d0d8
    ldr r0, =data_02086fa8
    mov r2, #0x0
    add r1, r0, #0x5
    swpb r0, r2, [r1]
    bl func_0200fab8
    add sp, sp, #0x74
    ldmia sp!, {r4, r5, pc}
L_02010db4:
    ldrb r0, [r1, #0x5]
    cmp r0, #0xff
    addeq sp, sp, #0x74
    ldmeqia sp!, {r4, r5, pc}
    add r1, r1, #0x5
    mov r0, #0xff
    swpb r0, r0, [r1]
    ldr r4, =data_020b8be4
    str r2, [sp, #0x0]
    str r2, [sp, #0x4]
    mov r0, #0x62
    mov r1, #0x79
    mov r2, #0x4f
    mov r3, #0x14
    str r4, [sp, #0x8]
    bl func_0203d0d8
    bl func_0200fab8
L_02010df8:
    add sp, sp, #0x74
    ldmia sp!, {r4, r5, pc}
}
// clang-format on
