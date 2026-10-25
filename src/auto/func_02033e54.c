#include "m2c.h"

void func_0203016c(void);
void func_02033f58(void);
extern char data_02091be4[];
extern char data_0208ece4[];
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02033e54(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r1, #0x7b0
    mul r3, r0, r1
    ldr r4, =data_02091be4
    ldr r2, =data_0208ece4
    ldrsh r1, [r4, r3]
    mov r0, #0xbc
    add r4, r4, r3
    smlabb r5, r1, r0, r2
    ldrb r0, [r5, #0xd]
    cmp r0, #0x14
    bls L_02033ea4
    add r1, r5, #0xd
    mov r0, #0x14
    swpb r0, r0, [r1]
    ldrb r2, [r5, #0xd]
    ldrb r0, [r5, #0xc]
    cmp r0, r2
    addhi r1, r5, #0xc
    swphib r0, r2, [r1]
L_02033ea4:
    ldrb ip, [r5, #0xd]
    cmp ip, #0x0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r4, #0x8
    add r3, r4, #0x14
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldrb r0, [r5, #0xc]
    mov r1, ip
    bl func_0203016c
    and r7, r0, #0xff
    cmp r7, #0x0
    mov r6, #0x0
    ble L_02033ef8
L_02033edc:
    mov r0, r4
    mov r1, r5
    mov r2, r6
    bl func_02033f58
    add r6, r6, #0x1
    cmp r6, r7
    blt L_02033edc
L_02033ef8:
    cmp r6, #0x14
    bge L_02033f20
    mov r0, #0x60
    mla r1, r6, r0, r4
    mov r0, #0x0
L_02033f0c:
    add r6, r6, #0x1
    str r0, [r1, #0x2c]
    cmp r6, #0x14
    add r1, r1, #0x60
    blt L_02033f0c
L_02033f20:
    ldr r0, [r5, #0x4]
    cmp r0, #0x1
    ldreqh r0, [r5, #0xe]
    streqh r0, [r4, #0x2]
    ldr r0, [r5, #0x4]
    cmp r0, #0x2
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r0, [r5, #0x10]
    ldrh r1, [r5, #0x12]
    bl func_0203016c
    strh r0, [r4, #0x2]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
