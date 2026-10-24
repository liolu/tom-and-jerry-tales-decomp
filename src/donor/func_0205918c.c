/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c35e8 from projets/dragon-ball-origins/src/donor/func_020c35e8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
#pragma cplusplus off
#pragma ipa file
char *func_0205918c(char *dst, const char *src) {
    char *ret = dst;

    while (*src != '\0') {
        *dst++ = *src++;
    }
    *dst = '\0';
    return ret;
}
