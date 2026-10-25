#include "m2c.h"
typedef struct {
    u32 colorMode;
    u8 pltt[0x200];
    u32 size;
    u32 mapData[1];
} BgRes;
void func_0204e488(void *, u32, u32);
void func_0204e188(void *, u32, u32);
void func_0204e548(void *, u32, u32);
void func_0204e248(void *, u32, u32);
void func_0204e608(void *, u32, u32);
void func_0204e308(void *, u32, u32);
void func_0204e6c8(void *, u32, u32);
void func_0204e3c8(void *, u32, u32);
void func_0204e4e8(void *, u32, u32);
void func_0204e1e8(void *, u32, u32);
void func_0204e5a8(void *, u32, u32);
void func_0204e2a8(void *, u32, u32);
void func_0204e668(void *, u32, u32);
void func_0204e368(void *, u32, u32);
void func_0204e728(void *, u32, u32);
void func_0204e428(void *, u32, u32);
void GX_LoadBGPltt(void *, u32, u32);
void GXS_LoadBGPltt(void *, u32, u32);
static inline void setCtl(volatile u16 *reg, u32 size, u32 col, u32 scr, u32 chr) {
    *reg = (u16) ((*reg & 0x43) | (size << 14) | (col << 7) | (scr << 8) | (chr << 2));
}
static inline void setAff(volatile u16 *reg, u32 scr, u32 chr) {
    *reg = (u16) ((*reg & 0x43) | (1 << 14) | (scr << 8) | (chr << 2));
}
static inline void setPrio(volatile u16 *reg, u32 prio) {
    *reg = (u16) ((*reg & ~3) | prio);
}
void func_0203c740(BgRes *res, u32 scr, u32 chr, u32 bg, u32 prio, s32 sub, u8 pltt, s32 affine, s32 loadMap) {
    u16 h;
    u32 mapSize;
    u8 *chrData;
    u32 size;
    u32 chrSize;
    u32 col;
    size = res->size;
    col  = res->colorMode;
    if (size > 3) {
        h       = (u16) (size >> 16);
        size    = (u16) (size & 0xFFF);
        mapSize = h * (size * 2);
        chrSize = *(u32 *) ((u8 *) res->mapData + mapSize) << 6;
        chrData = (u8 *) res->mapData + 4 + mapSize;
        if (size <= 0x20 && h <= 0x20) {
            size = 0;
        } else if (size <= 0x40 && h <= 0x20) {
            size = 1;
        } else if (size <= 0x20 && h <= 0x40) {
            size = 2;
        } else {
            size = 3;
        }
    } else if (size == 0) {
        chrSize = *(u32 *) ((u8 *) res->mapData + 0x800) << 6;
        chrData = (u8 *) res->mapData + 4 + 0x800;
        mapSize = 0x800;
    } else if (size == 1) {
        chrSize = *(u32 *) ((u8 *) res->mapData + 0x1000) << 6;
        chrData = (u8 *) res->mapData + 4 + 0x1000;
        mapSize = 0x1000;
    } else if (size == 2) {
        chrSize = *(u32 *) ((u8 *) res->mapData + 0x1000) << 6;
        chrData = (u8 *) res->mapData + 4 + 0x1000;
        mapSize = 0x1000;
    } else if (size == 3) {
        chrSize = *(u32 *) ((u8 *) res->mapData + 0x2000) << 6;
        chrData = (u8 *) res->mapData + 4 + 0x2000;
        mapSize = 0x2000;
    }
    if (sub == 0) {
        switch (bg) {
            case 0:
                setCtl((volatile u16 *) 0x4000008, size, col, scr, chr);
                setPrio((volatile u16 *) 0x4000008, prio);
                func_0204e488(chrData, 0, chrSize);
                if (loadMap) {
                    func_0204e188(res->mapData, 0, mapSize);
                }
                break;
            case 1:
                setCtl((volatile u16 *) 0x400000A, size, col, scr, chr);
                setPrio((volatile u16 *) 0x400000A, prio);
                func_0204e548(chrData, 0, chrSize);
                if (loadMap) {
                    func_0204e248(res->mapData, 0, mapSize);
                }
                break;
            case 2:
                if (affine) {
                    setAff((volatile u16 *) 0x400000C, scr, chr);
                } else {
                    setCtl((volatile u16 *) 0x400000C, size, col, scr, chr);
                }
                setPrio((volatile u16 *) 0x400000C, prio);
                func_0204e608(chrData, 0, chrSize);
                if (loadMap) {
                    func_0204e308(res->mapData, 0, mapSize);
                }
                break;
            case 3:
                if (affine) {
                    setAff((volatile u16 *) 0x400000E, scr, chr);
                } else {
                    setCtl((volatile u16 *) 0x400000E, size, col, scr, chr);
                }
                setPrio((volatile u16 *) 0x400000E, prio);
                func_0204e6c8(chrData, 0, chrSize);
                if (loadMap) {
                    func_0204e3c8(res->mapData, 0, mapSize);
                }
                break;
        }
        if (pltt) {
            GX_LoadBGPltt(res->pltt, 0, 0x200);
        }
    } else {
        switch (bg) {
            case 0:
                setCtl((volatile u16 *) 0x4001008, size, col, scr, chr);
                setPrio((volatile u16 *) 0x4001008, prio);
                func_0204e4e8(chrData, 0, chrSize);
                if (loadMap) {
                    func_0204e1e8(res->mapData, 0, mapSize);
                }
                break;
            case 1:
                setCtl((volatile u16 *) 0x400100A, size, col, scr, chr);
                setPrio((volatile u16 *) 0x400100A, prio);
                func_0204e5a8(chrData, 0, chrSize);
                if (loadMap) {
                    func_0204e2a8(res->mapData, 0, mapSize);
                }
                break;
            case 2:
                if (affine) {
                    setAff((volatile u16 *) 0x400100C, scr, chr);
                } else {
                    setCtl((volatile u16 *) 0x400100C, size, col, scr, chr);
                }
                setPrio((volatile u16 *) 0x400100C, prio);
                func_0204e668(chrData, 0, chrSize);
                if (loadMap) {
                    func_0204e368(res->mapData, 0, mapSize);
                }
                break;
            case 3:
                if (affine) {
                    setAff((volatile u16 *) 0x400100E, scr, chr);
                } else {
                    setCtl((volatile u16 *) 0x400100E, size, col, scr, chr);
                }
                setPrio((volatile u16 *) 0x400100E, prio);
                func_0204e728(chrData, 0, chrSize);
                if (loadMap) {
                    func_0204e428(res->mapData, 0, mapSize);
                }
                break;
        }
        if (pltt) {
            GXS_LoadBGPltt(res->pltt, 0, 0x200);
        }
    }
}
