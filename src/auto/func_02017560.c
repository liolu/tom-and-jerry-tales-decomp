#include "m2c.h"

void func_0200a0f8(void);
void func_0201153c(void);
void func_0201156c(void);
void func_0201159c(void);
void func_0201168c(void);
void func_02017280(void);
void func_020173f4(void);
void func_02018e70(void);
void func_0201c94c(void);
void func_0201c988(void);
void func_020222b8(void);
void func_02022354(void);
void func_0202274c(void);
void func_020306fc(void);
void func_0203b96c(void);
void func_0203cd5c(void);
void func_0203cdd0(void);
void func_0203d098(void);
void func_0203d0d8(void);
void func_0203f6fc(void);
void func_0203f870(void);
void func_0203f948(void);
void func_0203fb50(void);
void func_0203fbdc(void);
void func_0203feb4(void);
void func_0203ff1c(void);
void func_02040094(void);
void func_020401e8(void);
void func_02047108(void);
void func_0204d600(void);
void func_0204f490(void);
void OS_SetTick(void);
extern char data_020692ec[];
extern char data_0206af34[];
extern char data_0206af40[];
extern char data_0206af50[];
extern char data_0206e67c[];
extern char data_0206e684[];
extern char data_0206e6d4[];
extern char data_02086d09[];
extern char data_02086fa8[];
extern char data_02086fbc[];
extern char data_02086fbe[];
extern char data_02086fe4[];
extern char data_020871f4[];
extern char data_0208721c[];
extern char data_02087224[];
extern char data_02087408[];
extern char data_020b8b44[];
// clang-format off
asm void func_02017560(void) {
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    ldr r0, =data_020871f4
    ldrb r0, [r0, #0x2]
    cmp r0, #0x0
    beq L_0201757c
    bl func_020173f4
L_0201757c:
    mov r0, #0x3
    bl func_020306fc
    cmp r0, #0x0
    ldrne r0, =data_020871f4
    ldrneb r0, [r0, #0x2]
    cmpne r0, #0x9
    beq L_020175dc
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    beq L_020175dc
    ldr r0, =data_020871f4
    ldr r0, [r0, #0x18]
    cmp r0, #0x0
    moveq r1, #0x1
    movne r1, #0x0
    ldr r0, =data_020871f4
    cmp r1, #0x0
    str r1, [r0, #0x18]
    add r1, r0, #0x2
    movne r0, #0x1
    swpneb r0, r0, [r1]
    moveq r0, #0x5
    swpeqb r0, r0, [r1]
L_020175dc:
    ldr r0, =data_020871f4
    ldrb r1, [r0, #0x2]
    cmp r1, #0x9
    addls pc, pc, r1, lsl #0x2
    b L_02017af4
L_020175f0:
    b L_02017af4
    b L_02017618
    b L_0201775c
    b L_02017af4
    b L_02017770
    b L_02017af4
    b L_02017af4
    b L_02017858
    b L_020179c4
    b L_02017a50
L_02017618:
    ldr r0, =data_0206af34
    bl func_0203feb4
    bl func_020401e8
    ldr r1, [r0, #0x24]
    bic r1, r1, #0x2
    str r1, [r0, #0x24]
    ldr r0, =data_0206af40
    bl func_0203feb4
    bl func_020401e8
    ldr r1, [r0, #0x24]
    mov r2, #0x1
    bic r1, r1, #0x2
    str r1, [r0, #0x24]
    ldr r1, =data_0206e67c
    ldr r0, =data_020871f4
    str r2, [r1, #0x0]
    str r2, [r0, #0x18]
    add r1, r0, #0x2
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldr r0, =data_020b8b44
    bl func_0203d098
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x28]
    bl func_0203cd5c
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cd5c
    mov r0, #0x9
    str r0, [sp, #0x0]
    ldr r0, =0x4000050
    mov r1, #0x4
    mov r2, #0x1
    mov r3, #0xb
    bl func_0204d600
    ldr r1, =data_02086fe4
    ldr r0, =data_0208721c
    ldmia r1, {r2, r3}
    stmia r0, {r2, r3}
    bl func_0203f870
    ldr r1, =0xffff
    mov r2, #0x28
    bl func_02047108
    bl func_0203fb50
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne L_020176e8
    mov r0, #0x16
    bl func_0200a0f8
    mov r0, #0x19
    bl func_0200a0f8
L_020176e8:
    mov r0, #0x0
    mov r1, r0
    bl func_0203f6fc
    mov r0, #0x0
    bl func_0203b96c
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne L_0201771c
    mov r0, #0x20
    mov r1, #0x5
    bl func_0201168c
    b L_02017728
L_0201771c:
    mov r0, #0x32
    mov r1, #0x2
    bl func_0201168c
L_02017728:
    mov r0, #0x0
    bl func_0201153c
    mov r0, #0x0
    bl func_0201159c
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x3
    bne L_02017750
    mov r0, #0x0
    bl func_0201156c
L_02017750:
    bl func_0201c94c
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
L_0201775c:
    add r1, r0, #0x4
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
L_02017770:
    ldrb r0, [r0, #0x4]
    cmp r0, #0x0
    beq L_02017790
    cmp r0, #0x1
    cmpne r0, #0x2
    beq L_020177dc
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
L_02017790:
    ldr r0, =data_02087224
    mov r1, #0x0
    mov r2, #0x1
    bl func_0202274c
    tst r0, #0x1000000
    beq L_020177b0
    and r0, r0, #0xff
    bl func_02017280
L_020177b0:
    mov r0, #0x1
    bl func_020306fc
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, pc}
    ldr r0, =data_020871f4
    mov r2, #0x5
    add r1, r0, #0x2
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
L_020177dc:
    ldr r0, =data_02087224
    mov r1, #0x0
    mov r2, #0x1
    bl func_0202274c
    tst r0, #0x1000000
    beq L_020177fc
    and r0, r0, #0xff
    bl func_02017280
L_020177fc:
    mov r0, #0x1
    bl func_020306fc
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, pc}
    ldr r3, =data_020871f4
    mov ip, #0x0
    add r2, r3, #0x4
    swpb r1, ip, [r2]
    add r2, r3, #0x2
    mov r1, #0x3
    swpb r1, r1, [r2]
    mov r0, #0x20
    str ip, [sp, #0x0]
    ldr r4, =data_020b8b44
    str ip, [sp, #0x4]
    mov r1, r0
    mov r2, #0xc0
    mov r3, #0x78
    str r4, [sp, #0x8]
    bl func_0203d0d8
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
L_02017858:
    ldr r0, =data_0206af34
    bl func_0203feb4
    bl func_020401e8
    ldr r1, [r0, #0x24]
    orr r1, r1, #0x2
    str r1, [r0, #0x24]
    ldr r0, =data_0206af40
    bl func_0203feb4
    bl func_020401e8
    ldr r1, [r0, #0x24]
    mov r2, #0x0
    orr r1, r1, #0x2
    str r1, [r0, #0x24]
    ldr r1, =data_0206e67c
    ldr r0, =data_020871f4
    str r2, [r1, #0x0]
    str r2, [r0, #0x18]
    add r1, r0, #0x2
    swpb r0, r2, [r1]
    mov r0, #0x4
    str r0, [sp, #0x0]
    ldr r0, =0x4000050
    mov r1, #0x10
    mov r2, #0x1
    mov r3, #0xb
    bl func_0204d600
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x28]
    bl func_0203cdd0
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cdd0
    ldr r1, =data_020871f4
    ldr r0, [r1, #0x28]
    ldr r1, [r1, #0x2c]
    bl OS_SetTick
    ldr r2, =data_02086fa8+0x12
    ldr r1, =data_02086fbe
    ldrsh r4, [r2, #0x0]
    ldrh r3, [r1, #0x0]
    ldr r0, =data_02086fbc
    add r4, r4, #0x1
    strh r4, [r2, #0x0]
    add r2, r3, #0x1
    strh r2, [r1, #0x0]
    ldrh r3, [r0, #0x0]
    ldr r2, =data_02086fa8+0xb
    ldr r1, =data_02086fa8+0x7
    add r3, r3, #0x1
    strh r3, [r0, #0x0]
    ldrb r0, [r2, #0x0]
    ldrb r3, [r1, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r2]
    add r0, r3, #0x1
    swpb r0, r0, [r1]
    bl func_0201c988
    bl func_0203f870
    ldr r1, =0xffff
    mov r2, #0x7f
    bl func_02047108
    bl func_0203fbdc
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne L_0201799c
    mov r0, #0x17
    bl func_0200a0f8
    ldr r0, =data_0206e6d4
    ldrsh r0, [r0, #0x88]
    cmp r0, #0xa
    bgt L_0201799c
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02017994
    mov r0, #0x15
    bl func_0200a0f8
    b L_0201799c
L_02017994:
    mov r0, #0x14
    bl func_0200a0f8
L_0201799c:
    ldr r0, =data_02086fa8
    ldrb r0, [r0, #0x0]
    cmp r0, #0x1
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, pc}
    ldr r0, =data_0206e6d4
    mov r1, #0x1
    str r1, [r0, #0xd8]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
L_020179c4:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, pc}
    ldr r0, =data_0206af40
    bl func_0203feb4
    bl func_020401e8
    ldr r2, [r0, #0x24]
    ldr r1, =data_020b8b44
    orr r2, r2, #0x2
    str r2, [r0, #0x24]
    ldr ip, =data_02086d09
    mov lr, #0x4
    ldr r0, [r1, #0x28]
    swpb r1, lr, [ip]
    ldr r3, =data_0206e67c
    mov r4, #0x0
    ldr r2, =data_020871f4
    str r4, [r3, #0x0]
    str r4, [r2, #0x18]
    bl func_0203cdd0
    ldr r1, =data_020871f4
    ldr r0, [r1, #0x28]
    ldr r1, [r1, #0x2c]
    bl OS_SetTick
    bl func_0203f948
    ldr r0, =data_0206e6d4
    mov r1, #0x1
    str r1, [r0, #0xbc]
    add r1, r0, #0x16
    mov r0, r4
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
L_02017a50:
    mvn r0, #0xf
    mov r1, #0xa
    mov r2, #0x3
    bl func_020222b8
    bl func_0203f948
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, pc}
    ldr r0, =data_0206af40
    bl func_0203feb4
    bl func_020401e8
    ldr r1, =data_0206e6d4
    mov r4, r0
    ldrb r2, [r1, #0x18]
    ldr r0, =data_02087408
    ldr r1, =data_0206af50
    str r2, [sp, #0x0]
    mov r2, #0x0
    mov r3, #0x6
    bl func_0204f490
    ldr r0, [r4, #0x1c]
    ldr r2, =data_02087408
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    ldr r0, =data_020b8b44
    ldr r1, =data_0206e67c
    ldr r0, [r0, #0x28]
    mov r2, #0x0
    str r2, [r1, #0x0]
    ldr r1, =data_020871f4
    str r2, [r1, #0x18]
    bl func_0203cdd0
    bl func_02018e70
    ldr r0, =data_0206e6d4
    mov r2, #0x0
    add r1, r0, #0x16
    swpb r0, r2, [r1]
L_02017af4:
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
}
// clang-format on
