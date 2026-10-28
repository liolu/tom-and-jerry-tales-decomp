/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c3730 from projets/dragon-ball-origins/src/donor/func_020c3730.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
#pragma cplusplus off
#pragma ipa file
int STD_CompareString(const char *s1, const char *s2) {
    while (*s1 == *s2 && *s1 != '\0') {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
