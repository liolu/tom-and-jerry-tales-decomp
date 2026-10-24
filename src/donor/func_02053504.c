/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PXI_InitFifo from projets/blue-dragon-awakened-shadow/src/donor/PXI_InitFifo.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern u32 func_020517f8(void);
extern u32 func_0205180c(u32 state);
extern void func_0204efc8(u32 mask);
extern void func_0204ee24(u32 mask, void *handler);
extern u32 func_0204ef68(u32 mask);
typedef void (*PxiCallback)(u32 tag, u32 data, BOOL err);
extern void func_02053504(void);
extern void func_020536fc(void);
typedef struct UnkPxiSystemWork {
    u8 unk_000[0x388];
    u32 unk_388[2];
} UnkPxiSystemWork;
static inline UnkPxiSystemWork *GetPxiSystemWork(void) {
    return (UnkPxiSystemWork *) 0x027ffc00;
}
extern u16 data_021b2344;
extern PxiCallback data_021b2348[32];
void func_02053504(void) {
    u32 enabled = func_020517f8();
    s32 i;

    if (!data_021b2344) {
        data_021b2344                  = 1;
        GetPxiSystemWork()->unk_388[0] = 0;
        for (i = 0; i < 32; i++) {
            data_021b2348[i] = 0;
        }
        (*(vu16 *) 0x04000184) = 0xc408;
        func_0204efc8(0x40000);
        func_0204ee24(0x40000, func_020536fc);
        func_0204ef68(0x40000);

        for (i = 0;; i++) {
            s32 timeout;
            s32 sync               = (*(vu16 *) 0x04000180) & 0xf;
            (*(vu16 *) 0x04000180) = sync << 8;
            if (sync == 0 && i > 4) {
                break;
            }
            timeout = 1000;
            while (((*(vu16 *) 0x04000180) & 0xf) == sync) {
                if (timeout <= 0) {
                    i = 0;
                    break;
                }
                timeout--;
            }
        }
    }
    func_0205180c(enabled);
}
extern void func_020536fc(void);
