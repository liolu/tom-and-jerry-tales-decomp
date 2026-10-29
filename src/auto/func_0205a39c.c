/* compiler: 2.0/sp1p2 -O4,p -lang c99 -ipa file -inline on,noauto */
/* longlong2str from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/printf.c (based on the CC0 TWEWY decomp),
 * preprocessed with its headers */
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
typedef struct decform {
    char style;
    char unused;
    short digits;
} decform;
void __num2dec(const decform *f, double x, decimal *d);
double __dec2num(const decimal *d);
extern int errno;
double __ieee754_acos(double);
double __ieee754_fmod(double, double);
double __ieee754_log(double);
double __ieee754_log10(double);
double __ieee754_pow(double, double);
double __ieee754_sqrt(double);
double __ieee754_atan2(double, double);
double __ieee754_asin(double);
double __ieee754_exp(double);
int __ieee754_rem_pio2(double, double *);
double __kernel_sin(double, double, int);
double __kernel_cos(double, double);
double __kernel_tan(double, double, int);
double nan(const char *arg);
double atan(double x);
double ceil(double x);
double copysign(double x, double y);
double cos(double x);
double floor(double x);
double frexp(double x, int *eptr);
double ldexp(double value, int exp);
double modf(double x, double *iptr);
double sin(double x);
double tan(double x);
double acos(double x);
double asin(double x);
double atan2(double y, double x);
double fmod(double x, double y);
double pow(double x, double y);
double sqrt(double x);
double log(double x);
float log10f(float x);
float sin__Ff(float x);
float cos__Ff(float x);
double scalbn(double x, int n);
double fabs__Fd(double x);
float fabsf__Ff(float x);
extern int __float_nan[];
extern int __float_huge[];
extern int __double_huge[];
int __fpclassifyd(double x);
int __signbitd(double x);
double fabs(double x);
double nan(const char *x);
double sqrt(double __x);
static inline long double fabsl(long double x) {
    return (long double) fabs((double) x);
}
typedef signed long intptr_t;
typedef unsigned long uintptr_t;
typedef intptr_t ptrdiff_t;
typedef unsigned long size_t;
typedef unsigned short wchar_t;
int mbtowc(wchar_t *pwc, const char *s, int n);
int __mbtowc_noconv(wchar_t *pwc, const char *str, int n);
int __wctomb_noconv(char *s, wchar_t wchar);
size_t mbstowcs(wchar_t *pDest, const char *pSrc, size_t num);
int wcstombs(char *s, const wchar_t *pwcs, unsigned int n);
void *memcpy(void *dst, const void *src, int n);
void *memmove(void *dst, const void *src, size_t len);
void *memset(void *dest, int val, int n);
void *memchr(const void *src, int val, int n);
int memcmp(const void *src1, const void *src2, int n);
typedef void (*msl_constraint_handler)(int, int, int);
void __msl_runtime_constraint_violation_s(int param1, int param2, int param3);
typedef char *va_list;
size_t func_0205bfd4(const char *str);
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t num);
int strcmp(char *str1, char *str2);
int strncmp(char *str1, char *str2, size_t num);
char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, int num);
char *strchr(const char *str, int chr);
size_t wcslen(const wchar_t *str);
wchar_t *wcscpy(wchar_t *dest, const wchar_t *src);
wchar_t *wcsncpy(wchar_t *dest, const wchar_t *src, size_t n);
const wchar_t *wcschr(const wchar_t *str, wchar_t chr);
extern const unsigned short __ctype_mapC[128];
static inline int printf_isdigit(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int) (__ctype_mapC[c] & 0x008);
}
static inline int printf_isupper(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int) (__ctype_mapC[c] & 0x200);
}
typedef long long intmax_t;
enum justification_options {
    left_justification,
    right_justification,
    zero_fill
};
enum sign_options {
    only_minus,
    sign_always,
    space_holder
};
enum argument_options {
    normal_argument,
    char_argument,
    short_argument,
    long_argument,
    long_long_argument,
    wchar_argument,
    intmax_argument,
    size_t_argument,
    ptrdiff_argument,
    long_double_argument
};
typedef struct {
    unsigned char justification_options;
    unsigned char sign_options;
    unsigned char precision_specified;
    unsigned char alternate_form;
    unsigned char argument_options;
    unsigned char conversion_char;
    int field_width;
    int precision;
} print_format;
typedef struct {
    char *CharStr;
    size_t MaxCharCount;
    size_t CharsWritten;
} __OutStrCtrl;
const char *parse_format(const char *format_string, va_list *arg, print_format *format);
char *func_0205a150(long num, char *buff, print_format format);
char *func_0205a39c(long long num, char *pBuf, print_format fmt) {
    unsigned long long unsigned_num, base;
    char *p;
    int n, digits;
    int minus    = 0;
    unsigned_num = num;
    minus        = 0;
    p            = pBuf;
    *--p         = 0;
    digits       = 0;
    if (!num && !fmt.precision && !(fmt.alternate_form && fmt.conversion_char == 'o')) {
        return p;
    }
    switch (fmt.conversion_char) {
        case 'd':
        case 'i':
            base = 10;
            if (num < 0) {
                if (num != 0x8000000000000000) {
                    unsigned_num = -num;
                }
                minus = 1;
            }
            break;
        case 'o':
            base             = 8;
            fmt.sign_options = only_minus;
            break;
        case 'u':
            base             = 10;
            fmt.sign_options = only_minus;
            break;
        case 'x':
        case 'X':
            base             = 16;
            fmt.sign_options = only_minus;
            break;
    }
    do {
        n = unsigned_num % base;
        unsigned_num /= base;
        if (n < 10) {
            n += '0';
        } else {
            n -= 10;
            if (fmt.conversion_char == 'x') {
                n += 'a';
            } else {
                n += 'A';
            }
        }
        *--p = n;
        ++digits;
    } while (unsigned_num != 0);
    if (base == 8 && fmt.alternate_form && *p != '0') {
        *--p = '0';
        ++digits;
    }
    if (fmt.justification_options == zero_fill) {
        fmt.precision = fmt.field_width;
        if (minus || fmt.sign_options != only_minus) {
            --fmt.precision;
        }
        if (base == 16 && fmt.alternate_form) {
            fmt.precision -= 2;
        }
    }
    if (pBuf - p + fmt.precision > 509) {
        return 0;
    }
    while (digits < fmt.precision) {
        *--p = '0';
        ++digits;
    }
    if (base == 16 && fmt.alternate_form) {
        *--p = fmt.conversion_char;
        *--p = '0';
    }
    if (minus) {
        *--p = '-';
    } else if (fmt.sign_options == sign_always) {
        *--p = '+';
    } else if (fmt.sign_options == space_holder) {
        *--p = ' ';
    }
    return p;
}
char *double2hex(long double num, char *buff, print_format format);
void func_020020f8(decimal *dec, int new_length);
char *float2str(long double num, char *buff, print_format format);
int __pformatter(void *(*WriteProc)(void *, const char *, size_t), void *WriteProcArg, const char *format_str, va_list arg);
typedef struct {
    char *wCharStr;
    size_t MaxCharCount;
    size_t CharsWritten;
} __wOutStrCtrl;
void *func_020031a4(void *wosc, const char *buffer, size_t numchars);
int vsnprintf(char *s, unsigned int n, const char *format, va_list arg);
int vsprintf(char *s, const char *format, va_list arg);
int sprintf(char *s, const char *format, ...);
