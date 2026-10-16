/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02061460 from https://github.com/zeldaret/st libs/c/src/extras.c (license: CC0-1.0), reused by tools/donor_match.py */
extern double func_0205fc00(double x, int *eptr);
extern double func_0205fcbc(double value, int exp);
extern double func_02061460(double x, int n);
double func_02061460(double x, int n) {
    double value;
    int exp;

    value = func_0205fc00(x, &exp);
    exp += n;

    return func_0205fcbc(value, exp);
}
