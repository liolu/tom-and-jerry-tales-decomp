#include "m2c.h"
typedef struct {
    u32 attr01;
    u16 attr2;
    u16 pad;
} Oam;
typedef struct {
    Oam oam[67];
    u16 w[67];
    u16 h[67];
    u16 next;
    u16 unit;
    s32 shared;
} Blk;
typedef struct {
    s32 kind;
    u16 w;
    u16 h;
    u32 attr0;
    u32 size;
    u8 data[4];
} Res;
extern s32 data_020b84dc;
extern Blk data_020b84e0[];
void OS_Terminate(void);
void GX_LoadOBJPltt(void *, u32, u32);
void GXS_LoadOBJPltt(void *, u32, u32);
void func_0204e0d8(void *, u32, u32);
void func_0204e130(void *, u32, u32);
void DC_FlushRange(void *, u32);
void GX_LoadOAM(void *, u32, u32);
void GXS_LoadOAM(void *, u32, u32);
void GX_GetSizeOfOBJ(void);
void GX_GetSizeOfSubOBJ(void);
void func_0203bd24(Res *res, u32 idx, u16 x, u16 y, u16 prio, s32 keep, u16 pal) {
    u32 v;
    Oam *oam;
    u32 attr0;
    u8 *pal_data;
    u32 mode;
    s32 kind;
    u32 size;
    u32 name;
    u32 pltt;
    u8 *base;
    u16 ww;
    u16 hh;
    hh                                  = res->h;
    ww                                  = res->w;
    kind                                = res->kind;
    data_020b84e0[data_020b84dc].w[idx] = ww;
    data_020b84e0[data_020b84dc].h[idx] = hh;
    mode                                = 0;
    if (kind == 2) {
        OS_Terminate();
        mode = 3;
    }
    size     = res->size;
    base     = res->data;
    pal_data = base + size;
    attr0    = res->attr0;
    pltt     = *(u32 *) (base + size);
    if (kind != 0 && kind != 1 && kind != 2) {
        OS_Terminate();
    }
    if (pltt != 0) {
        pal_data += 4;
    } else {
        pal_data = 0;
    }
    if (data_020b84e0[data_020b84dc].shared != 0 && idx == 0x42) {
        if (pal_data != 0) {
            OS_Terminate();
        }
        if (attr0 != 0x40000000) {
            OS_Terminate();
        }
        if (kind == 0 && pal != 15) {
            OS_Terminate();
        }
    }
    if (keep != 0) {
        if (data_020b84e0[data_020b84dc].shared != 0 && idx == 0x42) {
            name = 0;
        } else {
            oam  = &data_020b84e0[data_020b84dc].oam[idx];
            name = oam->attr2 & 0x3FF;
        }
    } else {
        if (data_020b84e0[data_020b84dc].shared != 0 && idx == 0x42) {
            name = 0;
        } else {
            name = data_020b84e0[data_020b84dc].next;
        }
    }
    if (data_020b84dc == 0) {
        if (keep == 0 && pltt != 0) {
            if (kind == 0) {
                if (data_020b84e0[data_020b84dc].shared != 0 && pal == 15 && idx != 0x42) {
                    OS_Terminate();
                } else {
                    GX_LoadOBJPltt(pal_data, pal << 5, pltt);
                }
            } else if (data_020b84e0[data_020b84dc].shared != 0) {
                if (pltt > 0x1E0) {
                    pltt = 0x1E0;
                }
                GX_LoadOBJPltt(pal_data, 0, pltt);
            } else {
                GX_LoadOBJPltt(pal_data, 0, pltt);
            }
        }
        func_0204e0d8(base, name * data_020b84e0[data_020b84dc].unit, size);
        oam = &data_020b84e0[data_020b84dc].oam[idx];
        if (mode == 3) {
            oam->attr01 = attr0 | ((y & 0xFF) | (mode << 10)) | (((u32) x << 23) >> 7);
        } else {
            oam->attr01 = attr0 | ((y & 0xFF) | (kind << 13) | (mode << 10)) | (((u32) x << 23) >> 7);
        }
        oam->attr2 = name | (prio << 10) | (pal << 12);
        DC_FlushRange(&data_020b84e0[data_020b84dc].oam[idx], 8);
        GX_LoadOAM(&data_020b84e0[data_020b84dc].oam[idx], idx << 3, 8);
    } else {
        if (keep == 0 && pltt != 0) {
            if (kind == 0) {
                if (data_020b84e0[data_020b84dc].shared != 0 && pal == 15 && idx != 0x42) {
                    OS_Terminate();
                } else {
                    GXS_LoadOBJPltt(pal_data, pal << 5, pltt);
                }
            } else if (data_020b84e0[data_020b84dc].shared != 0) {
                if (pltt > 0x1E0) {
                    pltt = 0x1E0;
                }
                GXS_LoadOBJPltt(pal_data, 0, pltt);
            } else {
                GXS_LoadOBJPltt(pal_data, 0, pltt);
            }
        }
        func_0204e130(base, name * data_020b84e0[data_020b84dc].unit, size);
        oam = &data_020b84e0[data_020b84dc].oam[idx];
        if (mode == 3) {
            oam->attr01 = attr0 | ((y & 0xFF) | (mode << 10)) | (((u32) x << 23) >> 7);
        } else {
            oam->attr01 = attr0 | ((y & 0xFF) | (kind << 13) | (mode << 10)) | (((u32) x << 23) >> 7);
        }
        oam->attr2 = name | (prio << 10) | (pal << 12);
        DC_FlushRange(&data_020b84e0[data_020b84dc].oam[idx], 8);
        GXS_LoadOAM(&data_020b84e0[data_020b84dc].oam[idx], idx << 3, 8);
    }
    if (keep == 0) {
        data_020b84e0[data_020b84dc].next += size / data_020b84e0[data_020b84dc].unit;
        if (data_020b84dc == 0) {
            GX_GetSizeOfOBJ();
        } else {
            GX_GetSizeOfSubOBJ();
        }
    }
}
