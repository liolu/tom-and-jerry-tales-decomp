/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __pformatter from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/printf.c (itself based on the CC0 TWEWY decomp),
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
char *func_0205a39c(long long num, char *pBuf, print_format fmt);
char *double2hex(long double num, char *buff, print_format format);
void func_020020f8(decimal *dec, int new_length);
char *float2str(long double num, char *buff, print_format format);
int __pformatter(void *(*WriteProc)(void *, const char *, size_t), void *WriteProcArg, const char *format_str, va_list arg) {
    int num_chars, chars_written, field_width;
    const char *format_ptr;
    const char *curr_format;
    print_format format;
    long long_num;
    long long long_long_num;
    long double long_double_num;
    char buff[512];
    char *buff_ptr;
    char *string_end;
    char *cstring_end;
    char fill_char = ' ';
    char *strptr;
    format_ptr    = format_str;
    chars_written = 0;
    while (*format_ptr) {
        if (!(curr_format = strchr(format_ptr, '%'))) {
            num_chars = func_0205bfd4(format_ptr);
            chars_written += num_chars;
            if (num_chars && !(*WriteProc)(WriteProcArg, format_ptr, num_chars)) {
                return -1;
            }
            break;
        }
        num_chars = curr_format - format_ptr;
        chars_written += num_chars;
        if (num_chars && !(*WriteProc)(WriteProcArg, format_ptr, num_chars)) {
            return -1;
        }
        format_ptr = curr_format;
        format_ptr = parse_format(format_ptr, &arg, &format);
        switch (format.conversion_char) {
            case 'd':
            case 'i':
                if (format.argument_options == long_argument) {
                    long_num = (*(long *) ((arg += ((((unsigned int) (sizeof(long))) + 3U) & ~3U)) -
                                           ((((unsigned int) (sizeof(long))) + 3U) & ~3U)));
                } else if (format.argument_options == long_long_argument) {
                    long_long_num = (*(long long *) ((arg += ((((unsigned int) (sizeof(long long))) + 3U) & ~3U)) -
                                                     ((((unsigned int) (sizeof(long long))) + 3U) & ~3U)));
                } else if (format.argument_options == intmax_argument) {
                    long_long_num = (*(intmax_t *) ((arg += ((((unsigned int) (sizeof(intmax_t))) + 3U) & ~3U)) -
                                                    ((((unsigned int) (sizeof(intmax_t))) + 3U) & ~3U)));
                } else if (format.argument_options == size_t_argument) {
                    long_num = (*(size_t *) ((arg += ((((unsigned int) (sizeof(size_t))) + 3U) & ~3U)) -
                                             ((((unsigned int) (sizeof(size_t))) + 3U) & ~3U)));
                } else if (format.argument_options == ptrdiff_argument) {
                    long_num = (*(ptrdiff_t *) ((arg += ((((unsigned int) (sizeof(ptrdiff_t))) + 3U) & ~3U)) -
                                                ((((unsigned int) (sizeof(ptrdiff_t))) + 3U) & ~3U)));
                } else {
                    long_num = (*(int *) ((arg += ((((unsigned int) (sizeof(int))) + 3U) & ~3U)) -
                                          ((((unsigned int) (sizeof(int))) + 3U) & ~3U)));
                }
                if (format.argument_options == short_argument) {
                    long_num = (short) long_num;
                }
                if (format.argument_options == char_argument) {
                    long_num = (char) long_num;
                }
                if ((format.argument_options == long_long_argument) || (format.argument_options == intmax_argument)) {
                    if (!(buff_ptr = func_0205a39c(long_long_num, buff + 512, format))) {
                        goto conversion_error;
                    }
                } else {
                    if (!(buff_ptr = func_0205a150(long_num, buff + 512, format))) {
                        goto conversion_error;
                    }
                }
                num_chars = buff + 512 - 1 - buff_ptr;
                break;
            case 'o':
            case 'u':
            case 'x':
            case 'X':
                if (format.argument_options == long_argument) {
                    long_num = (*(unsigned long *) ((arg += ((((unsigned int) (sizeof(unsigned long))) + 3U) & ~3U)) -
                                                    ((((unsigned int) (sizeof(unsigned long))) + 3U) & ~3U)));
                } else if (format.argument_options == long_long_argument) {
                    long_long_num = (*(long long *) ((arg += ((((unsigned int) (sizeof(long long))) + 3U) & ~3U)) -
                                                     ((((unsigned int) (sizeof(long long))) + 3U) & ~3U)));
                } else if (format.argument_options == intmax_argument) {
                    long_long_num = (*(intmax_t *) ((arg += ((((unsigned int) (sizeof(intmax_t))) + 3U) & ~3U)) -
                                                    ((((unsigned int) (sizeof(intmax_t))) + 3U) & ~3U)));
                } else if (format.argument_options == size_t_argument) {
                    long_num = (*(size_t *) ((arg += ((((unsigned int) (sizeof(size_t))) + 3U) & ~3U)) -
                                             ((((unsigned int) (sizeof(size_t))) + 3U) & ~3U)));
                } else if (format.argument_options == ptrdiff_argument) {
                    long_num = (*(ptrdiff_t *) ((arg += ((((unsigned int) (sizeof(ptrdiff_t))) + 3U) & ~3U)) -
                                                ((((unsigned int) (sizeof(ptrdiff_t))) + 3U) & ~3U)));
                } else {
                    long_num = (*(unsigned int *) ((arg += ((((unsigned int) (sizeof(unsigned int))) + 3U) & ~3U)) -
                                                   ((((unsigned int) (sizeof(unsigned int))) + 3U) & ~3U)));
                }
                if (format.argument_options == short_argument) {
                    long_num = (unsigned short) long_num;
                }
                if (format.argument_options == char_argument) {
                    long_num = (unsigned char) long_num;
                }
                if ((format.argument_options == long_long_argument) || (format.argument_options == intmax_argument)) {
                    if (!(buff_ptr = func_0205a39c(long_long_num, buff + 512, format))) {
                        goto conversion_error;
                    }
                } else {
                    if (!(buff_ptr = func_0205a150(long_num, buff + 512, format))) {
                        goto conversion_error;
                    }
                }
                num_chars = buff + 512 - 1 - buff_ptr;
                break;
            case 'f':
            case 'F':
            case 'e':
            case 'E':
            case 'g':
            case 'G':
                if (format.argument_options == long_double_argument) {
                    long_double_num = (*(long double *) ((arg += ((((unsigned int) (sizeof(long double))) + 3U) & ~3U)) -
                                                         ((((unsigned int) (sizeof(long double))) + 3U) & ~3U)));
                } else {
                    long_double_num = (*(double *) ((arg += ((((unsigned int) (sizeof(double))) + 3U) & ~3U)) -
                                                    ((((unsigned int) (sizeof(double))) + 3U) & ~3U)));
                }
                if (!(buff_ptr = float2str(long_double_num, buff + 512, format))) {
                    goto conversion_error;
                }
                num_chars = buff + 512 - 1 - buff_ptr;
                break;
            case 'a':
            case 'A':
                if (format.argument_options == long_double_argument) {
                    long_double_num = (*(long double *) ((arg += ((((unsigned int) (sizeof(long double))) + 3U) & ~3U)) -
                                                         ((((unsigned int) (sizeof(long double))) + 3U) & ~3U)));
                } else {
                    long_double_num = (*(double *) ((arg += ((((unsigned int) (sizeof(double))) + 3U) & ~3U)) -
                                                    ((((unsigned int) (sizeof(double))) + 3U) & ~3U)));
                }
                if (!(buff_ptr = double2hex(long_double_num, buff + 512, format))) {
                    goto conversion_error;
                }
                num_chars = buff + 512 - 1 - buff_ptr;
                break;
            case 's':
                if (format.argument_options == wchar_argument) {
                    wchar_t *wcs_ptr = (*(wchar_t **) ((arg += ((((unsigned int) (sizeof(wchar_t *))) + 3U) & ~3U)) -
                                                       ((((unsigned int) (sizeof(wchar_t *))) + 3U) & ~3U)));
                    if (wcs_ptr == 0) {
                        wcs_ptr = L"";
                    }
                    if ((num_chars = wcstombs(buff, wcs_ptr, sizeof(buff))) < 0) {
                        goto conversion_error;
                    }
                    buff_ptr = &buff[0];
                } else {
                    buff_ptr = (*(char **) ((arg += ((((unsigned int) (sizeof(char *))) + 3U) & ~3U)) -
                                            ((((unsigned int) (sizeof(char *))) + 3U) & ~3U)));
                }
                if (buff_ptr == 0) {
                    buff_ptr = "";
                }
                if (format.alternate_form) {
                    num_chars = (unsigned char) *buff_ptr++;
                    if (format.precision_specified && num_chars > format.precision) {
                        num_chars = format.precision;
                    }
                } else if (format.precision_specified) {
                    num_chars = format.precision;
                    if ((cstring_end = (char *) memchr(buff_ptr, 0, num_chars)) != 0) {
                        num_chars = cstring_end - buff_ptr;
                    }
                } else {
                    num_chars = func_0205bfd4(buff_ptr);
                }
                break;
            case 'n':
                buff_ptr = (*(char **) ((arg += ((((unsigned int) (sizeof(char *))) + 3U) & ~3U)) -
                                        ((((unsigned int) (sizeof(char *))) + 3U) & ~3U)));
                switch (format.argument_options) {
                    case normal_argument:
                        *(int *) buff_ptr = chars_written;
                        break;
                    case short_argument:
                        *(short *) buff_ptr = chars_written;
                        break;
                    case long_argument:
                        *(long *) buff_ptr = chars_written;
                        break;
                    case intmax_argument:
                        *(intmax_t *) buff_ptr = chars_written;
                        break;
                    case size_t_argument:
                        *(size_t *) buff_ptr = chars_written;
                        break;
                    case ptrdiff_argument:
                        *(ptrdiff_t *) buff_ptr = chars_written;
                        break;
                    case long_long_argument:
                        *(long long *) buff_ptr = chars_written;
                        break;
                }
                continue;
            case 'c':
                buff_ptr  = buff;
                *buff_ptr = (*(int *) ((arg += ((((unsigned int) (sizeof(int))) + 3U) & ~3U)) -
                                       ((((unsigned int) (sizeof(int))) + 3U) & ~3U)));
                num_chars = 1;
                break;
            case '%':
                buff_ptr  = buff;
                *buff_ptr = '%';
                num_chars = 1;
                break;
            case 0xFF:
            default:
            conversion_error:
                num_chars = func_0205bfd4(curr_format);
                chars_written += num_chars;
                if (num_chars && !(*WriteProc)(WriteProcArg, curr_format, num_chars)) {
                    return -1;
                }
                return chars_written;
        }
        field_width = num_chars;
        if (format.justification_options != left_justification) {
            fill_char = (format.justification_options == zero_fill) ? '0' : ' ';
            if (((*buff_ptr == '+') || (*buff_ptr == '-') || (*buff_ptr == ' ')) && (fill_char == '0')) {
                if ((*WriteProc)(WriteProcArg, buff_ptr, 1) == 0) {
                    return -1;
                }
                ++buff_ptr;
                num_chars--;
            }
            while (field_width < format.field_width) {
                if ((*WriteProc)(WriteProcArg, &fill_char, 1) == 0) {
                    return -1;
                }
                ++field_width;
            }
        }
        if (num_chars && !(*WriteProc)(WriteProcArg, buff_ptr, num_chars)) {
            return -1;
        }
        if (format.justification_options == left_justification) {
            while (field_width < format.field_width) {
                char blank = ' ';
                if ((*WriteProc)(WriteProcArg, &blank, 1) == 0) {
                    return -1;
                }
                ++field_width;
            }
        }
        chars_written += field_width;
    }
    return chars_written;
}
typedef struct {
    char *wCharStr;
    size_t MaxCharCount;
    size_t CharsWritten;
} __wOutStrCtrl;
void *func_020031a4(void *wosc, const char *buffer, size_t numchars);
int vsnprintf(char *s, unsigned int n, const char *format, va_list arg);
int vsprintf(char *s, const char *format, va_list arg);
int sprintf(char *s, const char *format, ...);
