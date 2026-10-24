/* compiler: 2.0/sp1p5  */
/* OSi_RescheduleThread from projets/heroes-of-mana/src/auto/OSi_RescheduleThread.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK data_021b0460;
extern M2C_UNK data_021b0484;
extern s32 func_02051850(void);
extern void *func_02050398(void);
extern s32 func_02050644(void *arg0);
extern void func_02050690(void *arg0);
void func_020503c0(void) {
    u8 *cur;
    u8 *next;
    u8 *info;

    info = (u8 *) &data_021b0484;
    if (*(u32 *) ((u8 *) &data_021b0460 + 4) != 0) {
        return;
    }
    if (*(u16 *) (info + 2) == 0) {
        if (func_02051850() != 0x12) {
            goto switch_thread;
        }
    }
    *(u16 *) (info + 0) = 1;
    return;

switch_thread:
    cur  = *(u8 **) *(u8 **) ((u8 *) &data_021b0460 + 8);
    next = (u8 *) func_02050398();
    if (cur == next || next == ((void *) 0)) {
        return;
    }
    if (*(u32 *) (cur + 0x64) != 2) {
        if (func_02050644(cur) != 0) {
            return;
        }
    }
    {
        void (*cb)(void *, void *) = *(void (**)(void *, void *))((u8 *) &data_021b0460);
        if (cb != ((void *) 0)) {
            cb(cur, next);
        }
    }
    {
        void (*cb2)(void *, void *) = *(void (**)(void *, void *))(info + 0xC);
        if (cb2 != ((void *) 0)) {
            cb2(cur, next);
        }
    }
    *(u8 **) ((u8 *) &data_021b0460 + 0x28) = next;
    func_02050690(next);
}
