#include "m2c.h"
typedef struct {
    s16 x, y, z, w;
} Q;
typedef struct {
    s32 frame;
    Q q;
    u8 skip;
    u8 pad[3];
} Key;
typedef struct {
    u8 pad[0x64];
    Key *keys;
    s32 pad68;
    s32 count;
    s32 n;
} Anim;
s32 func_0204b77c(s32, s32);
void func_01ffa2dc(Q *, Q *, Q *, s32);

static inline Key *nextKey(Anim *a, s32 *idx) {
    if (a->count == 0) {
        return NULL;
    }
    for ((*idx)++; *idx < a->n; (*idx)++) {
        if (a->keys[*idx].skip == 0) {
            return &a->keys[*idx];
        }
    }
    return NULL;
}

s32 func_02044c5c(Anim *a, s32 t, Q *out, s32 snap) {
    s32 count;
    Key *cur;
    s32 i;
    s32 idx;
    Key *prev;
    count = a->count;
    idx   = -1;
    cur   = NULL;
    prev  = NULL;
    if (count == 0) {
        return 0;
    }
    for (i = 0; i < count; i++) {
        cur = nextKey(a, &idx);
        if (t <= cur->frame << 12) {
            break;
        }
        prev = cur;
    }
    if (prev == NULL) {
        prev = cur;
    }
    if (cur != NULL) {
        if (snap != 0 && cur->frame - prev->frame <= 2) {
            *out = prev->q;
            return 1;
        }
        if (cur == prev) {
            *out = prev->q;
        } else {
            Q q0 = prev->q;
            Q q1 = cur->q;
            func_01ffa2dc(&q0, &q1, out, func_0204b77c(t - (prev->frame << 12), (cur->frame - prev->frame) << 12));
        }
    }
    return 1;
}
