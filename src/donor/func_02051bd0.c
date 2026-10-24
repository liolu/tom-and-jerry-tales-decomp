/* compiler: 2.0/sp1p5  */
/* MI_DmaFill32Async from projets/heroes-of-mana/src/auto/MI_DmaFill32Async.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
extern void func_02051d2c(s32 n);
extern u32 func_020517f8(void);
extern void func_0205180c(u32 s);
extern void func_0204eeac(s32 n, void (*cb)(void *), void *arg);
extern void func_01ffa69c(s32 n, u32 ctrl, u32 src, u32 cnt);
void func_02051bd0(s32 dmaNo, u32 dest, u32 data, u32 size, void (*callback)(void *), void *arg) {
    u32 state;
    if (size == 0) {
        if (callback != ((void *) 0)) {
            callback(arg);
        }
        return;
    }
    func_02051d2c(dmaNo);
    if (callback != ((void *) 0)) {
        func_0204eeac(dmaNo, callback, arg);
        state                                               = func_020517f8();
        *(volatile u32 *) (0x04000000 + (dmaNo * 4) + 0xE0) = data;
        func_01ffa69c(dmaNo, 0x040000E0 + (dmaNo * 4), dest, (size >> 2) | 0xC5000000);
        func_0205180c(state);
        return;
    }
    state                                               = func_020517f8();
    *(volatile u32 *) (0x04000000 + (dmaNo * 4) + 0xE0) = data;
    func_01ffa69c(dmaNo, 0x040000E0 + (dmaNo * 4), dest, (size >> 2) | 0x85000000);
    func_0205180c(state);
}
