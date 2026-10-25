#include "m2c.h"
typedef struct {
    s32 f0;
    s32 f4;
    u8 pad[0xC];
    s32 m[3];
    s32 x;
    s32 y;
    s32 z;
    s32 f24;
} A;
typedef struct {
    s32 x, y, z;
} V;
void func_0204b918(s32, void *, void *);
void func_020386ec(void *, void *, s32, void *, void *, void *);
void func_0204b94c(void *, void *, void *);
s32 func_0204b980(void *, void *);
void func_0204baa0(void *, void *);
s32 func_0204b77c(s32, s32);
void func_02039d0c(void *, void *, s32);
s32 func_02038b64(A *a, A *b, s32 *out, s32 *tmp, s32 *res) {
    s32 s4[3];
    s32 s3[3];
    s32 s2[3];
    s32 s1[3];
    s32 t;
    s32 k;
    func_0204b918(a->f4, (u8 *) a + 0x14, s2);
    func_0204b918(b->f4, (u8 *) b + 0x14, s1);
    func_020386ec(s2, s1, b->f0, (u8 *) b + 0x24, s3, s4);
    func_0204b94c(s3, s2, tmp);
    if (func_0204b980(tmp, tmp) == 0) {
        return 0;
    }
    func_0204baa0(tmp, s4);
    *res = func_0204b980(s4, tmp) - *(s32 *) ((u8 *) a + 0x20);
    t    = func_0204b77c(*res, 0x2000);
    if (*res < 0) {
        k = -1;
        k += 0;
        *res = *res * k;
    }
    func_02039d0c(s4, tmp, t + *(s32 *) ((u8 *) a + 0x20));
    func_0204b918((s32) s2, tmp, tmp);
    out[0] = s4[0];
    out[1] = s4[1];
    out[2] = s4[2];
    out[3] = func_0204b980(s4, tmp);
    return 1;
}
