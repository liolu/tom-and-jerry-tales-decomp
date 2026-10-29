/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __strtold from https://github.com/Yotona/twewy libs/c/src/strtold.c (MSL), preprocessed with its headers */
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
extern const unsigned short __ctype_mapC[128];
extern const unsigned char __lower_mapC[128];
extern const unsigned char __upper_mapC[128];
static inline int isalpha(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int) (__ctype_mapC[c] & 0x001);
}
static inline int isdigit(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int) (__ctype_mapC[c] & 0x008);
}
static inline int isspace(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int) (__ctype_mapC[c] & 0x100);
}
static inline int isupper(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int) (__ctype_mapC[c] & 0x200);
}
static inline int isxdigit(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int) (__ctype_mapC[c] & 0x400);
}
static inline int toupper(int c) {
    return ((c < 0) || (c >= 128)) ? c : (int) (__upper_mapC[c]);
}
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
typedef unsigned long __file_handle;
typedef unsigned long fpos_t;
typedef struct _FILE _FILE, *P_FILE;
enum __file_kinds {
    __closed_file,
    __disk_file,
    __console_file,
    __unavailable_file
};
enum __open_modes {
    __must_exist,
    __create_if_necessary,
    __create_or_truncate
};
enum __file_orientation {
    __unoriented,
    __char_oriented,
    __wide_oriented
};
enum __io_modes {
    __read       = 1,
    __write      = 2,
    __read_write = 3,
    __append     = 4
};
typedef struct __file_modes {
    unsigned int open_mode : 2;
    unsigned int io_mode : 3;
    unsigned int buffer_mode : 2;
    unsigned int file_kind : 3;
    unsigned int file_orientation : 2;
    unsigned int binary_io : 1;
} __file_modes;
enum __io_states {
    __neutral,
    __writing,
    __reading,
    __rereading
};
typedef struct __file_state {
    unsigned int io_state : 3;
    unsigned int free_buffer : 1;
    unsigned char eof;
    unsigned char error;
} __file_state;
typedef void *__ref_con;
typedef void (*__idle_proc)(void);
typedef int (*__pos_proc)(unsigned int file, unsigned int *position, int mode, void *ref);
typedef int (*__io_proc)(__file_handle handle, unsigned char *buffer, int *count, void *ref);
typedef int (*__close_proc)(unsigned int file);
struct _FILE {
    __file_handle handle;
    __file_modes mode;
    __file_state state;
    unsigned char char_buffer;
    unsigned char char_buffer_overflow;
    unsigned char ungetc_buffer[2];
    wchar_t ungetwc_buffer[2];
    unsigned int position;
    unsigned char *buffer;
    unsigned int buffer_size;
    unsigned char *buffer_ptr;
    unsigned int buffer_len;
    unsigned int buffer_alignment;
    unsigned int saved_buffer_len;
    unsigned int buffer_pos;
    __pos_proc position_proc;
    __io_proc read_proc;
    __io_proc write_proc;
    __close_proc close_proc;
    __ref_con ref_con;
};
typedef struct _FILE FILE;
extern FILE __files[];
int fwide(FILE *stream, int mode);
enum __ReadProcActions {
    __GetAChar,
    __UngetAChar,
    __TestForError
};
enum __WReadProcActions {
    __GetAwChar,
    __UngetAwChar,
    __TestForwcsError
};
typedef struct {
    char *CharStr;
    size_t MaxCharCount;
    size_t CharsWritten;
} __OutStrCtrl;
typedef struct {
    char *NextChar;
    int NullCharDetected;
} __InStrCtrl;
typedef struct {
    wchar_t *wCharStr;
    size_t MaxCharCount;
    size_t CharsWritten;
} __wOutStrCtrl;
typedef struct {
    wchar_t *wNextChar;
    int wNullCharDetected;
} __wInStrCtrl;
size_t __fwrite(const void *pPtr, size_t memb_size, size_t num_memb, FILE *file);
int __StringRead(void *, int, int);
long double __strtold(int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned, int *overflow);
enum scan_states {
    start              = 0x0001,
    sig_start          = 0x0002,
    leading_sig_zeroes = 0x0004,
    int_digit_loop     = 0x0008,
    frac_start         = 0x0010,
    frac_digit_loop    = 0x0020,
    sig_end            = 0x0040,
    exp_start          = 0x0080,
    leading_exp_digit  = 0x0100,
    leading_exp_zeroes = 0x0200,
    exp_digit_loop     = 0x0400,
    finished           = 0x0800,
    failure            = 0x1000,
    nan_state          = 0x2000,
    infin_state        = 0x4000,
    hex_state          = 0x8000
};
enum hex_scan_states {
    not_hex                = 0x0000,
    hex_start              = 0x0001,
    hex_leading_sig_zeroes = 0x0002,
    hex_int_digit_loop     = 0x0004,
    hex_frac_digit_loop    = 0x0008,
    hex_sig_end            = 0x0010,
    hex_exp_start          = 0x0020,
    hex_leading_exp_digit  = 0x0040,
    hex_leading_exp_zeroes = 0x0080,
    hex_exp_digit_loop     = 0x0100
};
long double __strtold(int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned, int *overflow) {
    int scan_state     = start;
    int hex_scan_state = not_hex;
    int count          = 0;
    int spaces         = 0;
    int c;
    decimal d          = {0, 0, 0, {0, ""}};
    int sig_negative   = 0;
    int exp_negative   = 0;
    long exp_value     = 0;
    int exp_adjust     = 0;
    long double result = 0.0;
    int sign_detected  = 0;
    int radix_marker   = '.';
    unsigned char *chptr;
    unsigned char mantissa[(64 / 8)];
    unsigned mantissa_digits;
    unsigned long exponent = 0;
    int ui;
    unsigned char uch, uch1;
    int NibbleIndex;
    int expsign        = 0;
    unsigned intdigits = 0;
    *overflow          = 0;
    c                  = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
    while (count <= max_width && c != -1 && !(scan_state & (finished | failure))) {
        switch (scan_state) {
            case start:
                if (isspace(c)) {
                    c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                    count--;
                    spaces++;
                    break;
                }
                switch (toupper(c)) {
                    case '-':
                        sig_negative = 1;
                    case '+':
                        c             = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        sign_detected = 1;
                        break;
                    case 'I':
                        c          = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        scan_state = infin_state;
                        break;
                    case 'N':
                        c          = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        scan_state = nan_state;
                        break;
                    default:
                        scan_state = sig_start;
                        break;
                }
                break;
            case infin_state: {
                int i        = 1;
                char model[] = "INFINITY";
                while ((i < 8) && (toupper(c) == model[i])) {
                    i++;
                    c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                }
                if ((i == 3) || (i == 8)) {
                    if (sig_negative) {
                        result = -(*(float *) __float_huge);
                    } else {
                        result = (*(float *) __float_huge);
                    }
                    *chars_scanned = spaces + i + sign_detected;
                    return (result);
                } else {
                    scan_state = failure;
                }
                break;
            }
            case nan_state: {
                int i = 1, j = 0;
                char model[]     = "NAN(";
                char nan_arg[32] = "";
                while ((i < 4) && (toupper(c) == model[i])) {
                    i++;
                    c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                }
                if ((i == 3) || (i == 4)) {
                    if (i == 4) {
                        while ((j < 32) && (isdigit(c) || isalpha(c) || (c == radix_marker))) {
                            nan_arg[j++] = (char) c;
                            c            = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        }
                        if (c != ')') {
                            scan_state = failure;
                            break;
                        } else {
                            j++;
                        }
                    }
                    nan_arg[j] = '\0';
                    if (sig_negative) {
                        result = -nan(nan_arg);
                    } else {
                        result = nan(nan_arg);
                    }
                    *chars_scanned = spaces + i + j + sign_detected;
                    return (result);
                } else {
                    scan_state = failure;
                }
                break;
            }
            case sig_start:
                if (c == radix_marker) {
                    scan_state = frac_start;
                    c          = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                    break;
                }
                if (!isdigit(c)) {
                    scan_state = failure;
                    break;
                }
                if (c == '0') {
                    c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                    if (toupper(c) == 'X') {
                        scan_state     = hex_state;
                        hex_scan_state = hex_start;
                    } else {
                        scan_state = leading_sig_zeroes;
                    }
                    break;
                }
                scan_state = int_digit_loop;
                break;
            case leading_sig_zeroes:
                if (c == '0') {
                    c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                    break;
                }
                scan_state = int_digit_loop;
                break;
            case int_digit_loop:
                if (!isdigit(c)) {
                    if (c == radix_marker) {
                        scan_state = frac_digit_loop;
                        c          = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                    } else {
                        scan_state = sig_end;
                    }
                    break;
                }
                if (d.sig.length < 20) {
                    d.sig.text[d.sig.length++] = (unsigned char) c;
                } else {
                    exp_adjust++;
                }
                c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                break;
            case frac_start:
                if (!isdigit(c)) {
                    scan_state = failure;
                    break;
                }
                scan_state = frac_digit_loop;
                break;
            case frac_digit_loop:
                if (!isdigit(c)) {
                    scan_state = sig_end;
                    break;
                }
                if (d.sig.length < 20) {
                    if (c != '0' || d.sig.length) {
                        d.sig.text[d.sig.length++] = (unsigned char) c;
                    }
                    exp_adjust--;
                }
                c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                break;
            case sig_end:
                if (toupper(c) == 'E') {
                    scan_state = exp_start;
                    c          = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                    break;
                }
                scan_state = finished;
                break;
            case exp_start:
                if (c == '+') {
                    c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                } else if (c == '-') {
                    c            = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                    exp_negative = 1;
                }
                scan_state = leading_exp_digit;
                break;
            case leading_exp_digit:
                if (!isdigit(c)) {
                    scan_state = failure;
                    break;
                }
                if (c == '0') {
                    scan_state = leading_exp_zeroes;
                    c          = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                    break;
                }
                scan_state = exp_digit_loop;
                break;
            case leading_exp_zeroes:
                if (c == '0') {
                    c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                    break;
                }
                scan_state = exp_digit_loop;
                break;
            case exp_digit_loop:
                if (!isdigit(c)) {
                    scan_state = finished;
                    break;
                }
                exp_value = exp_value * 10 + (c - '0');
                if (exp_value > 0x7fff) {
                    *overflow = 1;
                }
                c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                break;
            case hex_state: {
                switch (hex_scan_state) {
                    case hex_start:
                        chptr = mantissa;
                        __builtin__clear(mantissa, sizeof(mantissa));
                        mantissa_digits = (53 + 3) / 4;
                        intdigits       = 0;
                        NibbleIndex     = 0;
                        hex_scan_state  = hex_leading_sig_zeroes;
                        c               = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        break;
                    case hex_leading_sig_zeroes:
                        if (c == '0') {
                            c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                            break;
                        }
                        hex_scan_state = hex_int_digit_loop;
                        break;
                    case hex_int_digit_loop:
                        if (!isxdigit(c)) {
                            if (c == radix_marker) {
                                hex_scan_state = hex_frac_digit_loop;
                                c              = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                            } else {
                                hex_scan_state = hex_sig_end;
                            }
                            break;
                        }
                        if (intdigits < mantissa_digits) {
                            intdigits++;
                            uch = *(chptr + NibbleIndex / 2);
                            ui  = toupper(c);
                            if (ui >= 'A') {
                                ui = ui - 'A' + 10;
                            } else {
                                ui -= '0';
                            }
                            uch1 = (unsigned char) ui;
                            if ((NibbleIndex % 2) != 0) {
                                uch |= uch1;
                            } else {
                                uch |= (unsigned char) (uch1 << 4);
                            }
                            *(chptr + NibbleIndex++ / 2) = uch;
                            c                            = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        } else {
                            c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        }
                        break;
                    case hex_frac_digit_loop:
                        if (!isxdigit(c)) {
                            hex_scan_state = hex_sig_end;
                            break;
                        }
                        if (intdigits < mantissa_digits) {
                            uch = *(chptr + NibbleIndex / 2);
                            ui  = toupper(c);
                            if (ui >= 'A') {
                                ui = ui - 'A' + 10;
                            } else {
                                ui -= '0';
                            }
                            uch1 = (unsigned char) ui;
                            if ((NibbleIndex % 2) != 0) {
                                uch |= uch1;
                            } else {
                                uch |= (unsigned char) (uch1 << 4);
                            }
                            *(chptr + NibbleIndex++ / 2) = uch;
                            c                            = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        } else {
                            c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        }
                        break;
                    case hex_sig_end:
                        if (toupper(c) == 'P') {
                            hex_scan_state = hex_exp_start;
                            c              = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        } else {
                            scan_state = finished;
                        }
                        break;
                    case hex_exp_start:
                        if (c == '-') {
                            expsign = 1;
                        } else if (c != '+') {
                            c = (*ReadProc)(ReadProcArg, c, __UngetAChar);
                            count--;
                        }
                        hex_scan_state = hex_leading_exp_digit;
                        c              = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        break;
                    case hex_leading_exp_digit:
                        if (!isdigit(c)) {
                            scan_state = failure;
                            break;
                        }
                        if (c == '0') {
                            hex_scan_state = hex_leading_exp_zeroes;
                            c              = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                            break;
                        }
                        hex_scan_state = hex_exp_digit_loop;
                        break;
                    case hex_leading_exp_zeroes:
                        if (c == '0') {
                            c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                            break;
                        }
                        hex_scan_state = hex_exp_digit_loop;
                        break;
                    case hex_exp_digit_loop:
                        if (!isdigit(c)) {
                            scan_state = finished;
                            break;
                        }
                        exponent = exponent * 10 + (c - '0');
                        if (exp_value > 0x7fff) {
                            *overflow = 1;
                        }
                        c = (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar));
                        break;
                }
            } break;
        }
    }
    if (scan_state != hex_state
            ? !(scan_state &
                (leading_sig_zeroes | int_digit_loop | frac_digit_loop | leading_exp_zeroes | exp_digit_loop | finished))
            : !(count - 1 > 2 && hex_scan_state & (hex_leading_sig_zeroes | hex_int_digit_loop | hex_frac_digit_loop |
                                                   hex_leading_exp_zeroes | hex_exp_digit_loop))) {
        count          = 0;
        *chars_scanned = 0;
    } else {
        count--;
        *chars_scanned = count + spaces;
    }
    (*ReadProc)(ReadProcArg, c, __UngetAChar);
    if (hex_scan_state == not_hex) {
        if (exp_negative) {
            exp_value = -exp_value;
        }
        {
            int n            = d.sig.length;
            unsigned char *p = &d.sig.text[n];
            while (n-- && *--p == '0') {
                exp_adjust++;
            }
            d.sig.length = (unsigned char) (n + 1);
            if (d.sig.length == 0) {
                d.sig.text[d.sig.length++] = '0';
            }
        }
        exp_value += exp_adjust;
        if (exp_value < ~0x7fff || exp_value > 0x7fff) {
            *overflow = 1;
        }
        if (*overflow) {
            if (exp_negative) {
                return (0.0);
            } else {
                return (sig_negative ? -(*(double *) __double_huge) : (*(double *) __double_huge));
            }
        }
        d.exp  = (short) exp_value;
        result = __dec2num(&d);
        if (result != 0.0 && result < 0x1.0000000000000P-1022L) {
            *overflow = 1;
        } else if (result > 0x1.fffffffffffffP1023L) {
            *overflow = 1;
            result    = (*(double *) __double_huge);
        }
        if (sig_negative && (scan_state & (leading_sig_zeroes | int_digit_loop | frac_digit_loop | leading_exp_zeroes |
                                           exp_digit_loop | finished))) {
            result = -result;
        }
        return (result);
    } else {
        unsigned mantissa_bit, dbl_bit;
        unsigned one_bit;
        long double dbl_bits_storage;
        unsigned char *dbl_bits = (unsigned char *) &dbl_bits_storage;
        if (expsign) {
            exponent = -exponent;
        }
        exponent += intdigits * 4;
        one_bit = 0;
        while (one_bit < 4 && !(mantissa[0] & (0x80 >> one_bit))) {
            one_bit++;
            exponent--;
        }
        exponent--;
        if (1) {
            one_bit++;
        }
        if (one_bit) {
            unsigned char carry = 0;
            for (chptr = mantissa + sizeof(mantissa) - 1; chptr >= mantissa; chptr--) {
                unsigned char a = *chptr;
                *chptr          = (unsigned char) ((a << one_bit) | carry);
                carry           = (unsigned char) (a >> (8 - one_bit));
            }
        }
        dbl_bits[0] = 0;
        dbl_bits[1] = 0;
        dbl_bits[2] = 0;
        dbl_bits[3] = 0;
        dbl_bits[4] = 0;
        dbl_bits[5] = 0;
        dbl_bits[6] = 0;
        dbl_bits[7] = 0;
        dbl_bit     = (64 - (53 - 1));
        for (mantissa_bit = 0; mantissa_bit < (53 - 1); mantissa_bit += 8) {
            unsigned char ui = mantissa[mantissa_bit >> 3];
            int halfbits;
            if (mantissa_bit + 8 > (53 - 1)) {
                ui &= 0xff << ((53 - 1) - mantissa_bit);
            }
            halfbits = (dbl_bit & 7);
            dbl_bits[dbl_bit >> 3] |= (unsigned char) (ui >> halfbits);
            dbl_bit += 8;
            dbl_bits[dbl_bit >> 3] |= (unsigned char) (ui << (8 - halfbits));
        }
        exponent += 1024 - 1;
        if ((exponent & ~(1024 * 2 - 1))) {
            *overflow = 1;
            return 0.0;
        }
        exponent <<= 32 - (64 - (53 - 1) - 1);
        dbl_bits[0] |= exponent >> 25;
        if ((64 - (53 - 1) - 1) > 7) {
            dbl_bits[1] |= exponent >> 17;
        }
        if ((64 - (53 - 1) - 1) > 15) {
            dbl_bits[2] |= exponent >> 9;
        }
        if ((64 - (53 - 1) - 1) > 23) {
            dbl_bits[3] |= exponent >> 1;
        }
        if (sig_negative) {
            dbl_bits[0] |= 0x80;
        }
        int i;
        unsigned char *c = dbl_bits;
        unsigned char temp;
        for (i = 0; i < (64 / 8) / 2; i++) {
            temp                = c[i];
            c[i]                = c[(64 / 8) - 1 - i];
            c[(64 / 8) - 1 - i] = temp;
        }
        result = *(long double *) dbl_bits;
        return result;
    }
}
