#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020015f0();
extern void func_0200160c();
extern void func_02001654();
extern void func_02004e98();
extern void func_0201f2d0();
extern void func_0201f4e8();
extern void func_020219d8();
extern void func_020223e8();
extern void func_02022714();
extern void func_02022c30();
extern void func_02022d20();
extern void func_02030f40();
extern void func_020314d0();
extern void func_020321ec();
extern void func_0203253c();
extern void func_02032bc8();
extern void func_020330b4();
extern void func_02033910();
extern void func_020352dc();
extern void func_0203a294();
extern void func_0203b96c();
extern void func_0203b980();
extern void func_0203bc90();
extern void func_0203cd2c();
extern void func_0203cd5c();
extern void func_0203cdd0();
extern void func_0203cf6c();
extern void func_0203cff0();
extern void func_0203d098();
extern void func_0203d498();
extern void func_0203d740();
extern void func_0203d8d8();
extern void func_0203de64();
extern void func_0203de74();
extern void func_0203de84();
extern void func_0203de98();
extern void func_0204221c();
extern void func_0204c1b0();
extern void func_0204f490();
extern char data_02063fc8[];
extern char data_02063fd8[];
extern char data_02063fe8[];
extern char data_02064000[];
extern char data_020692ec[];
extern char data_0206b158[];
extern char data_0206b17c[];
extern char data_0206b194[];
extern char data_0206b1b0[];
extern char data_0206b1d0[];
extern char data_0206b62c[];
extern char data_0206b64c[];
extern char data_0206b668[];
extern char data_0206b690[];
extern char data_0206b6b8[];
extern char data_0206b6e0[];
extern char data_0206b704[];
extern char data_0206b708[];
extern char data_0206b710[];
extern char data_0206b71c[];
extern char data_0206b72c[];
extern char data_0206b73c[];
extern char data_0206e680[];
extern char data_0206e690[];
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_0206e6d4[];
extern char data_0206e6fa[];
extern char data_020875a8[];
extern char data_0208760c[];
extern char data_02087640[];
extern char data_02087688[];
extern char data_020876ec[];
extern char data_020b8b44[];
extern char data_020b8b6c[];
extern char data_020b8bbc[];
// clang-format off
asm void func_0201e050(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    bl func_0200160c
    mov r0, #0x6
    bl func_02001654
    mov r0, #0x6
    bl func_020219d8
    mov r1, #0x4000000
    ldr r0, [r1, #0x0]
    add r3, r1, #0x1000
    bic r0, r0, #0x1f00
    orr r0, r0, #0x100
    str r0, [r1, #0x0]
    ldr r1, [r3, #0x0]
    ldr r0, =data_0206b62c
    bic r1, r1, #0x1f00
    str r1, [r3, #0x0]
    ldr r2, [r3, #0x0]
    ldr r1, =data_0206e690
    bic r2, r2, #0x1f00
    orr r2, r2, #0x1700
    str r2, [r3, #0x0]
    ldr r2, =data_0206e6a4
    ldr r3, =data_0206e698
    bl func_02030f40
    ldr r0, =data_0206b64c
    ldr r1, =data_0206e680
    ldr r2, =data_0206e6a4
    ldr r3, =data_0206e698
    bl func_02030f40
    bl func_0203cd2c
    bl func_020314d0
    bl func_020321ec
    bl func_0203253c
    bl func_0203a294
    bl func_02032bc8
    bl func_020330b4
    mov r0, #0x1
    mov r1, #0x3f
    mov r2, r0
    mov r3, #0x1f
    bl func_020352dc
    ldr r0, =data_0206e6a4
    bl func_02033910
    bl func_020015f0
    mov r0, #0x1
    bl func_0203b96c
    mov r0, #0x1
    bl func_0203b980
    mov r0, #0xc
    str r0, [sp, #0x0]
    mov r2, #0x0
    str r2, [sp, #0x4]
    mov r0, #0x2
    str r0, [sp, #0x8]
    str r2, [sp, #0xc]
    mov r0, #0x1
    mov r1, #0x5
    mov r3, r2
    bl func_0203cf6c
    mov r0, #0xd
    str r0, [sp, #0x0]
    mov r0, #0x2
    str r0, [sp, #0x4]
    mov r0, #0x3
    str r0, [sp, #0x8]
    mov r0, #0x0
    mov r1, #0x4
    mov r2, r0
    mov r3, #0x1
    bl func_0203cff0
    mov r2, #0x0
    mov r1, #0x1
    str r2, [sp, #0x0]
    mov r3, r1
    str r1, [sp, #0x4]
    mov r4, #0x3
    mov r0, #0x2
    str r4, [sp, #0x8]
    bl func_0203cff0
    mov r0, #0xe
    mov r2, #0x0
    str r0, [sp, #0x0]
    mov r0, #0x4
    stmib sp, {r0, r2}
    mov r3, r2
    mov r0, r4
    mov r1, #0x6
    str r2, [sp, #0xc]
    bl func_0203cf6c
    ldr r0, =data_020b8b6c
    bl func_0203d098
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x28]
    bl func_0203cd5c
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x78]
    bl func_0203cd5c
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cd5c
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x50]
    bl func_0203cdd0
    mov r0, #0x1
    bl func_0203de64
    ldr r0, =data_0206e690
    ldr r0, [r0, #0x0]
    bl func_0203de98
    mov r0, #0x0
    bl func_0203de84
    mov r0, #0x0
    bl func_0203de74
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x2
    beq L_0201e238
    cmp r0, #0x3
    beq L_0201e278
    cmp r0, #0x4
    beq L_0201e258
    b L_0201e298
L_0201e238:
    ldr r4, =data_020b8b44
    ldr r0, =data_0206b668
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    b L_0201e310
L_0201e258:
    ldr r4, =data_020b8b44
    ldr r0, =data_0206b690
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    b L_0201e310
L_0201e278:
    ldr r4, =data_020b8b44
    ldr r0, =data_0206b6b8
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    b L_0201e310
L_0201e298:
    ldr r4, =data_020b8b44
    ldr r0, =data_0206b6e0
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    ldr r0, =0x4001000
    ldr r1, =data_020875a8
    ldr r3, [r0, #0x0]
    ldr r2, =0x3f4a
    bic r3, r3, #0xe000
    orr r3, r3, #0x2000
    str r3, [r0, #0x0]
    ldrh r3, [r0, #0x48]
    bic r3, r3, #0x3f
    orr r3, r3, #0x16
    strh r3, [r0, #0x48]
    ldrh r3, [r0, #0x4a]
    bic r3, r3, #0x3f
    orr r3, r3, #0x17
    strh r3, [r0, #0x4a]
    ldr r1, [r1, #0x14]
    mov r1, r1, asr #0xc
    add r1, r1, #0x4e
    mov r1, r1, lsl #0x8
    and r1, r1, #0xff00
    orr r1, r1, #0xb2
    strh r1, [r0, #0x40]
    strh r2, [r0, #0x44]
L_0201e310:
    mov r10, #0x0
    ldr r6, =data_0206b1b0
    ldr r5, =data_0206e698
    ldr r4, =data_02063fe8
    mov r9, #0xc0
    mov r8, #0x3
    mov r7, r10
L_0201e32c:
    str r9, [sp, #0x0]
    str r8, [sp, #0x4]
    str r7, [sp, #0x8]
    str r7, [sp, #0xc]
    ldrb r2, [r4, r10]
    ldr r0, [r6, r10, lsl #0x2]
    mov r1, r5
    mov r3, r7
    bl func_0203bc90
    add r0, r10, #0x1
    and r10, r0, #0xff
    cmp r10, #0x8
    blo L_0201e32c
    mov r10, #0x0
    ldr r5, =data_0206b194
    ldr r11, =data_0206e698
    ldr r4, =data_02063fd8
    mov r9, #0xc0
    mov r8, #0x2
    mov r7, r10
    mov r6, #0x1
L_0201e380:
    str r9, [sp, #0x0]
    str r8, [sp, #0x4]
    str r7, [sp, #0x8]
    str r6, [sp, #0xc]
    ldrb r2, [r4, r10]
    ldr r0, [r5, r10, lsl #0x2]
    mov r1, r11
    mov r3, r7
    bl func_0203bc90
    add r0, r10, #0x1
    and r10, r0, #0xff
    cmp r10, #0x7
    blo L_0201e380
    mov r10, #0x0
    ldr r6, =data_0206b1d0
    ldr r5, =data_0206e698
    ldr r4, =data_02064000
    mov r9, #0xc0
    mov r8, #0x2
    mov r7, r10
L_0201e3d0:
    str r9, [sp, #0x0]
    str r8, [sp, #0x4]
    str r7, [sp, #0x8]
    str r8, [sp, #0xc]
    ldrb r2, [r4, r10]
    ldr r0, [r6, r10, lsl #0x2]
    mov r1, r5
    mov r3, r7
    bl func_0203bc90
    add r0, r10, #0x1
    and r10, r0, #0xff
    cmp r10, #0xa
    blo L_0201e3d0
    mov r10, #0x0
    ldr r5, =data_0206b17c
    ldr r11, =data_0206e698
    ldr r4, =data_02063fc8
    mov r9, #0xc0
    mov r8, #0x1
    mov r7, r10
    mov r6, #0x3
L_0201e424:
    str r9, [sp, #0x0]
    str r8, [sp, #0x4]
    str r7, [sp, #0x8]
    str r6, [sp, #0xc]
    ldrb r2, [r4, r10]
    ldr r0, [r5, r10, lsl #0x2]
    mov r1, r11
    mov r3, r7
    bl func_0203bc90
    add r0, r10, #0x1
    and r10, r0, #0xff
    cmp r10, #0x6
    blo L_0201e424
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_0201e504
    mov r0, #0x4d
    bl func_0204221c
    mov r2, r0
    ldr r0, =data_020876ec
    ldr r1, =data_0206b704
    bl func_0204f490
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r1, =data_020b8b6c
    str r0, [sp, #0x4]
    ldr r0, =data_0206e690
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x0]
    ldr r0, =data_020876ec
    mov r1, #0x5
    mov r2, #0x3
    bl func_0203d740
    mov r0, #0x4e
    bl func_0204221c
    mov r2, r0
    ldr r0, =data_020876ec
    ldr r1, =data_0206b708
    ldr r3, =data_0206e6d4
    ldr r4, =data_0206e6fa
    ldrb r3, [r3, #0x18]
    mov r3, r3, lsl #0x3
    ldrh r3, [r4, r3]
    bl func_0204f490
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8b6c
    ldr r0, =data_020876ec
    str r1, [sp, #0x8]
    mov r1, #0x7d
    mov r2, #0x3
    ldr r3, =data_0206e690
    ldr r3, [r3, #0x0]
    bl func_0203d740
L_0201e504:
    bl func_0204c1b0
    bl func_0201f2d0
    ldr r0, =data_0208760c
    bl func_020223e8
    ldr r0, =func_0201f4e8
    mov r1, #0x0
    str r0, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r0, =data_0206b158
    ldr r1, =data_0208760c
    ldrb r2, [r0, #0x2]
    ldrb r3, [r0, #0x1]
    ldr r0, =data_02087688
    bl func_02022c30
    mov r0, #0x28
    str r0, [sp, #0x0]
    ldr r2, =data_0206b158
    ldr r0, =data_02087688
    ldrb r1, [r2, #0x2]
    ldrb r2, [r2, #0x1]
    mov r3, #0x64
    bl func_02022714
    ldr r0, =data_020875a8
    mov r2, #0x0
    str r2, [r0, #0x104]
    ldr r1, =func_0201f4e8
    ldr r3, =data_0206b158
    stmia sp, {r1, r2}
    ldrb r3, [r3, #0x1]
    ldr r0, =data_02087640
    ldr r1, =data_0208760c
    mov r2, #0x5
    bl func_02022c30
    mov r0, #0x28
    str r0, [sp, #0x0]
    ldr r2, =data_0206b158
    ldr r0, =data_02087640
    ldrb r2, [r2, #0x1]
    mov r1, #0x5
    mov r3, #0x64
    bl func_02022714
    ldr r3, =data_020875a8
    mov r1, #0x1
    mov r0, #0x0
    str r1, [r3, #0xbc]
    add r2, r3, #0x66
    swpb r0, r0, [r2]
    ldr r0, [r3, #0x70]
    bl func_0201f4e8
    ldr r1, =data_020875a8
    mov r3, #0x0
    add r2, r1, #0x3
    swpb r1, r3, [r2]
    ldr r0, =data_02087640
    ldr r1, =data_02087688
    mov r2, #0x4
    bl func_02022d20
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_0201e64c
    ldr r1, =data_0206e690
    mov r0, #0x50
    ldr r5, [r1, #0x0]
    bl func_0204221c
    mov r1, r5
    bl func_0203d8d8
    rsb r0, r0, #0xf0
    mov r1, r0, lsl #0x10
    mov r0, #0x50
    mov r4, r1, lsr #0x10
    bl func_0204221c
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r1, #0x3
    str r1, [sp, #0x4]
    ldr r2, =data_020b8bbc
    mov r1, r4
    str r2, [sp, #0x8]
    mov r3, r5
    mov r2, #0xaa
    bl func_0203d740
L_0201e64c:
    ldr r0, =data_020875a8
    ldr r0, [r0, #0x24]
    cmp r0, #0x0
    ldrne r0, =data_020692ec
    ldrne r0, [r0, #0x0]
    cmpne r0, #0x1
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =data_0206b710
    mov r2, #0x0
    add r1, sp, #0x10
    str r2, [sp, #0x10]
    str r2, [sp, #0x14]
    str r2, [sp, #0x18]
    bl func_02004e98
    ldr r0, =data_0206b71c
    add r1, sp, #0x10
    bl func_02004e98
    ldr r0, =data_0206b72c
    add r1, sp, #0x10
    bl func_02004e98
    ldr r0, =data_0206b73c
    add r1, sp, #0x10
    bl func_02004e98
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
