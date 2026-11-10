#include "m2c.h"
typedef struct {
    u8 pad[0xC];
    s32 lim;
} Cfg;
typedef struct {
    u8 pad[0xAC];
    s32 speed;
} St;
extern s32 data_020692ec;
extern Cfg data_0206acc8;
extern St data_0206e6d4;
s32 func_02013198(s32 cur, s32 target, s32 fast) {
    s32 ret;
    s32 mode;
    s32 d;
    s32 lim;
    s32 v;
    double t;

    mode = data_020692ec;
    if (mode != 4) {
        if (target < 0) {
            target -= 0x800;
        } else {
            target += 0x800;
        }
    }
    if (fast != 0) {
        if (cur < target) {
            ret = cur + 0x666;
        } else if (cur > target) {
            ret = cur - 0x666;
        }
    } else {
        d = target - cur;
        if (mode == 4) {
            lim = data_0206acc8.lim;
            if (data_0206e6d4.speed < lim) {
                t = data_0206e6d4.speed;
                t *= 1.8;
                v                   = t;
                data_0206e6d4.speed = v;
                if (v > lim) {
                    data_0206e6d4.speed = lim;
                }
            }
            if (cur < target) {
                return cur + data_0206e6d4.speed;
            } else if (cur > target) {
                return cur - data_0206e6d4.speed;
            }
            return cur;
        } else {
            return (double) cur + 0.09 * (double) d;
        }
    }
    return ret;
}
