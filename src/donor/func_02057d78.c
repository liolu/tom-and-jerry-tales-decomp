/* compiler: 2.0/sp1p5  */
/* CARDi_SetCardDma from projets/blue-dragon-awakened-shadow/src/auto/CARDi_SetCardDma.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
typedef struct UnkCardCommon {
    u32 unk_000;
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c;
    u32 unk_010[2];
    u32 unk_018;
    u32 unk_01c;
    u32 unk_020;
    u32 unk_024;
    u32 unk_028;
} UnkCardCommon;
typedef struct UnkCardRom {
    void (*unk_000)(struct UnkCardRom *rom);
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c[5];
    u32 unk_020[0x80];
} UnkCardRom;
extern UnkCardCommon cardi_common;
extern UnkCardRom rom_stat;
extern void func_02052374(s32, s32, s32, M2C_UNK);
extern void CARDi_SetRomOp(u32 hi, u32 lo);
#pragma opt_rotateloops off
#pragma opt_propagation off
void func_02057d78(void) {
    UnkCardCommon *const p = &cardi_common;
    UnkCardRom *const rom  = &rom_stat;

    func_02052374(p->unk_028, 0x04100010, p->unk_020, 0x200);
    CARDi_SetRomOp(0xB7000000 | (p->unk_01c >> 8), p->unk_01c << 24);
    *(volatile u32 *) 0x040001A4 = rom->unk_004;
}
