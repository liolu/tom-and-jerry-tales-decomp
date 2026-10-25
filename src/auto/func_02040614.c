#include "m2c.h"

extern char data_0206dbcc[];
extern char data_0206dbd4[];
extern char data_0206dbdc[];
extern char data_0206dbe4[];
extern char data_0206dbec[];
extern char data_0206dbf4[];
extern char data_0206dbfc[];
extern char data_0206dc04[];
extern char data_0206dc10[];
extern char data_0206dc18[];
extern char data_0206dc24[];
extern char data_0206dc2c[];
extern char data_0206dc34[];
extern char data_021a7234[];
extern char data_021a7224[];
extern char data_021a72a4[];
extern char data_021a77a4[];
void func_020414d8(void);
void func_0204153c(void);
void func_020415b8(void);
void func_02041640(void);
void func_020416d0(void);
void func_020416d4(void);
void func_02041708(void);
void func_02041718(void);
void func_02041880(void);
void func_0204191c(void);
void func_02041920(void);
void func_020419fc(void);
void func_02041a80(void);
void func_02041a90(void);
void func_02041ab8(void);
void func_02041b10(void);
void func_02041b58(void);
void func_02041ba0(void);
void func_02041be4(void);
void func_02041bf0(void);
void func_02041c34(void);
void func_02041c94(void);
void func_02041cac(void);
void func_02041f28(void);
void func_02042044(void);
void func_02042050(void);
void func_02042058(void);
void func_020420d4(void);
void func_020420d8(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02040614(void) {
    stmdb sp!, {r3, lr}
    ldr r2, =data_0206dbcc
    ldr r0, =data_021a7234
    mov r1, #0x0
    str r2, [r0, #0x0]
    str r2, [r0, #0x4]
    str r1, [r0, #0x8]
    bl func_02041640
    ldr r0, =data_021a7224+0x10
    bl func_020415b8
    mov r3, #0x0
    ldr ip, =data_021a77a4
    mov r2, r3
L_02040648:
    str r2, [ip, #0x20]
    swpb r0, r2, [ip]
    add r1, ip, #0x10
    add r3, r3, #0x1
    cmp r3, #0x40
    swpb r0, r2, [r1]
    add ip, ip, #0x24
    blt L_02040648
    ldr r0, =data_0206dbd4
    ldr r1, =data_0206dbdc
    ldr r2, =func_020416d0
    bl func_0204153c
    ldr r0, =data_0206dbe4
    ldr r1, =data_0206dbdc
    ldr r2, =func_020416d4
    bl func_0204153c
    ldr r0, =data_0206dbec
    ldr r1, =data_0206dbdc
    ldr r2, =func_02041708
    bl func_0204153c
    ldr r0, =data_0206dbe4
    ldr r1, =data_0206dbf4
    ldr r2, =func_02041718
    bl func_0204153c
    ldr r0, =data_0206dbec
    ldr r1, =data_0206dbf4
    ldr r2, =func_02041880
    bl func_0204153c
    ldr r0, =data_0206dbfc
    ldr r1, =data_0206dbf4
    ldr r2, =func_0204191c
    bl func_0204153c
    ldr r0, =data_0206dc04
    ldr r1, =data_0206dbf4
    ldr r2, =func_02041920
    bl func_0204153c
    ldr r0, =data_0206dbf4
    ldr r2, =func_02041a90
    mov r1, r0
    bl func_0204153c
    ldr r0, =data_0206dbf4
    ldr r1, =data_0206dbcc
    ldr r2, =func_02041b10
    bl func_0204153c
    ldr r0, =data_0206dbdc
    ldr r1, =data_0206dbcc
    ldr r2, =func_02041ab8
    bl func_0204153c
    ldr r0, =data_0206dbf4
    ldr r1, =data_0206dc10
    ldr r2, =func_02041b58
    bl func_0204153c
    ldr r0, =data_0206dbf4
    ldr r1, =data_0206dbdc
    ldr r2, =func_02041ba0
    bl func_0204153c
    ldr r0, =data_0206dc18
    ldr r1, =data_0206dbf4
    ldr r2, =func_020419fc
    bl func_0204153c
    ldr r0, =data_0206dc24
    ldr r1, =data_0206dc18
    ldr r2, =func_02041a80
    bl func_0204153c
    mov r3, #0x0
    ldr r2, =data_021a72a4
    mov r1, r3
L_02040754:
    str r1, [r2, #0x10]
    add r3, r3, #0x1
    swpb r0, r1, [r2]
    cmp r3, #0x40
    add r2, r2, #0x14
    blt L_02040754
    ldr r0, =data_0206dbe4
    ldr r1, =func_02041be4
    bl func_020414d8
    ldr r0, =data_0206dbf4
    ldr r1, =func_02041c34
    bl func_020414d8
    ldr r0, =data_0206dbec
    ldr r1, =func_02042044
    bl func_020414d8
    ldr r0, =data_0206dbfc
    ldr r1, =func_02042050
    bl func_020414d8
    ldr r0, =data_0206dc04
    ldr r1, =func_02042058
    bl func_020414d8
    ldr r0, =data_0206dc24
    ldr r1, =func_020420d8
    bl func_020414d8
    ldr r0, =data_0206dbdc
    ldr r1, =func_02041c94
    bl func_020414d8
    ldr r0, =data_0206dbd4
    ldr r1, =func_02041bf0
    bl func_020414d8
    ldr r0, =data_0206dc2c
    ldr r1, =func_02041f28
    bl func_020414d8
    ldr r0, =data_0206dc18
    ldr r1, =func_02041cac
    bl func_020414d8
    ldr r0, =data_0206dc34
    ldr r1, =func_020420d4
    bl func_020414d8
    ldmia sp!, {r3, pc}
}
// clang-format on
