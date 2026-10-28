/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef long long s64;
typedef int s32;
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;
extern s32 VEC_DotProduct(const Vec *a, const Vec *b);
extern void VEC_CrossProduct(const Vec *a, const Vec *b, Vec *axb);

/* func_02062fcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fx/fx_vec.c (license: none), reused by
 * tools/donor_match.py */
s32 VEC_DotProduct(const Vec *a, const Vec *b) {
    return (s32) (((s64) a->x * b->x + (s64) a->y * b->y + (s64) a->z * b->z + (1 << 11)) >> 12);
}

/* func_02063008 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fx/fx_vec.c (license: none), reused by
 * tools/donor_match.py */
void VEC_CrossProduct(const Vec *a, const Vec *b, Vec *axb) {
    s32 x = (s32) (((s64) a->y * b->z - (s64) a->z * b->y + (1 << 11)) >> 12);
    s32 y = (s32) (((s64) a->z * b->x - (s64) a->x * b->z + (1 << 11)) >> 12);
    s32 z = (s32) (((s64) a->x * b->y - (s64) a->y * b->x + (1 << 11)) >> 12);

    axb->x = x;
    axb->y = y;
    axb->z = z;
}
