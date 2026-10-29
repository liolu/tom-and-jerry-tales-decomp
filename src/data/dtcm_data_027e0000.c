/* compiler: 2.0/sp1p5 */
#include "m2c.h"

void func_0204ed00(void);
void OSi_IrqTimer0(void);
void OSi_IrqTimer1(void);
void OSi_IrqTimer2(void);
void OSi_IrqTimer3(void);
void OSi_IrqDma0(void);
void OSi_IrqDma1(void);
void OSi_IrqDma2(void);
void OSi_IrqDma3(void);

/* OS_IRQTable: the interrupt handlers, in DTCM */
void (*OS_IRQTable[22])(void) = {
    func_0204ed00, func_0204ed00, func_0204ed00, OSi_IrqTimer0, OSi_IrqTimer1, OSi_IrqTimer2, OSi_IrqTimer3, func_0204ed00,
    OSi_IrqDma0,   OSi_IrqDma1,   OSi_IrqDma2,   OSi_IrqDma3,   func_0204ed00, func_0204ed00, func_0204ed00, func_0204ed00,
    func_0204ed00, func_0204ed00, func_0204ed00, func_0204ed00, func_0204ed00, func_0204ed00,
};
