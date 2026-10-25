#include "m2c.h"
extern u8 data_021aeef4[];
extern u8 data_021aef3c[];
void func_02047e84(void);
s32 func_0204af8c(void *);
void func_0204afc0(void *);
s32 func_0204afd8(void *);
void func_0205261c(s32, s32, s32);
void func_02047dfc(void) {
    u8 *b = data_021aef3c;
    s32 t;
    if (*(s32 *) (data_021aeef4 + 0x48) == 0) {
        return;
    }
    if (*(s32 *) (b + 4) != 0) {
        return;
    }
    func_0204afc0(b + 0x3c);
    if (*(s32 *) (b + 0x4c) != 0 && func_0204afd8(b + 0x3c) != 0) {
        func_02047e84();
        return;
    }
    t = func_0204af8c(b + 0x3c) >> 8;
    if (t == *(s32 *) (b + 0x50)) {
        return;
    }
    func_0205261c(*(s32 *) (b + 0x24), t, 0);
    *(s32 *) (b + 0x50) = t;
}
