#include "m2c.h"
typedef struct {
    u8 hdr[0xC];
    u8 name[0x20];
} Ent;
typedef struct {
    u8 a[0x50];
    Ent e[12];
} L;
typedef struct {
    u32 kind;
    s16 b;
    s16 c;
    s32 d;
    s32 f;
} Rec;
typedef struct {
    s32 p0;
    s32 f4;
    u8 pad[0x20 - 8];
    s16 h20;
    u8 pad2[0x40 - 0x22];
    s16 h40[8];
    Rec r[12];
    s32 n110;
    s32 n114;
} W;
extern s32 func_020312e0(s32, void *);
extern void func_020293f8(void *, ...);
extern W *func_01ff8000(s32, s32);
extern void func_02051f7c(void *, void *, s32);
extern void func_02051a48(void);
extern u32 func_0205bfd4(void *);
extern s32 func_020339b0(void *);
extern s32 func_02040bc4(void *, void *, void *);
extern s32 func_02032598(void *);
extern s32 func_0203b204(void *);
extern u8 data_0206c558[], data_0206c588[], data_0206c5d4[], data_0206c610[], data_0206c634[], data_0206c654[],
    data_0206c678[], data_0206c694[], data_0206c698[], data_0206e698[], data_0206e6a4[];
W *func_02029404(s32 arg0, s32 arg1) {
    L l;
    W *w;
    u32 i;
    u32 j;
    Rec *rec;
    Ent *pe;
    u8 *pn;
    u32 k;
    s32 t;
    t = func_020312e0(arg0, &l);
    if (t < 0) {
        func_020293f8(data_0206c558, arg0, t);
        return 0;
    }
    func_020293f8(data_0206c588, arg0);
    w = func_01ff8000(arg1, 0x118);
    func_02051f7c(&l, w, 0x50);
    if (w->f4 == 0) {
        s16 h = w->h20;
        if (h == -0x1000) {
            w->f4 = 0x3FFFFFFF;
        } else if (h == 0) {
            func_02051a48();
        }
    }
    i = 0;
    do {
        w->r[i].f = -1;
        i++;
    } while (i < 12);
    j       = 0;
    w->n114 = 0;
    w->n110 = 0;
    w->n114 = 0;
    do {
        if (w->h40[j] >= 0) {
            w->n114 = j + 1;
        }
        j++;
    } while (j < 8);
    k       = 0;
    pe      = l.e;
    pn      = l.e[0].name;
    w->n110 = 0;
    rec     = w->r;
    do {
        func_02051f7c(pe, rec, 0xC);
        if (rec->kind != 0) {
            if (func_0205bfd4(pn) >= 0x20) {
                func_02051a48();
            }
            w->n110 = w->n110 + 1;
            func_020293f8(data_0206c5d4, k, rec->kind, pn);
            switch (rec->kind) {
                case 0:
                    w->r[k].f = -1;
                    break;
                case 1:
                    rec->f = func_020339b0(pn);
                    func_020293f8(data_0206c610, rec->f);
                    break;
                case 2:
                case 3:
                case 5:
                    rec->f = func_02040bc4(pn, data_0206e6a4, data_0206e698);
                    func_020293f8(data_0206c634, rec->f);
                    break;
                case 4:
                    rec->f = func_02032598(pn);
                    func_020293f8(data_0206c654, rec->f);
                    break;
                case 6:
                    rec->f = func_0203b204(pn);
                    func_020293f8(data_0206c678, rec->f);
                    break;
                case 7:
                    func_020293f8(data_0206c694);
                    break;
                case 8:
                    func_020293f8(data_0206c694);
                    break;
                default:
                    func_02051a48();
                    break;
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                    break;
            }
            if (rec->b == 0) {
                rec->b = 1;
            }
        }
        rec++;
        pe++;
        pn += 0x2C;
        k++;
    } while (k < 12);
    func_020293f8(data_0206c698, w->n114, w->n110);
    return w;
}
