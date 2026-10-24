/* compiler: 2.0/sp1p5  */
/* func_02015b24 from projets/heroes-of-mana/src/auto/func_02015b24.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_0205600c();
extern M2C_UNK func_02056614(s32);
extern M2C_UNK func_02056870(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_021b248c;
s32 func_0205623c(s32 arg0, u32 arg1) {
    if (func_0205600c() == 0) {
        return 1;
    }
    (*(s32 *) ((s8 *) (&data_021b248c) + (4))) = 0;
    func_02056614(0x03006000);
    while ((*(volatile s32 *) ((s8 *) (&data_021b248c) + (4))) == 0) {
    }
    (*(s32 *) ((s8 *) (&data_021b248c) + (4))) = 0;
    (*(s32 *) ((s8 *) (&data_021b248c) + (8))) = 0;
    func_02056870(0, 2, 0, 0);
    func_02056614((arg0 & 0xFF) | 0x02006100);
    func_02056614(((arg1 << 16) >> 16) | 0x01010000);
    return 0;
}
