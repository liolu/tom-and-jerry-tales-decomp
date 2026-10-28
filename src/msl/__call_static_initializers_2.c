#include "m2c.h"

typedef void (*StaticInit)(void);
extern StaticInit ARM9_CTOR_START[];

void __call_static_initializers(void) {
    StaticInit *ctor;
    for (ctor = ARM9_CTOR_START; ctor != 0 && *ctor != 0; ctor++) {
        (*ctor)();
    }
}
