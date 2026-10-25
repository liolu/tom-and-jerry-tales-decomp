#include "m2c.h"
typedef struct {
    s32 x, y, z;
} Vec;
typedef struct {
    s16 id;
    u8 pad2[6];
    u8 mtx[0x24];
    Vec pos;
    u8 pad38[0x1C];
    u16 *model;
    u32 hasNode : 1;
    u32 node : 5;
    u32 visible : 1;
    u32 rest : 25;
} Obj;
typedef struct {
    u8 pad[4];
    u32 lo : 24;
    u32 enabled : 8;
    u8 pad8[0x60];
    s32 f68;
} Scene;
typedef struct {
    u8 pad[4];
    u16 shading;
} Model;
Scene *func_0203a58c(s32);
Model *func_02033118(u16);
void func_0204d638(void *);
s32 func_0203b3c0(Vec *, Vec *, u16 *);
s32 func_02033344(Model *, s32, s16, u16 *, u32);

static inline void G3_Translate(s32 x, s32 y, s32 z) {
    *(volatile u32 *) 0x4000470 = x;
    *(volatile u32 *) 0x4000470 = y;
    *(volatile u32 *) 0x4000470 = z;
}
static inline void G3_LightVector(u32 light, s16 x, s16 y, s16 z) {
    *(volatile u32 *) 0x40004c8 = ((x >> 3) & 0x3ff) | (((y >> 3) & 0x3ff) << 10) | (((z >> 3) & 0x3ff) << 20) | (light << 30);
}
static inline void G3_LightColor(u32 light, u16 color) {
    *(volatile u32 *) 0x40004cc = color | (light << 30);
}

s32 func_0203a74c(Obj *obj) {
    Scene *scene;
    Model *model;
    u32 mask = 0;
    u16 i;
    u16 n;
    Vec dirs[4];
    u16 colors[4];
    if (obj->visible == 0 || obj->id < 0 || obj->model == NULL) {
        return 0;
    }
    scene = func_0203a58c(obj->id);
    if (scene->enabled == 0) {
        return mask;
    }
    model                       = func_02033118(*obj->model);
    *(volatile u32 *) 0x4000444 = 0;
    *(volatile u32 *) 0x4000440 = 1;
    G3_Translate(obj->pos.x, obj->pos.y, obj->pos.z);
    *(volatile u32 *) 0x4000440 = 2;
    func_0204d638(obj->mtx);
    if (model->shading == 2) {
        n = func_0203b3c0(&obj->pos, dirs, colors);
        switch (n) {
            case 0:
                mask = 0;
                break;
            case 1:
                mask = 1;
                break;
            case 2:
                mask = 3;
                break;
            case 3:
                mask = 7;
                break;
            case 4:
                mask = 0xF;
                break;
        }
        if (n != 0) {
            for (i = 0; i < n; i++) {
                G3_LightVector(i, dirs[i].x, dirs[i].y, dirs[i].z);
                G3_LightColor(i, colors[i]);
            }
        }
    } else if (model->shading == 0) {
        *(volatile u32 *) 0x4000480 = 0x7FFF;
    }
    func_02033344(model, scene->f68, obj->hasNode ? obj->node : -1, obj->model, mask);
    *(volatile u32 *) 0x4000448 = 1;
}
