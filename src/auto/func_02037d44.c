#include "m2c.h"
typedef struct Obj Obj;
typedef struct {
    Obj *obj;
    s32 min;
    s32 max;
} Ent;
struct Obj {
    u8 pad0[4];
    s32 *pos;
    u8 pad8[0x14 - 8];
    s32 off;
    u8 pad18[0x20 - 0x18];
    s32 r;
    u8 pad24[0x30 - 0x24];
    s16 ix;
    s16 iy;
};
extern u16 data_020a0f48;
extern Ent data_020a2e8c[];
extern Ent data_020a1bcc[];
void MIi_CpuCopyFast(const void *src, void *dst, u32 size);

void func_02037d44(Obj *o) {
    Ent tmpA;
    Ent tmpB;
    s32 c;
    s32 lo;
    s32 hi;
    s16 idx;
    s16 dir;

    c  = *o->pos + o->off;
    lo = c - o->r;
    hi = o->r + c;

    dir                    = 1;
    idx                    = o->ix;
    data_020a2e8c[idx].min = lo;
    data_020a2e8c[idx].max = hi;
    if (idx + 1 > data_020a0f48) {
        dir *= -1;
    } else if (data_020a2e8c[idx + 1].min >= lo) {
        dir *= -1;
    }
    while (idx + dir >= 0 && idx + dir < data_020a0f48) {
        if (dir > 0) {
            if (data_020a2e8c[idx + dir].min <= lo) {
                goto swap0;
            }
            break;
        } else {
            if (data_020a2e8c[idx + dir].min < lo) {
                break;
            }
        }
    swap0:
        MIi_CpuCopyFast(&data_020a2e8c[idx], &tmpA, sizeof(Ent));
        MIi_CpuCopyFast(&data_020a2e8c[idx + dir], &data_020a2e8c[idx], sizeof(Ent));
        MIi_CpuCopyFast(&tmpA, &data_020a2e8c[idx + dir], sizeof(Ent));
        data_020a2e8c[idx].obj->ix = idx;
        idx += dir;
    }
    o->ix = idx;

    dir                    = 1;
    idx                    = o->iy;
    data_020a1bcc[idx].min = lo;
    data_020a1bcc[idx].max = hi;
    if (idx + 1 > data_020a0f48) {
        dir *= -1;
    } else if (data_020a1bcc[idx + 1].max >= hi) {
        dir *= -1;
    }
    while (idx + dir >= 0 && idx + dir < data_020a0f48) {
        if (dir > 0) {
            if (data_020a1bcc[idx + dir].max <= hi) {
                goto swap1;
            }
            break;
        } else {
            if (data_020a1bcc[idx + dir].max < hi) {
                break;
            }
        }
    swap1:
        MIi_CpuCopyFast(&data_020a1bcc[idx], &tmpB, sizeof(Ent));
        MIi_CpuCopyFast(&data_020a1bcc[idx + dir], &data_020a1bcc[idx], sizeof(Ent));
        MIi_CpuCopyFast(&tmpB, &data_020a1bcc[idx + dir], sizeof(Ent));
        data_020a1bcc[idx].obj->iy = idx;
        idx += dir;
    }
    o->iy = idx;
}
