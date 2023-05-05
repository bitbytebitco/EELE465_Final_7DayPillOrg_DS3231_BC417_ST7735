#include <msp430.h> 

//
static const unsigned int __attribute__ ((section(".text"))) bitmap[] = {
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xee17, 0xd34c, 0xca67, 0xca47, 0xcac9, 0xdcb1, 0xff7d, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xff9e, 0xf71c, 0xff9e, 0xffff, 0xffff, 0xffff, 0xf6ba, 0xcac9, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xe4d2, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xee58, 0xd3ad, 0xcac9, 0xd36c, 0xedf7, 0xffdf, 0xffff, 0xe533, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xd32b, 0xff7d, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xee58, 0xcac9, 0xca27, 0xca27, 0xca27, 0xca68, 0xe595, 0xffff, 0xe4d2, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xcaea, 0xf73c, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xff5d, 0xd36c, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xcaa8, 0xee79, 0xe554, 0xca27, 0xca27, 0xca47, 0xca88, 0xca27, 0xca27, 0xd32b, 0xff9d, 0xffff, 0xff9e, 0xf73c, 0xffbe, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xedf7, 0xca47, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xd38d, 0xedd6, 0xca68, 0xca27, 0xcaa9, 0xd38d, 0xca27, 0xca27, 0xdc2f, 0xffdf, 0xee17, 0xd38c, 0xcac9, 0xd3ad, 0xee79, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xe575, 0xca27, 0xca27, 0xca27, 0xca47, 0xcaea, 0xca88, 0xca27, 0xca47, 0xe4d2, 0xd32b, 0xca27, 0xd32b, 0xdcb1, 0xca27, 0xca27, 0xed95, 0xedd6, 0xca88, 0xca27, 0xca27, 0xca27, 0xcac9, 0xee79, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xf6da, 0xcaa9, 0xca27, 0xca27, 0xca27, 0xcae9, 0xe4d2, 0xd38c, 0xca27, 0xd32b, 0xdc0f, 0xca27, 0xd3cd, 0xe595, 0xca27, 0xd2ea, 0xedb5, 0xcaa9, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xd36c, 0xff5d,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xedd6, 0xcac9, 0xca27, 0xca27, 0xca27, 0xd32b, 0xee38, 0xe533, 0xcae9, 0xdc4f, 0xca88, 0xdc50, 0xee58, 0xca47, 0xdc2f, 0xd38c, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca47, 0xedb6,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf6da, 0xdc50, 0xcaa9, 0xca27, 0xca27, 0xd34b, 0xf6fb, 0xf6ba, 0xe574, 0xdc0f, 0xe4f2, 0xf6fb, 0xd32b, 0xdc50, 0xca47, 0xca27, 0xca68, 0xcaea, 0xca47, 0xca27, 0xca27, 0xca27, 0xe533,
                               0xffff, 0xff9e, 0xee58, 0xe595, 0xe554, 0xe595, 0xedd6, 0xe595, 0xdcb1, 0xd3cd, 0xcae9, 0xd3ad, 0xf71c, 0xffff, 0xf6ba, 0xee38, 0xff5d, 0xe4f3, 0xd32b, 0xca27, 0xd36c, 0xe4d2, 0xcaea, 0xca27, 0xca27, 0xca27, 0xcaa9, 0xf699,
                               0xf6db, 0xd3cd, 0xca67, 0xca27, 0xca27, 0xca27, 0xca47, 0xca88, 0xd30a, 0xdbee, 0xedb5, 0xee58, 0xee17, 0xe574, 0xe554, 0xf6da, 0xffff, 0xe574, 0xcac9, 0xe513, 0xee38, 0xd34b, 0xca27, 0xca27, 0xca27, 0xcaa9, 0xedb6, 0xffff,
                               0xdbce, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xcac9, 0xdc2f, 0xedf7, 0xff7d, 0xf73c, 0xd36c, 0xca27, 0xca27, 0xd32b, 0xf6da, 0xe595, 0xf6ba, 0xf6fb, 0xd34b, 0xca27, 0xca27, 0xca88, 0xdc0f, 0xf699, 0xffff, 0xffff,
                               0xcaa9, 0xca27, 0xca27, 0xca27, 0xca47, 0xd34b, 0xdcb1, 0xedf7, 0xee79, 0xee38, 0xee17, 0xe533, 0xca27, 0xca27, 0xca27, 0xca27, 0xe554, 0xffff, 0xf71c, 0xd3ad, 0xcac9, 0xd3cd, 0xe513, 0xf6ba, 0xffdf, 0xffff, 0xffff, 0xffff,
                               0xcae9, 0xca27, 0xca27, 0xca27, 0xca68, 0xd2ea, 0xd2ea, 0xcaa9, 0xca67, 0xcac9, 0xe595, 0xedb6, 0xca27, 0xca27, 0xca27, 0xca27, 0xe595, 0xffdf, 0xee17, 0xdcb1, 0xdcb1, 0xdc91, 0xdc70, 0xdc50, 0xdcb1, 0xedf6, 0xff9d, 0xffff,
                               0xdbee, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xd32b, 0xdc91, 0xf69a, 0xff9d, 0xdc0e, 0xca67, 0xca67, 0xdbee, 0xf71b, 0xe554, 0xd32b, 0xca67, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca47, 0xdbee, 0xff5d,
                               0xee17, 0xca68, 0xca27, 0xca27, 0xca27, 0xca27, 0xca68, 0xdc0f, 0xdc50, 0xd32b, 0xf71b, 0xf699, 0xee79, 0xee79, 0xee17, 0xff7d, 0xffff, 0xff9d, 0xee79, 0xdcb1, 0xd32b, 0xca47, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xe534,
                               0xffdf, 0xe513, 0xcaa9, 0xca67, 0xcac9, 0xdc0f, 0xedd6, 0xdc50, 0xca27, 0xdc0e, 0xf73c, 0xd38c, 0xedf6, 0xffff, 0xf6da, 0xe533, 0xee38, 0xe4f2, 0xe554, 0xedb6, 0xe595, 0xdc90, 0xd30a, 0xca47, 0xca27, 0xca27, 0xca27, 0xdc50,
                               0xffff, 0xffdf, 0xf6fb, 0xee79, 0xf71b, 0xff7d, 0xdc50, 0xca27, 0xca27, 0xe595, 0xe4f2, 0xca47, 0xe4d2, 0xe575, 0xff7d, 0xd34b, 0xd38c, 0xdc2f, 0xca88, 0xca27, 0xca47, 0xca88, 0xca88, 0xca47, 0xca27, 0xca27, 0xca27, 0xe4d2,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffdf, 0xdcb1, 0xca27, 0xca27, 0xcaea, 0xe574, 0xca88, 0xca67, 0xdcb1, 0xd2ea, 0xf699, 0xe4d2, 0xca27, 0xd34b, 0xe4d2, 0xd32b, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca68, 0xee17,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xee17, 0xca68, 0xca27, 0xca27, 0xd38c, 0xd34c, 0xca27, 0xca88, 0xe513, 0xca67, 0xd3ce, 0xedf7, 0xca68, 0xca27, 0xd32b, 0xedd6, 0xdc70, 0xca68, 0xca27, 0xca27, 0xca27, 0xca27, 0xd3cd, 0xff9e,
                               0xffff, 0xffff, 0xffff, 0xffbe, 0xdbee, 0xca27, 0xca27, 0xca27, 0xcaa9, 0xca47, 0xca27, 0xcac9, 0xedb5, 0xca68, 0xca47, 0xe4d2, 0xd34b, 0xca27, 0xca27, 0xd3ad, 0xf75c, 0xee79, 0xdc50, 0xd32b, 0xcaea, 0xdbee, 0xf6db, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xff7d, 0xd32b, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xd36c, 0xee79, 0xcaa8, 0xca27, 0xcac9, 0xd36c, 0xca27, 0xca27, 0xca27, 0xe533, 0xffff, 0xffdf, 0xff7d, 0xf75c, 0xffbe, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffbe, 0xd3ce, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xdcb1, 0xf75d, 0xd30a, 0xca27, 0xca27, 0xca68, 0xca27, 0xca27, 0xca27, 0xd34c, 0xff9d, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xf699, 0xd30a, 0xca27, 0xca27, 0xca27, 0xca27, 0xcaa9, 0xf6ba, 0xffdf, 0xd3ce, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xd2ea, 0xf75d, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf6fb, 0xdc91, 0xcaea, 0xca88, 0xd2ea, 0xedb5, 0xffff, 0xffff, 0xe574, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xdc50, 0xffdf, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffdf, 0xf73c, 0xf6ba, 0xf73c, 0xffff, 0xffff, 0xffff, 0xf75c, 0xd36c, 0xca27, 0xca27, 0xca27, 0xca47, 0xdbee, 0xf73c, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf6ba, 0xd3ad, 0xcac9, 0xd38c, 0xe595, 0xff9e, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff
                             };

static const unsigned FONT_CHARS[96][5] =
{
  { 0x00, 0x00, 0x00, 0x00, 0x00 }, // (space)
  { 0x00, 0x00, 0x5F, 0x00, 0x00 }, // !
  { 0x00, 0x07, 0x00, 0x07, 0x00 }, // "
  { 0x14, 0x7F, 0x14, 0x7F, 0x14 }, // #
  { 0x24, 0x2A, 0x7F, 0x2A, 0x12 }, // $
  { 0x23, 0x13, 0x08, 0x64, 0x62 }, // %
  { 0x36, 0x49, 0x55, 0x22, 0x50 }, // &
  { 0x00, 0x05, 0x03, 0x00, 0x00 }, // '
  { 0x00, 0x1C, 0x22, 0x41, 0x00 }, // (
  { 0x00, 0x41, 0x22, 0x1C, 0x00 }, // )
  { 0x08, 0x2A, 0x1C, 0x2A, 0x08 }, // *
  { 0x08, 0x08, 0x3E, 0x08, 0x08 }, // +
  { 0x00, 0x50, 0x30, 0x00, 0x00 }, // ,
  { 0x08, 0x08, 0x08, 0x08, 0x08 }, // -
  { 0x00, 0x60, 0x60, 0x00, 0x00 }, // .
  { 0x20, 0x10, 0x08, 0x04, 0x02 }, // /
  { 0x3E, 0x51, 0x49, 0x45, 0x3E }, // 0
  { 0x00, 0x42, 0x7F, 0x40, 0x00 }, // 1
  { 0x42, 0x61, 0x51, 0x49, 0x46 }, // 2
  { 0x21, 0x41, 0x45, 0x4B, 0x31 }, // 3
  { 0x18, 0x14, 0x12, 0x7F, 0x10 }, // 4
  { 0x27, 0x45, 0x45, 0x45, 0x39 }, // 5
  { 0x3C, 0x4A, 0x49, 0x49, 0x30 }, // 6
  { 0x01, 0x71, 0x09, 0x05, 0x03 }, // 7
  { 0x36, 0x49, 0x49, 0x49, 0x36 }, // 8
  { 0x06, 0x49, 0x49, 0x29, 0x1E }, // 9
  { 0x00, 0x36, 0x36, 0x00, 0x00 }, // :
  { 0x00, 0x56, 0x36, 0x00, 0x00 }, // ;
  { 0x00, 0x08, 0x14, 0x22, 0x41 }, // <
  { 0x14, 0x14, 0x14, 0x14, 0x14 }, // =
  { 0x41, 0x22, 0x14, 0x08, 0x00 }, // >
  { 0x02, 0x01, 0x51, 0x09, 0x06 }, // ?
  { 0x32, 0x49, 0x79, 0x41, 0x3E }, // @
  { 0x7E, 0x11, 0x11, 0x11, 0x7E }, // A
  { 0x7F, 0x49, 0x49, 0x49, 0x36 }, // B
  { 0x3E, 0x41, 0x41, 0x41, 0x22 }, // C
  { 0x7F, 0x41, 0x41, 0x22, 0x1C }, // D
  { 0x7F, 0x49, 0x49, 0x49, 0x41 }, // E
  { 0x7F, 0x09, 0x09, 0x01, 0x01 }, // F
  { 0x3E, 0x41, 0x41, 0x51, 0x32 }, // G
  { 0x7F, 0x08, 0x08, 0x08, 0x7F }, // H
  { 0x00, 0x41, 0x7F, 0x41, 0x00 }, // I
  { 0x20, 0x40, 0x41, 0x3F, 0x01 }, // J
  { 0x7F, 0x08, 0x14, 0x22, 0x41 }, // K
  { 0x7F, 0x40, 0x40, 0x40, 0x40 }, // L
  { 0x7F, 0x02, 0x04, 0x02, 0x7F }, // M
  { 0x7F, 0x04, 0x08, 0x10, 0x7F }, // N
  { 0x3E, 0x41, 0x41, 0x41, 0x3E }, // O
  { 0x7F, 0x09, 0x09, 0x09, 0x06 }, // P
  { 0x3E, 0x41, 0x51, 0x21, 0x5E }, // Q
  { 0x7F, 0x09, 0x19, 0x29, 0x46 }, // R
  { 0x46, 0x49, 0x49, 0x49, 0x31 }, // S
  { 0x01, 0x01, 0x7F, 0x01, 0x01 }, // T
  { 0x3F, 0x40, 0x40, 0x40, 0x3F }, // U
  { 0x1F, 0x20, 0x40, 0x20, 0x1F }, // V
  { 0x7F, 0x20, 0x18, 0x20, 0x7F }, // W
  { 0x63, 0x14, 0x08, 0x14, 0x63 }, // X
  { 0x03, 0x04, 0x78, 0x04, 0x03 }, // Y
  { 0x61, 0x51, 0x49, 0x45, 0x43 }, // Z
  { 0x00, 0x00, 0x7F, 0x41, 0x41 }, // [
  { 0x02, 0x04, 0x08, 0x10, 0x20 }, // "\"
  { 0x41, 0x41, 0x7F, 0x00, 0x00 }, // ]
  { 0x04, 0x02, 0x01, 0x02, 0x04 }, // ^
  { 0x40, 0x40, 0x40, 0x40, 0x40 }, // _
  { 0x00, 0x01, 0x02, 0x04, 0x00 }, // `
  { 0x20, 0x54, 0x54, 0x54, 0x78 }, // a
  { 0x7F, 0x48, 0x44, 0x44, 0x38 }, // b
  { 0x38, 0x44, 0x44, 0x44, 0x20 }, // c
  { 0x38, 0x44, 0x44, 0x48, 0x7F }, // d
  { 0x38, 0x54, 0x54, 0x54, 0x18 }, // e
  { 0x08, 0x7E, 0x09, 0x01, 0x02 }, // f
  { 0x08, 0x14, 0x54, 0x54, 0x3C }, // g
  { 0x7F, 0x08, 0x04, 0x04, 0x78 }, // h
  { 0x00, 0x44, 0x7D, 0x40, 0x00 }, // i
  { 0x20, 0x40, 0x44, 0x3D, 0x00 }, // j
  { 0x00, 0x7F, 0x10, 0x28, 0x44 }, // k
  { 0x00, 0x41, 0x7F, 0x40, 0x00 }, // l
  { 0x7C, 0x04, 0x18, 0x04, 0x78 }, // m
  { 0x7C, 0x08, 0x04, 0x04, 0x78 }, // n
  { 0x38, 0x44, 0x44, 0x44, 0x38 }, // o
  { 0x7C, 0x14, 0x14, 0x14, 0x08 }, // p
  { 0x08, 0x14, 0x14, 0x18, 0x7C }, // q
  { 0x7C, 0x08, 0x04, 0x04, 0x08 }, // r
  { 0x48, 0x54, 0x54, 0x54, 0x20 }, // s
  { 0x04, 0x3F, 0x44, 0x40, 0x20 }, // t
  { 0x3C, 0x40, 0x40, 0x20, 0x7C }, // u
  { 0x1C, 0x20, 0x40, 0x20, 0x1C }, // v
  { 0x3C, 0x40, 0x30, 0x40, 0x3C }, // w
  { 0x44, 0x28, 0x10, 0x28, 0x44 }, // x
  { 0x0C, 0x50, 0x50, 0x50, 0x3C }, // y
  { 0x44, 0x64, 0x54, 0x4C, 0x44 }, // z
  { 0x00, 0x08, 0x36, 0x41, 0x00 }, // {
  { 0x00, 0x00, 0x7F, 0x00, 0x00 }, // |
  { 0x00, 0x41, 0x36, 0x08, 0x00 }, // }
  { 0x08, 0x08, 0x2A, 0x1C, 0x08 }, // ->
  { 0x08, 0x1C, 0x2A, 0x08, 0x08 }, // <-
 };


#define TLV_16MHz_ADDR  0x1A2E              // Address of DCO tap trim value for 16MHz
#define TLV_24MHz_ADDR  0x1A30              // Address of DCO tap trim value for 24MHz

#define TARGET_FREQ_16MHZ                   // Define the target frequency of 16MHz
//#define TARGET_FREQ_24MHZ                 // Define the target frequency of 24MHz

#ifdef TARGET_FREQ_16MHZ
#define MCLK_FREQ_MHZ 16                     // MCLK = 16MHz
#endif
#ifdef TARGET_FREQ_24MHZ
#define MCLK_FREQ_MHZ 24                     // MCLK = 24MHz
#endif

// button
volatile int top_button = 0;
volatile int bottom_button = 0;

// SPI related vars
char test[] = {0xAA, 0xBB, 0xCC, 0xDD, 0xEE,0xFF, 0x11, 0x22};
char packet[20];
int Rx_Data;
unsigned int pos;
unsigned int data_len;
volatile int writeCmdFlag = 0;

// RTC
volatile int query_rtc_flag = 0;
char rtc_packet[] = {0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A};


char rtc_set_packet[] = {0x01, 0x40, 0x12, 0x04, 0x04, 0x05, 0x23}; // [REG_ADDR, minutes, hours, DOW (1-7), DOM (01-31), Month/Century, Year]
int rw = 0; // counter for rtc_set_packet
int mode_b;
int r = 0; // counter for rtc_packet
char str_buf[8]; // buffer for string result

int rtc_count = 0;

// I2C
int b1_i = 0;
char bluetooth_pkt[] = {0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0xAE};
unsigned int bluetooth_packet_cnt = 0;

// Saved Data
// { sec, min, hours, dow , date, mont/cent , year, bay_num }
char data[31][7] = {{ 0,0,0,0,0,0,0 }};
int week_data[] = {1,1,0,0,0,0,0}; // test week data
int month_data[][7] = {{1,0,0,0,0,0,0},
              {0,0,0,0,0,0,0},
              {0,0,0,0,0,0,0},
              {0,0,0,0,0,0,0}};
int data_i = 0;
int data_j = 0;
int used_today = 0;

int bluetooth_cmd = 0;

// screensaver mode
int screensaver = 1;
int refill_mode = 0;
int refill_cnt = 0;
int display_mode = 0;
volatile int ss_cnt = 0;
volatile int btd_cnt = 0;
volatile int bt_cnt = 0;
volatile int update_bluetooth = 0;

// Cusor
int curX = 0;
int curY = 0;

// TFT constants
#define SWRESET 0x01 // software reset
#define SLPOUT 0x11 // sleep out
#define DISPOFF 0x28 // display off
#define NORON 0x13 //
#define DISPON 0x29 // display on
#define FRMCTR1 0xB1 // framerate control
#define PWCTR1 0xC0 // Power control
#define PWCTR2 0xC1
#define PWCTR3 0xC2
#define GMCTRP1 0xE0
#define GMCTRN1 0xE1

#define CASET 0x2A // column address set
#define RASET 0x2B // row address set
#define RAMWR 0x2C // RAM write
#define MADCTL 0x36 // axis control
#define COLMOD 0x3A // color mode

// 1.8" TFT display constants
#define XSIZE 128
#define YSIZE 160
#define XMAX XSIZE-1
#define YMAX YSIZE-1

// Color constants
#define BLACK 0x0000
#define BLUE 0x001F
#define RED 0xF800
#define GREEN 0x0400
#define LIME 0x07E0
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define YELLOW 0xFFE0
#define WHITE 0xFFFF

char colors[] = {BLUE, RED, GREEN, LIME, CYAN, MAGENTA, YELLOW, WHITE};

// delay vars
volatile int ms_thresh, ms_count, ms_flag;


unsigned char decToBcd(int dec) {
    return(((dec / 10) * 16) + (dec % 10));
}
unsigned char bcdToDec(int bcd) {
    return(((bcd / 16) * 10) + (bcd % 16));
}

void setClock16Mhz(){
    // Using information gathered from slaa992 and https://www.ti.com/lit/zip/slaa992

    // start clock adjustment
    P2OUT = 0x00;
    P2DIR |= BIT0;                                      // P2.0 for output of start signal

    PM5CTL0 &= ~LOCKLPM5;                               // Disable the GPIO power-on default high-impedance mode
                                                        // to activate previously configured port settings

    // Configure one FRAM wait state as required by the device datasheet for MCLK
    // operation beyond 8MHz _before_ configuring the clock system.
#ifdef TARGET_FREQ_16MHZ
    FRCTL0 = FRCTLPW | NWAITS_1;
#endif
#ifdef TARGET_FREQ_24MHZ
    FRCTL0 = FRCTLPW | NWAITS_2;
#endif

    P2OUT |= BIT0;                                     // Start of the DCO+FLL configuration and FLL lock

    __bis_SR_register(SCG0);                           // disable FLL
    CSCTL3 |= SELREF__REFOCLK;                         // Set REFO as FLL reference source
    CSCTL0 = 0;                                        // clear DCO and MOD registers
#ifdef TARGET_FREQ_16MHZ
    CSCTL1 &= ~(DCORSEL_7);                            // Clear DCO frequency select bits first
    CSCTL1 |= DCORSEL_5;                               // Set DCO frequency range. DCO Range = 16MHz
    CSCTL2 = FLLD_0 + 487;                             // f(DCOCLKDIV) = 16MHz
    CSCTL0 = __data20_read_short(TLV_16MHz_ADDR);      // load DCO TLV trim vale to DCO Tap
#endif
#ifdef TARGET_FREQ_24MHZ
    CSCTL1 &= ~(DCORSEL_7);                            // Clear DCO frequency select bits first
    CSCTL1 |= DCORSEL_7;                               // DCO Range = 16MHz
    CSCTL2 = FLLD_0 + 731;                             // f(DCOCLKDIV) = 24MHz
    CSCTL0 = __data20_read_short(TLV_24MHz_ADDR);      // load DCO TLV trim vale to DCO Tap
#endif
    __delay_cycles(3);
    __bic_SR_register(SCG0);                            // enable FLL

    CSCTL4 |= SELMS__REFOCLK;                           // set REFO(~32768Hz) as MCLK -- This delay may cause fake lock when DCOTAP=0
    __delay_cycles(10);                                 // delay 10 FLL reference clock cycles

    while(CSCTL7 & (FLLUNLOCK0 | FLLUNLOCK1));          // Check if FLL locked

    CSCTL4 = SELMS__DCOCLKDIV | SELA__REFOCLK;          // set default REFO(~32768Hz) as ACLK source, ACLK = 32768Hz
                                                        // default DCOCLKDIV as MCLK and SMCLK source

    P6DIR |= BIT0;                                      // P6.6 as LED blink
    P1DIR |= BIT0 | BIT1;                               // set ACLK, SMCLK and LED pin as output
    P1SEL1 |= BIT0 | BIT1;                              // set P1.0, P1.1 as second function for ACLK, SMCLK output

    // end clock adjustment
}

void initTimerB0compare(){
    // setup TB0
    TB0CTL |= TBCLR;            // Clear TB0
    TB0CTL |= TBSSEL__SMCLK;    // Select SMCLK
    TB0CTL |= MC__UP;           // UP mode

    TB0CCR0 = 1045;             // Set CCR0 value (Period = 1045 for 1ms)
    TB0CCTL0 &= ~CCIFG;         // Clear CCR0 flag
}

/*
 * initTimerB1compare
 *
 * timer for resuming screensaver
 *
 */
void initTimerB1compare() {
    TB1CTL |= TBCLR;            // Clear TB1
    TB1CTL |= TBSSEL__SMCLK;    // Select SMCLK
    TB1CTL |= MC__UP;           // UP mode
    TB1CCR0 = 32768;           // Set CCR0 value (1 ms)  - 1049
    TB1CCTL0 &= ~CCIFG;         // Clear TB1 flag
    TB1CCTL0 |= CCIE;           // Enable TB1 interrupt
}

void initRTC_master(){
     UCB0CTLW0 |= UCSWRST;          // SW RESET ON

     UCB0CTLW0 |= UCSSEL_3;         // SMCLK
     UCB0BRW = 40;                  // Divide 16 Mhz SMCLK by 160 --> 100kHz I2C clock

     UCB0CTLW0 |= UCMODE_3;         // Put into I2C mode
     UCB0CTLW0 |= UCMST;            // Set as MASTER
     UCB0CTLW0 |= UCTR;             // Put into Tx mode
     UCB0I2CSA = 0x0068;            // DS3231 RTC Slave address = 0x68

     UCB0CTLW1 |= 0xC0;             // Set UCCLTO = 11 (~34ms clock low timeout)

     UCB0CTLW1 |= UCASTP_2;         // Enable automatic stop bit
     UCB0TBCNT = sizeof(packet);    // Transfer byte count

     // Setup ports
     P1SEL1 &= ~BIT3;            // P1.3 SCL
     P1SEL0 |= BIT3;

     P1SEL1 &= ~BIT2;            // P1.2 SDA
     P1SEL0 |= BIT2;

     UCB0CTLW0 &= ~UCSWRST;      // SW RESET OFF

     UCB0IE |= UCTXIE0 | UCRXIE0 | UCCLTOIE | UCBCNTIE | UCNACKIE;          // enable I2C B0 Tx, Rx, timeout IRQ

}

void init(){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

        // configure eUSCI_A0
        UCA0CTLW0 |= UCSWRST;           // put eUSCI_A0 into RESET mode
        UCA0CTLW0 |= UCSSEL__SMCLK;     // select SMCLK (1MHz)
//        UCA0BRW = 10;                   // divide CLK by 10
        UCA0BRW = 4;

        UCA0CTLW0 |= UCSYNC;            // SPI mode
        UCA0CTLW0 |= UCMST;             // SPI MASTER
        UCA0CTLW0 |= UCMSB;

        UCA0CTLW0 |= UCMODE1;           // 4-wire SPI with STE active LOW
        UCA0CTLW0 &= ~UCMODE0;
        UCA0CTLW0 |= UCSTEM;            // STE pin used for 4-wire SPI

        // Reed Switch
        P3DIR &= ~BIT1;
        P3REN |= BIT1;  // enable P1.1 pull up/down resistors
        P3OUT &= ~BIT1;  // set P1.1 resistor as pull DOWN
        P3IES &= ~BIT1;  // set interrupt mode for rising edge

        P3IE |= (BIT1);   // Local Interrupt enable for P3.1
        P3IFG &= ~(BIT1);     // clear P3.1 IRQ Flag

        P2DIR &= ~(BIT2);                 // enable P2.2-3 as INPUT
        P2REN |= (BIT2);                  // enable resistors
        P2OUT |= (BIT2);                  // pull UP resistor
        P2IES |= (BIT2);                  // H-to-L sensitivity

        P4DIR &= ~BIT0;                       // enable P4.0 as INPUT
        P4REN |= BIT0;                        // enable resistors
        P4OUT |= BIT0;                        // pull UP resistor
        P4IES |= BIT0;                        // H-to-L sensitivity

        P1SEL1 &= ~BIT5;                        // P1.5 SMCLK
        P1SEL0 |= BIT5;

        P1SEL1 &= ~BIT6;                        // P1.6 SOMI
        P1SEL0 |= BIT6;

        P1SEL1 &= ~BIT7;                        // P1.7 SIMO
        P1SEL0 |= BIT7;

        P1SEL1 &= ~BIT4;                        // STE pin setup
        P1SEL0 |= BIT4;

        P1DIR |= BIT0;                  // P1.0 as OUTPUT
        P1OUT &= ~BIT0;                  // P1.0 LOW

        P6DIR |= BIT6;                  // P6.6 as OUTPUT
        P6OUT &= ~BIT6;                 // P6.6 LOW

        P2DIR |= (BIT1 | BIT0);         // P2.0-1 as OUTPUT (2.1 TFT Reset & 2.0 : TFT D/C)
        P2OUT &= ~(BIT1 | BIT0);

        P6DIR |= (BIT0);         // P6.0 as OUTPUT (green LED)
        P6OUT &= ~(BIT0);

        PM5CTL0 &= ~LOCKLPM5;           // turn on I/O

        UCA0CTLW0 &= ~UCSWRST;          // take eUSCI_A0 out of RESET mode

        // Setup IRQs
        P2IE |= BIT2;                   // enable P2.3 IRQ
        P2IFG &= ~BIT2;                 // clear flag

        P4IE |= BIT0;                   // enable P2.3 IRQ
        P4IFG &= ~BIT0;                 // clear flag

        initTimerB0compare();
        initTimerB1compare();

        __enable_interrupt();           // enable global IRQ
}

void setDC(){
    P2OUT |= BIT0;
}
void unsetDC() {
    P2OUT &= ~BIT0;
}

void setTFTreset(){
    P2OUT |= BIT1;
}
void unsetTFTreset(){
    P2OUT &= ~BIT1;
}

void TFTreset(){
    unsetTFTreset();
    delay_ms(1);
    setTFTreset();
    delay_ms(200);
}

void delay_ms(int ms){
    ms_flag = 0;
    ms_count = 0;
    ms_thresh = ms;
    TB0CCTL0 |= CCIE;           // Local IRQ enable for CCR0
    while(ms_flag != 1){}
    TB0CCTL0 &= ~CCIE;          // Disable CCR0
}

void writeByte(int b){

    pos = 0; // set packet index to 0
    data_len = 1; // update length
    UCA0TXBUF = b; // send first byte
    smdel();
//    while((UCA0IFG & UCTXIFG) == 1);
}

void writeCmd(int b){

//    while((UCA0IFG & UCTXIFG) == 1);

    writeCmdFlag = 1;
    pos = 0; // set packet index to 0
    data_len = 1; // update length

    unsetDC();
    UCA0TXBUF = b; // send first byte
    smdel();
    setDC();

//    setDC();
}

void SPI_send(char *bytes, int len){
    int i;
    for(i = 0;i<len; i++){
        packet[i] = *bytes;
        bytes++;
    }

    pos = 0; // set packet index to 0
    data_len = len; // update length
    UCA0TXBUF = packet[pos]; // send first byte
}

void initI2C_master(){
     UCB1CTLW0 |= UCSWRST;          // SW RESET ON

     UCB1CTLW0 |= UCSSEL_3;         // SMCLK
     UCB1BRW = 40;                  // Divide 16 Mhz SMCLK by 40 --> 400kHz I2C clock

     UCB1CTLW0 |= UCMODE_3;         // Put into I2C mode
     UCB1CTLW0 |= UCMST;            // Set as MASTER
     UCB1CTLW0 |= UCTR;             // Put into Tx mode
     UCB1CTLW0 |= UCMSB;

     UCB1CTLW1 |= 0xC0;             // Set UCCLTO = 11 (~34ms clock low timeout)

     UCB1CTLW1 |= UCASTP_2;         // Enable automatic stop bit
     UCB1TBCNT = sizeof(packet);    // Transfer byte count

     // Setup ports
     P4SEL1 &= ~BIT7;            // P4.7 SCL
     P4SEL0 |= BIT7;


     P4SEL1 &= ~BIT6;            // P4.6 SDA
     P4SEL0 |= BIT6;

     PM5CTL0 &= ~LOCKLPM5;       // Turn on I/O
     UCB1CTLW0 &= ~UCSWRST;      // SW RESET OFF

     UCB1IE |= UCTXIE0 | UCRXIE0 | UCCLTOIE | UCBCNTIE | UCNACKIE;                  // Enable I2C TX interrupt

}

void initTFT(){
    TFTreset();
    writeCmd(SLPOUT);
    delay_ms(150);
    writeCmd(COLMOD);
    writeByte(0x05);

    writeCmd(FRMCTR1);
    writeByte(0x0);
    writeByte(0x06);
    writeByte(0x03);
    delay_ms(10);

    writeCmd(PWCTR1);
    writeByte(0x02);
    writeByte(0x70);
    delay_ms(10);

    writeCmd(PWCTR2);
    writeByte(0x05);
    delay_ms(10);

    writeCmd(PWCTR3);
    writeByte(0x01);
    writeByte(0x02);
    delay_ms(10);

    writeCmd(GMCTRP1);
    int i;
    int gm[] = {0x09, 0x16, 0x09, 0x20,       //     (Not entirely necessary, but provides
                0x21, 0x1B, 0x13, 0x19,       //      accurate colors)
                0x17, 0x15, 0x1E, 0x2B,
                0x04, 0x05, 0x02, 0x0E};
    for(i=0;i<sizeof(gm);i++){
        writeByte(gm[i]);
    }
    delay_ms(10);

    writeCmd(GMCTRN1);
    int gm2[] = {0x0B, 0x14, 0x08, 0x1E,       //     (Not entirely necessary, but provides
                0x22, 0x1D, 0x18, 0x1E,       //      accurate colors)
                0x1B, 0x1A, 0x24, 0x2B,
                0x06, 0x06, 0x02, 0x0F};
    for(i=0;i<sizeof(gm2);i++){
        writeByte(gm2[i]);
    }
    delay_ms(10);

    writeCmd(NORON);
    writeCmd(DISPON);
}

void setOrientation(){
    writeCmd(MADCTL);
//    writeByte(0xC0); // 180 deg
    writeByte(0xA0); // 270 deg
}

void WriteWord (int w)
{
    writeByte(w >> 8); // write upper 8 bits
    writeByte(w & 0xFF); // write lower 8 bits
}

void Write565(int data, unsigned int count)
{
    int hb = data >> 8;
    int lb = data;

    for (;count>0;count--)
    {
        writeByte(hb);
        writeByte(lb);
    }
}

void clearWindow(int x1, int y1){
    SetAddrWindow(x1,y1,YMAX,XMAX);
    writeCmd(RAMWR); // memory write
    unsigned int i;
    for (i=40960;i>0;--i) // byte count = 128*160*2
     {
        UCA0TXBUF = 0xFF;
        while((UCA0IFG & UCTXIFG) == 0); // while buffer not empty

     }
}

void clearDisplay(){
    SetAddrWindow(0,0,YMAX,XMAX);
    writeCmd(RAMWR); // memory write
    unsigned int i;
    for (i=40960;i>0;--i) // byte count = 128*160*2
     {
        UCA0TXBUF = 0xFF;
        while((UCA0IFG & UCTXIFG) == 0); // while buffer not empty

     }
}

void drawBitmap(int x0, int y0){
    int w = 28-1;
    SetAddrWindow(x0,y0,x0+w, y0+w);
    writeCmd(RAMWR); // memory write
    unsigned int i;
    int hb,lb;

    for (i=0; i<784; i++){
        hb = bitmap[i] >> 8;
        lb = bitmap[i];
        UCA0TXBUF = hb;
        while((UCA0IFG & UCTXIFG) == 0); // while buffer not empty
        UCA0TXBUF = lb;
        while((UCA0IFG & UCTXIFG) == 0); // while buffer not empty
    }
}

void HLine(int x_0, int x_1, int y, int color){
    int w = x_1-x_0+1;
    SetAddrWindow(x_0,y,x_1,y);
    writeCmd(RAMWR); // memory write
    Write565(color,w);
}

void DrawPixel (int x, int y, int color)
{
    SetAddrWindow(x,y,x,y); // set active region = 1 pixel
    writeCmd(RAMWR); // memory write
    Write565(color,1); // send color for this pixel
}

void smdel(){
    int i,j;
    for(i=0;i<11;i++){
    }
}

void SetAddrWindow(int x_0, int y_0, int x_1, int y_1)
{
 writeCmd(CASET); // set column range (x0,x1)

// x_0
 writeByte(0x0);
 writeByte(x_0);

// x1
 writeByte(0x0);
 writeByte(x_1);

 writeCmd(RASET); // set row range (y0,y1)

// WriteWord(y0);
 writeByte(0x0);
 writeByte(y_0); //y0

// WriteWord(y1);
 writeByte(0x0);
 writeByte(y_1);
}

void fillRect(int x0, int y0, int x1, int y1, int color){
    int w = x1 - x0 + 1;
    int h = y1 - y0 + 1;
    SetAddrWindow(x0, y0, x1, y1);
    writeCmd(RAMWR); // memory write
    Write565(color, w*h);
}

void fillScreen(int back_col){
    SetAddrWindow(0,0,YMAX,XMAX);
    writeCmd(RAMWR); // memory write
    unsigned int i;
    for (i=40960;i>0;--i) // byte count = 128*160*2
     {
        UCA0TXBUF = back_col >> 8;
        while((UCA0IFG & UCTXIFG) == 0); // wait for buffer to empty
        UCA0TXBUF = back_col;
        while((UCA0IFG & UCTXIFG) == 0); // wait for buffer to empty
     }
}

void PutCh (char ch, int x, int y, int color, int bgcolor){
    // write ch to display X,Y coordinates using ASCII 5x7 font

     int pixel;
     int row, col, bit, dataf, mask = 0x01;
     SetAddrWindow(x,y,x+4,y+6);
     writeCmd(RAMWR);

     for (row=0; row<7;row++){
         for (col=0; col<5;col++){
             dataf = FONT_CHARS[ch-32][col];
             bit = dataf & mask;
             if (bit==0) {
                 pixel=bgcolor;
             } else {
                 pixel=color;
             }
             WriteWord(pixel);
         }
         mask <<= 1;
     }
}

void setRTC(){
    UCB0I2CSA = 0x0068;            // DS3231 RTC Slave address = 0x68
    mode_b = 6;
    UCB0CTLW0 |= UCTR;
    UCB0TBCNT = sizeof(rtc_set_packet);
    UCB0CTLW0 |= UCTXSTT;           // Generate START condition
     while((UCB0IFG & UCSTPIFG)==0); // wait for STOP
    UCB0IFG &= ~UCSTPIFG;  // clear the stop flag
}

void queryRTC(){
    UCB0I2CSA = 0x0068;            // DS3231 RTC Slave address = 0x68
    mode_b = 1;
    UCB0CTLW0 |= UCTR;
    UCB0TBCNT = 1;
    UCB0CTLW0 |= UCTXSTT;           // Generate START condition
     while((UCB0IFG & UCSTPIFG)==0); // wait for STOP
    UCB0IFG &= ~UCSTPIFG;  // clear the stop flag

    mode_b = 2;
    UCB0CTLW0 &= ~UCTR;
    UCB0TBCNT = sizeof(rtc_packet);
    UCB0CTLW0 |= UCTXSTT;           // Generate START condition
    while((UCB0IFG & UCSTPIFG)==0); // wait for STOP
    UCB0IFG &= ~UCSTPIFG;  // clear the stop flag
}

int sameDate(char d1[7], char d2[7]){
    if((d1[4] == d2[4]) && (d1[5] == d2[5]) && (d1[6] == d2[6])){
        return 1;
    }
    return 0;
}

int dateExists(char d[7]){
    int j,i;
    int ret = 0;
    if(data_i == 0){
        return 0;
    }
    for(i = 0;i<sizeof(data);i++){
        if(sameDate(data[i], d) == 1){
            ret = i;
        }
    }
    return ret;
}

void fillDataPacket(int i){
    int j;

    if(i == 0){
        for(j = 0;j<sizeof(rtc_packet);j++){
            data[i][j] = rtc_packet[j];
        }
    } else {
//        int date_exists = dateExists(rtc_packet); // TEMP
        int date_exists = 0;
        if(date_exists == 0){
            for(j = 0;j<sizeof(rtc_packet);j++){
                data[i][j] = rtc_packet[j];
            }
        }
    }
}

void fillBluetoothPacket(char pack[]){
    int i;
    for(i=0;i<sizeof(rtc_packet);i++){
        if(i != 7){
            bluetooth_pkt[i] = pack[i];
        }
    }
}

void updateBluetoothController(){
    int i;
    for(i=0;i<data_i;i++){
        fillBluetoothPacket(data[i]);

        UCB1I2CSA = 0x0058;                 // Set slave address
        mode_b = 4;
        b1_i = 0;
        bluetooth_packet_cnt = 0;
        UCB1CTLW0 |= UCTR;
        UCB1TBCNT = sizeof(bluetooth_pkt);
        UCB1CTLW0 |= UCTXSTT;           // Generate START condition
        while((UCB1IFG & UCSTPIFG)==0); // wait for STOP
        UCB0IFG &= ~UCSTPIFG;  // clear the stop flag

        delay_ms(50);
    }
}

void updateMonthUse(){
    int i,j;
    int n = 1;
    for(i=0;i<4;i++){
        for(j=0;j<7;j++){
            if(rtc_packet[4] == n){
                month_data[i][j] = 1;
            }
            n++;
        }
    }
}

void updateTodayUse(){
    // add record (if not in fill mode)
    if(refill_mode == 0){
        used_today = 1;
        week_data[rtc_packet[5]-1] = 1;
        updateMonthUse();
        homeScreen();
        fillDataPacket(data_i);
        data_i++;
    }

}

void display_day(){
    //if(data[0][5] // index 5 has day of week
    if(used_today == 1){
        fillScreen(GREEN);
    } else {
        fillScreen(RED);
    }
}

void display_norecords(){
    clearDisplay();
    setX(2); setY(1);
    writeString("Send Records?");
    setX(1); setY(2);
    writeString("(via Bluetooth)");

    setX(2);
    setY(5);
    writeString("No Records to send.");
}


void set_display_mode(int disp_mode){
    clearDisplay();
    char dow[] = {'S','M','T','W','R','F','Y'};

    if(display_mode == 0){
        display_day();
    } else if(display_mode == 1){
        display_week(week_data, ((XSIZE/2)-(19/2)), dow);
    } else if(display_mode == 2){
        display_month(month_data);
    } else if(display_mode == 3){
        display_bluetooth(7);
    } else if(display_mode == 4){
        display_refill();
    }
}

void setX(int x){
    curX = x;
}
void setY(int y){
    curY = y;
}
void advanceCursor(){
    curX++;
    if(curX > 25){
        curY++;
        curX = 0;
    }
    if(curY > 15){
        curY = 0;
    }
}

void writeString(char *str){
    for(;*str;str++){
        PutCh(*str,curX*6,curY*8,BLACK, WHITE);
        advanceCursor();
    }
}

void display_refill(){
    setX(1);
    setY(1);
    writeString("Refill MODE");
}

void toggle_refill_mode(){
    if(refill_mode == 0){
        refill_mode = 1;
    } else {
        refill_mode = 0;
    }
}

int bitmap_shown = 0;
void update_refill_display(){
//    clearDisplay();
    clearWindow(0, 20);
    display_refill();
    if(bitmap_shown == 0){
        drawBitmap(rand() % 95, (rand() % 50) + 20);
        bitmap_shown = 1;
    } else {
        bitmap_shown = 0;
    }
}

void display_bluetooth(int n){
    int margin = 3;
    int width = 19;
    int k;
    int y = ((XSIZE/2)-(19/2));
    int x = 4;
    int col;

    setX(2);
    setY(1);
    if(update_bluetooth == 0){
        writeString("Send Records?");
        setX(1); setY(2);
        writeString("(via Bluetooth)");

    } else {
        writeString("Sending Records");
        setX(1); setY(2);
        writeString("(via Bluetooth)");
    }

    for(k=0;k<n;k++){
        col = BLUE;
        fillRect(x, y, x+20, y+20, col);
        x = x + width + margin;
    }

}


void display_week(int r[7], int y, char dow[7]){

    int margin = 3;
    int width = 19;
    int k;
//    int x = (XSIZE/2)-(width/2);
    int x = 4;
    int col;

    for(k=0;k<7;k++){
        if(r[k] == 0){
            col = RED;
        } else {
            col = GREEN;
        }
        fillRect(x, y, x+20, y+20, col);
        if(dow[k]<31){
            if(dow[k]<9){
                PutCh(intToAscii((decToBcd(dow[k]) & 0x0F)),x,y,BLACK, col);
            } else {
                PutCh(intToAscii((decToBcd(dow[k]) & 0xF0)>>4),x,y,BLACK, col);
                PutCh(intToAscii((decToBcd(dow[k]) & 0x0F)),x+6,y,BLACK, col);
            }
        } else {
            PutCh(dow[k],x,y,BLACK, col);
        }
        x = x + width + margin;
    }
}

void display_month(int mon[3][7]){
    char dow[4][7] = {{1,2,3,4,5,6,7}, {8,9,10,11,12,13,14}, {15,16,17,18,19,20,21}, {22,23,24,25,26,27,28}};
    int i;
    int y = 20;
    int cnt = 0;
    for(i=0;i<4;i++){

        display_week(mon[i], y, dow[i]);
        y = y+24;
    }
}

int intToAscii(int n){
    int ret;
    if (n > 0) {
        ret =  n + 48;
    } else {
        ret = 0 + 48;
    }
    return ret;
}


void drawClock(int x, int y){
//    int i,j;

//    for(i=0;i<4;i++){

//        for(j=0;j<sizeof(str);j++){
            char *packet = data[0];

            PutCh(intToAscii((packet[5] & 0xF0)>>4),x*6,y*8,BLACK, WHITE); // month (tens)
            x++;
            PutCh(intToAscii((packet[5] & 0x0F)),x*6,y*8,BLACK, WHITE); // month (ones)
            x++;
            PutCh('/',x*6,y*8,BLACK, WHITE);
            x++;


            PutCh(intToAscii((packet[4] & 0xF0)>>4),x*6,y*8,BLACK, WHITE); // day (tens)
            x++;
            PutCh(intToAscii((packet[4] & 0x0F)),x*6,y*8,BLACK, WHITE); // day (ones)
            x++;
            PutCh('/',x*6,y*8,BLACK, WHITE);
            x++;

            PutCh(intToAscii((packet[6] & 0xF0)>>4),x*6,y*8,BLACK, WHITE); // year (tens)
            x++;
            PutCh(intToAscii((packet[6] & 0x0F)),x*6,y*8,BLACK, WHITE); // year (ones)
            x = x+2;


            PutCh(intToAscii((packet[2] & 0xF0)>>4),x*6,y*8,BLACK, WHITE); // hours (tens)
            x++;
            PutCh(intToAscii((packet[2] & 0x0F)),x*6,y*8,BLACK, WHITE); // hours (ones)
            x++;
            PutCh(':',x*6,y*8,BLACK, WHITE);
            x++;

            int t1 = intToAscii((packet[1] & 0b11110000) >> 4);
            PutCh(t1,x*6,y*8,BLACK, WHITE); // minutes (tens)
            x++;
            int t2 = intToAscii((packet[1] & 0x0F));
            PutCh(t2,x*6,y*8,BLACK, WHITE); // minutes (ones)
            x = x+2;

            PutCh(intToAscii((packet[0] & 0xF0)>>4),x*6,y*8,BLACK, WHITE); // seconds (tens)
            x++;
            PutCh(intToAscii((packet[0] & 0x0F)),x*6,y*8,BLACK, WHITE); // seconds (ones)

//        }
//    }
}

void bluetoothSendState(int state){
    if(state == 0){
        bluetooth_pkt[7] = 0x00;
    } else if(state == 1){
        bluetooth_pkt[7] = 0xAE;
    }
    // begin I2C transmission
    updateBluetoothController();
}

void homeScreen(){
    clearDisplay();
    display_mode = 0;
    set_display_mode(0);
    screensaver = 0;
    TB1CTL |= TBCLR; // clear screensaver clock
    ss_cnt = 0;
}

int main(void)
{
    // System inits
    setClock16Mhz();
    init();

    initI2C_master();                   // Intialize master for I2C transmission

    // init & query RTC
    initRTC_master();

    setRTC();

    queryRTC();
    fillDataPacket(0);

    // init TFT
    initTFT();
    setOrientation();
    clearDisplay();

    drawClock(3, 13);

    static const int v = 10;
    static const int t = 0;
    int back_col;


    /*
    // beginning of box
    int w = 160/8;
    HLine(w, 2*w, 50, MAGENTA);
    HLine(3*w, 4*w, 50, MAGENTA);

    HLine(w, 2*w, 50+w, MAGENTA);
    HLine(3*w, 4*w, 50+w, MAGENTA);

    fillRect(0, 0, XSIZE/2, YSIZE/2, LIME);
    */

    char c[] = {BLUE, LIME, GREEN, WHITE};
    int col;

    //homeScreen();

    int i;
    while(1){

        delay_ms(500);
//        SPI_send(test, sizeof(test));
//        delay_ms(5);
        P6OUT ^= BIT0;

        // RTC
        if(rtc_count == 25){
//        if(query_rtc_flag == 1){
            queryRTC(); // query RTC
            fillDataPacket(0); // update current date

            query_rtc_flag = 0;
            rtc_count = 0;
        }
        rtc_count++;

        // TOP BUTTON action

            if(display_mode == 4){
                if(top_button == 1){
                    clearDisplay();
                    display_bluetooth(btd_cnt);

                    // update state
                    if(data_i>0){
                        if(update_bluetooth == 0){
                            update_bluetooth = 1;
                            bluetoothSendState(1); // stop
                        }
//                        else {
//                            update_bluetooth = 0;
//                            bluetoothSendState(1); // start
//                        }
                    } else {
                        display_norecords();
                    }

                    top_button = 0;
                    delay_ms(300);
                    P4IE |= BIT0;        // enable P2.3 IRQ
                    P4IFG &= ~BIT0;      // clear flag
                }
            } else if(display_mode == 5){
                if(top_button == 1){
                    refill_cnt = 0;
                    toggle_refill_mode();

                    top_button = 0;
                    delay_ms(300);
                    P4IE |= BIT0;        // enable P2.3 IRQ
                    P4IFG &= ~BIT0;      // clear flag
                }
            }

            /*
            if(display_mode == 5){

                // set refill mode
                if(refill_mode == 0){
                    refill_mode = 1;
                    screensaver = 0;
                } else {
                    clearDisplay();
                    refill_mode = 0;
                    screensaver = 1;
                }
            }
            */



        // BOTTOM BUTTON action
        if(bottom_button == 1){
            refill_mode = 0; // unset refill mode

            if(update_bluetooth == 1){
                update_bluetooth = 0; // turn off bluetooth animation
                bluetoothSendState(0);
            }


            TB1CTL |= TBCLR; // clear screensaver clock
            ss_cnt = 0;

            screensaver = 0;
            if(display_mode >= 5){
                display_mode = 0;
            }
            set_display_mode(display_mode);
            display_mode++;

            bottom_button = 0;
            delay_ms(300);
            P2IE |= BIT2;        // enable P2.3 IRQ
            P2IFG &= ~BIT2;                 // clear flag
        }

        if(screensaver == 1){
            // random flower bitmaps

            //drawBitmap(rand() % 150,rand() % 50);
            if(rtc_count == 25){
                clearDisplay();
                drawClock(3, 13);
            }

        }


    }

    return 0;
}
// -----------------------------------/
// ISRs ------------------------------/


/*
 * Top Button Interrupt (P2.3)
 */
#pragma vector = PORT4_VECTOR
__interrupt void ISR_PORT2_S4(void){
    top_button = 1;
    screensaver = 0;
    P4IE &= ~BIT0;                   // disable P2.3 IRQ
}

/*
 * Bottom Button Interrupt (P2.2)
 */
#pragma vector = PORT2_VECTOR
__interrupt void ISR_PORT2_S2(void){
    bottom_button = 1;
    P2IE &= ~BIT2;                   // disable P2.2 IRQ
}

/*
 * TIMER (delay_ms)
 */
#pragma vector=TIMER0_B0_VECTOR
__interrupt void ISR_TB0_CCR0(void){
    ms_count++;
    if(ms_count == ms_thresh){
        ms_flag = 1;
        ms_count = 0;
    }

    TB0CCTL0 &= ~CCIFG;
}

#pragma vector = TIMER1_B0_VECTOR
__interrupt void ISR_TB1_CCR0(void) {
    if(update_bluetooth == 1){
        bt_cnt++;
        if(bt_cnt == 150){
            btd_cnt++;
            bt_cnt = 0;
            if(btd_cnt == 8){
                btd_cnt = 0;
                update_bluetooth = 0;
                screensaver = 1;
                display_mode = 0;
            }
            display_bluetooth(btd_cnt);
        }
    } else if(refill_mode == 1){
        refill_cnt++;
        if(refill_cnt == 250){
            refill_cnt = 0;
            update_refill_display();
        }
    } else {
        if(ss_cnt >= 2000){
            ss_cnt = 0;
            screensaver = 1;
        }
        ss_cnt++;
    }


    TB1CCTL0 &= ~CCIFG;     // Clear flag
}



/*
 * I2C (RTC slave)
 */
#pragma vector=EUSCI_B0_VECTOR
__interrupt void EUSCI_B0_TX_ISR(void){
    switch(UCB0IV){
        case 0x16:      // ID 16: RXIFG0
            if(mode_b == 2){
                if (r == (sizeof(rtc_packet)-1)){
                    rtc_packet[r] = UCB0RXBUF;
                    r = 0;
                } else {
                    rtc_packet[r] = UCB0RXBUF;
                    r++;
                }
            }
            break;
        case 0x18:      // ID 18: TXIFG0
            // rtc pointer set
            if(mode_b == 1){
                UCB0TXBUF = 0x00; // set RTC pointer (for reading)
            } else if(mode_b == 5){
                UCB0TXBUF = 0x01; // set RTC pointer to minutes address (for writing)
            } else if(mode_b == 6){
                if (rw == (sizeof(rtc_set_packet)-1)){
                    UCB0TXBUF = rtc_set_packet[rw];
                    rw = 0;
                } else {
                    UCB0TXBUF = rtc_set_packet[rw];
                    rw++;
                }
            }

            break;
        default:
            break;
    }

}


/*
 * Reed Switch
 */
#pragma vector = PORT3_VECTOR
__interrupt void ISR_PORT3_S1(void){
    query_rtc_flag = 1;
    updateTodayUse();
    P3IFG &= ~BIT1;                 // clear flag
}


/*
 * I2C 2310 (slave)
 */
#pragma vector=EUSCI_B1_VECTOR
__interrupt void EUSCI_B1_TX_ISR(void){                     // Fill TX buffer with packet values
    switch(UCB1IV){
        case 0x16:      // ID 16: RXIFG0
//            lm92_packet[j] = UCB1RXBUF;
            break;
        case 0x18:      // ID 18: TXIFG0
            if(mode_b == 3){
                UCB1TXBUF = bluetooth_cmd; // test value
            } else if(mode_b == 4){
                if (b1_i == (sizeof(bluetooth_pkt)-1)){
                    UCB1TXBUF = bluetooth_pkt[b1_i];
                    b1_i = 0;
                } else {
                    UCB1TXBUF = bluetooth_pkt[b1_i];
                    b1_i++;
                }
            }
            break;
        case 0x04: // NACK
            break;
        case 0x1A: // byte count zero interrupt
            break;
        case 0x1C: // clock low timeout
            UCB0CTLW0 |= UCTXNACK;
            break;
        default:
            break;
    }
}
