/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font C:/Users/KZC/Desktop/LVGL_DIS/assets/AlibabaPuHuiTi-3-45-Light.ttf -o C:/Users/KZC/Desktop/LVGL_DIS/assets\ui_font_Font18.c --format lvgl -r 0x20-0x7f --symbols 
可见光模式紫外模式混合模式 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FONT18
#define UI_FONT_FONT18 1
#endif

#if UI_FONT_FONT18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xaa, 0xaa, 0x83, 0xc0,

    /* U+0022 "\"" */
    0x99, 0x99, 0x90,

    /* U+0023 "#" */
    0x8, 0x81, 0x10, 0x22, 0xc, 0x4f, 0xfe, 0x22,
    0x4, 0x41, 0x88, 0xff, 0xe4, 0x40, 0x88, 0x11,
    0x4, 0x20,

    /* U+0024 "$" */
    0x10, 0xfa, 0x44, 0x89, 0x12, 0x1c, 0x1e, 0x16,
    0x24, 0x48, 0x91, 0x7f, 0x84, 0x8, 0x10,

    /* U+0025 "%" */
    0x70, 0x48, 0x88, 0x88, 0x88, 0x90, 0x89, 0x8,
    0xa0, 0x76, 0xe0, 0x51, 0x9, 0x10, 0x91, 0x11,
    0x11, 0x11, 0x20, 0xe0,

    /* U+0026 "&" */
    0x1c, 0x4, 0x40, 0x88, 0x11, 0x2, 0x40, 0x30,
    0xe, 0x12, 0x46, 0x84, 0x90, 0x72, 0x4, 0x21,
    0xc3, 0xce,

    /* U+0027 "'" */
    0xf8,

    /* U+0028 "(" */
    0x22, 0x44, 0x48, 0x88, 0x88, 0x88, 0x84, 0x44,
    0x22,

    /* U+0029 ")" */
    0x44, 0x22, 0x21, 0x11, 0x11, 0x11, 0x12, 0x22,
    0x44,

    /* U+002A "*" */
    0x10, 0x23, 0xf8, 0x82, 0x80, 0x0,

    /* U+002B "+" */
    0x8, 0x4, 0x2, 0x1f, 0xf0, 0x80, 0x40, 0x20,
    0x10,

    /* U+002C "," */
    0x24, 0xa4,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x4, 0x10, 0x82, 0x8, 0x41, 0x4, 0x20, 0x86,
    0x10, 0x42, 0x0,

    /* U+0030 "0" */
    0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0xc3, 0x42, 0x3c,

    /* U+0031 "1" */
    0x79, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10,

    /* U+0032 "2" */
    0x7c, 0x6, 0x2, 0x2, 0x2, 0x2, 0x4, 0xc,
    0x8, 0x10, 0x60, 0xc0, 0xff,

    /* U+0033 "3" */
    0x7c, 0xc, 0x8, 0x10, 0x20, 0x8e, 0x2, 0x2,
    0x4, 0x8, 0x2f, 0x80,

    /* U+0034 "4" */
    0x6, 0x3, 0x2, 0x83, 0x41, 0x21, 0x11, 0x88,
    0x84, 0x82, 0x7f, 0xc0, 0x80, 0x40, 0x20,

    /* U+0035 "5" */
    0x7c, 0x81, 0x4, 0x8, 0x1f, 0x1, 0x1, 0x2,
    0x4, 0x8, 0x2f, 0x80,

    /* U+0036 "6" */
    0xe, 0x30, 0x60, 0x40, 0xc0, 0xbc, 0xc2, 0x81,
    0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+0037 "7" */
    0xff, 0x1, 0x2, 0x2, 0x6, 0x4, 0xc, 0x8,
    0x8, 0x10, 0x10, 0x20, 0x20,

    /* U+0038 "8" */
    0x3e, 0x63, 0x41, 0x41, 0x41, 0x22, 0x1c, 0x63,
    0x81, 0x81, 0x81, 0xc3, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x43, 0x3d,
    0x3, 0x2, 0x6, 0xc, 0x70,

    /* U+003A ":" */
    0xf0, 0x0, 0xf0,

    /* U+003B ";" */
    0x6c, 0x0, 0x0, 0x25, 0x28,

    /* U+003C "<" */
    0x0, 0x83, 0x87, 0xc, 0x8, 0x7, 0x0, 0x60,
    0xe, 0x1, 0x80,

    /* U+003D "=" */
    0xff, 0x80, 0x0, 0x0, 0xf, 0xf8,

    /* U+003E ">" */
    0x80, 0x70, 0x7, 0x0, 0xe0, 0x8, 0x38, 0x70,
    0xc0, 0x80, 0x0,

    /* U+003F "?" */
    0xfc, 0xc, 0x8, 0x10, 0x20, 0x86, 0x10, 0x20,
    0x40, 0x1, 0x83, 0x0,

    /* U+0040 "@" */
    0x7, 0xe0, 0x60, 0xc2, 0x0, 0x90, 0x3, 0x43,
    0xa6, 0x11, 0x18, 0x84, 0x62, 0x11, 0x88, 0x4e,
    0x23, 0x28, 0x77, 0x10, 0x0, 0x60, 0x0, 0xc0,
    0x40, 0xfe, 0x0,

    /* U+0041 "A" */
    0x6, 0x1, 0x40, 0x28, 0x4, 0x81, 0x10, 0x23,
    0xc, 0x21, 0x4, 0x3f, 0xcc, 0x9, 0x1, 0x20,
    0x3c, 0x2,

    /* U+0042 "B" */
    0xfc, 0x86, 0x82, 0x82, 0x82, 0x86, 0xf8, 0x82,
    0x81, 0x81, 0x81, 0x83, 0xfe,

    /* U+0043 "C" */
    0x1f, 0xb0, 0x10, 0x10, 0x8, 0x4, 0x2, 0x1,
    0x0, 0x80, 0x40, 0x10, 0xc, 0x11, 0xf0,

    /* U+0044 "D" */
    0xfc, 0x41, 0xa0, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x50, 0x6f, 0xc0,

    /* U+0045 "E" */
    0xfd, 0x2, 0x4, 0x8, 0x10, 0x3f, 0x40, 0x81,
    0x2, 0x4, 0xf, 0xe0,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0x82, 0xf, 0xe0, 0x82, 0x8,
    0x20, 0x80,

    /* U+0047 "G" */
    0x1f, 0xb0, 0x10, 0x10, 0x8, 0x4, 0x2, 0x1f,
    0x1, 0x80, 0xc0, 0x50, 0x2c, 0x11, 0xf8,

    /* U+0048 "H" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x7, 0xff,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0x8,

    /* U+0049 "I" */
    0xff, 0xf8,

    /* U+004A "J" */
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x13,
    0xe0,

    /* U+004B "K" */
    0x83, 0x82, 0x84, 0x88, 0x90, 0xb0, 0xe0, 0xb0,
    0x98, 0x8c, 0x84, 0x82, 0x83,

    /* U+004C "L" */
    0x81, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x81,
    0x2, 0x4, 0xf, 0xe0,

    /* U+004D "M" */
    0xc0, 0x78, 0xe, 0x82, 0xd0, 0x5b, 0x13, 0x22,
    0x66, 0xcc, 0x51, 0x8a, 0x30, 0x86, 0x0, 0xc0,
    0x18, 0x2,

    /* U+004E "N" */
    0xc0, 0x78, 0x1a, 0x6, 0xc1, 0x98, 0x62, 0x18,
    0xc6, 0x19, 0x82, 0x60, 0xd8, 0x1e, 0x3, 0x80,
    0xc0,

    /* U+004F "O" */
    0x3f, 0x18, 0x64, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x14, 0x9, 0x86, 0x3f,
    0x0,

    /* U+0050 "P" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x81, 0x82, 0xfc,
    0x80, 0x80, 0x80, 0x80, 0x80,

    /* U+0051 "Q" */
    0x3f, 0x18, 0x64, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x14, 0x9, 0x86, 0x3f,
    0x0, 0x80, 0x30, 0x6,

    /* U+0052 "R" */
    0xfc, 0x86, 0x82, 0x82, 0x82, 0x82, 0x86, 0xf8,
    0x88, 0x8c, 0x84, 0x82, 0x83,

    /* U+0053 "S" */
    0x1f, 0x30, 0x10, 0x8, 0x4, 0x1, 0x80, 0x38,
    0x3, 0x0, 0x80, 0x40, 0x30, 0x2f, 0xe0,

    /* U+0054 "T" */
    0xff, 0x84, 0x2, 0x1, 0x0, 0x80, 0x40, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0, 0x80,

    /* U+0055 "U" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+0056 "V" */
    0xc0, 0x50, 0x34, 0x9, 0x82, 0x20, 0x88, 0x43,
    0x10, 0x44, 0x12, 0x4, 0x80, 0xa0, 0x30, 0xc,
    0x0,

    /* U+0057 "W" */
    0x40, 0x2, 0x80, 0x5, 0x6, 0xa, 0xc, 0x36,
    0x28, 0x44, 0x48, 0x88, 0x91, 0x13, 0x26, 0x34,
    0x68, 0x28, 0x50, 0x50, 0xa0, 0xc1, 0x41, 0x81,
    0x0,

    /* U+0058 "X" */
    0x40, 0xc8, 0x23, 0x18, 0x44, 0x1a, 0x3, 0x80,
    0xc0, 0x28, 0x13, 0x4, 0x42, 0x19, 0x82, 0x40,
    0x40,

    /* U+0059 "Y" */
    0x80, 0xa0, 0xd0, 0x44, 0x43, 0x20, 0xa0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0, 0x80,

    /* U+005A "Z" */
    0xff, 0x80, 0xc0, 0xc0, 0x40, 0x60, 0x60, 0x20,
    0x20, 0x30, 0x10, 0x10, 0x10, 0xf, 0xf8,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x49, 0x24, 0x9c,

    /* U+005C "\\" */
    0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10,
    0x10, 0x8, 0x8, 0x4, 0x4, 0x2, 0x2, 0x1,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x92, 0x49, 0x3c,

    /* U+005E "^" */
    0x18, 0x18, 0x24, 0x24, 0x66, 0x42, 0x42,

    /* U+005F "_" */
    0xff, 0x80,

    /* U+0060 "`" */
    0xc8, 0x80,

    /* U+0061 "a" */
    0x3e, 0x3, 0x1, 0x1, 0x7f, 0xc1, 0x81, 0x81,
    0xc3, 0x7d,

    /* U+0062 "b" */
    0x80, 0x80, 0x80, 0x80, 0xbc, 0xc2, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0xc2, 0xbc,

    /* U+0063 "c" */
    0x3e, 0x82, 0x4, 0x8, 0x10, 0x20, 0x40, 0x40,
    0x7c,

    /* U+0064 "d" */
    0x1, 0x1, 0x1, 0x1, 0x3d, 0x43, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81, 0x43, 0x3d,

    /* U+0065 "e" */
    0x3c, 0x42, 0x81, 0x81, 0xbf, 0xc0, 0x80, 0x80,
    0x41, 0x3f,

    /* U+0066 "f" */
    0x1c, 0xc2, 0x8, 0xf8, 0x82, 0x8, 0x20, 0x82,
    0x8, 0x20, 0x80,

    /* U+0067 "g" */
    0x3d, 0x43, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x43, 0x3d, 0x1, 0x1, 0x2, 0x7c,

    /* U+0068 "h" */
    0x81, 0x2, 0x4, 0xb, 0xd8, 0xe0, 0xc1, 0x83,
    0x6, 0xc, 0x18, 0x30, 0x40,

    /* U+0069 "i" */
    0x8f, 0xfc,

    /* U+006A "j" */
    0x10, 0x0, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x1e,

    /* U+006B "k" */
    0x81, 0x2, 0x4, 0x8, 0x51, 0x24, 0x58, 0xe1,
    0x42, 0x44, 0x48, 0xd0, 0xc0,

    /* U+006C "l" */
    0x92, 0x49, 0x24, 0x92, 0x49, 0xc0,

    /* U+006D "m" */
    0xbc, 0xf6, 0x38, 0xe0, 0x83, 0x4, 0x18, 0x20,
    0xc1, 0x6, 0x8, 0x30, 0x41, 0x82, 0xc, 0x10,
    0x40,

    /* U+006E "n" */
    0xbd, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x4,

    /* U+006F "o" */
    0x3e, 0x20, 0xa0, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x41, 0x1f, 0x0,

    /* U+0070 "p" */
    0xbc, 0xc2, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0xc2, 0xbc, 0x80, 0x80, 0x80, 0x80,

    /* U+0071 "q" */
    0x3d, 0x43, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x43, 0x3d, 0x1, 0x1, 0x1, 0x1,

    /* U+0072 "r" */
    0xbc, 0x88, 0x88, 0x88, 0x88,

    /* U+0073 "s" */
    0x7e, 0x8, 0x20, 0x60, 0x60, 0x41, 0x7, 0xe0,

    /* U+0074 "t" */
    0x21, 0x9, 0xf2, 0x10, 0x84, 0x21, 0x8, 0x41,
    0x80,

    /* U+0075 "u" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0xc6,
    0xf4,

    /* U+0076 "v" */
    0x81, 0xa0, 0x90, 0x4c, 0x62, 0x21, 0x10, 0xd0,
    0x28, 0x14, 0x4, 0x0,

    /* U+0077 "w" */
    0xc3, 0x5, 0xc, 0x14, 0x28, 0x91, 0x22, 0x24,
    0x88, 0x91, 0x22, 0xc5, 0xa, 0x14, 0x18, 0x50,
    0x60, 0xc0,

    /* U+0078 "x" */
    0x41, 0x62, 0x26, 0x14, 0x18, 0x1c, 0x14, 0x22,
    0x42, 0x41,

    /* U+0079 "y" */
    0x81, 0xa0, 0x90, 0x4c, 0x62, 0x21, 0x10, 0x58,
    0x28, 0x14, 0x4, 0x2, 0x3, 0x1, 0x3, 0x0,

    /* U+007A "z" */
    0xfe, 0x8, 0x30, 0x41, 0x6, 0x8, 0x20, 0xc1,
    0xfc,

    /* U+007B "{" */
    0x12, 0x22, 0x22, 0x22, 0x2c, 0x22, 0x22, 0x22,
    0x21,

    /* U+007C "|" */
    0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0x84, 0x44, 0x44, 0x44, 0x43, 0x44, 0x44, 0x44,
    0x48,

    /* U+007E "~" */
    0xe1, 0x99, 0x8e,

    /* U+5149 "光" */
    0x0, 0x80, 0x0, 0x80, 0x10, 0x84, 0x18, 0x8c,
    0x8, 0x88, 0x4, 0x90, 0x0, 0x80, 0x7f, 0xff,
    0x4, 0x20, 0x4, 0x20, 0x4, 0x20, 0x4, 0x21,
    0x8, 0x21, 0x18, 0x21, 0x60, 0x3f, 0x0, 0x0,

    /* U+53EF "可" */
    0xff, 0xff, 0x0, 0x8, 0x0, 0x8, 0x0, 0x8,
    0x3f, 0x88, 0x20, 0x88, 0x20, 0x88, 0x20, 0x88,
    0x20, 0x88, 0x20, 0x88, 0x3f, 0x88, 0x0, 0x8,
    0x0, 0x8, 0x0, 0x8, 0x0, 0x30,

    /* U+5408 "合" */
    0x0, 0x80, 0x0, 0xa0, 0x0, 0xd8, 0x0, 0xc6,
    0x0, 0xc1, 0x81, 0x80, 0x31, 0xbf, 0xef, 0x0,
    0x1, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0x2,
    0x0, 0x81, 0x0, 0x40, 0x80, 0x20, 0x40, 0x10,
    0x3f, 0xf8, 0x10, 0x4, 0x0,

    /* U+5916 "外" */
    0x8, 0x20, 0x10, 0x20, 0x10, 0x20, 0x1f, 0x20,
    0x21, 0x20, 0x21, 0x30, 0x61, 0x28, 0x72, 0x26,
    0x9a, 0x23, 0x8c, 0x21, 0x4, 0x20, 0x8, 0x20,
    0x10, 0x20, 0x30, 0x20, 0x60, 0x20, 0x0, 0x20,

    /* U+5F0F "式" */
    0x0, 0x50, 0x0, 0x90, 0x1, 0x17, 0xff, 0xf0,
    0x4, 0x0, 0x8, 0x0, 0x10, 0x3f, 0xa0, 0x8,
    0x40, 0x10, 0x80, 0x20, 0x80, 0x41, 0x10, 0xfa,
    0x3e, 0x2, 0x80, 0x3, 0x0,

    /* U+6A21 "模" */
    0x10, 0x88, 0x9, 0xff, 0x84, 0x22, 0xf, 0x81,
    0x1, 0x1f, 0xe0, 0x88, 0x10, 0xe7, 0xf8, 0x6a,
    0x4, 0x55, 0x2, 0x28, 0xff, 0x24, 0x8, 0x2,
    0xff, 0xe1, 0x2, 0x0, 0x82, 0xc0, 0x46, 0x30,
    0x2c, 0x7,

    /* U+6DF7 "混" */
    0x67, 0xfc, 0x68, 0x8, 0x50, 0x10, 0x3f, 0xe8,
    0x40, 0x48, 0x80, 0x89, 0xff, 0x2, 0x10, 0x4,
    0x22, 0x48, 0x4c, 0x9e, 0xe1, 0x21, 0x6, 0x42,
    0x28, 0xb4, 0x51, 0x8f, 0x80,

    /* U+7D2B "紫" */
    0x4, 0x40, 0x24, 0x42, 0x24, 0x46, 0x27, 0xd8,
    0x24, 0x60, 0x25, 0xc1, 0xfb, 0x3e, 0x2, 0x10,
    0xc, 0x20, 0x1f, 0xc0, 0x6, 0x10, 0x3f, 0xfc,
    0x0, 0x82, 0xc, 0xb0, 0x30, 0x8c, 0xc7, 0x83,

    /* U+89C1 "见" */
    0x1f, 0xf8, 0x10, 0x8, 0x10, 0x88, 0x10, 0x88,
    0x10, 0x88, 0x10, 0x88, 0x10, 0x88, 0x10, 0x88,
    0x11, 0x88, 0x11, 0x88, 0x3, 0x80, 0x4, 0x81,
    0x18, 0x41, 0x60, 0x7e, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 71, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 98, .box_w = 2, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 114, .box_w = 4, .box_h = 5, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 8, .adv_w = 173, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 161, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 41, .adv_w = 233, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 188, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 75, .box_w = 1, .box_h = 5, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 80, .adv_w = 95, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 89, .adv_w = 95, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 98, .adv_w = 116, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 104, .adv_w = 159, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 113, .adv_w = 80, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 115, .adv_w = 124, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 116, .adv_w = 80, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 138, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 161, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 161, .box_w = 4, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 161, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 161, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 161, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 161, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 161, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 161, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 161, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 161, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 103, .box_w = 2, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 103, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 260, .adv_w = 159, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 271, .adv_w = 159, .box_w = 9, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 277, .adv_w = 159, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 288, .adv_w = 123, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 248, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 327, .adv_w = 183, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 169, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 197, .box_w = 9, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 156, .box_w = 7, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 147, .box_w = 6, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 193, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 198, .box_w = 9, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 72, .box_w = 1, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 69, .box_w = 4, .box_h = 17, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 451, .adv_w = 169, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 141, .box_w = 7, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 232, .box_w = 11, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 208, .box_w = 10, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 211, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 165, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 211, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 561, .adv_w = 170, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 159, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 146, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 196, .box_w = 9, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 166, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 251, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 170, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 678, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 175, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 84, .box_w = 3, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 715, .adv_w = 149, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 731, .adv_w = 84, .box_w = 3, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 738, .adv_w = 159, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 745, .adv_w = 144, .box_w = 9, .box_h = 1, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 747, .adv_w = 93, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 749, .adv_w = 173, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 178, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 773, .adv_w = 139, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 782, .adv_w = 178, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 796, .adv_w = 162, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 806, .adv_w = 96, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 817, .adv_w = 179, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 831, .adv_w = 173, .box_w = 7, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 844, .adv_w = 72, .box_w = 1, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 846, .adv_w = 72, .box_w = 4, .box_h = 18, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 855, .adv_w = 141, .box_w = 7, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 868, .adv_w = 76, .box_w = 3, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 874, .adv_w = 260, .box_w = 13, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 891, .adv_w = 173, .box_w = 7, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 900, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 178, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 926, .adv_w = 179, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 940, .adv_w = 103, .box_w = 4, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 945, .adv_w = 134, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 953, .adv_w = 92, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 962, .adv_w = 171, .box_w = 7, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 971, .adv_w = 143, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 983, .adv_w = 230, .box_w = 14, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 139, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1011, .adv_w = 143, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1027, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1036, .adv_w = 86, .box_w = 4, .box_h = 18, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1045, .adv_w = 47, .box_w = 1, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1048, .adv_w = 86, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1057, .adv_w = 159, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1060, .adv_w = 283, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1092, .adv_w = 283, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1122, .adv_w = 283, .box_w = 17, .box_h = 17, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1159, .adv_w = 283, .box_w = 16, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1191, .adv_w = 283, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1220, .adv_w = 283, .box_w = 17, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1254, .adv_w = 283, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1283, .adv_w = 283, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1315, .adv_w = 283, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x2a6, 0x2bf, 0x7cd, 0xdc6, 0x18d8, 0x1cae, 0x2be2,
    0x3878
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 20809, .range_length = 14457, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 9, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 3,
    3, 8,
    3, 13,
    3, 15,
    8, 3,
    8, 8,
    8, 13,
    8, 15,
    9, 75,
    13, 3,
    13, 8,
    13, 18,
    13, 24,
    13, 26,
    15, 3,
    15, 8,
    15, 18,
    15, 24,
    15, 26,
    16, 16,
    18, 13,
    18, 15,
    18, 27,
    18, 28,
    24, 13,
    24, 15,
    24, 27,
    24, 28,
    27, 18,
    27, 24,
    28, 18,
    28, 24,
    34, 3,
    34, 8,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 71,
    34, 77,
    34, 85,
    34, 87,
    34, 90,
    35, 13,
    35, 15,
    35, 36,
    35, 40,
    35, 48,
    35, 50,
    35, 53,
    35, 55,
    35, 57,
    35, 58,
    37, 13,
    37, 15,
    37, 34,
    37, 53,
    37, 55,
    37, 56,
    37, 57,
    37, 58,
    37, 59,
    37, 66,
    38, 75,
    39, 13,
    39, 15,
    39, 34,
    39, 66,
    40, 55,
    40, 58,
    43, 43,
    44, 34,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 53,
    44, 54,
    44, 55,
    44, 56,
    44, 58,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 77,
    44, 80,
    44, 82,
    44, 84,
    44, 85,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 3,
    45, 8,
    45, 34,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 87,
    45, 88,
    45, 90,
    48, 13,
    48, 15,
    48, 34,
    48, 53,
    48, 55,
    48, 56,
    48, 57,
    48, 58,
    48, 59,
    48, 66,
    49, 13,
    49, 15,
    49, 34,
    49, 53,
    49, 55,
    49, 56,
    49, 57,
    49, 58,
    49, 59,
    49, 66,
    50, 13,
    50, 15,
    50, 34,
    50, 43,
    50, 53,
    50, 55,
    50, 56,
    50, 57,
    50, 58,
    50, 59,
    50, 66,
    51, 36,
    51, 40,
    51, 48,
    51, 50,
    51, 53,
    51, 54,
    51, 55,
    51, 56,
    51, 57,
    51, 58,
    51, 68,
    51, 69,
    51, 70,
    51, 72,
    51, 80,
    51, 82,
    51, 85,
    51, 86,
    51, 87,
    51, 89,
    51, 90,
    52, 13,
    52, 15,
    52, 55,
    52, 56,
    52, 58,
    52, 87,
    52, 88,
    52, 90,
    53, 3,
    53, 8,
    53, 13,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 48,
    53, 50,
    53, 53,
    53, 55,
    53, 58,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 74,
    53, 75,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 85,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 34,
    54, 57,
    55, 13,
    55, 15,
    55, 27,
    55, 28,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 52,
    55, 53,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 80,
    55, 82,
    55, 84,
    56, 13,
    56, 15,
    56, 27,
    56, 28,
    56, 34,
    56, 36,
    56, 40,
    56, 48,
    56, 50,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    56, 84,
    57, 34,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 53,
    57, 54,
    57, 55,
    57, 56,
    57, 58,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 77,
    57, 80,
    57, 82,
    57, 84,
    57, 85,
    57, 86,
    57, 87,
    57, 88,
    57, 90,
    58, 13,
    58, 15,
    58, 27,
    58, 28,
    58, 34,
    58, 36,
    58, 40,
    58, 48,
    58, 50,
    58, 52,
    58, 53,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 72,
    58, 74,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 86,
    58, 87,
    58, 89,
    58, 90,
    58, 91,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    60, 75,
    66, 53,
    66, 55,
    66, 58,
    66, 87,
    66, 88,
    66, 90,
    67, 13,
    67, 15,
    67, 53,
    67, 55,
    67, 56,
    67, 57,
    67, 58,
    67, 87,
    67, 89,
    67, 90,
    70, 13,
    70, 15,
    70, 53,
    70, 55,
    70, 58,
    70, 75,
    71, 3,
    71, 8,
    71, 11,
    71, 32,
    71, 53,
    71, 55,
    71, 56,
    71, 57,
    71, 58,
    71, 62,
    71, 66,
    71, 68,
    71, 69,
    71, 70,
    71, 72,
    71, 73,
    71, 74,
    71, 75,
    71, 76,
    71, 77,
    71, 80,
    71, 82,
    71, 84,
    71, 87,
    71, 88,
    71, 89,
    71, 90,
    71, 94,
    73, 53,
    73, 58,
    73, 87,
    73, 90,
    74, 3,
    74, 8,
    74, 32,
    74, 53,
    74, 62,
    74, 94,
    75, 53,
    76, 53,
    76, 56,
    76, 66,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 77,
    76, 80,
    76, 82,
    76, 86,
    77, 71,
    77, 87,
    77, 88,
    77, 90,
    78, 53,
    78, 58,
    78, 87,
    78, 90,
    79, 53,
    79, 58,
    79, 87,
    79, 90,
    80, 13,
    80, 15,
    80, 53,
    80, 55,
    80, 56,
    80, 57,
    80, 58,
    80, 87,
    80, 89,
    80, 90,
    81, 13,
    81, 15,
    81, 53,
    81, 55,
    81, 56,
    81, 57,
    81, 58,
    81, 87,
    81, 89,
    81, 90,
    82, 53,
    82, 58,
    82, 75,
    83, 3,
    83, 8,
    83, 13,
    83, 15,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 71,
    83, 80,
    83, 82,
    83, 85,
    83, 87,
    83, 90,
    84, 53,
    84, 55,
    84, 56,
    84, 57,
    84, 58,
    84, 87,
    84, 89,
    84, 90,
    85, 85,
    86, 53,
    86, 58,
    87, 13,
    87, 15,
    87, 53,
    87, 57,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 71,
    87, 80,
    87, 82,
    87, 85,
    88, 13,
    88, 15,
    88, 53,
    88, 57,
    88, 66,
    89, 53,
    89, 56,
    89, 66,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 77,
    89, 80,
    89, 82,
    89, 86,
    90, 13,
    90, 15,
    90, 53,
    90, 57,
    90, 66,
    90, 68,
    90, 69,
    90, 70,
    90, 71,
    90, 80,
    90, 82,
    90, 85,
    91, 53,
    92, 73,
    92, 75,
    92, 76
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -25, -25, -49, -49, -25, -25, -49, -49,
    17, -52, -52, -37, -12, -6, -52, -52,
    -37, -12, -6, -35, -29, -29, -29, -29,
    -46, -46, -20, -20, -20, -9, -20, -9,
    -29, -29, -6, -6, -6, -6, -23, -1,
    -16, -10, -22, -3, -4, -3, -3, -3,
    -8, -8, -1, -1, -1, -1, -12, -6,
    -6, -6, -17, -17, -6, -10, -7, -6,
    -7, -10, -6, -6, 6, -46, -46, -12,
    -17, -2, -3, 2, -3, -7, -7, -7,
    -7, -4, -6, -9, -9, -9, -9, -9,
    -9, -12, -9, -9, -9, -3, -1, -9,
    -14, -9, -14, -29, -29, 6, -14, -14,
    -14, -14, -23, -3, -20, -12, -26, -12,
    -6, -12, -17, -17, -6, -10, -7, -6,
    -7, -10, -6, -6, -58, -58, -17, -7,
    -3, -3, -12, -6, -10, -17, -17, -17,
    -6, 2, -10, -7, -6, -7, -10, -6,
    -6, -4, -4, -4, -4, -11, -1, -3,
    -1, -7, -9, -4, -4, -4, -3, -4,
    -4, -3, -1, -3, 6, -3, -6, -6,
    -5, -3, -3, -3, -1, -3, 0, 0,
    -45, -45, -23, -6, -6, -6, -6, 3,
    1, 1, -23, -17, -17, -17, -17, -6,
    -6, -17, -17, -17, -17, -17, -17, -14,
    6, -20, -9, -3, -9, -9, -14, -1,
    -3, -40, -40, -12, -12, -16, -7, -7,
    -7, -7, -3, 1, -12, -6, -6, -6,
    -6, -6, -6, -6, -26, -26, -9, -9,
    -10, -6, -6, -6, -6, -6, -6, -6,
    -6, -6, -6, -6, -6, -3, -7, -7,
    -7, -7, -4, -6, -9, -9, -9, -9,
    -9, -9, -12, -9, -9, -9, -3, -1,
    -9, -14, -9, -14, -40, -40, -17, -17,
    -22, -10, -10, -10, -10, -3, 1, -26,
    -14, -14, -14, -23, -3, -6, -6, -14,
    -9, -14, -6, -12, -9, -6, -6, -6,
    -6, -3, -3, -3, -3, 23, -17, -3,
    -12, -3, -3, -3, -12, -12, -17, -6,
    -6, -9, -14, -3, -4, -3, -6, -6,
    -17, -3, -12, 6, 0, 0, 17, 12,
    12, 9, 6, 6, 6, 6, -9, -6,
    -6, -6, -10, -6, -6, -6, -6, -6,
    -6, -6, -6, -1, -1, -3, -1, 0,
    -13, -6, -3, -3, 0, 0, 6, -6,
    6, 3, -6, -12, -3, -3, -4, -4,
    -4, -6, -4, -4, -4, -1, -3, -3,
    -1, -3, -13, -6, -3, -3, -13, -6,
    -3, -3, -12, -12, -17, -6, -6, -9,
    -14, -3, -4, -3, -12, -12, -17, -6,
    -6, -9, -14, -3, -4, -3, -6, -3,
    9, 0, 0, -27, -27, -13, -6, -6,
    -6, 3, -6, -6, 6, 3, 3, -14,
    -6, -6, -3, -12, -3, -1, -3, 1,
    -14, -3, -27, -27, -9, -12, -10, -1,
    -1, -1, 1, -1, -1, 1, -17, -17,
    -3, -9, -5, -12, -3, -3, -4, -4,
    -4, -6, -4, -4, -4, -1, -27, -27,
    -9, -12, -10, -1, -1, -1, 1, -1,
    -1, 1, -14, 0, 23, 0
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 478,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Font18 = {
#else
lv_font_t ui_font_Font18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_FONT18*/

