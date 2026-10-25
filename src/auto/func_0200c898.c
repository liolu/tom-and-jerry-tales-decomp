#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    s16 id;
    u16 f2;
    u8 pad0[0x2C - 4];
    V3 v2c;
    u8 pad1[0x44 - 0x38];
    V3 v44;
    u8 pad2[0x58 - 0x50];
    u32 f58;
} Ent;
typedef struct {
    u16 f0;
    u8 pad[6];
    Ent *cur;
} Scr;
typedef struct {
    u8 pad[6];
    u16 n;
} Tbl;
typedef struct {
    u8 pad[0xC];
    s8 name[0x74 - 0xC];
} Rec;
typedef struct {
    u8 b[0x28];
} Obj;
extern V3 data_02063e20;
extern Scr data_02086d90;
extern Tbl data_020ac154;
extern u8 data_0206e6a4[];
extern u8 data_02064110[];
extern u8 data_02064104[];
extern Obj data_020b8b44[];
extern Rec data_020ac17c[];
void func_0203ccc8(s32, s32);
Ent *func_0203a95c(s16);
s32 func_0203a5a0(s32, void *, void *, s32, s32, s32, void *);
s32 func_0203dea8(void);
void func_0203d098(Obj *);
s32 func_0203dec8(void);
u8 func_0203deb8(void);
u8 *func_0203ded8(void);
s32 func_0203d8d8(s8 *, u8 *);
u16 func_0203d740(s8 *, u16, u16, u8 *, u8, s32, s32);
void func_0203ac18(void);
void func_0203a74c(Ent *);
void func_0204d760(void);
void func_02051868(void);
void func_0203cc68(s32, s32);
static inline void VEC_Set(V3 *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}
void func_0200c898(s32 id) {
    V3 z  = {0, 0, 0};
    V3 a  = data_02063e20;
    s32 i = 0;
    Ent *e;
    Rec *rec;
    s32 m, c;
    u8 b;
    u8 *font;
    u16 x, y;
    func_0203ccc8(0, 0);
    data_02086d90.f0 = 0;
    for (i = 0; i < data_020ac154.n; i++) {
        if (func_0203a95c(i)->id == id) {
            break;
        }
    }
    if (i != data_020ac154.n) {
        e                 = func_0203a95c(id);
        data_02086d90.cur = e;
        e->v2c            = z;
        e->v44            = a;
        e->f58 |= 0x40;
    } else {
        data_02086d90.cur = func_0203a95c(func_0203a5a0(id, data_02064110, data_02064104, 0, 1, 0, data_0206e6a4));
    }
    func_0203d098(&data_020b8b44[func_0203dea8()]);
    rec  = &data_020ac17c[data_02086d90.cur->id];
    m    = func_0203dea8();
    c    = func_0203dec8();
    b    = func_0203deb8();
    font = func_0203ded8();
    y    = 0xB0 - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
    x    = 0x80 - (func_0203d8d8(rec->name, font) >> 1);
    func_0203d740(rec->name, x, y, font, b, c, (s32) &data_020b8b44[m]);
    func_0203ac18();
    func_0203a74c(data_02086d90.cur);
    func_0204d760();
    *(volatile u32 *) 0x4000540 = 1;
    func_02051868();
    func_0203cc68(0, 0);
}
