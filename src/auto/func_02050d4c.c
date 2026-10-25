#include "m2c.h"
extern u8 data_027e0000[];
extern char SDK_IRQ_STACKSIZE[];
extern char SDK_SYS_STACKSIZE[];
typedef struct {
    s32 f0;
    s32 enabled;
} MainEx;
extern MainEx data_021b06dc;
u32 func_020506dc(void);
void *func_02050d4c(s32 id) {
    switch (id) {
        case 0:
            return (void *) 0x023E0000;
        case 2:
            if (!data_021b06dc.enabled || (func_020506dc() & 3) == 1) {
                return 0;
            }
            return (void *) 0x02700000;
        case 3:
            return (void *) 0x02000000;
        case 4: {
            u32 irqStackLo = (u32) data_027e0000 + 0x3F80 - (u32) SDK_IRQ_STACKSIZE;
            u32 sysStackLo;
            if (!(s32) SDK_SYS_STACKSIZE) {
                sysStackLo = (u32) data_027e0000;
                if (sysStackLo < 0x027E00A0) {
                    sysStackLo = 0x027E00A0;
                }
            } else if ((s32) SDK_SYS_STACKSIZE < 0) {
                sysStackLo = 0x027E00A0 - (s32) SDK_SYS_STACKSIZE;
            } else {
                sysStackLo = irqStackLo - (s32) SDK_SYS_STACKSIZE;
            }
            return (void *) sysStackLo;
        }
        case 5:
            return (void *) 0x027FF680;
        case 6:
            return (void *) 0x037F8000;
        default:
            return 0;
    }
}
