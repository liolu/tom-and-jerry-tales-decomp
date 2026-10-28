#include "m2c.h"
extern u16 data_0206413c[];
extern s32 data_02064260[];
extern s32 data_02064158[];
extern s32 data_0206414c[];
extern s32 data_02064144[];
extern u16 data_02064168[2][9];
extern void func_0203e12c(void *);
extern void DC_FlushRange(void *, s32);
extern s32 func_0203d068(s32);
extern s32 func_0203d080(s32);
extern void MIi_CpuCopyFast(void *, s32, s32);
extern void func_0203d924(s32, s32, s32, u32, u32, void *);

void func_0203d578(u8 *obj, s32 a, s32 *p) {
    s32 r0   = *(s32 *) obj;
    u32 mode = *(u32 *) (obj + 0x204);
    s32 chg  = 0;
    u32 shape;
    u32 idx;
    s32 off;
    s32 sz;
    u8 *dst;
    switch (mode) {
        case 0:
        case 1:
        case 2:
        case 3:
            idx   = data_0206413c[mode];
            shape = mode;
            sz    = *(s32 *) (obj + 0x208 + idx * 2) << 6;
            dst   = obj + 0x20c + idx * 2;
            off   = idx * 2;
            break;
        default: {
            u32 w = (u16) (mode & 0xfff);
            u32 h = (u16) (mode >> 16);
            idx   = w * h;
            sz    = *(s32 *) (obj + 0x208 + idx * 2) << 6;
            dst   = obj + 0x20c + idx * 2;
            off   = idx * 2;
            if (w <= 0x20 && h <= 0x20) {
                shape = 0;
            } else if (w <= 0x40 && h <= 0x20) {
                shape = 1;
            } else if (w <= 0x20 && h <= 0x40) {
                shape = 2;
            } else {
                shape = 3;
            }
            break;
        }
    }
    if (shape != data_02064260[p[1]]) {
        chg  = 1;
        p[1] = data_02064158[shape];
    }
    if (r0 != data_0206414c[p[3]]) {
        chg  = 1;
        p[3] = data_02064144[r0];
    }
    if (chg != 0) {
        func_0203e12c(p);
    }
    DC_FlushRange(obj + 0x208, off + sz + 4);
    MIi_CpuCopyFast(dst, func_0203d068(p[0]), sz);
    MIi_CpuCopyFast(obj + 0x208, func_0203d080(p[0]), off);
    func_0203d924(a, 0, 0, ((u32) data_02064168[0][p[1]] << 19) >> 16, ((u32) data_02064168[1][p[1]] << 19) >> 16, p);
}
