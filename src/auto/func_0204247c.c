#include "m2c.h"
u32 func_0204247c(u32 c) {
    s32 r;
    if (c <= 0x7F) {
        return c;
    }
    switch (c) {
        case 0xE000:
            return 0xD0;
        case 0xE001:
            return 0xD1;
        case 0xE002:
            return 0xD2;
        case 0xE003:
            return 0xD3;
        case 0xE004:
            return 0xD4;
        case 0xE005:
            return 0xD5;
        case 0xE006:
            return 0xD7;
    }
    switch (c & 0xFF) {
        case 0xA0:
            r = 0x20;
            break;
        case 0x99:
            r = 0x7f;
            break;
        case 0xC0:
            r = 0x80;
            break;
        case 0xC1:
            r = 0x81;
            break;
        case 0xC2:
            r = 0x82;
            break;
        case 0xC4:
            r = 0x83;
            break;
        case 0xC6:
            r = 0x84;
            break;
        case 0xC7:
            r = 0x85;
            break;
        case 0xC8:
            r = 0x86;
            break;
        case 0xC9:
            r = 0x87;
            break;
        case 0xCA:
            r = 0x88;
            break;
        case 0xCB:
            r = 0x89;
            break;
        case 0xCC:
            r = 0x8a;
            break;
        case 0xCD:
            r = 0x8b;
            break;
        case 0xCE:
            r = 0x8c;
            break;
        case 0xCF:
            r = 0x8d;
            break;
        case 0xD1:
            r = 0x8e;
            break;
        case 0xD2:
            r = 0x8f;
            break;
        case 0xD3:
            r = 0x90;
            break;
        case 0xD4:
            r = 0x91;
            break;
        case 0xD6:
            r = 0x92;
            break;
        case 0x8C:
            r = 0x93;
            break;
        case 0xD9:
            r = 0x95;
            break;
        case 0xDA:
            r = 0x96;
            break;
        case 0xDB:
            r = 0x97;
            break;
        case 0xDC:
            r = 0x98;
            break;
        case 0xA9:
            r = 0x9a;
            break;
        case 0xAE:
            r = 0x9b;
            break;
        case 0x91:
            r = 0x9c;
            break;
        case 0x92:
            r = 0x9d;
            break;
        case 0x93:
            r = 0x9e;
            break;
        case 0x94:
            r = 0x9f;
            break;
        case 0xE0:
            r = 0xa0;
            break;
        case 0xE1:
            r = 0xa1;
            break;
        case 0xE2:
            r = 0xa2;
            break;
        case 0xE4:
            r = 0xa3;
            break;
        case 0xE6:
            r = 0xa4;
            break;
        case 0xE7:
            r = 0xa5;
            break;
        case 0xE8:
            r = 0xa6;
            break;
        case 0xE9:
            r = 0xa7;
            break;
        case 0xEA:
            r = 0xa8;
            break;
        case 0xEB:
            r = 0xa9;
            break;
        case 0xEC:
            r = 0xaa;
            break;
        case 0xED:
            r = 0xab;
            break;
        case 0xEE:
            r = 0xac;
            break;
        case 0xEF:
            r = 0xad;
            break;
        case 0xF1:
            r = 0xae;
            break;
        case 0xF2:
            r = 0xaf;
            break;
        case 0xF3:
            r = 0xb0;
            break;
        case 0xF4:
            r = 0xb1;
            break;
        case 0xF6:
            r = 0xb2;
            break;
        case 0x9C:
            r = 0xb3;
            break;
        case 0xF9:
            r = 0xb5;
            break;
        case 0xFA:
            r = 0xb6;
            break;
        case 0xFB:
            r = 0xb7;
            break;
        case 0xFC:
            r = 0xb8;
            break;
        case 0xA1:
            r = 0xb9;
            break;
        case 0xBF:
            r = 0xba;
            break;
        case 0xB0:
            r = 0xbb;
            break;
        case 0xB1:
            r = 0xbc;
            break;
        case 0x85:
            r = 0xbd;
            break;
        case 0x88:
            r = 0xbe;
            break;
        case 0x8B:
            r = 0xbf;
            break;
        case 0xD7:
            r = 0xc0;
            break;
        case 0xDF:
            r = 0xc1;
            break;
        case 0x83:
            r = 0xc2;
            break;
        case 0xF7:
            r = 0xc3;
            break;
        case 0x80:
            r = 0xc4;
            break;
        case 0xA2:
            r = 0xc5;
            break;
        case 0xA3:
            r = 0xc6;
            break;
        case 0xA5:
            r = 0xc7;
            break;
        case 0x95:
            r = 0xc8;
            break;
        case 0x9B:
            r = 0xc9;
            break;
        default:
            r = 0x3F;
            break;
    }
    return (u8) r;
}
