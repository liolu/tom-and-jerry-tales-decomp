#include "m2c.h"
typedef struct {
    s32 key;
    s32 val;
    u8 used;
    u8 pad[3];
} Ent;
typedef struct {
    u8 pad0[0x7C];
    Ent *ents;
    u8 pad80[4];
    s32 count;
    s32 cap;
} Tbl;
s32 FX_Div(s32, s32);

static inline Ent *Tbl_Next(Tbl *t, s32 *idx) {
    if (t->count == 0) {
        return 0;
    }
    for ((*idx)++; *idx < t->cap; (*idx)++) {
        if (t->ents[*idx].used == 0) {
            return &t->ents[*idx];
        }
    }
    return 0;
}

s32 func_02044b1c(Tbl *t, s32 x, s32 *out, s32 flag) {
    s32 i;
    Ent *cur;
    s32 idx;
    s32 n;
    Ent *prev;
    idx  = -1;
    n    = t->count;
    cur  = 0;
    prev = cur;
    if (n == 0) {
        return 0;
    }
    for (i = 0; i < n; i++) {
        cur = Tbl_Next(t, &idx);
        if (x <= cur->key << 12) {
            break;
        }
        prev = cur;
    }
    if (prev == 0) {
        prev = cur;
    }
    if (cur != 0) {
        if (flag && cur->key - prev->key <= 2) {
            *out = prev->val;
            *out -= *out >> 2;
            return 1;
        }
        if (cur == prev) {
            *out = prev->val;
        } else {
            s32 f = FX_Div(x - (prev->key << 12), (cur->key - prev->key) << 12);
            *out  = prev->val + (s32) (((s64) f * (cur->val - prev->val) + 0x800) >> 12);
        }
    }
    *out -= *out >> 2;
    return 1;
}
