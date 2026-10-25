#include "m2c.h"
typedef enum {
    EXT01 = 0,
    EXT23 = 1
} ExtP;
typedef enum {
    SZ0 = 0
} SizeE;
typedef struct {
    s32 bg;
    s32 size;
    s32 obj;
    s32 mode;
    s32 pad10;
    s32 pad14;
    s32 charBase;
    s32 scrBase;
} BgCfg;
extern s32 data_02064260[];
extern s32 data_0206414c[];
extern s32 func_0203df08(s32);

static inline void setCtrl(volatile u16 *reg, s32 size, s32 mode, s32 scr, s32 chr, ExtP ext) {
    *reg = (u16) ((*reg & 0x43) | (size << 14) | (mode << 7) | (scr << 8) | (chr << 2) | (ext << 13));
}
static inline void setCtrlText(volatile u16 *reg, s32 size, s32 mode, s32 scr, s32 chr) {
    *reg = (u16) ((*reg & 0x43) | (size << 14) | (mode << 7) | (scr << 8) | (chr << 2));
}

void func_0203e12c(BgCfg *c) {
    s32 size = data_02064260[c->size];
    s32 mode = data_0206414c[c->mode];
    s32 obj  = c->obj;
    ExtP ext = EXT01;
    switch (c->bg) {
        case 0:
            setCtrl((volatile u16 *) 0x4000008, size, mode, c->scrBase, c->charBase, ext);
            break;
        case 1:
            setCtrl((volatile u16 *) 0x400000a, size, mode, c->scrBase, c->charBase, ext);
            break;
        case 2:
            if (func_0203df08(obj)) {
                setCtrlText((volatile u16 *) 0x400000c, size, mode, c->scrBase, c->charBase);
            }
            break;
        case 3:
            if (func_0203df08(obj)) {
                setCtrlText((volatile u16 *) 0x400000e, size, mode, c->scrBase, c->charBase);
            }
            break;
        case 4:
            setCtrl((volatile u16 *) 0x4001008, size, mode, c->scrBase, c->charBase, ext);
            break;
        case 5:
            setCtrl((volatile u16 *) 0x400100a, size, mode, c->scrBase, c->charBase, ext);
            break;
        case 6:
            if (func_0203df08(obj)) {
                setCtrlText((volatile u16 *) 0x400100c, size, mode, c->scrBase, c->charBase);
            }
            break;
        case 7:
            if (func_0203df08(obj)) {
                setCtrlText((volatile u16 *) 0x400100e, size, mode, c->scrBase, c->charBase);
            }
            break;
    }
}
