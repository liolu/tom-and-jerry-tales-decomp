#include "m2c.h"

typedef struct R {
    u32 f0;
    u32 used : 1;
    u32 rest : 31;
    char name[16];
} R;

s32 func_02030f40(void *, s32 *, s32, s32);
void func_020332dc(s32, s32);
void func_0204f490(void *, void *, void *, void *);
void func_02051a48(void);

extern u8 data_0206d20c;
extern u8 data_0206d218;
extern u16 data_0208e190;
extern R data_0208e194[];

u16 func_02033200(s32 arg0, s32 arg1) {
    u8 sp4[0x40];
    s32 sp0;
    u16 i;
    u16 n;
    n = 0;
    for (i = 0; i < data_0208e190; i++) {
        {
            R *r = &data_0208e194[i];
            if (r->used) {
                sp0 = 0;
                func_0204f490(sp4, &data_0206d218, &data_0206d20c, r->name);
                if (func_02030f40(sp4, &sp0, arg0, arg1) < 0 || sp0 == 0) {
                    func_02051a48();
                }
                func_020332dc(sp0, i);
                n += 1;
            }
        }
    }
    return n;
}
