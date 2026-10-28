/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GXS_LoadOBJ from projets/blue-dragon-awakened-shadow/src/donor/GXS_LoadOBJ.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
extern u32 GXi_DmaId;
extern void MIi_CpuCopy32(const void *src, void *dest, u32 size);
extern void func_02051af4(u32 dmaNo, const void *src, void *dest, u32 size);
static inline void UnkGxCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_02051af4(dmaNo, src, dest, size);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}
static inline void *UnkGetSubObjCharPtr(void) {
    return (void *) 0x6600000;
}
void func_0204e130(const void *src, u32 offset, u32 size) {
    u8 *base = (u8 *) UnkGetSubObjCharPtr();
    UnkGxCopy32(GXi_DmaId, src, base + offset, size);
}
