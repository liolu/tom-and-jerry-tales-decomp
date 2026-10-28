#include "m2c.h"

typedef struct {
    s32 key;
    s32 used;
    u8 b8[0xA0C];
} Slot;
typedef struct {
    u8 pad[0x4C];
    Slot slot[3];
    s32 pad2;
    u32 cnt;
    s32 sz;
} Ctx;

extern s32 CARD_IsPulledOut();
extern void func_020011f4();
extern void func_02035e74(void *, void *);
extern void func_020550c8(void *, void *, s32);
extern void FS_SeekFile(void *, s32, s32);

s32 func_020363a4(Ctx *c, s32 key) {
    u8 *p5;
    s32 found;
    s32 i;
    u8 *p6;
    u32 off;

    found = -1;
    if (CARD_IsPulledOut() != 0) {
        func_020011f4();
    }
    for (i = 0; i < 3; i++) {
        if (key == c->slot[i].key) {
            c->slot[i].used = 1;
            return i;
        }
    }
    for (i = 0; i < 3; i++) {
        if (c->slot[i].used == 0) {
            found = i;
            break;
        }
    }
    FS_SeekFile(c, key * ((c->cnt + 1) * 12) + ((c->sz + 0x1B) & ~3), 0);
    off = found * 0xA14;
    func_020550c8(c, (u8 *) c + 0x54 + off, (c->cnt + 1) * 12);
    i = 0;
    if (i < c->cnt) {
        p5 = (u8 *) c + 0x420 + off;
        p6 = (u8 *) c + 0x60 + off;
        do {
            func_02035e74(p6, p5);
            i++;
            p5 += 0x14;
            p6 += 0xC;
        } while (i < c->cnt);
    }
    c->slot[found].used = 1;
    c->slot[found].key  = key;
    return found;
}
