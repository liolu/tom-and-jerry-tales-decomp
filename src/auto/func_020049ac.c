#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    V3 pos;
    u8 pad0[0x1C - 0xC];
    s32 f1c;
    u8 mtx[0x20];
} Cam;
typedef struct {
    u8 pad0[0x58];
    s32 f58;
    u8 pad1[0x7C - 0x5C];
    u8 mtx[0xA4 - 0x7C];
    s32 fa4;
    u8 pad2[0xC8 - 0xA8];
    s32 fc8;
} Obj;
extern Cam *data_0206ea0c;
void G3_MultMtx43(void *);
void func_01ffa724(s32, void *, s32);
static inline void G3_Scale(s32 x, s32 y, s32 z) {
    *(volatile s32 *) 0x400046C = x;
    *(volatile s32 *) 0x400046C = y;
    *(volatile s32 *) 0x400046C = z;
}
static inline void G3_Translate(s32 x, s32 y, s32 z) {
    *(volatile s32 *) 0x4000470 = x;
    *(volatile s32 *) 0x4000470 = y;
    *(volatile s32 *) 0x4000470 = z;
}
void func_020049ac(Obj *o, s32 a1, s32 a2) {
    Cam *cam;
    *(volatile u32 *) 0x4000444 = 0;
    G3_MultMtx43(o->mtx);
    *(volatile u32 *) 0x4000440 = 1;
    G3_Scale(o->f58, 0x100, o->f58);
    cam = data_0206ea0c;
    G3_Translate(cam->pos.x, cam->pos.y - (o->fa4 - o->fc8) + (o->f58 >> 2), cam->pos.z);
    *(volatile u32 *) 0x4000480 = 0x7FFF;
    *(volatile u32 *) 0x40004C0 = 0;
    *(volatile u32 *) 0x40004C4 = 0;
    *(volatile u32 *) 0x40004A8 = 0;
    *(volatile u32 *) 0x40004A4 = (a2 << 16) | 0x71;
    func_01ffa724(3, data_0206ea0c->mtx, data_0206ea0c->f1c);
    *(volatile u32 *) 0x40004C0 = 0x8000;
    *(volatile u32 *) 0x40004C4 = 0;
    *(volatile u32 *) 0x40004A8 = 0;
    *(volatile u32 *) 0x40004A4 = (a1 << 24) | 0xB0 | (a2 << 16);
    func_01ffa724(3, data_0206ea0c->mtx, data_0206ea0c->f1c);
    *(volatile u32 *) 0x4000440 = 2;
    *(volatile u32 *) 0x4000448 = 1;
}
