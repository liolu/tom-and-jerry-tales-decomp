#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020016a4();
extern void func_02003e84();
extern void func_0200a0a0();
extern void func_0200a0f8();
extern void func_0202203c();
extern void func_020222b8();
extern void func_02022354();
extern void func_0202ddfc();
extern void func_0202dec8();
extern void func_020306fc();
extern void func_02030878();
extern void func_0203d098();
extern void func_0203d498();
extern void func_0203d740();
extern void func_0203d8d8();
extern void func_0203f9a4();
extern void func_0204221c();
extern void func_0204398c();
extern void func_02043ab0();
extern void func_02043fd0();
extern void func_020442a8();
extern void func_02044460();
extern void func_02045d74();
extern void func_0205bdf4();
extern char data_0206ccc8[];
extern char data_0206ccd0[];
extern char data_0206ccfc[];
extern char data_0206cd04[];
extern char data_0206cd0c[];
extern char data_0206cd14[];
extern char data_0206dd38[];
extern char data_0206e668[];
extern char data_0206e680[];
extern char data_0206e698[];
extern char data_020881e0[];
extern char data_02088404[];
extern char data_020b8b44[];
extern char data_020b8b6c[];
// clang-format off
asm void func_0202d730(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    mov r0, #0x0
    bl func_020306fc
    cmp r0, #0x0
    beq L_0202d778
    ldr r0, =data_020881e0
    ldrb r0, [r0, #0x1]
    cmp r0, #0x2
    bhs L_0202d778
    mvn r0, #0xf
    mov r1, #0xf
    mov r2, #0x1
    bl func_020222b8
    ldr r0, =data_020881e0
    mov r2, #0x7
    add r1, r0, #0x1
    swpb r0, r2, [r1]
L_0202d778:
    ldr r1, =data_020881e0
    ldrb r0, [r1, #0x1]
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_0202dd38
L_0202d78c:
    b L_0202d7ac
    b L_0202d8e4
    b L_0202da2c
    b L_0202db0c
    b L_0202db74
    b L_0202dbc8
    b L_0202dc10
    b L_0202dc50
L_0202d7ac:
    bl func_0202ddfc
    ldr r0, =data_020881e0
    ldr r1, =data_0206e668
    ldrb r2, [r0, #0x4]
    mov r0, #0x1
    swpb r0, r0, [r1]
    cmp r2, #0x0
    beq L_0202d850
    ldr r0, =data_02088404
    ldr r1, =data_0206ccc8
    bl func_0205bdf4
    ldr r0, =data_02088404
    bl func_0204398c
    ldr r0, =data_02088404
    bl func_02043fd0
    mov r2, r0, lsl #0xc
    ldr r1, =data_020881e0
    ldr r0, =data_02088404
    str r2, [r1, #0x1c]
    bl func_02043ab0
    mov r2, #0x0
    ldr r1, =data_020881e0
    ldr r0, =data_0206ccd0
    add r3, r1, #0x7
    swpb r1, r2, [r3]
    ldr r3, =data_020b8b6c
    ldr r1, =data_0206e698
    str r3, [sp, #0x0]
    mov r3, #0x1
    bl func_0203d498
    mov r0, #0x0
    mov r1, #0x8
    mov r2, #0x2
    bl func_020222b8
    mov r0, #0x4
    ldr r2, =data_020881e0
    mov r3, #0x0
    add r1, r2, #0x1
    swpb r0, r0, [r1]
    str r3, [r2, #0x14]
    b L_0202d8c8
L_0202d850:
    ldr r0, =data_02088404
    ldr r1, =data_0206ccfc
    bl func_0205bdf4
    ldr r0, =data_02088404
    bl func_0204398c
    ldr r0, =data_02088404
    bl func_02043fd0
    mov r2, r0, lsl #0xc
    ldr r1, =data_020881e0
    ldr r0, =data_02088404
    str r2, [r1, #0x1c]
    bl func_02043ab0
    mov r2, #0x0
    ldr r1, =data_020881e0
    ldr r0, =data_0206ccd0
    add r3, r1, #0x7
    swpb r1, r2, [r3]
    ldr r3, =data_020b8b6c
    ldr r1, =data_0206e698
    str r3, [sp, #0x0]
    mov r3, #0x1
    bl func_0203d498
    mov r4, #0x1
    ldr r2, =data_020881e0
    mov r3, #0x0
    add r1, r2, #0x1
    swpb r0, r4, [r1]
    add r1, r2, #0x4
    str r3, [r2, #0x14]
    swpb r0, r4, [r1]
L_0202d8c8:
    mvn r0, #0x0
    bl func_0200a0a0
    mov r0, #0x0
    mov r1, #0xf
    mov r2, #0x3
    bl func_020222b8
    b L_0202dd38
L_0202d8e4:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    beq L_0202dd38
    bl func_020016a4
    ldr r1, =data_020881e0
    ldr r0, =data_0206dd38
    ldr r2, [r1, #0x1c]
    ldr r0, [r0, #0x0]
    sub r0, r2, r0
    str r0, [r1, #0x1c]
    cmp r0, #0x0
    bgt L_0202dd38
    ldr r0, [r1, #0x14]
    cmp r0, #0x0
    beq L_0202d9e4
    ldr r0, =data_02088404
    bl func_02045d74
    ldr r0, =data_02088404
    ldr r1, =data_0206cd04
    bl func_0205bdf4
    ldr r0, =data_02088404
    bl func_0204398c
    ldr r0, =data_02088404
    bl func_02043fd0
    mov r2, r0, lsl #0xc
    ldr r1, =data_020881e0
    ldr r0, =data_02088404
    str r2, [r1, #0x1c]
    bl func_02043ab0
    mov r3, #0x2
    ldr r0, =data_020881e0
    ldr r2, =data_0206e680
    add r1, r0, #0x1
    swpb r0, r3, [r1]
    ldr r5, [r2, #0x0]
    mov r0, #0xc
    bl func_0204221c
    mov r4, r0
    ldr r2, [r5, #0x14]
    mov r1, r5
    ldrb r2, [r5, r2]
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, asr #0x1
    rsb r2, r2, #0xa5
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
    b L_0202dd38
L_0202d9e4:
    ldr r0, =data_02088404
    bl func_02045d74
    ldr r0, =data_02088404
    ldr r1, =data_0206cd0c
    bl func_0205bdf4
    ldr r0, =data_02088404
    bl func_0204398c
    ldr r0, =data_02088404
    bl func_02043fd0
    mov r2, r0, lsl #0xc
    ldr r1, =data_020881e0
    ldr r0, =data_02088404
    str r2, [r1, #0x1c]
    bl func_02043ab0
    ldr r0, =data_020881e0
    mov r1, #0x1
    str r1, [r0, #0x14]
    b L_0202dd38
L_0202da2c:
    ldr r0, =data_0206dd38
    ldr r2, [r1, #0x1c]
    ldr r0, [r0, #0x0]
    sub r0, r2, r0
    str r0, [r1, #0x1c]
    bl func_02030878
    cmp r0, #0x0
    bne L_0202da5c
    mov r0, #0x0
    bl func_020306fc
    cmp r0, #0x0
    beq L_0202da8c
L_0202da5c:
    mov r0, #0xc
    bl func_0204221c
    ldr r1, =data_0206e680
    ldr r1, [r1, #0x0]
    bl func_0203d8d8
    ldr r0, =data_02088404
    mov r1, #0x0
    bl func_020442a8
    ldr r0, =data_020b8b44
    bl func_0203d098
    mov r0, #0x6
    bl func_0200a0f8
L_0202da8c:
    ldr r0, =data_0206cd04
    bl func_02044460
    cmp r0, #0x0
    bne L_0202dae4
    ldr r0, =data_02088404
    bl func_02045d74
    ldr r0, =data_02088404
    ldr r1, =data_0206cd14
    bl func_0205bdf4
    ldr r0, =data_02088404
    bl func_0204398c
    ldr r0, =data_02088404
    bl func_02043fd0
    mov r2, r0, lsl #0xc
    ldr r1, =data_020881e0
    ldr r0, =data_02088404
    str r2, [r1, #0x1c]
    bl func_02043ab0
    ldr r0, =data_020881e0
    mov r2, #0x3
    add r1, r0, #0x1
    swpb r0, r2, [r1]
L_0202dae4:
    ldr r0, =data_020881e0
    ldr r0, [r0, #0x1c]
    cmp r0, #0x0
    bgt L_0202dd38
    ldr r0, =data_02088404
    bl func_02043fd0
    ldr r1, =data_020881e0
    mov r0, r0, lsl #0xc
    str r0, [r1, #0x1c]
    b L_0202dd38
L_0202db0c:
    ldr r0, =data_0206dd38
    ldr r2, [r1, #0x1c]
    ldr r0, [r0, #0x0]
    sub r0, r2, r0
    str r0, [r1, #0x1c]
    cmp r0, #0x0
    bgt L_0202dd38
    ldr r0, =data_02088404
    bl func_02045d74
    ldr r0, =data_02088404
    ldr r1, =data_0206ccc8
    bl func_0205bdf4
    ldr r0, =data_02088404
    bl func_0204398c
    ldr r0, =data_02088404
    bl func_02043fd0
    mov r2, r0, lsl #0xc
    ldr r1, =data_020881e0
    ldr r0, =data_02088404
    str r2, [r1, #0x1c]
    bl func_02043ab0
    ldr r0, =data_020881e0
    mov r2, #0x4
    add r1, r0, #0x1
    swpb r0, r2, [r1]
    b L_0202dd38
L_0202db74:
    mov r0, #0x1
    bl func_02022354
    cmp r0, #0x0
    beq L_0202dd38
    ldr r1, =data_020881e0
    ldr r0, =data_0206dd38
    ldr r2, [r1, #0x1c]
    ldr r0, [r0, #0x0]
    sub r0, r2, r0
    str r0, [r1, #0x1c]
    bl func_0202dec8
    ldr r0, =data_020881e0
    ldr r0, [r0, #0x1c]
    cmp r0, #0x0
    bgt L_0202dd38
    ldr r0, =data_02088404
    bl func_02043fd0
    ldr r1, =data_020881e0
    mov r0, r0, lsl #0xc
    str r0, [r1, #0x1c]
    b L_0202dd38
L_0202dbc8:
    ldr r0, =data_0206dd38
    ldr r2, [r1, #0x1c]
    ldr r0, [r0, #0x0]
    sub r0, r2, r0
    str r0, [r1, #0x1c]
    cmp r0, #0x0
    bgt L_0202dd38
    mov r3, #0x6
    add r4, r1, #0x1
    sub r0, r3, #0x16
    mov r1, #0x8
    mov r2, #0x3
    swpb r3, r3, [r4]
    bl func_020222b8
    mov r0, #0x0
    mov r1, #0x7
    bl func_0203f9a4
    b L_0202dd38
L_0202dc10:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    beq L_0202dd38
    ldr r0, =data_02088404
    bl func_02045d74
    mov r0, #0x7
    bl func_0202203c
    ldr r0, =data_020881e0
    ldr r2, =data_0206e668
    mov r3, #0x0
    add r1, r0, #0x4
    mov r0, #0x1
    swpb r0, r0, [r1]
    swpb r0, r3, [r2]
    b L_0202dd38
L_0202dc50:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    beq L_0202dd38
    ldr r0, =data_02088404
    ldrsb r1, [r0, #0x0]
    cmp r1, #0x0
    beq L_0202dc74
    bl func_02045d74
L_0202dc74:
    ldr r0, =data_02088404
    ldr r1, =data_0206cd04
    bl func_0205bdf4
    ldr r0, =data_02088404
    bl func_0204398c
    ldr r0, =data_02088404
    bl func_02043fd0
    mov r2, r0, lsl #0xc
    ldr r1, =data_020881e0
    ldr r0, =data_02088404
    str r2, [r1, #0x1c]
    bl func_02043ab0
    mov r3, #0x2
    ldr r0, =data_020881e0
    ldr r2, =data_0206e680
    add r1, r0, #0x1
    swpb r0, r3, [r1]
    ldr r5, [r2, #0x0]
    mov r0, #0xc
    bl func_0204221c
    mov r4, r0
    ldr r2, [r5, #0x14]
    mov r1, r5
    ldrb r2, [r5, r2]
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, asr #0x1
    rsb r2, r2, #0xa5
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
    mov r0, #0x0
    mov r1, #0xf
    mov r2, #0x1
    bl func_020222b8
L_0202dd38:
    ldr r0, =data_020881e0
    ldrb r0, [r0, #0x1]
    cmp r0, #0x6
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, r5, r6, pc}
    bl func_02003e84
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
