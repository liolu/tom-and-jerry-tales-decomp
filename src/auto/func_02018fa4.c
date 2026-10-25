#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201894c();
extern void func_02018984();
extern void func_0201b294();
extern void func_0201b674();
extern void func_0201b6fc();
extern void func_0201b770();
extern void func_0201bae4();
extern void func_0201bdcc();
extern void func_0201c1d0();
extern void func_0201c688();
extern void func_0201c6dc();
extern void func_0201c750();
extern void func_0201c7c4();
extern void func_0201c818();
extern void func_0201c88c();
extern void func_02030878();
extern void func_02030898();
extern void func_0203b96c();
extern void func_0203c1e8();
extern void func_0203c2ec();
extern void func_0203c4cc();
extern void func_0203c568();
extern void func_0203fa64();
extern void MIi_CpuCopy16();
extern char data_0206e684[];
extern char data_02087044[];
extern char data_02087410[];
extern char data_02087454[];
extern char data_02087455[];
extern char data_0208746c[];
extern char data_02087486[];
extern char data_02087496[];
// clang-format off
asm void func_02018fa4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x20
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02018fd0
    ldr r0, =data_02087044
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x20
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_02018fd0:
    mov r0, #0x0
    bl func_0203b96c
    mov r10, #0x4
    ldr r7, =data_02087454
    ldr r5, =data_02087410
    mov r8, #0x0
    mov r6, r10
    mov r4, #0x44
L_02018ff0:
    mul r1, r8, r4
    ldrsb r0, [r7, r1]
    add r9, r7, r1
    cmp r0, #0x0
    blt L_0201913c
    ldrb r0, [r9, #0x1]
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_02019078
L_02019014:
    b L_02019078
    b L_02019034
    b L_02019040
    b L_0201904c
    b L_02019058
    b L_02019064
    b L_0201904c
    b L_02019070
L_02019034:
    mov r0, r9
    bl func_0201c688
    b L_02019078
L_02019040:
    mov r0, r9
    bl func_0201c6dc
    b L_02019078
L_0201904c:
    mov r0, r9
    bl func_0201c750
    b L_02019078
L_02019058:
    mov r0, r9
    bl func_0201c7c4
    b L_02019078
L_02019064:
    mov r0, r9
    bl func_0201c818
    b L_02019078
L_02019070:
    mov r0, r9
    bl func_0201c88c
L_02019078:
    ldrb r0, [r9, #0x18]
    cmp r0, #0x0
    bne L_0201913c
    ldrb r1, [r9, #0x1]
    cmp r1, #0x7
    ldreq r0, [r9, #0x1c]
    cmpeq r0, #0x0
    bne L_020190a4
    mov r0, r9
    bl func_0201c1d0
    b L_020190c0
L_020190a4:
    cmp r1, #0x1
    bne L_020190c0
    ldrb r0, [r9, #0x3c]
    cmp r0, #0xff
    addlo r0, r0, #0x1
    addlo r1, r9, #0x3c
    swplob r0, r0, [r1]
L_020190c0:
    ldrb r0, [r9, #0x1]
    cmp r0, #0x1
    bne L_0201913c
    ldrb r1, [r9, #0x3c]
    ldrb r0, [r9, #0x3d]
    cmp r1, r0
    ldreq r0, [r9, #0x1c]
    cmpeq r0, #0x0
    bne L_02019108
    add r0, r8, #0x9
    mov r0, r0, lsl #0x4
    ldr r3, [r5, #0x30]
    add r1, r0, #0x1
    mov r2, r6
    add r0, r3, #0xee
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    b L_0201913c
L_02019108:
    ldrb r0, [r9, #0x3e]
    cmp r1, r0
    ldreq r0, [r9, #0x1c]
    cmpeq r0, #0x0
    bne L_0201913c
    add r0, r8, #0x9
    mov r0, r0, lsl #0x4
    ldr r3, [r5, #0x30]
    add r1, r0, #0x1
    mov r2, r10
    add r0, r3, #0xe2
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
L_0201913c:
    add r0, r8, #0x1
    and r8, r0, #0xff
    cmp r8, #0x5
    blo L_02018ff0
    ldr r0, =data_02087410
    ldrsb r0, [r0, #0x0]
    cmp r0, #0x0
    bge L_020193d4
    bl func_02030878
    cmp r0, #0x0
    beq L_020193d4
    add r0, sp, #0x1c
    add r1, sp, #0x18
    bl func_02030898
    mov r8, #0x0
    mov r6, #0x2
    ldr r7, =data_02087454
    ldr r5, =data_02087410
    mov r4, #0x44
    b L_020193c0
L_0201918c:
    mla r9, r8, r4, r7
    ldrb r0, [r9, #0x18]
    cmp r0, #0x0
    bne L_020193b8
    ldrb r0, [r9, #0x1]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_020193b8
L_020191ac:
    b L_020193b8
    b L_02019210
    b L_02019270
    b L_02019220
    b L_020191c8
    b L_0201932c
    b L_02019220
L_020191c8:
    ldr r2, [sp, #0x1c]
    ldr r3, [sp, #0x18]
    str r2, [r9, #0x10]
    str r3, [r9, #0x14]
    ldr r1, [r9, #0x20]
    ldr r0, [r9, #0x24]
    sub r2, r2, r1
    sub r1, r3, r0
    mov r0, r2, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r0, r0, asr #0x10
    mov r1, r1, asr #0x10
    bl func_02018984
    ldrh r2, [r9, #0x2c]
    mul r1, r2, r2
    cmp r0, r1
    swplsb r0, r8, [r5]
    b L_020193b8
L_02019210:
    ldr r1, [sp, #0x1c]
    ldr r0, [sp, #0x18]
    str r1, [r9, #0x10]
    str r0, [r9, #0x14]
L_02019220:
    ldr r3, [sp, #0x1c]
    ldr r2, [r9, #0x20]
    ldr r1, [sp, #0x18]
    ldr r0, [r9, #0x24]
    sub r2, r3, r2
    sub r1, r1, r0
    mov r0, r2, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r0, r0, asr #0x10
    mov r1, r1, asr #0x10
    bl func_02018984
    ldrh r2, [r9, #0x28]
    mul r1, r2, r2
    cmp r0, r1
    blo L_020193b8
    ldrh r2, [r9, #0x2c]
    mul r1, r2, r2
    cmp r0, r1
    swplsb r0, r8, [r5]
    b L_020193b8
L_02019270:
    ldr r0, [r9, #0x28]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x0]
    ldr r0, [r9, #0x2c]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x1c]
    ldr r1, [sp, #0x18]
    ldr r2, [r9, #0x20]
    ldr r3, [r9, #0x24]
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_0201894c
    cmp r0, #0x0
    swpneb r0, r8, [r5]
    ldr r0, [r9, #0x38]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x0]
    ldr r0, [r9, #0x3c]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x1c]
    ldr r1, [sp, #0x18]
    ldr r2, [r9, #0x30]
    ldr r3, [r9, #0x34]
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_0201894c
    cmp r0, #0x0
    strne r6, [r9, #0x1c]
    b L_020193b8
L_0201932c:
    ldr r1, [r9, #0x30]
    ldr r0, [r9, #0x20]
    ldr r3, [r9, #0x28]
    cmp r0, r1
    movge r0, r1
    ldr r1, [r9, #0x38]
    ldr r2, [r9, #0x34]
    cmp r3, r1
    movle r3, r1
    ldr r1, [r9, #0x24]
    cmp r1, r2
    movge r1, r2
    ldr r2, [r9, #0x3c]
    ldr r9, [r9, #0x2c]
    mov r10, r1, lsl #0x10
    cmp r9, r2
    movle r9, r2
    mov r2, r3, lsl #0x10
    mov r3, r2, lsr #0x10
    mov r2, r9, lsl #0x10
    str r3, [sp, #0x0]
    mov r2, r2, lsr #0x10
    str r2, [sp, #0x4]
    ldr r2, [sp, #0x1c]
    ldr r3, [sp, #0x18]
    mov r2, r2, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r9, r0, lsl #0x10
    mov r0, r2, lsr #0x10
    mov r1, r3, lsr #0x10
    mov r2, r9, asr #0x10
    mov r3, r10, asr #0x10
    bl func_0201894c
    cmp r0, #0x0
    swpneb r0, r8, [r5]
L_020193b8:
    add r0, r8, #0x1
    and r8, r0, #0xff
L_020193c0:
    cmp r8, #0x5
    bhs L_020193d4
    ldrsb r0, [r5, #0x0]
    cmp r0, #0x0
    blt L_0201918c
L_020193d4:
    ldr r0, =data_02087410
    ldrsb r2, [r0, #0x0]
    cmp r2, #0x0
    addlt sp, sp, #0x20
    ldmltfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, #0x44
    mul r1, r2, r0
    ldr r0, =data_02087455
    ldrb r0, [r0, r1]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_02019da0
L_02019404:
    b L_02019da0
    b L_02019420
    b L_0201962c
    b L_0201999c
    b L_02019b10
    b L_02019c18
    b L_02019cf4
L_02019420:
    mov r0, r2, lsl #0x12
    add r1, sp, #0x14
    add r2, sp, #0x10
    mov r0, r0, lsr #0x10
    bl func_0203c2ec
    ldr r0, =data_02087410
    ldr r2, =data_02087454
    ldrsb r1, [r0, #0x0]
    mov r0, #0x44
    mla r0, r1, r0, r2
    bl func_0201b674
    cmp r0, #0x1
    beq L_020194ec
    cmp r0, #0x2
    beq L_02019468
    cmp r0, #0x3
    beq L_02019570
    b L_020195f0
L_02019468:
    mov r0, #0x64
    bl func_0203fa64
    ldr r0, =data_02087410
    ldr r2, [sp, #0x14]
    ldrsb r0, [r0, #0x0]
    ldr r1, [sp, #0x10]
    mov r2, r2, lsl #0x10
    mov r0, r0, lsl #0x12
    mov r3, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x20
    bl func_0203c1e8
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x5
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    ldr r0, =data_02087410
    mov r1, #0x0
    ldrsb r2, [r0, #0x0]
    mov r0, r2, lsl #0x12
    mov r0, r0, lsr #0x10
    add r2, r2, #0x9
    bl func_0203c4cc
    b L_020195f0
L_020194ec:
    mov r0, #0x64
    bl func_0203fa64
    ldr r0, =data_02087410
    ldr r2, [sp, #0x14]
    ldrsb r0, [r0, #0x0]
    ldr r1, [sp, #0x10]
    mov r2, r2, lsl #0x10
    mov r0, r0, lsl #0x12
    mov r3, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x20
    bl func_0203c1e8
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x5
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    ldr r0, =data_02087410
    mov r1, #0x0
    ldrsb r2, [r0, #0x0]
    mov r0, r2, lsl #0x12
    mov r0, r0, lsr #0x10
    add r2, r2, #0x9
    bl func_0203c4cc
    b L_020195f0
L_02019570:
    mov r0, #0x65
    bl func_0203fa64
    ldr r0, =data_02087410
    ldr r2, [sp, #0x14]
    ldrsb r0, [r0, #0x0]
    ldr r1, [sp, #0x10]
    mov r2, r2, lsl #0x10
    mov r0, r0, lsl #0x12
    mov r3, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x20
    bl func_0203c1e8
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x3
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    ldr r0, =data_02087410
    mov r1, #0x0
    ldrsb r2, [r0, #0x0]
    mov r0, r2, lsl #0x12
    mov r0, r0, lsr #0x10
    add r2, r2, #0x9
    bl func_0203c4cc
L_020195f0:
    ldr r3, =data_02087410
    ldr r1, =data_0208746c
    ldrsb r4, [r3, #0x0]
    mov r0, #0x44
    mov r5, #0x1
    mla r2, r4, r0, r1
    swpb r1, r5, [r2]
    sub r2, r0, #0x45
    ldrb r4, [r3, #0x3]
    add r1, r3, #0x3
    add sp, sp, #0x20
    add r0, r4, #0x1
    swpb r0, r0, [r1]
    swpb r0, r2, [r3]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_0201962c:
    ldr r0, =data_02087454
    add r0, r0, r1
    bl func_0201bae4
    cmp r0, #0x0
    addeq sp, sp, #0x20
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_02087410
    ldr r2, =data_02087454
    ldrsb r1, [r0, #0x0]
    mov r0, #0x44
    mla r0, r1, r0, r2
    bl func_0201bae4
    ldr r2, =data_02087410
    mov r4, r0
    ldrsb r3, [r2, #0x0]
    add r1, sp, #0xc
    add r2, sp, #0x8
    mov r0, r3, lsl #0x12
    mov r0, r0, lsr #0x10
    bl func_0203c2ec
    ldr r1, =data_02087410
    mov r0, #0x44
    ldrsb r2, [r1, #0x0]
    ldr r1, =data_02087496
    smulbb r0, r2, r0
    ldrb r0, [r1, r0]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02019960
L_020196a0:
    b L_020196b0
    b L_0201975c
    b L_020197f0
    b L_020198b8
L_020196b0:
    cmp r4, #0x1
    bne L_020196f0
    mov r0, #0x64
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x5
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    b L_02019724
L_020196f0:
    mov r0, #0x65
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x3
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
L_02019724:
    ldr r0, =data_02087410
    mov r1, #0x0
    ldrsb r2, [r0, #0x0]
    mov r0, r2, lsl #0x12
    mov r0, r0, lsr #0x10
    add r2, r2, #0x9
    bl func_0203c4cc
    ldr r0, =data_02087410
    mov r1, #0x1000
    ldrsb r0, [r0, #0x0]
    mov r2, r1
    mov r3, #0xc000
    bl func_0203c568
    b L_02019960
L_0201975c:
    cmp r4, #0x1
    bne L_0201979c
    mov r0, #0x64
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x5
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    b L_020197d0
L_0201979c:
    mov r0, #0x65
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x3
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
L_020197d0:
    ldr r0, =data_02087410
    mov r1, #0x0
    ldrsb r2, [r0, #0x0]
    mov r0, r2, lsl #0x12
    mov r0, r0, lsr #0x10
    add r2, r2, #0x9
    bl func_0203c4cc
    b L_02019960
L_020197f0:
    cmp r4, #0x1
    bne L_0201984c
    mov r0, #0x64
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x5
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    ldr r0, =data_02087410
    mov r1, #0x0
    ldrsb r2, [r0, #0x0]
    mov r0, r2, lsl #0x12
    mov r0, r0, lsr #0x10
    add r2, r2, #0x9
    bl func_0203c4cc
    b L_02019880
L_0201984c:
    mov r0, #0x65
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x3
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
L_02019880:
    ldr r0, =data_02087410
    mov r1, #0x0
    ldrsb r2, [r0, #0x0]
    mov r0, r2, lsl #0x12
    mov r0, r0, lsr #0x10
    add r2, r2, #0x9
    bl func_0203c4cc
    ldr r0, =data_02087410
    mov r1, #0x1000
    ldrsb r0, [r0, #0x0]
    mov r2, r1
    mov r3, #0x4000
    bl func_0203c568
    b L_02019960
L_020198b8:
    cmp r4, #0x1
    bne L_020198f8
    mov r0, #0x64
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x5
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    b L_0201992c
L_020198f8:
    mov r0, #0x65
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x3
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
L_0201992c:
    ldr r0, =data_02087410
    mov r1, #0x1000
    ldrsb r0, [r0, #0x0]
    mov r2, r1
    mov r3, #0x8000
    bl func_0203c568
    ldr r0, =data_02087410
    mov r1, #0x0
    ldrsb r2, [r0, #0x0]
    mov r0, r2, lsl #0x12
    mov r0, r0, lsr #0x10
    add r2, r2, #0x9
    bl func_0203c4cc
L_02019960:
    ldr r3, =data_02087410
    ldr r1, =data_0208746c
    ldrsb r4, [r3, #0x0]
    mov r0, #0x44
    mov r5, #0x1
    mla r2, r4, r0, r1
    swpb r1, r5, [r2]
    sub r2, r0, #0x45
    ldrb r4, [r3, #0x3]
    add r1, r3, #0x3
    add sp, sp, #0x20
    add r0, r4, #0x1
    swpb r0, r0, [r1]
    swpb r0, r2, [r3]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_0201999c:
    ldr r0, =data_02087454
    add r0, r0, r1
    bl func_0201b294
    cmp r0, #0x0
    addeq sp, sp, #0x20
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_02087410
    ldr r2, =data_02087454
    ldrsb r1, [r0, #0x0]
    mov r0, #0x44
    mla r0, r1, r0, r2
    bl func_0201b294
    cmp r0, #0x1
    beq L_020199e8
    cmp r0, #0x2
    beq L_02019a20
    cmp r0, #0x3
    beq L_02019a58
    b L_02019a8c
L_020199e8:
    mov r0, #0x64
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x5
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    b L_02019a8c
L_02019a20:
    mov r0, #0x64
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x5
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    b L_02019a8c
L_02019a58:
    mov r0, #0x65
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x3
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
L_02019a8c:
    ldr r0, =data_02087410
    ldr r3, =data_02087454
    ldrsb r2, [r0, #0x0]
    mov r0, #0x44
    mov r1, #0x1000
    smulbb r4, r2, r0
    ldr r2, =data_02087486
    ldrsb r0, [r3, r4]
    ldrh r3, [r2, r4]
    mov r2, r1
    bl func_0203c568
    ldr r0, =data_02087410
    mov r1, #0x0
    ldrsb r2, [r0, #0x0]
    mov r0, r2, lsl #0x12
    mov r0, r0, lsr #0x10
    add r2, r2, #0x9
    bl func_0203c4cc
    ldr r3, =data_02087410
    ldr r1, =data_0208746c
    ldrsb r4, [r3, #0x0]
    mov r0, #0x44
    mov r5, #0x1
    mla r2, r4, r0, r1
    swpb r1, r5, [r2]
    sub r2, r0, #0x45
    ldrb r4, [r3, #0x3]
    add r1, r3, #0x3
    add sp, sp, #0x20
    add r0, r4, #0x1
    swpb r0, r0, [r1]
    swpb r0, r2, [r3]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_02019b10:
    ldr r0, =data_02087454
    add r0, r0, r1
    bl func_0201b6fc
    cmp r0, #0x1
    beq L_02019b38
    cmp r0, #0x2
    beq L_02019b70
    cmp r0, #0x3
    beq L_02019ba8
    b L_02019bdc
L_02019b38:
    mov r0, #0x64
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x5
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    b L_02019bdc
L_02019b70:
    mov r0, #0x64
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x5
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    b L_02019bdc
L_02019ba8:
    mov r0, #0x65
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x3
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
L_02019bdc:
    ldr r3, =data_02087410
    ldr r1, =data_0208746c
    ldrsb r4, [r3, #0x0]
    mov r0, #0x44
    mov r5, #0x1
    mla r2, r4, r0, r1
    swpb r1, r5, [r2]
    sub r2, r0, #0x45
    ldrb r4, [r3, #0x3]
    add r1, r3, #0x3
    add sp, sp, #0x20
    add r0, r4, #0x1
    swpb r0, r0, [r1]
    swpb r0, r2, [r3]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_02019c18:
    ldr r0, =data_02087454
    add r0, r0, r1
    bl func_0201b770
    cmp r0, #0x0
    addeq sp, sp, #0x20
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_02087410
    ldr r2, =data_02087454
    ldrsb r1, [r0, #0x0]
    mov r0, #0x44
    mla r0, r1, r0, r2
    bl func_0201b770
    cmp r0, #0x1
    mov r2, #0x4
    bne L_02019c88
    ldr r0, =data_02087410
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x8
    add r1, r1, #0x2
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    mov r0, #0x64
    bl func_0203fa64
    b L_02019cb8
L_02019c88:
    ldr r0, =data_02087410
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x5
    add r1, r1, #0x2
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    mov r0, #0x65
    bl func_0203fa64
L_02019cb8:
    ldr r3, =data_02087410
    ldr r1, =data_0208746c
    ldrsb r4, [r3, #0x0]
    mov r0, #0x44
    mov r5, #0x1
    mla r2, r4, r0, r1
    swpb r1, r5, [r2]
    sub r2, r0, #0x45
    ldrb r4, [r3, #0x3]
    add r1, r3, #0x3
    add sp, sp, #0x20
    add r0, r4, #0x1
    swpb r0, r0, [r1]
    swpb r0, r2, [r3]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
L_02019cf4:
    ldr r0, =data_02087454
    add r0, r0, r1
    bl func_0201bdcc
    cmp r0, #0x2
    addne sp, sp, #0x20
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, #0x65
    bl func_0203fa64
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x3
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    ldr r0, =data_02087410
    ldr r3, =data_02087454
    ldrsb r2, [r0, #0x0]
    mov r0, #0x44
    mov r1, #0x1000
    smulbb r4, r2, r0
    ldr r2, =data_02087486
    ldrsb r0, [r3, r4]
    ldrh r3, [r2, r4]
    mov r2, r1
    bl func_0203c568
    ldr r3, =data_02087410
    ldr r1, =data_0208746c
    ldrsb r4, [r3, #0x0]
    mov r0, #0x44
    mov r5, #0x1
    mla r2, r4, r0, r1
    swpb r1, r5, [r2]
    sub r2, r0, #0x45
    ldrb r4, [r3, #0x3]
    add r1, r3, #0x3
    add r0, r4, #0x1
    swpb r0, r0, [r1]
    swpb r0, r2, [r3]
L_02019da0:
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
