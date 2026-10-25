#include "m2c.h"
typedef struct {
    u8 pad[4];
    u16 h;
    u8 f6;
    u8 p7;
    u8 f8;
    u8 f9;
} R;
extern s32 data_020ba3e0[];
extern u32 data_020ba280[];
R *func_020482d4(s32);
void func_02049468(void *, u8, u16, u8, s32);
void func_020470cc(void *, u8);

void func_0203f60c(s32 a) {
    R *r;
    if (data_020ba3e0[1] == 0) {
        return;
    }
    r = func_020482d4(a);
    if (r == NULL) {
        return;
    }
    func_02049468(&data_020ba280[88], r->f9, r->h, r->f8, a);
    func_020470cc(&data_020ba280[88], r->f6);
}
