#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004330();
extern void func_0204f490();
extern void OS_Terminate();
extern char data_02069434[];
extern char data_0206943c[];
extern char data_02069454[];
extern char data_02069460[];
extern char data_02069468[];
extern char data_02069470[];
extern char data_02069478[];
extern char data_02069480[];
extern char data_02069488[];
extern char data_02069490[];
extern char data_02069498[];
extern char data_020694a4[];
extern char data_020694b0[];
extern char data_020694bc[];
extern char data_020694c4[];
extern char data_020694cc[];
extern char data_020694d4[];
extern char data_020694e0[];
extern char data_020694ec[];
extern char data_020694f8[];
extern char data_02069508[];
extern char data_02069514[];
extern char data_02069524[];
extern char data_02069530[];
extern char data_02069540[];
extern char data_0206954c[];
extern char data_0206955c[];
extern char data_02069564[];
extern char data_02069570[];
extern char data_0206957c[];
extern char data_02069588[];
extern char data_02069594[];
extern char data_020695a4[];
extern char data_020695ac[];
extern char data_020695b8[];
extern char data_020695c4[];
extern char data_020695d0[];
extern char data_020695dc[];
extern char data_020695e4[];
extern char data_020695ec[];
extern char data_020695f8[];
extern char data_02069600[];
extern char data_02069614[];
extern char data_02069628[];
extern char data_0206963c[];
extern char data_0206964c[];
extern char data_02069654[];
extern char data_02069660[];
extern char data_02069668[];
extern char data_02069674[];
extern char data_02069680[];
extern char data_02069688[];
extern char data_02069694[];
extern char data_020696a4[];
extern char data_020696b0[];
extern char data_020696bc[];
extern char data_020696c8[];
extern char data_020696d4[];
extern char data_020696dc[];
extern char data_020696f4[];
extern char data_0206970c[];
extern char data_02069714[];
extern char data_0206972c[];
extern char data_0206e7e8[];
// clang-format off
asm void func_02003058(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x8
    mov r8, r0
    ldr r0, [r1, #0xc]
    mov r7, r2
    mov r6, r3
    bl func_02004330
    mov r5, r0
    ldr r0, =data_0206e7e8
    mov r1, #0x0
    swpb r1, r1, [r0]
    cmp r8, #0x6
    addls pc, pc, r8, lsl #0x2
    b L_02003440
L_02003090:
    b L_02003420
    b L_02003418
    b L_020030ec
    b L_020030c4
    b L_020030ec
    b L_020030ac
    b L_020030ec
L_020030ac:
    ldr r1, =data_0206943c
    mov r2, r5
    bl func_0204f490
    add sp, sp, #0x8
    ldr r0, =data_0206e7e8
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_020030c4:
    ldr r4, [sp, #0x20]
    str r6, [sp, #0x0]
    ldr r1, =data_02069454
    mov r2, r5
    mov r3, r7
    str r4, [sp, #0x4]
    bl func_0204f490
    add sp, sp, #0x8
    ldr r0, =data_0206e7e8
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_020030ec:
    cmp r7, #0x36
    addls pc, pc, r7, lsl #0x2
    b L_0200338c
L_020030f8:
    b L_020031d4
    b L_020031dc
    b L_020031e4
    b L_020031ec
    b L_020031f4
    b L_020031fc
    b L_02003204
    b L_0200320c
    b L_02003214
    b L_0200321c
    b L_02003224
    b L_02003234
    b L_0200322c
    b L_0200323c
    b L_0200333c
    b L_02003344
    b L_0200334c
    b L_02003354
    b L_0200335c
    b L_02003364
    b L_0200336c
    b L_02003374
    b L_0200337c
    b L_02003384
    b L_02003244
    b L_0200324c
    b L_02003254
    b L_0200325c
    b L_02003264
    b L_0200326c
    b L_02003274
    b L_0200327c
    b L_02003284
    b L_0200328c
    b L_02003294
    b L_0200329c
    b L_020032a4
    b L_020032ac
    b L_020032b4
    b L_020032bc
    b L_020032c4
    b L_020032cc
    b L_020032d4
    b L_020032dc
    b L_020032e4
    b L_020032ec
    b L_020032f4
    b L_020032fc
    b L_02003304
    b L_0200330c
    b L_02003314
    b L_0200331c
    b L_02003324
    b L_0200332c
    b L_02003334
L_020031d4:
    ldr r4, =data_02069434
    b L_0200339c
L_020031dc:
    ldr r4, =data_02069460
    b L_0200339c
L_020031e4:
    ldr r4, =data_02069468
    b L_0200339c
L_020031ec:
    ldr r4, =data_02069470
    b L_0200339c
L_020031f4:
    ldr r4, =data_02069478
    b L_0200339c
L_020031fc:
    ldr r4, =data_02069480
    b L_0200339c
L_02003204:
    ldr r4, =data_02069488
    b L_0200339c
L_0200320c:
    ldr r4, =data_02069490
    b L_0200339c
L_02003214:
    ldr r4, =data_02069498
    b L_0200339c
L_0200321c:
    ldr r4, =data_020694a4
    b L_0200339c
L_02003224:
    ldr r4, =data_020694b0
    b L_0200339c
L_0200322c:
    ldr r4, =data_020694bc
    b L_0200339c
L_02003234:
    ldr r4, =data_020694c4
    b L_0200339c
L_0200323c:
    ldr r4, =data_020694cc
    b L_0200339c
L_02003244:
    ldr r4, =data_020694d4
    b L_0200339c
L_0200324c:
    ldr r4, =data_020694e0
    b L_0200339c
L_02003254:
    ldr r4, =data_020694ec
    b L_0200339c
L_0200325c:
    ldr r4, =data_020694f8
    b L_0200339c
L_02003264:
    ldr r4, =data_02069508
    b L_0200339c
L_0200326c:
    ldr r4, =data_02069514
    b L_0200339c
L_02003274:
    ldr r4, =data_02069524
    b L_0200339c
L_0200327c:
    ldr r4, =data_02069530
    b L_0200339c
L_02003284:
    ldr r4, =data_02069540
    b L_0200339c
L_0200328c:
    ldr r4, =data_0206954c
    b L_0200339c
L_02003294:
    ldr r4, =data_0206955c
    b L_0200339c
L_0200329c:
    ldr r4, =data_02069564
    b L_0200339c
L_020032a4:
    ldr r4, =data_02069570
    b L_0200339c
L_020032ac:
    ldr r4, =data_0206957c
    b L_0200339c
L_020032b4:
    ldr r4, =data_02069588
    b L_0200339c
L_020032bc:
    ldr r4, =data_02069594
    b L_0200339c
L_020032c4:
    ldr r4, =data_020695a4
    b L_0200339c
L_020032cc:
    ldr r4, =data_020695ac
    b L_0200339c
L_020032d4:
    ldr r4, =data_020695b8
    b L_0200339c
L_020032dc:
    ldr r4, =data_020695c4
    b L_0200339c
L_020032e4:
    ldr r4, =data_020695d0
    b L_0200339c
L_020032ec:
    ldr r4, =data_020695dc
    b L_0200339c
L_020032f4:
    ldr r4, =data_020695e4
    b L_0200339c
L_020032fc:
    ldr r4, =data_020695ec
    b L_0200339c
L_02003304:
    ldr r4, =data_020695f8
    b L_0200339c
L_0200330c:
    ldr r4, =data_02069600
    b L_0200339c
L_02003314:
    ldr r4, =data_02069614
    b L_0200339c
L_0200331c:
    ldr r4, =data_02069628
    b L_0200339c
L_02003324:
    ldr r4, =data_0206963c
    b L_0200339c
L_0200332c:
    ldr r4, =data_0206964c
    b L_0200339c
L_02003334:
    ldr r4, =data_02069654
    b L_0200339c
L_0200333c:
    ldr r4, =data_02069660
    b L_0200339c
L_02003344:
    ldr r4, =data_02069668
    b L_0200339c
L_0200334c:
    ldr r4, =data_02069674
    b L_0200339c
L_02003354:
    ldr r4, =data_02069680
    b L_0200339c
L_0200335c:
    ldr r4, =data_02069688
    b L_0200339c
L_02003364:
    ldr r4, =data_02069694
    b L_0200339c
L_0200336c:
    ldr r4, =data_020696a4
    b L_0200339c
L_02003374:
    ldr r4, =data_020696b0
    b L_0200339c
L_0200337c:
    ldr r4, =data_020696bc
    b L_0200339c
L_02003384:
    ldr r4, =data_020696c8
    b L_0200339c
L_0200338c:
    bl OS_Terminate
    add sp, sp, #0x8
    ldr r0, =data_02069434
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_0200339c:
    cmp r8, #0x2
    beq L_020033d4
    cmp r8, #0x4
    beq L_020033f8
    cmp r8, #0x6
    bne L_02003444
    ldr r0, =data_0206e7e8
    ldr r1, =data_020696d4
    mov r2, r5
    mov r3, r4
    bl func_0204f490
    add sp, sp, #0x8
    ldr r0, =data_0206e7e8
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_020033d4:
    ldr r0, =data_0206e7e8
    ldr r1, =data_020696dc
    mov r2, r5
    mov r3, r5
    str r4, [sp, #0x0]
    bl func_0204f490
    add sp, sp, #0x8
    ldr r0, =data_0206e7e8
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_020033f8:
    ldr r0, =data_0206e7e8
    ldr r1, =data_020696f4
    mov r2, r5
    mov r3, r4
    bl func_0204f490
    add sp, sp, #0x8
    ldr r0, =data_0206e7e8
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_02003418:
    ldr r4, =data_0206970c
    b L_02003444
L_02003420:
    ldr r1, =data_02069714
    mov r2, r5
    mov r3, r5
    str r7, [sp, #0x0]
    bl func_0204f490
    add sp, sp, #0x8
    ldr r0, =data_0206e7e8
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
L_02003440:
    bl OS_Terminate
L_02003444:
    ldr r0, =data_0206e7e8
    ldr r1, =data_0206972c
    mov r2, r5
    mov r3, r5
    str r4, [sp, #0x0]
    bl func_0204f490
    ldr r0, =data_0206e7e8
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, pc}
}
// clang-format on
