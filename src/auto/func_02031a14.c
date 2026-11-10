#include "m2c.h"
typedef struct {
    s32 type;
    s32 f4;
    s32 f8;
    s32 fc;
    union {
        u32 w;
        struct {
            u16 n;
            u16 sz;
        } s;
    } u;
    u8 pad[0x2C - 0x14];
} E;
typedef struct {
    u16 a;
    u16 count;
    s32 f4;
    s32 f8;
    s32 fc;
} H;
extern E data_0208876c[];
extern H data_0208872c;
void OS_Terminate(void);
void func_020323e0(s32);
u32 func_02031eb4(E *);
s32 func_02032180(s32);
void GX_BeginLoadTexPltt(void);
void func_02031fd8(E *, s32 *, s32, u16);
void GX_EndLoadTexPltt(void);
void func_02031ef8(E *, u32, s32 *, s32 *, s32);
s32 func_02031a14(s32 *src, s32 idx, s32 check, u16 sz) {
    u16 i;
    u32 len;
    E *e;
    s32 cnt;
    s32 *saved;
    s32 *base;
    e     = &data_0208876c[idx];
    saved = 0;
    if (check != 0) {
        if (e->type != *src) {
            OS_Terminate();
        }
        func_020323e0(idx);
    }
    e->type = *src;
    len     = func_02031eb4(e);
    base    = src + 1;
    if ((s8) e->type != 7) {
        src = (s32 *) ((u8 *) base + len);
        if ((s8) e->type == 5) {
            saved = src;
            src   = (s32 *) ((u8 *) src + (len >> 1));
        }
        if (check != 0 && e->u.w != *src) {
            OS_Terminate();
        }
        e->u.w = *src++;
        if (e->u.s.n > 4) {
            OS_Terminate();
        }
        if ((s8) e->type == 5 && e->u.s.n != 1) {
            OS_Terminate();
        }
        if (check == 0 && sz != 0) {
            e->u.s.sz = sz;
        }
        if (check == 0) {
            if ((u32) (e->u.s.n * e->u.s.sz) > (u32) (data_0208872c.f4 - data_0208872c.fc)) {
                OS_Terminate();
                return 0;
            }
            e->f8            = func_02032180(data_0208872c.fc);
            data_0208872c.fc = e->u.s.n * func_02032180(e->u.s.sz) + data_0208872c.fc;
            GX_BeginLoadTexPltt();
            for (i = 0; i < e->u.s.n; i++) {
                cnt = *src;
                func_02031fd8(e, src, idx, i);
                src = (s32 *) ((u8 *) src + e->u.s.sz + 4 + cnt * 4);
            }
            GX_EndLoadTexPltt();
        }
    }
    func_02031ef8(e, len, base, saved, check);
    return 1;
}
