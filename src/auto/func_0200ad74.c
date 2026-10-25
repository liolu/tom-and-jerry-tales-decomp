#include "m2c.h"

extern char data_020692e0[];
extern char data_020692ec[];
extern char data_0206a438[];
extern char data_0206a460[];
extern char data_0206e66c[];
extern char data_0206e670[];
extern char data_0206e684[];
extern char data_0206e694[];
extern char data_0206e6d4[];
extern char data_0206ea14[];
extern char data_0206fcac[];
extern char data_02086b08[];
extern char data_02086b14[];
extern char data_02086d08[];
extern char data_02086fa8[];
extern char data_02087044[];
void func_020035b4(void);
void func_02003794(void);
void func_02003e84(void);
void func_02005fe4(void);
void func_02006178(void);
void func_020064b0(void);
void func_02006678(void);
void func_0200694c(void);
void func_02006a04(void);
void func_02006b08(void);
void func_02006d30(void);
void func_020072c4(void);
void func_02007338(void);
void func_02007450(void);
void func_02007470(void);
void func_02007690(void);
void func_02008800(void);
void func_020092e0(void);
void func_0200a0f8(void);
void func_0201490c(void);
void func_02014cf0(void);
void func_02014e34(void);
void func_0201dc08(void);
void func_020222b8(void);
void func_02036340(void);
void func_0203f948(void);
void func_0204b918(void);
void func_0204b94c(void);
void func_02051f18(void);
void func_02062f0c(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0200ad74(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x18
    ldr r0, =data_0206ea14
    ldr r4, =data_0206e66c
    ldr r3, =data_0206e670
    ldr r0, [r0, #0x0]
    ldr r2, =data_02086d08
    add r1, r0, #0x1000
    ldr r6, [r2, #0xc]
    ldr r5, [r1, #0x83c]
    add r6, r6, #0x1
    ldrb r1, [r4, #0x0]
    ldrb r3, [r3, #0x0]
    str r6, [r2, #0xc]
    cmp r5, #0x5
    sub r2, r1, r3
    and r5, r2, #0xff
    beq @L0200ade4
    ldr r2, =data_0206e6d4
    ldrb r3, [r2, #0xd4]
    cmp r3, #0x0
    addeq r3, r2, #0xd5
    moveq r2, #0x0
    swpeqb r2, r2, [r3]
    beq @L0200ade4
    sub r4, r3, #0x1
    add r3, r2, #0xd4
    swpb r2, r4, [r3]
@L0200ade4:
    cmp r5, #0x4
    bhs @L0200ae10
    bl func_02007338
    ldr r1, =data_0206e66c
    ldr r0, =data_02086d08
    ldrb r3, [r1, #0x0]
    mov r2, #0x0
    str r2, [r0, #0x14]
    add r0, r3, #0x1
    swpb r0, r0, [r1]
    b @L0200ae20
@L0200ae10:
    ldr r0, =data_02086d08
    ldr r1, [r0, #0x14]
    add r1, r1, #0x1
    str r1, [r0, #0x14]
@L0200ae20:
    ldr r0, =data_0206e670
    ldrb r0, [r0, #0x0]
    bl func_020072c4
    cmp r0, #0x0
    beq @L0200b064
    ldr r0, =data_02086d08
    ldr r5, =data_0206fcac
    ldr r1, [r0, #0x8]
    ldr r6, =data_0206e670
    add r1, r1, #0x1
    mov r4, #0x0
    str r1, [r0, #0x8]
@L0200ae50:
    ldrb r0, [r5, #0x8]
    cmp r0, #0x0
    beq @L0200ae68
    ldrb r1, [r6, #0x0]
    mov r0, r5
    bl func_02006d30
@L0200ae68:
    add r0, r5, #0x64
    add r4, r4, #0x1
    cmp r4, #0xf
    add r5, r0, #0x1800
    blt @L0200ae50
    ldr r4, =data_0206fcac
    mov r5, #0x0
@L0200ae84:
    ldrb r0, [r4, #0x8]
    cmp r0, #0x0
    beq @L0200ae98
    mov r0, r4
    bl func_02008800
@L0200ae98:
    add r0, r4, #0x64
    add r5, r5, #0x1
    cmp r5, #0xf
    add r4, r0, #0x1800
    blt @L0200ae84
    bl func_02007470
    cmp r0, #0x7
    beq @L0200aebc
    bl func_02005fe4
@L0200aebc:
    ldr r5, =data_0206fcac
    mov r4, #0x0
@L0200aec4:
    ldrb r0, [r5, #0x8]
    cmp r0, #0x0
    beq @L0200b028
    mov r0, r5
    bl func_020035b4
    add r1, sp, #0x0
    add r0, r5, #0xc4
    mov r2, #0xc
    bl func_02051f18
    add r0, r5, #0xa0
    add r3, r5, #0xdc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [r5, #0x64]
    bic r0, r0, #0x8
    str r0, [r5, #0x64]
    ldrb r0, [r5, #0x8]
    cmp r0, #0x0
    beq @L0200b014
    ldr r0, =data_02086b08
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    bne @L0200b014
    ldr r8, =data_0206fcac
    mov r7, #0x0
    add r6, sp, #0x0
@L0200af2c:
    ldrb r0, [r8, #0x8]
    cmp r0, #0x0
    cmpne r7, r4
    beq @L0200af4c
    mov r0, r6
    mov r1, r5
    mov r2, r7
    bl func_020064b0
@L0200af4c:
    add r0, r8, #0x64
    add r7, r7, #0x1
    cmp r7, #0xf
    add r8, r0, #0x1800
    blt @L0200af2c
    ldr r2, [r5, #0x58]
    add r0, sp, #0x0
    mov r1, r5
    bl func_02006678
    ldr r2, [r5, #0x58]
    add r0, sp, #0x0
    mov r1, r5
    bl func_02006178
    ldr r1, [sp, #0x0]
    ldr r0, [r5, #0xc4]
    cmp r1, r0
    ldreq r1, [sp, #0x4]
    ldreq r0, [r5, #0xc8]
    cmpeq r1, r0
    ldreq r1, [sp, #0x8]
    ldreq r0, [r5, #0xcc]
    cmpeq r1, r0
    beq @L0200b014
    add r0, sp, #0x0
    add r2, sp, #0xc
    add r1, r5, #0xc4
    bl func_0204b94c
    ldr r0, [sp, #0xc]
    cmp r0, #0x0
    ldreq r0, [sp, #0x14]
    cmpeq r0, #0x0
    addne r1, r5, #0xe8
    movne r0, #0x0
    swpneb r0, r0, [r1]
    bne @L0200afe4
    add r1, r5, #0xe8
    mov r0, #0x1
    swpb r0, r0, [r1]
@L0200afe4:
    add r0, r5, #0xac
    add r1, sp, #0xc
    mov r2, r0
    bl func_0204b918
    add r0, r5, #0xa0
    add r1, sp, #0xc
    mov r2, r0
    bl func_0204b918
    add r0, sp, #0x0
    add r3, r5, #0xc4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
@L0200b014:
    ldr r0, [r5, #0x64]
    mov r0, r0, lsl #0x1c
    movs r0, r0, asr #0x1f
    movne r0, #0x0
    strne r0, [r5, #0xf0]
@L0200b028:
    add r0, r5, #0x64
    add r4, r4, #0x1
    cmp r4, #0xf
    add r5, r0, #0x1800
    blt @L0200aec4
    bl func_02003e84
    ldr r1, =data_0206e670
    ldrb r0, [r1, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    bl func_020092e0
    ldr r0, =data_02086d08
    mov r1, #0x0
    str r1, [r0, #0x10]
    b @L0200b074
@L0200b064:
    ldr r0, =data_02086d08
    ldr r1, [r0, #0x10]
    add r1, r1, #0x1
    str r1, [r0, #0x10]
@L0200b074:
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    beq @L0200b094
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq @L0200b13c
@L0200b094:
    ldr r0, =data_0206e694
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq @L0200b0b4
    ldr r0, =data_0206e6d4
    ldrsh r1, [r0, #0xa]
    add r1, r1, #0x1
    strh r1, [r0, #0xa]
@L0200b0b4:
    ldr r0, =data_0206e6d4
    ldrsh r2, [r0, #0xc]
    ldrsh r1, [r0, #0xa]
    cmp r1, r2
    strgth r2, [r0, #0xa]
    bgt @L0200b120
    cmp r1, #0x0
    bgt @L0200b120
    mov r0, #0x5
    bl func_02014cf0
    mov r4, r0
    mov r1, r4
    mov r0, #0x5
    bl func_0201490c
    add r1, r4, #0x41
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0x40
    swpb r0, r2, [r1]
    add r2, r4, #0x42
    mov r1, #0x16
    mov r0, r4
    swpb r1, r1, [r2]
    bl func_02014e34
    ldr r0, =data_0206e6d4
    mov r1, #0x0
    strh r1, [r0, #0xa]
@L0200b120:
    ldr r0, =data_0206e6d4
    ldrsh r2, [r0, #0xa]
    ldrsh r1, [r0, #0xc]
    mov r0, r2, lsl #0xc
    bl func_02062f0c
    ldr r1, =data_0206e6d4
    str r0, [r1, #0x10]
@L0200b13c:
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne @L0200b1cc
    ldr r0, =data_020692e0
    mvn r1, #0x0
    ldr r0, [r0, #0x0]
    cmp r0, r1
    beq @L0200b1f0
    cmp r0, #0x2
    bne @L0200b1b8
    ldr r1, =data_0206ea14
    mov r0, #0x2
    ldr r1, [r1, #0x0]
    add r1, r1, #0xa0
    bl func_0200694c
    ldr r0, =data_0206e6d4
    ldrsh r1, [r0, #0x90]
    sub r1, r1, #0x1
    strh r1, [r0, #0x90]
    ldrsh r0, [r0, #0x90]
    cmp r0, #0x0
    bne @L0200b1f0
    mov r0, #0x2
    bl func_02006b08
    ldr r1, =data_0206ea14
    mov r0, #0x1
    ldr r1, [r1, #0x0]
    add r1, r1, #0xa0
    bl func_02006a04
    b @L0200b1f0
@L0200b1b8:
    ldr r1, =data_0206ea14
    ldr r1, [r1, #0x0]
    add r1, r1, #0xa0
    bl func_0200694c
    b @L0200b1f0
@L0200b1cc:
    ldr r0, =data_0206e6d4
    ldr r0, [r0, #0x8c]
    cmp r0, #0x0
    beq @L0200b1f0
    ldr r1, =data_0206ea14
    mov r0, #0x0
    ldr r1, [r1, #0x0]
    add r1, r1, #0xa0
    bl func_0200694c
@L0200b1f0:
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    ldreq r0, =data_02086fa8
    ldreqb r0, [r0, #0x0]
    cmpeq r0, #0x2
    bne @L0200b3dc
    ldr r1, =data_02086d08
    ldrb r0, [r1, #0x0]
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b @L0200b3dc
@L0200b220:
    b @L0200b238
    b @L0200b318
    b @L0200b2f0
    b @L0200b344
    b @L0200b36c
    b @L0200b3a0
@L0200b238:
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0x8a]
    add r1, r0, #0x8a
    add r0, r2, #0x1
    cmp r2, #0x9
    swpb r0, r0, [r1]
    bne @L0200b26c
    mvn r0, #0x0
    bl func_0201dc08
    ldr r0, =data_0206e6d4
    mov r2, #0x0
    add r1, r0, #0x8a
    swpb r0, r2, [r1]
@L0200b26c:
    ldr r0, =data_0206e6d4
    ldrsh r0, [r0, #0x88]
    cmp r0, #0x0
    bgt @L0200b3dc
    mov r0, #0x7
    bl func_02007450
    mov r0, #0x16
    bl func_0200a0f8
    mov r0, #0x19
    bl func_0200a0f8
    mov r0, #0x1c
    bl func_0200a0f8
    ldr r0, =data_0206ea14
    ldr r1, =data_0206a438
    ldr r0, [r0, #0x0]
    mov r2, #0x3
    bl func_02003794
    mov r1, #0x2
    ldr r2, =data_02086d08
    mov r0, #0x1
    swpb r1, r1, [r2]
    bl func_02006b08
    mov r0, #0x2
    bl func_02006b08
    mov r0, #0x3
    ldr r1, =data_0206ea14
    ldr r1, [r1, #0x0]
    add r1, r1, #0xa0
    bl func_02006a04
    mov r1, #0x1
    ldr r0, =data_0206e6d4
    str r1, [r0, #0xb0]
    b @L0200b3dc
@L0200b2f0:
    ldr r0, =data_0206ea14
    ldr r0, [r0, #0x0]
    add r0, r0, #0x104
    bl func_02036340
    cmp r0, #0x0
    beq @L0200b3dc
    ldr r1, =data_02086d08
    mov r0, #0x1
    swpb r0, r0, [r1]
    b @L0200b3dc
@L0200b318:
    mov r2, #0x0
    ldr r0, =data_0206ea14
    str r2, [r1, #0x1c]
    ldr r0, [r0, #0x0]
    ldr r1, =data_0206a460
    mov r2, #0x3
    bl func_02003794
    ldr r1, =data_02086d08
    mov r0, #0x3
    swpb r0, r0, [r1]
    b @L0200b3dc
@L0200b344:
    ldr r0, =data_0206ea14
    ldr r0, [r0, #0x0]
    add r0, r0, #0x104
    bl func_02036340
    cmp r0, #0x0
    beq @L0200b3dc
    ldr r1, =data_02086d08
    mov r0, #0x4
    swpb r0, r0, [r1]
    b @L0200b3dc
@L0200b36c:
    ldr r0, [r1, #0x1c]
    cmp r0, #0x0
    bne @L0200b380
    mov r0, #0x1a
    bl func_0200a0f8
@L0200b380:
    ldr r1, =data_02086d08
    ldr r2, [r1, #0x1c]
    add r0, r2, #0x1
    str r0, [r1, #0x1c]
    cmp r2, #0x32
    moveq r0, #0x5
    swpeqb r0, r0, [r1]
    b @L0200b3dc
@L0200b3a0:
    bl func_0203f948
    mov r0, #0x16
    bl func_0200a0f8
    ldr r0, =data_02086d08
    mov r3, #0x4
    add r4, r0, #0x1
    sub r0, r3, #0x14
    mov r1, #0x1e
    mov r2, #0x3
    swpb r3, r3, [r4]
    bl func_020222b8
    ldr r0, =data_0206e6d4
    mov r2, #0x0
    add r1, r0, #0xa0
    swpb r0, r2, [r1]
@L0200b3dc:
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x18
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    ldreq r1, =data_0206e6d4
    ldreqb r0, [r1, #0xb4]
    cmpeq r0, #0x6
    ldreq r0, =data_02086b14
    ldreq r0, [r0, #0x0]
    cmpeq r0, #0x0
    addne sp, sp, #0x18
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =data_02087044
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldreq r0, [r1, #0xb8]
    cmpeq r0, #0x0
    addeq sp, sp, #0x18
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    bl func_02007690
    ldr r1, =data_0206e6d4
    mov r3, #0x0
    add r2, r1, #0x8a
    cmp r0, #0x0
    swpb r1, r3, [r2]
    beq @L0200b480
    ldr r1, =data_02086b14
    str r0, [r1, #0x0]
    mov r0, r3
    bl func_02007450
    ldr r2, =data_0206e6d4
    mov r3, #0x0
    add r1, r2, #0xb4
    swpb r0, r3, [r1]
    add sp, sp, #0x18
    str r3, [r2, #0xb8]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L0200b480:
    mov r0, #0x7
    bl func_02007450
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
