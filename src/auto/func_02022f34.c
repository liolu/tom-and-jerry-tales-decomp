#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020015f0();
extern void func_0200160c();
extern void func_02001654();
extern void func_02002b7c();
extern void func_02003e84();
extern void func_02004b44();
extern void func_02014cf0();
extern void func_02014e34();
extern void func_02014ea4();
extern void func_020219d8();
extern void func_020222b8();
extern void func_020223e8();
extern void func_02022714();
extern void func_02022c30();
extern void func_02022d20();
extern void func_02024f08();
extern void func_0202801c();
extern void func_0202fc98();
extern void func_02030044();
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
extern void func_0203cd2c();
extern void func_0203cd5c();
extern void func_0203cf48();
extern void func_0203cf6c();
extern void func_0203cff0();
extern void func_0203d098();
extern void func_0203d498();
extern void func_0203feb4();
extern void func_0203ff6c();
extern void func_020401e8();
extern void func_02043fd0();
extern void func_0204d600();
extern void func_0204f490();
extern void func_02051868();
extern void STD_CopyString();
extern char data_02064088[];
extern char data_0206b918[];
extern char data_0206badc[];
extern char data_0206bae0[];
extern char data_0206bae4[];
extern char data_0206bae8[];
extern char data_0206bb14[];
extern char data_0206bb1c[];
extern char data_0206bb24[];
extern char data_0206bb3c[];
extern char data_0206c1c0[];
extern char data_0206c1dc[];
extern char data_0206c1f8[];
extern char data_0206c218[];
extern char data_0206c220[];
extern char data_0206c230[];
extern char data_0206c234[];
extern char data_0206c240[];
extern char data_0206c250[];
extern char data_0206c258[];
extern char data_0206c260[];
extern char data_0206e680[];
extern char data_0206e690[];
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_0206e6d4[];
extern char data_02086b08[];
extern char data_020877d0[];
extern char data_02087838[];
extern char data_0208786c[];
extern char data_020878a0[];
extern char data_020878d4[];
extern char data_02087908[];
extern char data_02087950[];
extern char data_02087998[];
extern char data_020879e0[];
extern char data_02087a28[];
extern char data_02087a70[];
extern char data_02087ab8[];
extern char data_02087b00[];
extern char data_02087b48[];
extern char data_02087b90[];
extern char data_02087bd8[];
extern char data_02087c20[];
extern char data_02087c68[];
extern char data_02087cb0[];
extern char data_02087cf8[];
extern char data_02087d40[];
extern char data_02087d88[];
extern char data_020b8b44[];
extern char data_020b8b6c[];
extern char data_020b8b94[];
extern char data_020b8bbc[];
extern char func_020252a4[];
extern char func_0202541c[];
extern char func_02025638[];
// clang-format off
asm void func_02022f34(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x30
    bl func_02051868
    bl func_0203cd2c
    mov r0, #0x5
    bl func_020219d8
    mov r3, #0x4000000
    ldr r0, [r3, #0x0]
    add r4, r3, #0x1000
    bic r0, r0, #0x1f00
    orr r0, r0, #0x1100
    str r0, [r3, #0x0]
    ldr r1, [r4, #0x0]
    ldr r0, =data_0206c1c0
    bic r1, r1, #0x1f00
    orr r1, r1, #0x1900
    str r1, [r4, #0x0]
    ldr r2, [r3, #0x0]
    ldr r1, =data_0206e690
    bic r2, r2, #0xe000
    str r2, [r3, #0x0]
    ldr r3, [r4, #0x0]
    ldr r2, =data_0206e6a4
    bic r3, r3, #0xe000
    str r3, [r4, #0x0]
    ldr r3, =data_0206e698
    bl func_02030f40
    ldr r0, =data_0206c1dc
    ldr r1, =data_0206e680
    ldr r2, =data_0206e6a4
    ldr r3, =data_0206e698
    bl func_02030f40
    mov r0, #0xc
    str r0, [sp, #0x0]
    mov r2, #0x0
    str r2, [sp, #0x4]
    str r2, [sp, #0x8]
    str r2, [sp, #0xc]
    mov r0, #0x1
    mov r1, #0x3
    mov r3, r2
    bl func_0203cf6c
    mov r0, #0xe
    str r0, [sp, #0x0]
    mov r0, #0x4
    str r0, [sp, #0x4]
    mov r0, #0x2
    str r0, [sp, #0x8]
    mov r1, r0
    mov r2, #0x0
    mov r3, #0x1
    bl func_0203cff0
    mov r0, #0xd
    str r0, [sp, #0x0]
    mov r0, #0x2
    str r0, [sp, #0x4]
    mov r1, #0x1
    str r1, [sp, #0x8]
    mov r0, #0x0
    mov r2, r0
    mov r3, r1
    bl func_0203cff0
    mov r0, #0xc
    str r0, [sp, #0x0]
    mov r2, #0x0
    str r2, [sp, #0x4]
    str r2, [sp, #0x8]
    str r2, [sp, #0xc]
    mov r0, #0x4
    mov r1, #0x7
    mov r3, r2
    bl func_0203cf6c
    mov r0, #0xe
    str r0, [sp, #0x0]
    mov r1, #0x4
    str r1, [sp, #0x4]
    mov r0, #0x3
    mov r2, #0x0
    mov r3, #0x1
    str r0, [sp, #0x8]
    bl func_0203cff0
    mov r0, #0x2
    bl func_0203cf48
    mov r1, r0
    mov r4, #0xf
    ldr r0, =0x4000050
    mov r2, #0x1
    mov r3, #0x0
    str r4, [sp, #0x0]
    bl func_0204d600
    ldr r2, =0x4000008
    ldr r0, =data_020b8b6c
    ldrh r1, [r2, #0x0]
    bic r1, r1, #0x3
    orr r1, r1, #0x3
    strh r1, [r2, #0x0]
    bl func_0203d098
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x28]
    bl func_0203cd5c
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0xa0]
    bl func_0203cd5c
    mov r0, #0x0
    bl func_0203b96c
    mov r0, #0x0
    bl func_0203b980
    mov r0, #0x1
    bl func_0203b96c
    mov r0, #0x0
    bl func_0203b980
    bl func_0202801c
    mov r1, #0x0
    ldr r0, =0x4000050
    strh r1, [r0, #0x0]
    add r0, r0, #0x1000
    strh r1, [r0, #0x0]
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
    bl func_0200160c
    mov r0, #0x7
    bl func_02001654
    bl func_02002b7c
    bl func_020015f0
    ldr r1, =0x4001000
    mov r0, #0x4000000
    ldr r1, [r1, #0x0]
    ldr r0, [r0, #0x0]
    and r1, r1, #0x1f00
    mov r3, r1, lsr #0x8
    and r0, r0, #0x1f00
    mov r2, r0, lsr #0x8
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r1, #0x3
    bl func_0202fc98
    bl func_02024f08
    bl func_02030044
    ldr r4, =data_020b8bbc
    ldr r0, =data_0206c1f8
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    ldr r0, =data_02087838
    bl func_020223e8
    ldr r0, =data_020878d4
    bl func_020223e8
    ldr r0, =data_020878a0
    bl func_020223e8
    ldr r0, =data_0208786c
    bl func_020223e8
    ldr r1, =func_020252a4
    mov r0, #0x0
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r2, =data_0206bb1c
    ldr r3, =data_0206bb3c
    ldrb r2, [r2, #0x0]
    ldrb r3, [r3, #0x0]
    ldr r0, =data_02087950
    ldr r1, =data_02087838
    bl func_02022c30
    ldr r1, =data_0206bb24
    ldr r2, =data_0206bb3c
    ldrb r3, [r1, #0x0]
    ldr r1, =data_0206bb1c
    ldr r0, =data_02087950
    str r3, [sp, #0x0]
    ldr r3, =data_0206bb14
    ldrb r1, [r1, #0x0]
    ldrb r2, [r2, #0x0]
    ldrb r3, [r3, #0x0]
    bl func_02022714
    ldr r0, =data_020877d0
    mov r2, #0x0
    str r2, [r0, #0x1a4]
    ldr r1, =func_020252a4
    ldr r3, =data_0206bb3c
    stmia sp, {r1, r2}
    ldr r2, =data_0206bb1c
    ldrb r3, [r3, #0x1]
    ldrb r2, [r2, #0x1]
    ldr r0, =data_02087ab8
    ldr r1, =data_02087838
    bl func_02022c30
    ldr r1, =data_0206bb24
    ldr r2, =data_0206bb3c
    ldrb r3, [r1, #0x1]
    ldr r1, =data_0206bb1c
    ldr r0, =data_02087ab8
    str r3, [sp, #0x0]
    ldr r3, =data_0206bb14
    ldrb r1, [r1, #0x1]
    ldrb r2, [r2, #0x1]
    ldrb r3, [r3, #0x1]
    bl func_02022714
    ldr r0, =data_020877d0
    mov r2, #0x1
    str r2, [r0, #0x30c]
    ldr r1, =func_020252a4
    mov r0, #0x0
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r2, =data_0206bb1c
    ldr r3, =data_0206bb3c
    ldrb r2, [r2, #0x2]
    ldrb r3, [r3, #0x2]
    ldr r0, =data_02087d88
    ldr r1, =data_02087838
    bl func_02022c30
    ldr r1, =data_0206bb24
    ldr r2, =data_0206bb3c
    ldrb r3, [r1, #0x2]
    ldr r1, =data_0206bb1c
    ldr r0, =data_02087d88
    str r3, [sp, #0x0]
    ldr r3, =data_0206bb14
    ldrb r1, [r1, #0x2]
    ldrb r2, [r2, #0x2]
    ldrb r3, [r3, #0x2]
    bl func_02022714
    ldr r0, =data_020877d0
    mov r2, #0x2
    ldr r1, =func_020252a4
    str r2, [r0, #0x5dc]
    str r1, [sp, #0x0]
    mov r0, #0x0
    ldr r1, =data_0206bb1c
    str r0, [sp, #0x4]
    ldr r0, =data_0206bb3c
    ldrb r2, [r1, #0x3]
    ldrb r3, [r0, #0x3]
    ldr r0, =data_02087cb0
    ldr r1, =data_02087838
    bl func_02022c30
    ldr r0, =data_0206bb24
    ldr r1, =data_0206bb1c
    ldrb r3, [r0, #0x3]
    ldr r2, =data_0206bb3c
    ldr r0, =data_0206bb14
    str r3, [sp, #0x0]
    ldrb r1, [r1, #0x3]
    ldrb r2, [r2, #0x3]
    ldrb r3, [r0, #0x3]
    ldr r0, =data_02087cb0
    bl func_02022714
    ldr r0, =data_020877d0
    mov r2, #0x3
    ldr r1, =func_020252a4
    str r2, [r0, #0x504]
    str r1, [sp, #0x0]
    mov r0, #0x0
    ldr r1, =data_0206bb1c
    str r0, [sp, #0x4]
    ldr r0, =data_0206bb3c
    ldrb r2, [r1, #0x4]
    ldrb r3, [r0, #0x4]
    ldr r0, =data_02087b48
    ldr r1, =data_02087838
    bl func_02022c30
    ldr r0, =data_0206bb24
    ldr r1, =data_0206bb1c
    ldrb r3, [r0, #0x4]
    ldr r0, =data_02087b48
    ldr r2, =data_0206bb3c
    str r3, [sp, #0x0]
    ldrb r1, [r1, #0x4]
    ldrb r2, [r2, #0x4]
    ldr r3, =data_0206bb14
    ldrb r3, [r3, #0x4]
    bl func_02022714
    mov r2, #0x4
    ldr r0, =data_020877d0
    ldr r1, =func_020252a4
    str r2, [r0, #0x39c]
    str r1, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r0, =data_02087bd8
    ldr r1, =data_02087838
    ldr r2, =data_0206bb1c
    ldr r3, =data_0206bb3c
    ldrb r2, [r2, #0x5]
    ldrb r3, [r3, #0x5]
    bl func_02022c30
    ldr r1, =data_0206bb24
    ldr r0, =data_02087bd8
    ldrb r3, [r1, #0x5]
    ldr r1, =data_0206bb1c
    ldr r2, =data_0206bb3c
    str r3, [sp, #0x0]
    ldrb r1, [r1, #0x5]
    ldrb r2, [r2, #0x5]
    ldr r3, =data_0206bb14
    ldrb r3, [r3, #0x5]
    bl func_02022714
    mov r2, #0x5
    ldr r0, =data_020877d0
    ldr r1, =func_020252a4
    str r2, [r0, #0x42c]
    str r1, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r0, =data_02087c68
    ldr r1, =data_02087838
    ldr r2, =data_0206bb1c
    ldr r3, =data_0206bb3c
    ldrb r2, [r2, #0x6]
    ldrb r3, [r3, #0x6]
    bl func_02022c30
    ldr r1, =data_0206bb24
    ldr r0, =data_02087c68
    ldrb r3, [r1, #0x6]
    ldr r1, =data_0206bb1c
    ldr r2, =data_0206bb3c
    str r3, [sp, #0x0]
    ldrb r1, [r1, #0x6]
    ldrb r2, [r2, #0x6]
    ldr r3, =data_0206bb14
    ldrb r3, [r3, #0x6]
    bl func_02022714
    ldr r0, =data_020877d0
    mov r2, #0x6
    ldr r1, =func_020252a4
    str r2, [r0, #0x4bc]
    str r1, [sp, #0x0]
    mov r0, #0x0
    ldr r1, =data_0206bb1c
    str r0, [sp, #0x4]
    ldr r0, =data_0206bb3c
    ldrb r2, [r1, #0x7]
    ldrb r3, [r0, #0x7]
    ldr r0, =data_02087cf8
    ldr r1, =data_02087838
    bl func_02022c30
    ldr r0, =data_0206bb14
    ldr r1, =data_0206bb1c
    ldrb r3, [r0, #0x7]
    ldr r2, =data_0206bb3c
    ldr r0, =data_02087cf8
    str r3, [sp, #0x0]
    ldrb r1, [r1, #0x7]
    ldrb r2, [r2, #0x7]
    bl func_02022714
    ldr r0, =data_020877d0
    mov r2, #0xa
    ldr r1, =func_0202541c
    str r2, [r0, #0x54c]
    str r1, [sp, #0x0]
    mov r0, #0x0
    ldr r1, =data_0206bae8
    str r0, [sp, #0x4]
    ldr r0, =data_0206bae0
    ldrb r2, [r1, #0x0]
    ldrb r3, [r0, #0x0]
    ldr r0, =data_02087a70
    ldr r1, =data_020878d4
    bl func_02022c30
    ldr r0, =data_0206bae4
    ldr r1, =data_0206bae8
    ldrb r3, [r0, #0x0]
    ldr r0, =data_02087a70
    ldr r2, =data_0206bae0
    str r3, [sp, #0x0]
    ldrb r1, [r1, #0x0]
    ldrb r2, [r2, #0x0]
    ldr r3, =data_0206badc
    ldrb r3, [r3, #0x0]
    bl func_02022714
    mov r2, #0xc
    ldr r0, =data_020877d0
    ldr r1, =func_0202541c
    str r2, [r0, #0x2c4]
    str r1, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r0, =data_02087998
    ldr r1, =data_020878d4
    ldr r2, =data_0206bae8
    ldr r3, =data_0206bae0
    ldrb r2, [r2, #0x1]
    ldrb r3, [r3, #0x1]
    bl func_02022c30
    ldr r1, =data_0206bae4
    ldr r0, =data_02087998
    ldrb r3, [r1, #0x1]
    ldr r1, =data_0206bae8
    ldr r2, =data_0206bae0
    str r3, [sp, #0x0]
    ldrb r1, [r1, #0x1]
    ldrb r2, [r2, #0x1]
    ldr r3, =data_0206badc
    ldrb r3, [r3, #0x1]
    bl func_02022714
    mov r2, #0xd
    ldr r0, =data_020877d0
    ldr r1, =func_0202541c
    str r2, [r0, #0x1ec]
    str r1, [sp, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r0, =data_02087c20
    ldr r1, =data_020878d4
    ldr r2, =data_0206bae8
    ldr r3, =data_0206bae0
    ldrb r2, [r2, #0x2]
    ldrb r3, [r3, #0x2]
    bl func_02022c30
    ldr r1, =data_0206bae4
    ldr r0, =data_02087c20
    ldrb r3, [r1, #0x2]
    ldr r1, =data_0206bae8
    ldr r2, =data_0206bae0
    str r3, [sp, #0x0]
    ldrb r1, [r1, #0x2]
    ldrb r2, [r2, #0x2]
    ldr r3, =data_0206badc
    ldrb r3, [r3, #0x2]
    bl func_02022714
    ldr r0, =data_020877d0
    mov r2, #0xe
    str r2, [r0, #0x474]
    ldr r1, =func_0202541c
    mov r0, #0x0
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_0206bae8
    ldr r0, =data_0206bae0
    ldrb r2, [r1, #0x3]
    ldrb r3, [r0, #0x3]
    ldr r0, =data_02087908
    ldr r1, =data_020878d4
    bl func_02022c30
    ldr r0, =data_0206bae4
    ldr r1, =data_0206bae8
    ldrb r3, [r0, #0x3]
    ldr r2, =data_0206bae0
    ldr r0, =data_0206badc
    str r3, [sp, #0x0]
    ldrb r3, [r0, #0x3]
    ldrb r1, [r1, #0x3]
    ldrb r2, [r2, #0x3]
    ldr r0, =data_02087908
    bl func_02022714
    ldr r0, =data_020877d0
    mov r1, #0xf
    str r1, [r0, #0x15c]
    ldr r2, =func_0202541c
    ldr r0, =data_02087b90
    str r2, [sp, #0x0]
    mov r4, #0x0
    ldr r1, =data_020878d4
    mov r2, #0x40
    mov r3, #0x4c
    str r4, [sp, #0x4]
    bl func_02022c30
    mov r1, #0x20
    str r1, [sp, #0x0]
    ldr r0, =data_02087b90
    mov r1, #0x40
    mov r2, #0x4c
    mov r3, #0x80
    bl func_02022714
    ldr r0, =data_020877d0
    mov r2, #0x11
    str r2, [r0, #0x3e4]
    ldr r1, =func_0202541c
    mov r0, r4
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r0, =data_02087d40
    ldr r1, =data_020878d4
    mov r2, #0x9
    mov r3, #0x9c
    bl func_02022c30
    ldr r1, =data_0206bb14
    ldr r2, =data_0206bb3c
    ldrb r3, [r1, #0x7]
    ldr r1, =data_0206bb1c
    ldr r0, =data_02087d40
    str r3, [sp, #0x0]
    ldrb r1, [r1, #0x7]
    ldrb r2, [r2, #0x7]
    bl func_02022714
    ldr r0, =data_020877d0
    mov r2, #0x9
    str r2, [r0, #0x594]
    ldr r1, =func_02025638
    mov r0, r4
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r0, =data_02087b00
    ldr r1, =data_0208786c
    mov r2, #0x20
    mov r3, #0x87
    bl func_02022c30
    mov r3, #0x40
    ldr r0, =data_02087b00
    mov r1, #0x20
    mov r2, #0x87
    str r3, [sp, #0x0]
    bl func_02022714
    ldr r0, =data_020877d0
    mov r1, #0x12
    str r1, [r0, #0x354]
    ldr r2, =func_02025638
    ldr r0, =data_020879e0
    str r2, [sp, #0x0]
    ldr r1, =data_0208786c
    mov r2, #0x60
    mov r3, #0x87
    str r4, [sp, #0x4]
    bl func_02022c30
    mov r3, #0x40
    ldr r0, =data_020879e0
    mov r1, #0x60
    mov r2, #0x87
    str r3, [sp, #0x0]
    bl func_02022714
    ldr r0, =data_020877d0
    mov r1, #0x13
    str r1, [r0, #0x234]
    ldr r2, =func_02025638
    ldr r0, =data_02087a28
    str r2, [sp, #0x0]
    ldr r1, =data_0208786c
    mov r2, #0xa0
    mov r3, #0x87
    str r4, [sp, #0x4]
    bl func_02022c30
    mov r3, #0x40
    ldr r0, =data_02087a28
    mov r1, #0xa0
    mov r2, #0x87
    str r3, [sp, #0x0]
    bl func_02022714
    ldr r1, =data_020877d0
    mov r2, #0xb
    str r2, [r1, #0x27c]
    ldr r0, =data_02087ab8
    ldr r1, =data_02087c68
    mov r2, #0x4
    bl func_02022d20
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x1e]
    tst r0, #0x1
    beq L_02023818
    ldr r0, =data_02087950
    ldr r1, =data_02087cf8
    mov r2, #0x5
    mov r4, #0x1
    bl func_02022d20
    ldr r0, =data_02087950
    ldr r1, =data_02087c68
    mov r2, #0x4
    bl func_02022d20
L_02023818:
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x1e]
    tst r0, #0x2
    beq L_0202384c
    ldr r0, =data_02087ab8
    ldr r1, =data_02087950
    mov r2, #0x5
    mov r4, #0x2
    bl func_02022d20
    ldr r0, =data_02087ab8
    ldr r1, =data_02087c68
    mov r2, #0x4
    bl func_02022d20
L_0202384c:
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x1e]
    tst r0, #0x4
    beq L_02023880
    ldr r0, =data_02087d88
    ldr r1, =data_02087950
    mov r2, #0x4
    mov r4, #0x3
    bl func_02022d20
    ldr r0, =data_02087d88
    ldr r1, =data_02087cf8
    mov r2, #0x5
    bl func_02022d20
L_02023880:
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x1e]
    tst r0, #0x8
    beq L_020238d4
    mov r4, #0x4
    ldr r0, =data_02087950
    ldr r1, =data_02087cb0
    mov r2, r4
    bl func_02022d20
    ldr r0, =data_02087cb0
    ldr r1, =data_02087c68
    mov r2, r4
    bl func_02022d20
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x1e]
    tst r0, #0x10
    beq L_020238d4
    ldr r0, =data_02087b48
    ldr r1, =data_02087cb0
    mov r2, #0x5
    bl func_02022d20
L_020238d4:
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x1e]
    tst r0, #0x10
    beq L_02023928
    ldr r0, =data_02087ab8
    ldr r1, =data_02087b48
    mov r2, #0x4
    mov r4, #0x5
    bl func_02022d20
    ldr r0, =data_02087b48
    ldr r1, =data_02087c68
    mov r2, #0x4
    bl func_02022d20
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x1e]
    tst r0, #0x20
    beq L_02023928
    ldr r0, =data_02087b48
    ldr r1, =data_02087bd8
    mov r2, r4
    bl func_02022d20
L_02023928:
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x1e]
    tst r0, #0x20
    beq L_0202394c
    ldr r0, =data_02087cb0
    ldr r1, =data_02087bd8
    mov r2, #0x4
    mov r4, #0x6
    bl func_02022d20
L_0202394c:
    ldr ip, =data_0206c230
    ldr r1, =data_0206c218
    ldr r2, =data_0206c220
    add r0, sp, #0x10
    mov r3, r4
    str ip, [sp, #0x0]
    bl func_0204f490
    ldr r4, =data_020b8b94
    ldr r1, =data_0206e698
    add r0, sp, #0x10
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    ldr r0, =data_02064088
    bl func_0203ff6c
    ldr r0, =data_0206c234
    bl func_0203feb4
    bl func_020401e8
    mov r4, r0
    ldr r0, =data_0206c240
    bl func_0203feb4
    bl func_020401e8
    ldr r2, [r4, #0x18]
    ldr r1, =data_0206e6d4
    str r2, [r0, #0x1c]
    ldrsb r2, [r1, #0xa0]
    cmp r2, #0x0
    bne L_02023a1c
    mov r0, #0x2
    bl func_02014cf0
    mov r4, r0
    mov r1, #0x2
    ldr r0, =data_0206c250
    str r1, [r4, #0x0]
    mov r1, #0x1
    str r1, [r4, #0x4]
    bl func_02043fd0
    strh r0, [r4, #0x28]
    ldr r1, =data_0206c250
    add r0, r4, #0x40
    bl STD_CopyString
    mov r0, r4
    bl func_02014e34
    ldr r0, =data_0206e6d4
    mvn r2, #0x0
    add r1, r0, #0xa0
    swpb r0, r2, [r1]
    ldr r1, =data_02086b08
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_02023b38
L_02023a1c:
    cmp r2, #0x1
    bne L_02023a80
    mov r0, #0x2
    bl func_02014cf0
    mov r4, r0
    mov r1, #0x2
    ldr r0, =data_0206c258
    str r1, [r4, #0x0]
    mov r1, #0x1
    str r1, [r4, #0x4]
    bl func_02043fd0
    strh r0, [r4, #0x28]
    ldr r1, =data_0206c258
    add r0, r4, #0x40
    bl STD_CopyString
    mov r0, r4
    bl func_02014e34
    ldr r0, =data_0206e6d4
    mvn r2, #0x0
    add r1, r0, #0xa0
    swpb r0, r2, [r1]
    ldr r1, =data_02086b08
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_02023b38
L_02023a80:
    mvn r0, #0x0
    cmp r2, r0
    bne L_02023b38
    ldrb r0, [r1, #0x5f]
    mov r0, r0, lsl #0x1a
    movs r0, r0, lsr #0x1f
    bne L_02023b38
    mov r0, #0x2
    bl func_02014cf0
    ldr r1, =data_0206e6d4
    mov r4, r0
    ldrb r0, [r1, #0x5f]
    add r1, r1, #0x5f
    mov r2, #0x2
    orr r0, r0, #0x20
    swpb r0, r0, [r1]
    ldr r0, =data_0206c260
    str r2, [r4, #0x0]
    mov r1, #0x1
    str r1, [r4, #0x4]
    bl func_02043fd0
    strh r0, [r4, #0x28]
    ldr r1, =data_0206c260
    add r0, r4, #0x40
    bl STD_CopyString
    mov r0, r4
    bl func_02014e34
    ldr r0, =data_0206e6d4
    ldr r2, =data_020877d0
    add r1, r0, #0xa0
    mvn r0, #0x0
    swpb r0, r0, [r1]
    ldr r3, =data_02086b08
    mov r4, #0x1
    add r2, r2, #0x13
    ldr r0, =data_0206c260
    swpb r1, r4, [r3]
    swpb r1, r4, [r2]
    bl func_02043fd0
    ldr r1, =data_020877d0
    sub r0, r0, #0x2
    add r1, r1, #0x15
    swpb r0, r0, [r1]
    ldr r0, =data_0206b918
    mov r1, #0x6
    str r1, [r0, #0x4]
L_02023b38:
    bl func_02014ea4
    bl func_02003e84
    bl func_02004b44
    mov r0, #0x0
    mov r1, #0x10
    mov r2, #0x1
    bl func_020222b8
    mov r0, #0x0
    mov r1, #0x10
    mov r2, #0x2
    bl func_020222b8
    add sp, sp, #0x30
    ldmfd sp!, {r4, pc}
}
// clang-format on
