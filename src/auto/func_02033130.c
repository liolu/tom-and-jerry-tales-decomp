#include "m2c.h"

typedef struct R {
    u8 pad[8];
    char name[16];
} R;

s32 func_02033058(s32);
void func_0204f490(void *, void *, void *, s32);
void func_02030ed4(s32 *, s32);
void func_02030ee0(s32 *, s32);
s32 func_02030f40(void *, s32 *, s32, s32);
void OS_Terminate(void);
void func_020332dc(s32, s32);
void STD_CopyString(void *, s32);

extern u8 data_0206d204;
extern u8 data_0206d20c;
extern u16 data_0208e190;
extern R data_0208e194[];

s32 func_02033130(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp8[0x40];
    s32 sp4;
    s32 sp0;
    s32 r;
    sp4 = 0;
    r   = func_02033058(arg0);
    if (r < 0) {
        func_0204f490(sp8, &data_0206d204, &data_0206d20c, arg0);
        func_02030ed4(&sp0, arg2);
        if (func_02030f40(sp8, &sp4, arg1, arg2) < 0 || sp4 == 0) {
            OS_Terminate();
        }
        r             = data_0208e190;
        data_0208e190 = r + 1;
        func_020332dc(sp4, r);
        STD_CopyString((u8 *) &data_0208e194[r] + 8, arg0);
        func_02030ee0(&sp0, arg2);
    }
    return r;
}
