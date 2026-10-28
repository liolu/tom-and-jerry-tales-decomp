/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
#include "m2c.h"

M2C_UNK __fill_mem();

/* memcpy from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/mem.c (license: none), reused by
 * tools/donor_match.py
 */
void *memcpy(void *dst, const void *src, int n) {
    const char *p = (char *) src;
    char *q       = (char *) dst;

    for (n++; --n;) {
        *q++ = *p++;
    }

    return dst;
}

s32 memset(s32 arg0) {
    __fill_mem();
    return arg0;
}

/* memchr from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/mem.c (license: none), reused by
 * tools/donor_match.py
 */
void *memchr(const void *src, int val, int n) {
    const unsigned char *p;

    unsigned int v = (val & 0xff);

    for (p = (unsigned char *) src, n++; --n;) {
        if (*p++ == v) {
            return ((void *) (p - 1));
        }
    }

    return 0;
}
