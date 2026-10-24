/* compiler: 2.0/sp1p5  */
/* strstr from projets/blue-dragon-awakened-shadow/src/auto/strstr.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
u8 *func_0205c52c(u8 *s, u8 *t) {
    u8 c, d, e;
    u8 *p, *q, *r;
    if (t == ((void *) 0) || (c = *t) == 0) {
        return s;
    }
    d = *s;
    p = s + 1;
    while (d != 0) {
        if (d == c) {
            q = t + 1;
            r = p;
            do {
                e = *q++;
                d = *r++;
                if (d != e) {
                    break;
                }
            } while (d != 0);
            if (e == 0) {
                return p - 1;
            }
        }
        d = *p++;
    }
    return ((void *) 0);
}
