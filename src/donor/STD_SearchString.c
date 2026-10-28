/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c367c from projets/dragon-ball-origins/src/donor/func_020c367c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
#pragma cplusplus off
#pragma ipa file
char *STD_SearchString(const char *str, const char *pattern) {
    int i;
    int j;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; pattern[j] != '\0' && str[i + j] == pattern[j]; j++) {
        }
        if (pattern[j] == '\0') {
            return (char *) str + i;
        }
    }
    return 0;
}
