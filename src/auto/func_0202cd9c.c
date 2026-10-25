#include "m2c.h"

void func_020016a4(void);
void func_02003e84(void);
void func_02014ea4(void);
void func_02015194(void);
void func_02018990(void);
void func_020222b8(void);
void func_02022354(void);
void func_0202d1a8(void);
void func_0202d29c(void);
void func_020306fc(void);
void func_0203b96c(void);
void func_0203b980(void);
void func_0203ff1c(void);
void func_02040094(void);
void func_02040228(void);
void func_0204f490(void);
extern char data_0206cc1c[];
extern char data_0206cc38[];
extern char data_0206e6d4[];
extern char data_020881b8[];
extern char data_020881d8[];
// clang-format off
asm void func_0202cd9c(void) {
    stmdb sp!, {r4, lr}
    bl func_02040228
    ldr r0, =data_020881b8
    ldrb r0, [r0, #0x3]
    cmp r0, #0x0
    beq L_0202cdc8
    cmp r0, #0x1
    beq L_0202ce44
    cmp r0, #0x2
    beq L_0202cedc
    ldmia sp!, {r4, pc}
L_0202cdc8:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    ldmeqia sp!, {r4, pc}
    ldr r0, =data_020881b8
    ldr r0, [r0, #0x14]
    cmp r0, #0x0
    beq L_0202ce34
    ldr r0, =data_0206cc1c
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_0202ce18
    mov r0, #0x0
    bl func_0203b96c
    mov r0, #0x0
    bl func_0203b980
    bl func_0202d1a8
    bl func_02018990
    bl func_02015194
    bl func_02014ea4
L_0202ce18:
    ldr r0, =data_020881b8
    mov r2, #0x1
    add ip, r0, #0x3
    mov r0, #0x0
    mov r1, #0x10
    swpb r3, r2, [ip]
    bl func_020222b8
L_0202ce34:
    ldr r0, =data_020881b8
    mov r1, #0x0
    str r1, [r0, #0x14]
    ldmia sp!, {r4, pc}
L_0202ce44:
    ldr r0, =data_0206cc1c
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_0202ce94
    bl func_02015194
    bl func_02014ea4
    bl func_020016a4
    bl func_02003e84
    mov r0, #0x3
    bl func_020306fc
    cmp r0, #0x0
    beq L_0202ce94
    ldr r0, =data_020881b8
    mov r3, #0x2
    add ip, r0, #0x3
    sub r0, r3, #0x12
    mov r1, #0x1e
    mov r2, #0x3
    swpb r3, r3, [ip]
    bl func_020222b8
L_0202ce94:
    ldr r1, =data_020881b8
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    bne L_0202ceac
    bl func_0202d29c
    ldmia sp!, {r4, pc}
L_0202ceac:
    ldr r0, =data_0206cc1c
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_0202cec8
    ldrneb r0, [r1, #0x1]
    cmpne r0, #0x0
    ldmeqia sp!, {r4, pc}
L_0202cec8:
    ldr r0, =data_020881b8
    mov r2, #0x2
    add r1, r0, #0x3
    swpb r0, r2, [r1]
    ldmia sp!, {r4, pc}
L_0202cedc:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    ldmeqia sp!, {r4, pc}
    bl func_02040228
    ldr r2, =data_020881b8
    ldr r1, =data_0206e6d4
    ldrb r2, [r2, #0x5]
    add r1, r1, #0x5e
    mov r4, r0
    swpb r0, r2, [r1]
    ldr r0, =data_020881d8
    ldr r1, =data_0206cc38
    mov r2, #0x0
    mov r3, #0x8
    bl func_0204f490
    ldr r0, [r4, #0x1c]
    ldr r2, =data_020881d8
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    ldmia sp!, {r4, pc}
}
// clang-format on
