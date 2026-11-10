#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    s32 m[9];
} M33;
typedef struct NodeA {
    u8 pad[0x38];
    struct NodeA *next;
} NodeA;
typedef struct NodeB {
    u16 f0;
    u8 pad[2];
    V3 v4;
    struct NodeB *next;
} NodeB;
typedef struct NodeC {
    u16 f0;
    s16 f2;
    u8 pad[0x14 - 4];
    V3 v14;
    struct NodeC *next;
} NodeC;
typedef struct {
    u16 id;
    u16 slot;
    u8 pad4[4];
    M33 m8;
    V3 v2c;
    u8 pad38[0x50 - 0x38];
    s16 f50;
    u8 pad52[2];
    void *f54;
    u32 f58;
    u8 pad5c[4];
    s32 f60, f64, f68;
    u16 f6c;
    u8 pad6e[2];
    s32 f70, f74, f78;
    u8 pad7c[0x88 - 0x7c];
    s32 f88, f8c, f90;
    s32 f94, f98, f9c;
    u8 pada0[0xa8 - 0xa0];
    NodeA *la;
    u8 padac[4];
    NodeB *lb;
    NodeC *lc;
    u8 padb8[0xbc - 0xb8];
} Rec;
typedef struct {
    u8 pad0[2];
    s16 f2;
    s16 f4;
} Tpl;
typedef struct {
    u8 pad0[4];
    u32 ca : 8;
    u32 cb : 8;
    u32 cc : 8;
    u32 cd : 8;
    u8 pad8[0x1c - 8];
    Tpl *tpl;
    u8 pad20[4];
    NodeB *tb;
    NodeC *tc;
    u8 pad2c[0x74 - 0x2c];
} Def;
typedef struct {
    u16 f0;
    u16 count;
    u8 pad4[0xc - 4];
    NodeB *freeB;
    u8 pad10[0x18 - 0x10];
    NodeC *freeC;
    NodeA *freeA;
} Pool;
extern Rec data_020aecfc[];
extern Def data_020ac17c[];
extern Pool data_020ac15c;
void *func_01ff8000(s32, s32);
void func_020380fc(s32, s32, s32);
Def *func_0203a58c(s16);
void MIi_CpuCopy32(void *, void *, s32);
void MTX_MultVec33(V3 *, M33 *, V3 *);
void VEC_Add(V3 *, V3 *, V3 *);
u16 func_02033d1c(u16, V3 *);
u16 func_0203b290(V3 *, s16 *);
s32 func_0203016c(s32, s32);
void func_0200979c(Rec *);
static inline void rela(Rec *rec) {
    NodeA *n = rec->la;
    NodeA *old;
    if (n != 0) {
        old                 = data_020ac15c.freeA;
        data_020ac15c.freeA = n;
        while (n->next != 0) {
            n = n->next;
        }
        n->next = old;
        rec->la = 0;
    }
}
static inline void relb(Rec *rec) {
    NodeB *n = rec->lb;
    NodeB *old;
    if (n != 0) {
        old                 = data_020ac15c.freeB;
        data_020ac15c.freeB = n;
        while (n->next != 0) {
            n = n->next;
        }
        n->next = old;
        rec->lb = 0;
    }
}
static inline void relc(Rec *rec) {
    NodeC *n = rec->lc;
    NodeC *old;
    if (n != 0) {
        old                 = data_020ac15c.freeC;
        data_020ac15c.freeC = n;
        while (n->next != 0) {
            n = n->next;
        }
        n->next = old;
        rec->lc = 0;
    }
}
static inline NodeA *geta(s32 heap) {
    NodeA *na = data_020ac15c.freeA;
    if (na != 0) {
        data_020ac15c.freeA = na->next;
    } else {
        na = func_01ff8000(heap, 0x3C);
    }
    return na;
}
static inline NodeB *getb(s32 heap) {
    NodeB *nb = data_020ac15c.freeB;
    if (nb != 0) {
        data_020ac15c.freeB = nb->next;
    } else {
        nb = func_01ff8000(heap, 0x14);
    }
    return nb;
}
static inline NodeC *getc(s32 heap) {
    NodeC *nc = data_020ac15c.freeC;
    if (nc != 0) {
        data_020ac15c.freeC = nc->next;
    } else {
        nc = func_01ff8000(heap, 0x24);
    }
    return nc;
}
void func_02039e84(s32 slot, s32 id, s32 heap) {
    Def *def;
    NodeA *na, *olda;
    NodeB *nb, *oldb, *tb, *nextb;
    NodeC *nc, *oldc, *tc, *nextc;
    u32 i;
    u32 cnt;
    Rec *rec;
    V3 v;
    V3 w;
    if (id == 0xFFFF) {
        return;
    }
    rec       = &data_020aecfc[slot];
    rec->slot = slot;
    def       = &data_020ac17c[id];
    rela(rec);
    relb(rec);
    relc(rec);
    for (i = 0; i < def->ca; i++) {
        na       = geta(heap);
        na->next = rec->la;
        rec->la  = na;
    }
    for (i = 0; i < def->cb; i++) {
        nb       = getb(heap);
        nb->next = rec->lb;
        rec->lb  = nb;
    }
    for (i = 0; i < def->cc; i++) {
        nc       = getc(heap);
        nc->next = rec->lc;
        rec->lc  = nc;
    }
    func_020380fc(slot, id, heap);
    if (rec->lb != 0) {
        tb = func_0203a58c(id)->tb;
        nb = rec->lb;
        if (nb != 0) {
            do {
                nextb = nb->next;
                MIi_CpuCopy32(tb, nb, 0x14);
                nb->next = nextb;
                MTX_MultVec33(&v, &rec->m8, &v);
                VEC_Add(&rec->v2c, &nb->v4, &v);
                nb->v4 = tb->v4;
                nb->f0 = func_02033d1c(tb->f0, &v);
                nb     = nb->next;
                tb     = tb->next;
            } while (nb != 0);
        }
    }
    if (rec->lc != 0) {
        tc = func_0203a58c(id)->tc;
        nc = rec->lc;
        if (nc != 0) {
            do {
                nextc = nc->next;
                MIi_CpuCopy32(tc, nc, 0x24);
                nc->next = nextc;
                MTX_MultVec33(&w, &rec->m8, &w);
                VEC_Add(&rec->v2c, &nc->v14, &w);
                nc->f0 = func_0203b290(&w, &nc->f2);
                nc     = nc->next;
                tc     = tc->next;
            } while (nc != 0);
        }
    }
    rec->f94 = 0;
    rec->f98 = 0;
    rec->f9c = 0;
    rec->f70 = 0;
    rec->f74 = 0;
    rec->f78 = 0;
    rec->f88 = 0;
    rec->f8c = 0;
    rec->f90 = 0;
    rec->f60 = 0;
    rec->f64 = 0;
    rec->f68 = 0;
    rec->f6c = 0;
    rec->f58 &= ~0x100;
    rec->f54 = def->tpl;
    cnt      = def->cd;
    if (cnt != 0) {
        rec->f50 = func_0203016c(def->tpl->f2, def->tpl->f4);
    } else {
        rec->f50 = -1;
        if (cnt == 0) {
            rec->f54 = 0;
        }
    }
    rec->id = id;
    func_0200979c(rec);
    rec->f58 &= ~0x400;
}
