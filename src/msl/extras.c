/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern double frexp(double x, int *eptr);
extern double func_0205fcbc(double value, int exp);
extern double scalbn(double x, int n);

/* scalbn from https://github.com/zeldaret/st libs/c/src/extras.c (license: CC0-1.0), reused by tools/donor_match.py */
double scalbn(double x, int n) {
    double value;
    int exp;

    value = frexp(x, &exp);
    exp += n;

    return func_0205fcbc(value, exp);
}
