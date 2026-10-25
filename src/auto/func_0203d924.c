#include "m2c.h"
extern u16 *func_0203e3cc(s32);

void func_0203d924(u8 pal, s32 x, s32 y, s32 w, u16 h, s32 obj) {
    u16 tx0;
    u16 ty0;
    u16 tw;
    u16 th;
    u16 *map;
    u16 txe;
    u16 tye;
    u16 tx;
    u16 ty;
    u16 idx;
    u16 sx;
    ty0 = y >> 3;
    tx0 = x >> 3;
    th  = ((y + h + 7) >> 3) - ty0;
    map = func_0203e3cc(obj);
    tw  = ((x + w + 7) >> 3) - tx0;
    txe = tx0 + tw > 32 ? 32 : tx0 + tw;
    tye = ty0 + th <= 32 ? ty0 + th : 32;
    for (ty = ty0; ty < tye; ty++) {
        idx = tx0 + ty * 32;
        for (tx = tx0; tx < txe; tx++) {
            map[idx] = (map[idx] & 0xFFF) | (pal << 12);
            idx++;
        }
    }
    sx  = tx0 < 32 ? 32 : tx0;
    txe = ty0 + th > 32 ? 32 : ty0 + th;
    for (ty = ty0; ty < tye; ty++) {
        idx = sx + 0x3E0 + ty * 32;
        for (tx = sx; tx < txe; tx++) {
            map[idx] = (map[idx] & 0xFFF) | (pal << 12);
            idx++;
        }
    }
}
