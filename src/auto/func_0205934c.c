#include "m2c.h"

s32 func_020509fc(void *);
void func_020508e0(void *);
void func_02050964(void *);
void func_020598bc(s32);
void func_02063a3c(void);
extern u8 data_021b0484[];
extern u8 data_021b3ed0[];
extern void (*data_021b3ee0[])(void);
extern s32 data_021b3fe0;
extern s32 data_021b4004;
extern u8 data_021b4028[];

void func_0205934c(void) {
    s32 t;
    if (func_020509fc(data_021b4028) == 0) {
        data_021b3fe0 = *(s32 *) (*(u8 **) (data_021b0484 + 4) + 0x6C);
        data_021b4004 = 1;
    } else if (data_021b3fe0 == *(s32 *) (*(u8 **) (data_021b0484 + 4) + 0x6C)) {
        data_021b4004 += 1;
    } else {
        func_020508e0(data_021b4028);
        data_021b3fe0 = *(s32 *) (*(u8 **) (data_021b0484 + 4) + 0x6C);
        data_021b4004 = 1;
    }
    if (*(volatile s32 *) (data_021b3ed0 + 8) > 0) {
        do {
            t                                     = *(volatile s32 *) (data_021b3ed0 + 8) - 1;
            *(volatile s32 *) (data_021b3ed0 + 8) = t;
            data_021b3ee0[t]();
        } while (*(volatile s32 *) (data_021b3ed0 + 8) > 0);
    }
    t             = data_021b4004 - 1;
    data_021b4004 = t;
    if (t == 0) {
        func_02050964(data_021b4028);
    }
    if (*(void (**)(void)) data_021b3ed0 != 0) {
        (*(void (**)(void)) data_021b3ed0)();
        *(void (**)(void)) data_021b3ed0 = 0;
    }
    func_020598bc(0);
    func_02063a3c();
}
