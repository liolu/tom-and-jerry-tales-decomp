#include "m2c.h"

typedef struct G {
    u8 pad[0x1c];
    s32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
} G;

extern G data_0206db50;
extern u8 data_020ba3e8;
extern u8 data_020ba3ec;
extern u8 data_020ba3f0;
extern u8 data_020ba3fc;
extern struct {
    s32 a;
    s32 b;
} data_020ba3e0;
void func_020499ac(void *, s32);
u32 func_0203fcd8(void);

void func_0203f9a4(s32 arg0, s32 arg1) {
    void *p;
    switch (func_0203fcd8()) {
        case 0:
            if (data_0206db50.f28 != arg0) {
                return;
            }
            p = &data_020ba3fc;
            break;
        case 1:
            if (data_0206db50.f24 != arg0) {
                return;
            }
            p = &data_020ba3e8;
            break;
        case 2:
            if (data_0206db50.f20 != arg0) {
                return;
            }
            p = &data_020ba3ec;
            break;
        case 3:
            if (data_0206db50.f1c != arg0) {
                return;
            }
            p = &data_020ba3f0;
            break;
    }
    if (data_020ba3e0.b == 0) {
        return;
    }
    func_020499ac(p, arg1);
}
