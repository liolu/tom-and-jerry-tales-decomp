/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef long long s64;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;
extern s32 VEC_Mag(const Vec *v);
typedef volatile u64 vu64;
extern void VEC_Normalize(const Vec *src, Vec *dst);
extern void VEC_MultAdd(s32 a, const Vec *v1, const Vec *v2, Vec *dst);
extern s32 VEC_Distance(const Vec *a, const Vec *b);

/* func_0206308c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fx/fx_vec.c (license: none), reused by
 * tools/donor_match.py */
s32 VEC_Mag(const Vec *v) {
    s64 t = (s64) v->x * v->x;
    t += (s64) v->y * v->y;
    t += (s64) v->z * v->z;
    t <<= 2;

    (*(vu16 *) 0x040002B0) = 1;
    (*(u64 *) 0x040002B8)  = t;

    while ((*(vu16 *) 0x040002B0) & 0x8000) {
    }
    return ((s32) (*(vu32 *) 0x040002B4) + 1) >> 1;
}

/* func_020630ec from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fx/fx_vec.c (license: none), reused by
 * tools/donor_match.py */
void VEC_Normalize(const Vec *src, Vec *dst) {
    s64 t = (s64) src->x * src->x;
    s32 sqrt;
    s64 div;

    t += (s64) src->y * src->y;
    t += (s64) src->z * src->z;

    (*(vu16 *) 0x04000280) = 2;
    (*(vu64 *) 0x04000290) = 1LL << 56;
    (*(vu64 *) 0x04000298) = t;

    (*(vu16 *) 0x040002B0) = 1;
    (*(u64 *) 0x040002B8)  = t << 2;

    while ((*(vu16 *) 0x040002B0) & 0x8000) {
    }
    sqrt = (s32) (*(vu32 *) 0x040002B4);

    while ((*(vu16 *) 0x04000280) & 0x8000) {
    }
    div = (s64) (*(u64 *) 0x040002A0);

    div *= sqrt;

    dst->x = (s32) ((div * src->x + (1LL << 44)) >> 45);
    dst->y = (s32) ((div * src->y + (1LL << 44)) >> 45);
    dst->z = (s32) ((div * src->z + (1LL << 44)) >> 45);
}

/* func_020b521c from projets/dragon-ball-origins/src/donor/func_020b521c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
void VEC_MultAdd(s32 a, const Vec *v1, const Vec *v2, Vec *dst) {
    dst->x = v2->x + (s32) (((s64) a * v1->x) >> 12);
    dst->y = v2->y + (s32) (((s64) a * v1->y) >> 12);
    dst->z = v2->z + (s32) (((s64) a * v1->z) >> 12);
}

/* func_0206338c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fx/fx_vec.c (license: none), reused by
 * tools/donor_match.py */
s32 VEC_Distance(const Vec *a, const Vec *b) {
    s64 t;
    s32 d;

    d = a->x - b->x;
    t = (s64) d * d;
    d = a->y - b->y;
    t += (s64) d * d;
    d = a->z - b->z;
    t += (s64) d * d;
    t <<= 2;

    (*(vu16 *) 0x040002B0) = 1;
    (*(u64 *) 0x040002B8)  = t;

    while ((*(vu16 *) 0x040002B0) & 0x8000) {
    }
    return ((s32) (*(vu32 *) 0x040002B4) + 1) >> 1;
}
