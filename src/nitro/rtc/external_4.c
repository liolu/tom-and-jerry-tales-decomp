#include "engine.h"
#include "m2c.h"

extern M2C_UNK RTCi_Bss;
typedef long s32;
extern s32 data_021b24f8;
// clang-format on

s32 RtcBCD2HEX(u32 arg0) {
    s32 var_ip;
    s32 var_lr;
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;

    var_ip = 0;
    var_r2 = 0;
    var_r3 = 0;
loop_1:
    if ((u32) ((arg0 >> var_r3) & 0xF) >= 0xAU) {
        return 0;
    }
    var_r2 += 1;
    var_r3 += 4;
    if (var_r2 >= 8) {
        var_r5 = 0;
        var_r4 = 0;
        var_lr = 1;
        do {
            var_ip += var_lr * ((arg0 >> var_r4) & 0xF);
            var_r5 += 1;
            var_lr *= 0xA;
            var_r4 += 4;
        } while (var_r5 < 8);
        return var_ip;
    }
    goto loop_1;
}

void RtcGetResultCallback(s32 arg0) {
    M2C_FIELD(&RTCi_Bss, s32 *, 0x24) = arg0;
}

/* func_0200f764 from projets/rayman-rr/src/auto/func_0200f764.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void RtcWaitBusy(void) {
    ldr ip, =data_021b24f8
L_0200f768:
    ldr r0, [ip, #0x0]
    cmp r0, #0x1
    beq L_0200f768
    bx lr
}
