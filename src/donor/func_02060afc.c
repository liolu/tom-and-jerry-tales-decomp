/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02004168 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/ansi_fp.c (license: none), reused by
 * tools/donor_match.py */
typedef struct decimal {
    char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
} decimal;
extern double func_0205fc00(double x, int *eptr);
extern double func_0205fcbc(double value, int exp);
extern int func_020613f0(double x);
extern void func_02060028(decimal *result, unsigned long long val);
extern void func_020600f4(decimal *result, const decimal *x, const decimal *y);
extern void func_02060314(decimal *result, long exp);
extern void func_02060afc(decimal *d, double x);
extern int func_02061348(unsigned long long x);
extern int func_020613dc(double x);
void func_02060028(decimal *result, unsigned long long val);
void func_020600f4(decimal *result, const decimal *x, const decimal *y);
void func_02060314(decimal *result, long exp);
inline int __count_trailing_zero(double x) {
    unsigned long long m = *(unsigned long long *) &x | 0x0010000000000000ULL;
    return func_02061348((m & -m) - 1);
}
void func_02060afc(decimal *d, double x) {
    char sgn = (char) (func_020613dc(x) != 0);

    if (x == 0.0) {
        d->sgn         = sgn;
        d->exp         = 0;
        d->sig.length  = 1;
        d->sig.text[0] = 0;
        return;
    }

    if (!(((sizeof(x) == sizeof(float)) ? __fpclassifyf((float) (x)) : func_020613f0((double) (x))) > 2)) {
        d->sgn        = sgn;
        d->exp        = 0;
        d->sig.length = 1;
        d->sig.text[0] =
            (((sizeof(x) == sizeof(float)) ? __fpclassifyf((float) (x)) : func_020613f0((double) (x))) == 1) ? 'N' : 'I';
        return;
    }

    if (sgn) {
        x = -x;
    }

    {
        int exp;
        double frac           = func_0205fc00(x, &exp);
        long num_bits_extract = 53 - __count_trailing_zero(frac);
        decimal int_d, pow2_d;

        func_02060314(&pow2_d, exp - num_bits_extract);
        func_02060028(&int_d, (unsigned long long) func_0205fcbc(frac, num_bits_extract));
        func_020600f4(d, &int_d, &pow2_d);
        d->sgn = sgn;
    }
}
int func_02061348(unsigned long long x);
