#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020222b8();
extern void func_0203c24c();
extern void func_0204c27c();
extern void r0();
extern char data_02088424[];
// clang-format off
asm void func_02030044(void) {
    stmfd sp!, {r3, lr}
    ldr ip, =data_02088424
    mov r3, #0x0
    mov r0, #0x40
    mov r1, #0x32
    mov r2, #0xc0
    swpb r3, r3, [ip]
    bl func_0203c24c
    mov r0, #0x42
    mov r1, #0x32
    mov r2, #0xc0
    bl func_0203c24c
    mov r0, #0x41
    mov r1, #0x32
    mov r2, #0xc0
    bl func_0203c24c
    ldr r0, =data_02088424
    ldr r0, [r0, #0x4]
    cmp r0, #0x0
    beq L_02030098
    blx r0
L_02030098:
    mvn r0, #0xf
    mov r1, #0x0
    mov r2, #0x3
    bl func_020222b8
    ldr r0, =0x400006c
    mvn r1, #0xf
    bl func_0204c27c
    ldr r0, =0x400106c
    mvn r1, #0xf
    bl func_0204c27c
    mov r3, #0x4000000
    ldr r0, =data_02088424
    ldr r2, [r3, #0x0]
    ldr r1, [r0, #0xc]
    bic r2, r2, #0x1f00
    orr r1, r2, r1, lsl #0x8
    str r1, [r3, #0x0]
    add r2, r3, #0x1000
    ldr r1, [r2, #0x0]
    ldr r0, [r0, #0x8]
    bic r1, r1, #0x1f00
    orr r0, r1, r0, lsl #0x8
    str r0, [r2, #0x0]
    ldmfd sp!, {r3, pc}
}
// clang-format on
