#include "m2c.h"
typedef struct {
    s32 pad[3];
    void *pre;
    s32 pad10;
    void *post;
} PmLists;
extern PmLists data_021b248c;
void func_02056a28(void *);
u32 func_020517f8(void);
void func_0205180c(u32);
u32 func_0204ef98(u32);
u32 func_0204ef3c(u32);
s32 func_02058a44(void);
s32 func_02056964(void);
void func_020565b8(u32 *, u32 *);
void func_020564bc(s32, s32);
s32 func_0205623c(u16, u16);
void func_02051a58(void);
void func_0205185c(u32);
void func_02056870(s32, s32, s32, s32);
void func_02056418(s32);
void func_02056590(void);

static inline u16 disableIrq(void) {
    u16 prev                    = *(volatile u16 *) 0x4000208;
    *(volatile u16 *) 0x4000208 = 0;
    return prev;
}
static inline u16 enableIrq(void) {
    u16 prev                    = *(volatile u16 *) 0x4000208;
    *(volatile u16 *) 0x4000208 = 1;
    return prev;
}
static inline u16 restoreIrq(u16 v) {
    u16 prev                    = *(volatile u16 *) 0x4000208;
    *(volatile u16 *) 0x4000208 = v;
    return prev;
}
static inline u32 getVCount(void) {
    return *(volatile u32 *) 0x27ffc3c;
}
static inline void waitVBlank(void) {
    u32 cnt = *(volatile u32 *) 0x27ffc3c;
    while (cnt == getVCount()) {
    }
}

void func_02056640(u32 trigger, u16 logic, u16 keys) {
    u16 preIme;
    u32 enabled;
    u32 preIe;
    s32 powerOff = 0;
    u32 preGx;
    u32 preGxs;
    s32 lcd;
    u32 led0;
    u32 led1;
    volatile u32 cnt;
    u16 param;
    u16 keyParam;

    func_02056a28(data_021b248c.pre);
    preIme  = disableIrq();
    enabled = func_020517f8();
    preIe   = func_0204ef98(0x3fffff);
    func_0204ef3c(0x40000);
    func_0205180c(enabled);
    enableIrq();
    if (trigger & 8) {
        if (*(u16 *) 0x27ffc40 == 2) {
            trigger &= ~8;
        }
    }
    if (trigger & 0x10) {
        if (func_02058a44() == 0) {
            trigger &= ~0x10;
        }
    }
    preGx  = *(volatile u32 *) 0x4000000;
    preGxs = *(volatile u32 *) 0x4001000;
    lcd    = func_02056964();
    func_020565b8(&led0, &led1);
    func_020564bc(2, 0);
    cnt = getVCount();
    while (cnt == getVCount()) {
    }
    cnt = getVCount();
    *(volatile u32 *) 0x4000000 &= ~0x30000;
    *(volatile u32 *) 0x4001000 &= ~0x10000;
    while (cnt == getVCount()) {
    }
    cnt = getVCount();
    while (cnt == getVCount()) {
    }
    param = trigger | (led0 << 5) | (led1 << 6);
    while (func_0205623c(param, logic | keys) != 0) {
    }
    func_02051a58();
    func_0205185c(0x996a00);
    if (trigger & 8) {
        if (*(volatile u32 *) 0x4000214 & 0x100000) {
            powerOff = 1;
        }
    }
    if (!powerOff) {
        if (lcd == 1) {
            func_02056870(1, 1, 1, 0);
        } else {
            func_02056418(1);
        }
        *(volatile u32 *) 0x4000000 = preGx;
        *(volatile u32 *) 0x4001000 = preGxs;
    }
    func_020517f8();
    func_0204ef3c(preIe);
    func_0205180c(enabled);
    restoreIrq(preIme);
    if (powerOff) {
        func_02056590();
    }
    func_02056a28(data_021b248c.post);
}
