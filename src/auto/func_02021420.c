#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020222b8();
extern void func_0203cd2c();
extern void func_0203cd5c();
extern void func_0203cf6c();
extern void func_0203cff0();
extern void func_0203d498();
extern void func_0203d740();
extern void func_0203d8d8();
extern void func_0203de64();
extern void func_0203de74();
extern void func_0203de84();
extern void func_0203de98();
extern void func_0204221c();
extern char data_0206b77c[];
extern char data_0206b794[];
extern char data_0206e690[];
extern char data_0206e698[];
extern char data_0208776c[];
extern char data_020b8b44[];
extern char data_020b8b6c[];
extern char data_020b8b94[];
// clang-format off
asm void func_02021420(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r2, #0x4000000
    ldr r0, [r2, #0x0]
    add r1, r2, #0x1000
    bic r0, r0, #0x1f00
    str r0, [r2, #0x0]
    ldr r0, [r1, #0x0]
    bic r0, r0, #0x1f00
    str r0, [r1, #0x0]
    bl func_0203cd2c
    mov r0, #0x0
    mov r1, #0x1e
    str r1, [sp, #0x0]
    mov r1, #0x2
    str r1, [sp, #0x4]
    str r0, [sp, #0x8]
    mov r2, r0
    mov r3, r0
    str r0, [sp, #0xc]
    bl func_0203cf6c
    mov r1, #0xd
    mov r0, #0x1
    str r1, [sp, #0x0]
    mov r1, #0x2
    str r1, [sp, #0x4]
    mov r3, r0
    mov r1, #0x5
    mov r2, #0x0
    str r0, [sp, #0x8]
    bl func_0203cff0
    mov r0, #0x1f
    mov r1, #0x1
    str r0, [sp, #0x0]
    mov r2, #0x0
    str r2, [sp, #0x4]
    str r1, [sp, #0x8]
    mov r0, #0x2
    mov r3, r1
    bl func_0203cff0
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cd5c
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x28]
    bl func_0203cd5c
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x50]
    bl func_0203cd5c
    mov r0, #0x0
    bl func_0203de64
    ldr r0, =data_0206e690
    ldr r0, [r0, #0x0]
    bl func_0203de98
    mov r0, #0x0
    bl func_0203de84
    mov r0, #0x0
    bl func_0203de74
    ldr r0, =data_0206b77c
    ldr r2, =data_020b8b94
    ldr r1, =data_0206e698
    str r2, [sp, #0x0]
    mov r2, #0x0
    mov r3, #0x1
    bl func_0203d498
    ldr r0, =data_0208776c
    ldrb r0, [r0, #0x1]
    cmp r0, #0x0
    beq L_020215d4
    ldr r4, =data_020b8b6c
    ldr r0, =data_0206b794
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    ldr r1, =data_0206e690
    mov r0, #0xc
    ldr r5, [r1, #0x0]
    bl func_0204221c
    ldr r2, [r5, #0x14]
    mov r1, r5
    ldrb r2, [r5, r2]
    mov r4, r0
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, asr #0x1
    rsb r2, r2, #0x60
    mov r2, r2, lsl #0x10
    mov r6, r2, lsr #0x10
    bl func_0203d8d8
    mov r2, r6
    mov r3, r5
    mov r0, r0, asr #0x1
    rsb r0, r0, #0x80
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r4
    mov r4, #0x0
    str r4, [sp, #0x0]
    str r4, [sp, #0x4]
    ldr r4, =data_020b8b44
    str r4, [sp, #0x8]
    bl func_0203d740
    ldr r1, =data_0208776c
    mov r0, #0xba
    swpb r0, r0, [r1]
    b L_02021648
L_020215d4:
    ldr r1, =data_0206e690
    mov r0, #0xd
    ldr r5, [r1, #0x0]
    bl func_0204221c
    ldr r2, [r5, #0x14]
    mov r1, r5
    ldrb r2, [r5, r2]
    mov r4, r0
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, asr #0x1
    rsb r2, r2, #0x5f
    mov r2, r2, lsl #0x10
    mov r6, r2, lsr #0x10
    bl func_0203d8d8
    mov r0, r0, asr #0x1
    rsb r1, r0, #0x7f
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r1, r1, lsl #0x10
    ldr ip, =data_020b8b44
    str r0, [sp, #0x4]
    mov r0, r4
    mov r2, r6
    mov r3, r5
    mov r1, r1, lsr #0x10
    str ip, [sp, #0x8]
    bl func_0203d740
L_02021648:
    mov r0, #0x0
    mov r1, #0x8
    mov r2, #0x3
    bl func_020222b8
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
