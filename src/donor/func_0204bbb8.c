/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b521c from projets/dragon-ball-origins/src/donor/func_020b521c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long long s64;
typedef int s32;
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;
extern void func_0204bbb8(s32 a, const Vec *v1, const Vec *v2, Vec *dst);
void func_0204bbb8(s32 a, const Vec *v1, const Vec *v2, Vec *dst) {
    dst->x = v2->x + (s32) (((s64) a * v1->x) >> 12);
    dst->y = v2->y + (s32) (((s64) a * v1->y) >> 12);
    dst->z = v2->z + (s32) (((s64) a * v1->z) >> 12);
}
