#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Ent;

typedef struct {
    void (*cb)(void);
    s32 v4;
    s32 v8;
    s32 vc;
    s32 v10;
} Ctl;

void GXx_SetMasterBrightness_(s32, s32);
s32 func_02022354(s32);
void func_02022138(void *);
extern Ent data_020877b8[];
extern Ctl data_020877b4;
extern u8 data_0206b86c[];

void func_02022144(u32 steps) {
    u8 i;
    u8 n;
    u8 k;
    Ent *p;
    void (*cb)(void);

    i = 0;
    if (steps > 5) {
        steps = 5;
    }
    do {
        p = (Ent *) ((u8 *) data_020877b8 + i * 12);
        if (p->c != 0) {
            n = steps;
            if (n == 0) {
                return;
            }
            k = n;
            while (k--) {
                p->a += p->c;
            }
            if (p->c > 0) {
                if (data_020877b8[i].a > data_020877b8[i].b) {
                    data_020877b8[i].c = 0;
                    data_020877b8[i].a = data_020877b8[i].b;
                }
            }
            if (p->c < 0) {
                if (data_020877b8[i].a < data_020877b8[i].b) {
                    data_020877b8[i].c = 0;
                    data_020877b8[i].a = data_020877b8[i].b;
                }
            }
        }
        if (i != 0) {
            GXx_SetMasterBrightness_(0x400106c, data_020877b4.v10 >> 12);
        } else {
            GXx_SetMasterBrightness_(0x400006c, data_020877b4.v4 >> 12);
        }
        i++;
    } while (i < 2);
    if (data_020877b4.cb == 0) {
        return;
    }
    if (func_02022354(3) == 0) {
        return;
    }
    cb               = data_020877b4.cb;
    data_020877b4.cb = 0;
    func_02022138(data_0206b86c);
    cb();
}
