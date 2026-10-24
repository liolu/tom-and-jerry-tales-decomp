/* compiler: 2.0/sp1p5  */
/* PXI_IsCallbackReady from projets/blue-dragon-awakened-shadow/src/auto/PXI_IsCallbackReady.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned long u32;
int func_02053650(u32 bit, u32 index) {
    const volatile u32 *words = (const volatile u32 *) 0x027ffc00;
    return (words[index + 0x388 / 4] & (1U << bit)) != 0;
}
