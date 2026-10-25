#include "m2c.h"

typedef struct {
    u8 p[0x30];
    s32 f30;
} K;
typedef struct {
    s16 id;
} H;
extern K *func_0203a58c(s16);
extern void func_0204b918(void *, void *, void *);
extern void func_02039d0c(void *, void *, s32);
extern void func_0203adcc(void *, s32, s32, s32);
extern s32 func_02039740(void *);

typedef struct {
    s32 x, y, z;
} V;
void func_02039670(u8 *arg0) {
    V spc;
    V sp0;
    K *k;
    s32 t;
    k = func_0203a58c(*(s16 *) arg0);
    func_0204b918(arg0 + 0x88, arg0 + 0x70, arg0 + 0x88);
    func_0204b918(arg0 + 0x94, arg0 + 0x7c, arg0 + 0x94);
    t = k->f30 >> 8;
    func_02039d0c(arg0 + 0x88, arg0 + 0x60, t);
    spc = *(V *) (arg0 + 0x94);
    func_02039d0c(&spc, &spc, t);
    func_0204b918(arg0 + 0x2c, arg0 + 0x60, &sp0);
    func_0203adcc(arg0, sp0.x, sp0.y, sp0.z);
    func_02039740(arg0);
    func_02039d0c(arg0 + 0x70, arg0 + 0x70, 0);
    func_02039d0c(arg0 + 0x7c, arg0 + 0x7c, 0);
    *(u32 *) (arg0 + 0xa0) &= ~2;
}
