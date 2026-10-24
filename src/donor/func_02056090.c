/* compiler: 2.0/sp1p5  */
/* func_02015978 from projets/heroes-of-mana/src/auto/func_02015978.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK data_021b248c;
void func_02056090(u32 param_1) {
    void (*cb)(u32, u32, void *, u32) = *(void (**)(u32, u32, void *, u32))((u8 *) &data_021b248c + 0x1c);
    u32 count                         = *(u32 *) ((u8 *) &data_021b248c + 0x18);
    u32 arg                           = *(u32 *) ((u8 *) &data_021b248c + 0x20);

    if (count != 0) {
        *(u32 *) ((u8 *) &data_021b248c + 0x18) = 0;
    }
    if (cb != ((void *) 0)) {
        *(u32 *) ((u8 *) &data_021b248c + 0x1c) = 0;
        cb(param_1, arg, &data_021b248c, 0);
    }
}
