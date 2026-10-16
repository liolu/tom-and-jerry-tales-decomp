/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02055208 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fs/calls/func_02055208.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_020581d4(int a, int b, int c, int d, int e, int f, int g);
extern int func_020551e4();
extern int *data_021b23dc[];
int func_02055208(int a, int b, int c, int d) {
    func_020581d4((int) data_021b23dc[1], c, b, d, (int) func_020551e4, a, 1);
    return 6;
}
