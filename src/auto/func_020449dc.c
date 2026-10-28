#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V;
typedef struct {
    s32 time;
    V v;
    u8 flag;
    u8 pad[3];
} E;
typedef struct {
    u8 pad[0x4c];
    E *arr;
    u8 pad2[4];
    s32 cnt;
    s32 n;
} O;
s32 FX_Div(s32, s32);
void func_01ff9df0(V *, V *, V *, s32);

s32 func_020449dc(O *obj, s32 t, V *out, s32 flag) {
    s32 i;
    s32 idx;
    E *prev;
    E *cur;
    s32 cnt;
    E *a;
    s32 n;
    idx  = -1;
    cnt  = obj->cnt;
    cur  = 0;
    prev = 0;
    if (cnt == 0) {
        return 0;
    }
    i = 0;
    if (cnt > 0) {
        do {
            if (cnt == 0) {
                cur = 0;
            } else {
                idx++;
                n = obj->n;
                if (idx < n) {
                    a   = obj->arr;
                    cur = &a[idx];
                    do {
                        if (cur->flag == 0) {
                            cur = &a[idx];
                            goto found;
                        }
                        cur++;
                        idx++;
                    } while (idx < n);
                }
                cur = 0;
            }
        found:
            if (t <= (cur->time << 12)) {
                break;
            }
            prev = cur;
            i++;
        } while (i < cnt);
    }
    if (prev == 0) {
        prev = cur;
    }
    if (cur != 0) {
        if (flag != 0 && cur->time - prev->time <= 2) {
            out->x = prev->v.x;
            out->y = prev->v.y;
            out->z = prev->v.z;
            return 1;
        }
        if (cur == prev) {
            out->x = prev->v.x;
            out->y = prev->v.y;
            out->z = prev->v.z;
        } else {
            s32 r = FX_Div(t - (prev->time << 12), (cur->time - prev->time) << 12);
            func_01ff9df0(&cur->v, &prev->v, out, r);
        }
    }
    return 1;
}
