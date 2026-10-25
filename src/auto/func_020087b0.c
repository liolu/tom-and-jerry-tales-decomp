#include "m2c.h"

extern char data_02086b08[];
extern char data_0206e678[];
// clang-format off
asm void func_020087b0(void) {
    ldr r1, =data_02086b08
    ldrb r1, [r1, #0x6]
    tst r1, r0
    ldreq r2, =data_0206e678
    ldreqb r1, [r2, #0x0]
    orreq r1, r1, r0
    beq @1
    ldr r2, =data_0206e678
    ldrb r1, [r2, #0x0]
    orr r1, r1, r0, lsl #0x4
@1:
    swpb r1, r1, [r2]
    mvn r0, r0
    ldr r1, =data_02086b08
    ldrb r2, [r1, #0x6]
    add r1, r1, #0x6
    and r0, r2, r0
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
