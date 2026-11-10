#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    s32 m[9];
} M33;
typedef struct {
    u8 pad0[8];
    u16 ang;
    u8 pad1[6];
    u8 *cam;
    s32 f14;
} G;
extern s32 data_0206e9e8[];
extern u8 *data_0206ea14;
extern s16 data_02064348[];
extern V3 data_02064104;
void MTX_Identity33_(M33 *);
void func_02002c9c(void);
void func_0204b070(M33 *, s32, s32);
void MTX_MultVec33(V3 *, M33 *, V3 *);
void VEC_Normalize(V3 *, V3 *);
void VEC_CrossProduct(V3 *, V3 *, V3 *);
void VEC_MultAdd(s32, V3 *, V3 *, V3 *);
s32 func_02007470(void);
void func_02001d4c(void) {
    M33 m;
    V3 v;
    V3 u;
    MTX_Identity33_(&m);
    func_02002c9c();
    func_0204b070(&m, data_02064348[(((u16 *) data_0206e9e8)[4] >> 4) * 2],
                  data_02064348[(((u16 *) data_0206e9e8)[4] >> 4) * 2 + 1]);
    v   = *(V3 *) (*(u8 **) (data_0206ea14 + 4) + 0x1C);
    v.y = data_0206e9e8[5];
    MTX_MultVec33(&v, &m, &v);
    VEC_Normalize(&v, &v);
    VEC_CrossProduct(&v, &data_02064104, &u);
    VEC_CrossProduct(&u, &v, (V3 *) (((u8 **) data_0206e9e8)[4] + 0x8C));
    VEC_Normalize(&u, &u);
    VEC_MultAdd(0x6000, &v, (V3 *) (*(u8 **) (data_0206ea14 + 4) + 0xC), (V3 *) (((u8 **) data_0206e9e8)[4] + 0x80));
    VEC_MultAdd(-0x4800, &v, (V3 *) (*(u8 **) (data_0206ea14 + 4) + 0xC), (V3 *) (((u8 **) data_0206e9e8)[4] + 0x74));
    *(s32 *) (((u8 **) data_0206e9e8)[4] + 0x78) = *(s32 *) (data_0206ea14 + 0xA4) + 0x3000;
    *(s32 *) (((u8 **) data_0206e9e8)[4] + 0x84) -= 0x1800;
    if (func_02007470() == 7) {
        *(s32 *) (((u8 **) data_0206e9e8)[4] + 0x78) = *(s32 *) (*(u8 **) (data_0206ea14 + 4) + 0x10) + 0x3000;
    }
}
