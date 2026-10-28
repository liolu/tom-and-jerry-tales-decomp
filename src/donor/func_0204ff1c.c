/* compiler: 2.0/sp1p5  */
/* OSi_RemoveThreadFromList from projets/blue-dragon-awakened-shadow/src/auto/OSi_RemoveThreadFromList.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK OSi_SystemCallbackInSwitchThread;
void func_0204ff1c(u8 *param_1) {
    u8 *prev = ((void *) 0);
    u8 *cur  = *(u8 **) ((u8 *) &OSi_SystemCallbackInSwitchThread + 0x2C);

    while (cur != ((void *) 0) && cur != param_1) {
        prev = cur;
        cur  = *(u8 **) (cur + 0x68);
    }
    if (prev == ((void *) 0)) {
        *(u8 **) ((u8 *) &OSi_SystemCallbackInSwitchThread + 0x2C) = *(u8 **) (param_1 + 0x68);
        return;
    }
    *(u8 **) (prev + 0x68) = *(u8 **) (param_1 + 0x68);
}
