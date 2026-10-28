#include "m2c.h"

typedef struct V {
    s32 x;
    s32 y;
    s32 z;
} V;

void func_0203a58c(void);
void VEC_Subtract(s32, void *, V *);
s32 VEC_DotProduct(V *, V *);
void VEC_CrossProduct(V *, V *, V *);
void VEC_Normalize(V *, V *);
void func_0203994c(s16 *, V *);
void func_02039964(s16 *, V *);
void func_02039d0c(V *, V *, s32);

void func_020397fc(s16 *arg0, s32 arg1, V *arg2) {
    V sp18;
    V spC;
    V sp0;
    if (*arg0 <= 0) {
        return;
    }
    func_0203a58c();
    VEC_Subtract(arg1, (u8 *) arg0 + 0x2C, &sp18);
    VEC_CrossProduct(&sp18, arg2, &spC);
    if (VEC_DotProduct(&spC, &spC) > 0) {
        func_0203994c(arg0, &spC);
        VEC_Normalize(&sp18, &sp18);
        func_02039d0c(&sp18, &sp0, VEC_DotProduct(&sp18, arg2));
    } else {
        sp0 = *arg2;
    }
    func_02039964(arg0, &sp0);
}
