#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    u32 m : 2;
} M2;
typedef struct {
    u32 x : 1;
    u32 y : 1;
} B2;
void func_020098e4(void *);
s16 func_0203016c(s16, s16);
void func_0203437c(u16, V3 *);
void func_02037d44(void *);
void func_02039658(void *);
void func_02039670(void *);
void func_02039a08(void *);
u8 *func_0203a58c(void);
void func_0203b364(u16, s32, s32, s32);
void MTX_RotAxis33(void *, void *, s16, s16);
void MTX_MultVec33(void *, void *, V3 *);
void VEC_Add(void *, V3 *, V3 *);
extern u8 data_02064348[];

s32 func_0203a970(u8 *o) {
    V3 v1;
    V3 v0;
    u8 *e;
    u8 *p;
    if ((u32) (*(u32 *) (o + 0x58) << 0x18) >> 0x1F) {
        return 0;
    }
    if (*(s16 *) o < 0) {
        return 0;
    }
    e = func_0203a58c();
    if (*(s32 *) (o + 0xB8) != 0) {
        func_020098e4(o);
    }
    if (*(s16 *) (o + 0x50) > 0 && (*(u32 *) (e + 4) >> 0x18) > 1) {
        *(s16 *) (o + 0x50) = *(s16 *) (o + 0x50) - 1;
        if (*(s16 *) (o + 0x50) == 0) {
            u8 *n               = *(u8 **) (*(u8 **) (o + 0x54) + 0xC);
            *(u8 **) (o + 0x54) = n;
            if (n == 0) {
                *(u8 **) (o + 0x54) = *(u8 **) (e + 0x1C);
            }
            n                   = *(u8 **) (o + 0x54);
            *(s16 *) (o + 0x50) = func_0203016c(*(s16 *) (n + 2), *(s16 *) (n + 4));
        }
    }
    p = *(u8 **) (o + 0xB0);
    if (p != 0) {
        do {
            MTX_MultVec33(p + 4, o + 8, &v1);
            VEC_Add(o + 0x2C, &v1, &v1);
            func_0203437c(*(u16 *) p, &v1);
            p = *(u8 **) (p + 0x10);
        } while (p != 0);
    }
    p = *(u8 **) (o + 0xB4);
    if (p != 0) {
        do {
            MTX_MultVec33(p + 0x14, o + 8, &v0);
            VEC_Add(o + 0x2C, &v0, &v0);
            func_0203b364(*(u16 *) p, v0.x, v0.y, v0.z);
            p = *(u8 **) (p + 0x20);
        } while (p != 0);
    }
    if ((u32) (*(u32 *) (o + 0x58) << 0x17) >> 0x1F) {
        if (((s32) (*(u32 *) (o + 0xA0) << 0x1F) >> 0x1F) == 0) {
            func_02039658(o);
        }
        func_02039a08(o);
        func_02039670(o);
    }
    if (((s32) (*(u32 *) (o + 0xAC) << 0x1F) >> 0x1F) != 0) {
        p = *(u8 **) (o + 0xA8);
        if (p != 0) {
            do {
                func_02037d44(p);
                p = *(u8 **) (p + 0x38);
            } while (p != 0);
        }
        *(u32 *) (o + 0xAC) = *(u32 *) (o + 0xAC) & ~1;
    }
    {
        if (((M2 *) (o + 0x5C))->m != 0) {
            if (((B2 *) (o + 0x5C))->y != 0) {
                s32 i = ((s32) * (u16 *) (o + 6) >> 4) * 2;
                MTX_RotAxis33(o + 8, o + 0x44, *(s16 *) (data_02064348 + i * 2), *(s16 *) (data_02064348 + (i + 1) * 2));
                *(u32 *) (o + 0x5C) = *(u32 *) (o + 0x5C) & ~2;
            }
            if ((u32) (*(u32 *) (o + 0x58) << 0x16) >> 0x1F) {
                *(s32 *) (o + 8)    = (s32) (((long long) *(s32 *) (o + 0x38) * *(s32 *) (o + 8) + 0x800) >> 12);
                *(s32 *) (o + 0x18) = (s32) (((long long) *(s32 *) (o + 0x3C) * *(s32 *) (o + 0x18) + 0x800) >> 12);
                *(s32 *) (o + 0x28) = (s32) (((long long) *(s32 *) (o + 0x40) * *(s32 *) (o + 0x28) + 0x800) >> 12);
            }
            *(u32 *) (o + 0x5C) = *(u32 *) (o + 0x5C) & ~3;
            return 1;
        }
        return 0;
    }
}
