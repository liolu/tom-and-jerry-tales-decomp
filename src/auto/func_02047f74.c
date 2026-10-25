#include "m2c.h"
void func_02052538(s32, s32, s32, s32);
void func_02052af0(s32);
void func_02052c50(s32);
s32 func_02052cbc(void);
extern s32 data_021aeef4[];
extern s32 data_021aef3c[];
void func_02047f74(void) {
    s32 t;
    s32 r2;
    s32 *p = data_021aef3c;
    if (data_021aeef4[18] == 0) {
        return;
    }
    if (p[11] >= 0) {
        r2 = 1 << p[11];
    } else {
        r2 = 0;
    }
    func_02052538(p[9], p[10], r2, 0);
    t = func_02052cbc();
    func_02052af0(1);
    func_02052c50(t);
}
