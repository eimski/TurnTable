// turntable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
const int bmp_lut[] = { 0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xcf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x8f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7,0xfc,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x7f,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xf,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3,0xfc,0xff,0xff,0xff,0xff,0xff,0x7,0xf8,
0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf,
0xf8,0xff,0xff,0x80,0xff,0x1,0,0xc0,0xff,0x1f,0,0xfc,0xff,0xff,0x3,0,0xf0,0x3,0,0,0xf0,
0xff,0xff,0x7,0xfc,0xff,0x1,0,0xff,0x7f,0xc0,0xff,0xf,0xf8,0x1,0xff,0x1f,0,0x7e,0,0xff,0x7f,
0xc0,0xf,0,0,0xf0,0x7,0xfc,0x80,0x1f,0xf0,0x7,0xf8,0xff,0x80,0xff,0x7f,0,0xe0,0xff,0xff,0xff,
0x3f,0xe0,0x3,0x10,0,0xf8,0x7f,0,0xff,0x7f,0xc0,0xff,0x3,0,0xfe,0xff,0x3f,0xe0,0xff,0xff,0x3,
0,0xfe,0xff,0x3f,0x80,0xff,0xff,0xf,0xe0,0xff,0,0xfe,0x1,0xfe,0xff,0x1,0xfe,0x1f,0xf0,0xff,0x7,
0,0,0x80,0xf,0xf0,0xff,0x7f,0x80,0x3f,0,0,0xc0,0xff,0x7,0,0xf8,0xff,0x7f,0,0,0xf0,
0x3,0,0,0xf0,0xff,0xff,0x7,0xfc,0x7f,0,0,0xfc,0x7f,0xc0,0xff,0xf,0xf8,0x1,0xff,0x7,0,
0x7c,0,0xff,0x7f,0xc0,0xf,0,0,0xf0,0x7,0xfc,0x80,0x1f,0xf0,0x7,0xf8,0xff,0x80,0xff,0x1f,0,
0x80,0xff,0xff,0xff,0x3f,0xe0,0x3,0,0,0xe0,0xff,0,0xfe,0x7f,0xc0,0xff,0x1,0,0xfc,0xff,0x3f,
0xe0,0xff,0xff,0x1,0,0xf8,0xff,0x3f,0x80,0xff,0xff,0x7,0xe0,0xff,0,0xfe,0x3,0xfc,0xff,0,0xff,
0x1f,0xf0,0xff,0x7,0,0,0x80,0x1f,0xf0,0xff,0x7f,0xc0,0x1f,0,0,0xc0,0xff,0x3,0,0xe0,0xff,
0x3f,0,0,0xf0,0x3,0,0,0xf0,0xff,0xff,0x7,0xfc,0x3f,0,0,0xf8,0x7f,0xc0,0xff,0xf,0xf8,
0x1,0xff,0x3,0,0xf8,0,0xfe,0x7f,0xc0,0xf,0,0,0xf0,0x7,0xfc,0x80,0x1f,0xf0,0x7,0xf0,0xff,
0x80,0xff,0xf,0,0,0xff,0xff,0xff,0x3f,0xe0,0xf,0,0,0xc0,0xff,0,0xfe,0x7f,0xc0,0xff,0,
0,0xf0,0xff,0x3f,0xe0,0xff,0xff,0,0,0xf0,0xff,0x3f,0x80,0xff,0xff,0x7,0xe0,0xff,0,0xfc,0x3,
0xfc,0xff,0,0xff,0x1f,0xf0,0xff,0x7,0,0,0x80,0x1f,0xf0,0xff,0x7f,0xc0,0xf,0,0,0xc0,0xff,
0x1,0,0xc0,0xff,0xf,0,0,0xf0,0x3,0,0,0xf0,0xff,0xff,0x7,0xfc,0xf,0,0,0xf0,0x7f,
0xc0,0xff,0xf,0xf8,0x1,0xff,0x1,0,0xf0,0,0xfe,0x7f,0xc0,0xf,0,0,0xf0,0x7,0x7c,0,0x1f,
0xf0,0x7,0xf0,0xff,0x80,0xff,0x7,0,0,0xfe,0xff,0xff,0x3f,0xe0,0x3f,0,0,0x80,0xff,0x1,0xfc,
0x7f,0xc0,0x7f,0,0,0xf0,0xff,0x3f,0xe0,0xff,0x7f,0,0,0xe0,0xff,0x1f,0,0xff,0xff,0x7,0xc0,
0xff,0,0xfc,0x7,0xf8,0x7f,0x80,0xff,0x1f,0xf0,0xff,0x7,0,0,0x80,0x1f,0xe0,0xff,0x3f,0xc0,0x7,
0,0,0xc0,0xff,0,0,0xc0,0xff,0xf,0,0,0xf0,0x3,0,0,0xf0,0xff,0xff,0x7,0xfc,0x7,
0,0,0xe0,0x7f,0xc0,0xff,0xf,0xf8,0x1,0xff,0x1,0,0xe0,0x1,0xfc,0x7f,0xc0,0xf,0,0,0xf0,
0x7,0x7c,0,0x1f,0xf0,0x7,0xe0,0xff,0x80,0xff,0x3,0,0,0xfc,0xff,0xff,0x3f,0xe0,0x7f,0,0,
0,0xff,0x1,0xfc,0x7f,0xc0,0x3f,0,0,0xe0,0xff,0x3f,0xe0,0xff,0x3f,0,0,0xc0,0xff,0x1f,0,
0xff,0xff,0x7,0xc0,0x7f,0,0xfc,0x7,0xf8,0x7f,0x80,0xff,0x1f,0xf0,0xff,0x7,0,0,0x80,0x3f,0xe0,
0xff,0x3f,0xe0,0x7,0,0,0xc0,0x7f,0,0,0x80,0xff,0x7,0,0,0xf0,0x3,0,0,0xf0,0xff,
0xff,0x7,0xfc,0x3,0,0,0xc0,0x7f,0xc0,0xff,0xf,0xf8,0x1,0xff,0,0,0xe0,0x1,0xfc,0x7f,0xc0,
0xf,0,0,0xf0,0x7,0x7c,0,0x1f,0xf0,0x7,0xe0,0xff,0x80,0xff,0x1,0,0,0xf8,0xff,0xff,0x3f,
0xe0,0x7f,0,0,0,0xfe,0x3,0xf8,0x7f,0xc0,0x1f,0,0,0xc0,0xff,0x3f,0xe0,0xff,0x3f,0,0,
0xc0,0xff,0x1f,0,0xff,0xff,0x7,0xc0,0x7f,0,0xfc,0xf,0xf0,0x3f,0xc0,0xff,0x1f,0xf0,0xff,0x7,0,
0,0x80,0x3f,0xe0,0xff,0x3f,0xe0,0x3,0,0,0xc0,0x7f,0,0x3e,0,0xff,0x3,0,0,0xf0,0x3,
0,0,0xf0,0xff,0xff,0x7,0xfc,0x3,0xc0,0xf,0xc0,0x7f,0xc0,0xff,0xf,0xf8,0x1,0xff,0,0x1f,0xe0,
0x3,0xf8,0x7f,0xc0,0xf,0,0,0xf0,0x7,0x7c,0,0x1f,0xf0,0x7,0xc0,0xff,0x80,0xff,0,0xf8,0x1,
0xf0,0xff,0xff,0x3f,0xe0,0x7f,0,0x7c,0,0xfc,0x3,0xf8,0x7f,0xc0,0x1f,0x80,0xf,0xc0,0xff,0x3f,0xe0,
0xff,0x1f,0x80,0x1f,0x80,0xff,0xf,0,0xff,0xff,0x7,0xc0,0x7f,0,0xfc,0x1f,0xf0,0x3f,0xe0,0xff,0x1f,
0xf0,0xff,0x7,0,0,0x80,0x3f,0xc0,0xff,0x1f,0xe0,0x3,0xf8,0x7f,0xc0,0x3f,0,0xff,0,0xff,0x3,
0xf8,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0x3,0xf0,0x3f,0x80,0x7f,0xc0,0xff,0xf,0xf8,0x1,
0xff,0x80,0x3f,0xc0,0x3,0xf8,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x7c,0,0x1f,0xf0,0x7,0xc0,0xff,0x80,
0xff,0,0xfe,0x7,0xf0,0xff,0xff,0x3f,0xe0,0x3f,0,0xf8,0x1,0xfc,0x7,0xf0,0x7f,0xc0,0x1f,0xe0,0x3f,
0x80,0xff,0x3f,0xe0,0xff,0x1f,0xe0,0x3f,0x80,0xff,0xf,0,0xfe,0xff,0x3,0xc0,0x7f,0,0xf8,0x1f,0xe0,
0x1f,0xe0,0xff,0x1f,0xf0,0xff,0xff,0xff,0x7f,0x80,0x7f,0xc0,0xff,0x1f,0xf0,0x1,0xfe,0x7f,0xc0,0x3f,0x80,
0xff,0x1,0xfe,0x1,0xfe,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0x3,0xf8,0x7f,0x80,0x7f,0xc0,
0xff,0xf,0xf8,0x1,0xff,0x80,0x3f,0xc0,0x7,0xf0,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x7c,0,0x1e,0xf0,
0x7,0x80,0xff,0x80,0x7f,0,0xff,0xf,0xe0,0xff,0xff,0x3f,0xe0,0x1f,0,0xe0,0x3,0xf8,0xf,0xe0,0x7f,
0xc0,0xf,0xf0,0x7f,0x80,0xff,0x3f,0xe0,0xff,0x1f,0xf0,0x7f,0x80,0xff,0xf,0,0xfe,0xff,0x3,0xc0,0x7f,
0,0xf8,0x3f,0xc0,0xf,0xf0,0xff,0x1f,0xf0,0xff,0xff,0xff,0x3f,0xc0,0x7f,0xc0,0xff,0x1f,0xf0,0x1,0xfe,
0x7f,0xc0,0x3f,0xc0,0xff,0x3,0xfe,0x1,0xff,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0x3,0xfc,
0xff,0,0x7f,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0x7f,0xc0,0xf,0xf0,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,
0x3c,0,0x1e,0xf0,0x7,0x80,0xff,0x80,0x7f,0x80,0xff,0x1f,0xe0,0xff,0xff,0x3f,0xe0,0x1f,0,0xc0,0x7,
0xf8,0xf,0xe0,0x7f,0xc0,0xf,0xf8,0xff,0x80,0xff,0x3f,0xe0,0xff,0x1f,0xf0,0xff,0x80,0xff,0xf,0,0xfe,
0xff,0x3,0x80,0x3f,0,0xf8,0x3f,0xc0,0xf,0xf0,0xff,0x1f,0xf0,0xff,0xff,0xff,0x1f,0xc0,0x7f,0,0,
0,0xf0,0x1,0xff,0x7f,0xc0,0x1f,0xe0,0xff,0x3,0xfc,0,0xff,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,
0x7,0xfc,0x3,0xfe,0xff,0x1,0x7f,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0x7f,0xc0,0xf,0xe0,0x7f,0xc0,0xff,
0xff,0x1f,0xf0,0x7,0x3c,0,0x1e,0xf0,0x7,0,0xff,0x80,0x7f,0xc0,0xff,0x3f,0xe0,0xff,0xff,0x3f,0xe0,
0x1f,0x20,0xe0,0xf,0xf0,0x1f,0xc0,0x7f,0xc0,0xf,0xf8,0xff,0x80,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0,
0xff,0x7,0,0xfc,0xff,0x3,0x80,0x3f,0,0xf8,0x7f,0x80,0x7,0xf8,0xff,0x1f,0xf0,0xff,0xff,0xff,0x1f,
0xe0,0xff,0,0,0,0xf8,0x1,0xff,0x7f,0xc0,0x1f,0xe0,0xff,0x7,0xfc,0x80,0xff,0x1f,0xf0,0xff,0xff,
0x1f,0xf0,0xff,0xff,0x7,0xfc,0x3,0xfe,0xff,0x1,0x7e,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0x7f,0xc0,0x1f,
0xe0,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x3c,0,0x1e,0xf0,0x7,0,0xff,0x80,0x3f,0xc0,0xff,0x3f,0xc0,
0xff,0xff,0x3f,0xe0,0xf,0xf0,0xe0,0xf,0xf0,0x1f,0xc0,0x7f,0xc0,0xf,0xf8,0xff,0,0xff,0x3f,0xe0,0xff,
0xf,0xf8,0xff,0x1,0xff,0x7,0x4,0xfc,0xff,0x3,0x80,0x3f,0,0xf8,0x7f,0x80,0x7,0xf8,0xff,0x1f,0xf0,
0xff,0xff,0xff,0xf,0xf0,0xff,0,0,0,0xf8,0x1,0xff,0x7f,0xc0,0x3f,0xe0,0xff,0x7,0xfc,0x80,0xff,
0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0x3,0xfe,0xff,0x3,0x7e,0xc0,0xff,0xf,0xf8,0x1,0x7f,
0xc0,0x7f,0xf8,0x1f,0xc0,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x3c,0x8,0x1e,0xf0,0x7,0,0xfe,0x80,0x3f,
0xe0,0xff,0x7f,0xc0,0xff,0xff,0x3f,0xe0,0xf,0xf0,0xe1,0x1f,0xf0,0x3f,0x80,0x7f,0xc0,0xf,0xf8,0xff,0x1,
0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0xff,0x7,0x4,0xfc,0xff,0x1,0x81,0x3f,0x10,0xf8,0xff,0,0x3,
0xfc,0xff,0x1f,0xf0,0xff,0xff,0xff,0x7,0xf0,0xff,0,0,0,0xf8,0x1,0xff,0x7f,0xc0,0xff,0xf0,0xff,
0x7,0xfc,0x80,0xff,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0x3,0xfe,0xff,0x3,0x7e,0xc0,0xff,
0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0x3f,0xc0,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x3c,0x8,0x1e,0xf0,0x7,
0,0xfe,0x80,0x3f,0xe0,0xff,0x7f,0xc0,0xff,0xff,0x3f,0xe0,0xf,0xf8,0xf7,0x1f,0xf0,0x3f,0x80,0x7f,0xc0,
0xf,0xf8,0xff,0x1,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0xff,0x7,0x4,0xf8,0xff,0x1,0x81,0x3f,0x10,
0xf0,0xff,0,0x3,0xfc,0xff,0x1f,0xf0,0xff,0xff,0xff,0x7,0xf8,0xff,0x1,0,0,0xfc,0x1,0xff,0x7f,
0xc0,0xff,0xf7,0xff,0x7,0x78,0xc0,0xff,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0x3,0xfe,0xff,
0x3,0x7e,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0x3f,0x80,0x3f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x3c,
0x8,0x1c,0xf0,0x7,0,0xfc,0x80,0x3f,0xe0,0xff,0x7f,0xc0,0xff,0xff,0x3f,0xe0,0xf,0xf8,0xff,0x1f,0xf0,
0x7f,0,0x7f,0xc0,0xf,0xf0,0xff,0xff,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0xff,0x3,0xc,0xf8,0xff,
0x1,0x1,0x3f,0x10,0xf0,0xff,0x1,0,0xfe,0xff,0x1f,0xf0,0xff,0xff,0xff,0x3,0xfc,0xff,0x1,0,0,
0xfc,0x1,0xfe,0x7f,0xc0,0xff,0xff,0xff,0xf,0x78,0xc0,0xff,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,
0xfc,0x3,0xfe,0xff,0x3,0x7c,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0x7f,0x80,0x1f,0xc0,0xff,0xff,
0x1f,0xf0,0x7,0x1c,0x8,0x1c,0xf0,0x7,0x4,0xfc,0x80,0x1f,0xf0,0xff,0xff,0x80,0xff,0xff,0x3f,0xe0,0x7,
0xf8,0xff,0x3f,0xe0,0xff,0,0x7f,0xc0,0xf,0xe0,0xff,0xff,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0xff,
0x3,0xe,0xf8,0xff,0x1,0x1,0x1f,0x10,0xf0,0xff,0x3,0,0xff,0xff,0x1f,0xf0,0xff,0xff,0xff,0x1,0xfc,
0xff,0x1,0,0,0xfc,0x3,0xfc,0x7f,0xc0,0xff,0xff,0xff,0xf,0x78,0xc0,0xff,0x1f,0xf0,0xff,0xff,0x1f,
0xf0,0xff,0xff,0x7,0xfc,0x3,0,0xfe,0x7,0x7c,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0x7f,0,
0xf,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x1c,0x8,0x1c,0xf0,0x7,0x4,0xf8,0x80,0x1f,0xf0,0xff,0xff,0x80,0xff,
0x7,0,0xe0,0x7,0xfc,0xff,0x3f,0xe0,0xff,0x1,0x7e,0xc0,0x1f,0x80,0xff,0xff,0xff,0x3f,0xe0,0xff,0xf,
0xf8,0xff,0x1,0xff,0x3,0xe,0xf8,0xff,0x1,0x1,0x1f,0x10,0xf0,0xff,0x3,0,0xff,0xff,0x1f,0xf0,0xff,
0xff,0xff,0x1,0xfe,0xff,0x3,0xfe,0x3,0xfe,0x3,0xf8,0x7f,0xc0,0xff,0xff,0xff,0xf,0x78,0xc0,0xff,0x1f,
0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0x3,0,0xfe,0x7,0x7c,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,
0xff,0xff,0xff,0,0x7,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x1c,0x8,0x1c,0xf0,0x7,0xc,0xf8,0x80,0x1f,0xf0,
0xff,0xff,0x80,0xff,0,0,0xe0,0x7,0xfc,0xff,0x3f,0xe0,0xff,0x1,0x7c,0xc0,0x1f,0,0xfc,0xff,0xff,
0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0xff,0x3,0xe,0xf0,0xff,0x1,0x1,0x1f,0x10,0xf0,0xff,0x7,0x80,0xff,
0xff,0x1f,0xf0,0xff,0xff,0xff,0,0xff,0xff,0x3,0xfe,0x3,0xfe,0x7,0,0,0xc0,0xff,0xff,0xff,0xf,
0x78,0xc0,0xff,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xf,0,0,0xfc,0x3,0,0xfe,0x7,0x7c,0,0,0,
0xf8,0x1,0x7f,0xc0,0xff,0xff,0xff,0,0x6,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x1c,0x1c,0x1c,0xf0,0x7,0xc,
0xf0,0x80,0x1f,0xf0,0xff,0xff,0x80,0x3f,0,0,0xe0,0x7,0xfc,0xff,0x3f,0xe0,0xff,0x7,0,0xc0,0x3f,
0,0xe0,0xff,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0xff,0x1,0x1f,0xf0,0xff,0x80,0x3,0x1f,0x38,0xe0,
0xff,0x7,0x80,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7f,0,0xff,0xff,0x3,0xfe,0x3,0xfe,0x7,0,0,0xc0,
0xff,0xff,0xff,0xf,0x78,0xc0,0xff,0x1f,0xf0,0xf,0,0,0xf0,0xf,0,0,0xfc,0x3,0,0xfe,0x7,
0x7c,0,0,0,0xf8,0x1,0x7f,0xc0,0xff,0xff,0xff,0x1,0x2,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x1c,0x1c,
0x1c,0xf0,0x7,0x1c,0xf0,0x80,0x1f,0xf0,0xff,0xff,0x80,0x1f,0,0,0xe0,0x7,0xfc,0xff,0x3f,0xe0,0xff,
0x1,0,0xc0,0x3f,0,0,0xff,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0xff,0x1,0x1f,0xf0,0xff,0x80,
0x3,0x1f,0x38,0xe0,0xff,0xf,0xc0,0xff,0xff,0xf,0xe0,0xff,0xff,0x7f,0x80,0xff,0xff,0x3,0xfc,0x1,0xfe,
0xf,0,0,0xc0,0xff,0xff,0xff,0xf,0x78,0xc0,0xff,0x1f,0xf0,0xf,0,0,0xf0,0xf,0,0,0xfc,
0x3,0,0xfe,0x7,0x7c,0,0,0,0xf8,0x1,0x7f,0xc0,0xff,0xff,0xff,0x1,0,0xc0,0xff,0xff,0x1f,
0xf0,0x7,0xc,0x1c,0x18,0xf0,0x7,0x1c,0xe0,0x80,0x1f,0xf0,0xff,0xff,0x80,0xf,0,0,0xe0,0x7,0xfc,
0xff,0x3f,0xe0,0x7f,0,0,0xc0,0x7f,0,0,0xfe,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0xff,0x1,
0x1f,0xe0,0xff,0x80,0x3,0x1e,0x38,0xe0,0xff,0xf,0xc0,0xff,0xff,0xf,0xe0,0xff,0xff,0x3f,0xc0,0xff,0xff,
0x7,0xfc,0x1,0xff,0x3f,0,0,0xc0,0xff,0xff,0xff,0xf,0x78,0xc0,0xff,0x1f,0xf0,0xf,0,0,0xf0,
0xf,0,0,0xfc,0x3,0,0xfe,0x7,0x7c,0,0,0,0xf8,0x1,0x7f,0xc0,0xff,0xff,0xff,0x3,0,
0xc0,0xff,0xff,0x1f,0xf0,0x7,0xc,0x1c,0x18,0xf0,0x7,0x3c,0xe0,0x80,0x1f,0xf0,0xff,0xff,0x80,0xf,0,
0,0xe0,0x7,0xfc,0xff,0x3f,0xe0,0x3f,0,0,0xc0,0xff,0,0,0xf8,0xff,0x3f,0xe0,0xff,0xf,0xf8,
0xff,0x1,0xff,0,0x3f,0xe0,0xff,0x80,0x3,0xe,0x38,0xe0,0xff,0x1f,0xe0,0xff,0xff,0x7,0xc0,0xff,0xff,
0x1f,0xc0,0xff,0xff,0x7,0xfc,0x1,0xff,0x3f,0,0,0xc0,0xff,0xff,0xff,0xf,0x78,0xc0,0xff,0x1f,0xf0,
0xf,0,0,0xf0,0xf,0,0,0xfc,0x3,0,0xfe,0x7,0x7c,0,0,0,0xf8,0x1,0x7f,0xc0,0xff,
0xff,0xff,0x3,0,0xc0,0xff,0xff,0x1f,0xf0,0x7,0xc,0x1c,0x18,0xf0,0x7,0x3c,0xc0,0x80,0x1f,0xf0,0xff,
0xff,0x80,0x7,0,0,0xe0,0x7,0xfc,0xff,0x3f,0xe0,0x1f,0,0,0xc0,0xff,0x3,0,0xf0,0xff,0x3f,
0xe0,0xff,0xf,0xf8,0xff,0x1,0xff,0x80,0x3f,0xe0,0xff,0x80,0x3,0xe,0x38,0xe0,0xff,0x1f,0xe0,0xff,0xff,
0x3,0xc0,0xff,0xff,0x1f,0xe0,0xff,0xff,0x7,0xf8,0,0xff,0x1f,0,0,0xc0,0xff,0xff,0xff,0xf,0x78,
0xc0,0xff,0x1f,0xf0,0xf,0,0,0xf0,0xf,0,0,0xfc,0xff,0xff,0xff,0x7,0x7c,0,0,0,0xf8,
0x1,0x7f,0xc0,0xff,0xff,0xff,0x7,0,0xc0,0xff,0xff,0x1f,0xf0,0x7,0xc,0x1c,0x18,0xf0,0x7,0x7c,0xc0,
0x80,0x1f,0xf0,0xff,0xff,0x80,0x7,0xf0,0x3f,0xe0,0x7,0xfc,0xff,0x3f,0xe0,0xf,0,0,0xc0,0xff,0x7,
0,0xe0,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0xff,0x80,0x3f,0xe0,0x7f,0xc0,0x3,0xe,0x78,0xc0,0xff,
0xf,0xc0,0xff,0xff,0x3,0x80,0xff,0xff,0xf,0xf0,0xff,0xff,0xf,0xf8,0x80,0xff,0xf,0,0,0xc0,0xff,
0xff,0xff,0xf,0x78,0xc0,0xff,0x1f,0xf0,0xf,0,0,0xf0,0xf,0,0,0xfc,0xff,0xff,0xff,0x7,0x7c,
0,0,0,0xf8,0x1,0x7f,0xc0,0xff,0xff,0xff,0xf,0x40,0xc0,0xff,0xff,0x1f,0xf0,0x7,0xc,0x3e,0x18,
0xf0,0x7,0x7c,0x80,0x80,0x1f,0xf0,0xff,0xff,0x80,0x7,0xf8,0x3f,0xe0,0x7,0xfc,0xff,0x3f,0xe0,0x7,0,
0,0xc0,0xff,0x3f,0,0xe0,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0xff,0x80,0x7f,0xc0,0x7f,0xc0,0x7,
0xe,0x7c,0xc0,0xff,0xf,0xc0,0xff,0xff,0x1,0,0xff,0xff,0x7,0xf0,0xff,0xff,0xf,0xf8,0x80,0xff,0xf,
0xf0,0x7f,0xc0,0xff,0xff,0xff,0xf,0x78,0xc0,0xff,0x1f,0xf0,0xf,0,0,0xf0,0xff,0xff,0x7,0xfc,0xff,
0xff,0xff,0x7,0x7c,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0xff,0xf,0x40,0xc0,0xff,0xff,0x1f,0xf0,
0x7,0xc,0x3e,0x10,0xf0,0x7,0xfc,0x80,0x80,0x1f,0xf0,0xff,0xff,0x80,0x3,0xfc,0x3f,0xe0,0x7,0xfc,0xff,
0x3f,0xe0,0x7,0xf0,0x7f,0xc0,0xff,0xff,0x1,0xc0,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0x7f,0x80,0x7f,
0xc0,0x7f,0xc0,0x7,0xe,0x7c,0xc0,0xff,0x7,0x80,0xff,0xff,0x1,0,0xff,0xff,0x7,0xf8,0xff,0xff,0xf,
0x70,0x80,0xff,0x7,0xfc,0x7f,0xc0,0xff,0xff,0xff,0xf,0x78,0xc0,0xff,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,
0xff,0x7,0xfc,0xff,0xff,0xff,0x7,0x7c,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0xff,0xf,0x60,0xc0,
0xff,0xff,0x1f,0xf0,0x7,0x4,0x3e,0x10,0xf0,0x7,0xfc,0,0x80,0x1f,0xf0,0xff,0xff,0x80,0x3,0xfe,0x3f,
0xe0,0x7,0xfc,0xff,0x3f,0xe0,0x7,0xfc,0x7f,0xc0,0xff,0xff,0xf,0xc0,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,
0x1,0x7f,0xc0,0x7f,0xc0,0x7f,0xc0,0x7,0x4,0x7c,0xc0,0xff,0x7,0x80,0xff,0xff,0,0x1,0xfe,0xff,0x3,
0xfc,0xff,0xff,0x1f,0x70,0xc0,0xff,0x7,0xfc,0x7f,0xc0,0xff,0xff,0xff,0x7,0x7c,0xc0,0xff,0x1f,0xf0,0xff,
0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0xff,0xff,0xff,0x3,0x7e,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,
0xff,0x7,0x70,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x4,0x3e,0x10,0xf0,0x7,0xfc,0x1,0x80,0x3f,0xe0,0xff,0x7f,
0xc0,0x3,0xfe,0x3f,0xe0,0xf,0xf8,0xff,0x1f,0xf0,0x3,0xfe,0x7f,0xc0,0xff,0xff,0x3f,0x80,0xff,0x3f,0xe0,
0xff,0xf,0xf8,0xff,0x1,0x7f,0xc0,0x7f,0x80,0x7f,0xc0,0x7,0x4,0x7c,0xc0,0xff,0x3,0,0xff,0xff,0,
0x1,0xfe,0xff,0x1,0xfc,0xff,0xff,0x1f,0x70,0xc0,0xff,0x3,0xfe,0x7f,0xc0,0xff,0xff,0xff,0x7,0xfc,0x80,
0xff,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0xff,0xff,0xff,0x3,0x7e,0xc0,0xff,0xf,0xf8,0x1,
0x7f,0xc0,0xff,0xff,0xff,0x3,0x78,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x4,0x3e,0x10,0xf0,0x7,0xfc,0x1,0x80,
0x3f,0xe0,0xff,0x7f,0xc0,0x3,0xfe,0x3f,0xe0,0xf,0xf8,0xff,0x1f,0xf0,0x3,0xfe,0x7f,0xc0,0xff,0xff,0x7f,
0x80,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0x7f,0xc0,0xff,0x80,0x3f,0xc0,0x7,0x4,0x7c,0xc0,0xff,0x1,
0,0xfe,0x7f,0x80,0x3,0xfc,0xff,0x1,0xfe,0xff,0xff,0x1f,0x20,0xc0,0xff,0x3,0xfe,0x7f,0xc0,0xff,0xf3,
0xff,0x7,0xfc,0x80,0xff,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0x3f,0xfc,0xff,0x3,0x7e,0xc0,
0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0xff,0x3,0x7c,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x4,0x3f,0x10,0xf0,
0x7,0xfc,0x3,0x80,0x3f,0xe0,0xff,0x7f,0xc0,0x3,0xfe,0x3f,0xe0,0xf,0xf8,0xff,0x1f,0xf0,0x3,0xfe,0x7f,
0xc0,0xff,0xff,0xff,0x80,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0x3f,0xc0,0xff,0x80,0x3f,0xe0,0x7,0x4,
0xfe,0x80,0xff,0x1,0,0xfe,0x7f,0xc0,0x7,0xfc,0xff,0,0xff,0xff,0xff,0x3f,0x20,0xe0,0xff,0x3,0xfe,
0x7f,0xc0,0x7f,0xf0,0xff,0x7,0xfc,0x80,0xff,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0x7,0xfc,
0xff,0x1,0x7e,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0xff,0x1,0x7c,0xc0,0xff,0xff,0x1f,0xf0,0x7,
0x4,0x7f,0x10,0xf0,0x7,0xfc,0x3,0x80,0x3f,0xc0,0xff,0x3f,0xc0,0x3,0xfe,0x3f,0xe0,0xf,0xf0,0xff,0xf,
0xf0,0x3,0xfe,0x7f,0xc0,0xf,0xf8,0xff,0x80,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0x3f,0xe0,0xff,0,
0x3f,0xe0,0xf,0x4,0xfe,0x80,0xff,0,0x3,0xfc,0x3f,0xc0,0x7,0xf8,0x7f,0,0xff,0xff,0xff,0x3f,0x20,
0xe0,0xff,0x3,0xfe,0x7f,0xc0,0x1f,0xe0,0xff,0x3,0xfe,0,0xff,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,
0x7,0xfc,0x7,0xf8,0xff,0x1,0x7f,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0xff,0,0x7e,0xc0,0xff,
0xff,0x1f,0xf0,0x7,0,0x7f,0,0xf0,0x7,0xfc,0x7,0x80,0x7f,0xc0,0xff,0x3f,0xe0,0x3,0xfe,0x3f,0xe0,
0x1f,0xf0,0xff,0xf,0xf8,0x3,0xfe,0x7f,0xc0,0xf,0xf8,0xff,0x80,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,
0x3f,0xe0,0xff,0x1,0x3f,0xe0,0xf,0x4,0xfe,0x80,0xff,0,0x3,0xfc,0x3f,0xe0,0xf,0xf8,0x7f,0x80,0xff,
0xff,0xff,0x3f,0,0xe0,0xff,0x3,0xfe,0x7f,0xc0,0x1f,0xe0,0xff,0x3,0xfe,0x1,0xfe,0x1f,0xf0,0xff,0xff,
0x1f,0xf0,0xff,0xff,0x7,0xfc,0xf,0xf8,0xff,0,0x7f,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0x7f,
0,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0,0x7f,0,0xf0,0x7,0xfc,0x7,0x80,0x7f,0x80,0xff,0x1f,0xe0,
0x3,0xfc,0x3f,0xe0,0x1f,0xe0,0xff,0x7,0xf8,0x3,0xfe,0x7f,0xc0,0xf,0xf0,0xff,0x80,0xff,0x3f,0xe0,0xff,
0xf,0xf8,0xff,0x1,0x3f,0xe0,0xff,0x1,0x3f,0xe0,0xf,0,0xfe,0x80,0x7f,0x80,0x7,0xf8,0x1f,0xe0,0xf,
0xf0,0x3f,0xc0,0xff,0xff,0xff,0x7f,0,0xf0,0xff,0x3,0xfc,0x7f,0xc0,0x3f,0xc0,0xff,0x1,0xfe,0x1,0xfc,
0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0xf,0xf0,0x7f,0,0x7f,0xc0,0xff,0xf,0xf8,0x1,0x7f,
0xc0,0xff,0xff,0x3f,0x80,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0,0x7f,0,0xf0,0x7,0xfc,0xf,0x80,0x7f,
0,0xff,0xf,0xe0,0x3,0xf8,0x3f,0xe0,0x1f,0xc0,0xff,0x3,0xf8,0x3,0xfc,0x7f,0xc0,0xf,0xf0,0x7f,0x80,
0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0x1f,0xf0,0xff,0x1,0x3f,0xe0,0xf,0,0xfe,0x80,0x7f,0x80,0x7,
0xf8,0x1f,0xf0,0x1f,0xf0,0x1f,0xc0,0xff,0xff,0xff,0x7f,0,0xf0,0xff,0x3,0xf8,0x7f,0xc0,0x3f,0x80,0xff,
0,0xff,0x3,0xf0,0x1f,0xf0,0xff,0xff,0x1f,0xf0,0xff,0xff,0x7,0xfc,0xf,0xe0,0x3f,0x80,0x7f,0xc0,0xff,
0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0x3f,0xc0,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0,0x7f,0,0xf0,0x7,
0xfc,0xf,0x80,0xff,0,0xfe,0x7,0xf0,0x7,0xf0,0x3f,0xe0,0x3f,0x80,0xff,0x1,0xfc,0x3,0xf8,0x7f,0xc0,
0x1f,0xe0,0x7f,0x80,0xff,0x3f,0xe0,0xff,0xf,0xf8,0xff,0x1,0x1f,0xf0,0xff,0x3,0x1e,0xf0,0xf,0,0xfe,
0x1,0x3f,0xc0,0xf,0xf0,0xf,0xf0,0x1f,0xe0,0x1f,0xe0,0xff,0xff,0xff,0x7f,0,0xf0,0xff,0x7,0,0,
0xc0,0x7f,0,0x3e,0,0xff,0x3,0,0,0xf0,0x7,0,0,0xf0,0x3,0,0,0xfc,0x1f,0x80,0xf,
0xc0,0x7f,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0x1f,0xe0,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x80,
0xff,0,0xf0,0x7,0xfc,0x1f,0x80,0xff,0,0xf8,0x1,0xf0,0x7,0,0,0xe0,0x3f,0,0x7e,0,0xfc,
0x7,0,0,0xc0,0x1f,0x80,0x1f,0xc0,0xf,0,0,0x80,0xf,0xf8,0xff,0x1,0x1f,0xf0,0xff,0x3,0x1e,
0xf0,0xf,0,0xff,0x1,0x3f,0xe0,0x1f,0xf0,0x7,0xf8,0x3f,0xe0,0xf,0,0,0xe0,0xff,0xff,0,0xf8,
0xff,0x7,0,0,0xc0,0x7f,0,0,0x80,0xff,0x7,0,0,0xf0,0x7,0,0,0xf0,0x3,0,0,
0xfc,0x1f,0,0,0xc0,0x7f,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0xf,0xe0,0x7f,0xc0,0xff,0xff,
0x1f,0xf0,0x7,0x80,0xff,0,0xf0,0x7,0xfc,0x1f,0x80,0xff,0x1,0,0,0xf8,0xf,0,0,0xe0,0x7f,
0,0,0,0xfe,0x7,0,0,0xc0,0x1f,0,0,0xc0,0xf,0,0,0x80,0xf,0xf8,0xff,0x1,0xf,
0xf0,0xff,0x3,0x1e,0xf0,0x1f,0,0xff,0x1,0x1f,0xe0,0x1f,0xe0,0x7,0xf8,0x3f,0xc0,0xf,0,0,0xe0,
0xff,0xff,0,0xf8,0xff,0xf,0,0,0xc0,0xff,0,0,0xc0,0xff,0xf,0,0,0xf0,0x7,0,0,
0xf0,0x3,0,0,0xfc,0x3f,0,0,0xe0,0x7f,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0x7,0xf0,
0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x80,0xff,0,0xf0,0x7,0xfc,0x3f,0x80,0xff,0x3,0,0,0xfc,0xf,
0,0,0xe0,0xff,0,0,0,0xff,0xf,0,0,0xc0,0x3f,0,0,0xe0,0xf,0,0,0x80,0xf,
0xf8,0xff,0x1,0xf,0xf8,0xff,0x3,0x1c,0xf0,0x1f,0,0xff,0x1,0xf,0xf0,0x3f,0xc0,0x3,0xfc,0x7f,0x80,
0xf,0,0,0xe0,0xff,0xff,0,0xf8,0xff,0xf,0,0,0xc0,0xff,0,0,0xe0,0xff,0x1f,0,0,
0xf0,0x7,0,0,0xf0,0x3,0,0,0xfc,0x7f,0,0,0xf0,0x7f,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,
0xff,0xff,0x3,0xf8,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x80,0xff,0,0xf0,0x7,0xfc,0x3f,0x80,0xff,0x7,
0,0,0xfe,0x1f,0,0,0xe0,0xff,0x1,0,0x80,0xff,0xf,0,0,0xc0,0x7f,0,0,0xe0,0xf,
0,0,0x80,0xf,0xf8,0xff,0x1,0xf,0xf8,0xff,0x7,0x1c,0xf0,0x1f,0,0xff,0x1,0xf,0xf0,0x3f,0xc0,
0x3,0xfc,0x7f,0x80,0xf,0,0,0xe0,0xff,0xff,0,0xf8,0xff,0x1f,0,0,0xc0,0xff,0x1,0,0xf0,
0xff,0x3f,0,0,0xf0,0x7,0,0,0xf0,0x3,0,0,0xfc,0x7f,0,0,0xf8,0x7f,0xc0,0xff,0xf,
0xf8,0x1,0x7f,0xc0,0xff,0xff,0x3,0xfc,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0x80,0xff,0,0xf0,0x7,0xfc,
0x3f,0x80,0xff,0xf,0,0,0xff,0x3f,0,0,0xe0,0xff,0x3,0,0xc0,0xff,0x1f,0,0,0xc0,0xff,
0,0,0xf0,0xf,0,0,0x80,0xf,0xf8,0xff,0x1,0xf,0xf8,0xff,0x7,0xc,0xf0,0x1f,0,0xff,0x1,
0x6,0xf8,0x7f,0x80,0x1,0xfe,0xff,0,0xf,0,0,0xe0,0xff,0xff,0x1,0xfc,0xff,0x7f,0,0,0xc0,
0xff,0x7,0,0xf8,0xff,0x7f,0,0,0xf0,0x7,0,0,0xf0,0x3,0,0,0xfc,0xff,0x1,0,0xfc,
0x7f,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0x1,0xfe,0x7f,0xc0,0xff,0xff,0x1f,0xf0,0x7,0xc0,0xff,
0,0xf0,0x7,0xfc,0x7f,0x80,0xff,0x1f,0,0x80,0xff,0x7f,0,0,0xe0,0xff,0x7,0,0xe0,0xff,0x7f,
0,0,0xc0,0xff,0x1,0,0xf8,0xf,0,0,0x80,0xf,0xf8,0xff,0x1,0x7,0xf8,0xff,0x7,0x8,0xf8,
0x1f,0,0xff,0x3,0x6,0xf8,0x7f,0x80,0x1,0xfe,0xff,0,0xf,0,0,0xe0,0xff,0xff,0x1,0xfc,0xff,
0xff,0x1,0,0xc0,0xff,0xf,0,0xfc,0xff,0xff,0x3,0,0xf0,0x7,0,0,0xf0,0x3,0,0,0xfc,
0xff,0x3,0,0xff,0x7f,0xc0,0xff,0xf,0xf8,0x1,0x7f,0xc0,0xff,0xff,0,0xfe,0x7f,0xc0,0xff,0xff,0x1f,
0xf0,0x7,0xc0,0xff,0x1,0xf0,0x7,0xfc,0x7f,0x80,0xff,0x7f,0,0xe0,0xff,0xff,0x3,0,0xe0,0xff,0x1f,
0,0xf8,0xff,0xff,0x1,0,0xc0,0xff,0x3,0,0xfe,0xf,0,0,0x80,0xf,0xf8,0xff,0x1,0x7,0xfc,
0xff,0xf,0x8,0xf8,0x3f,0x80,0xff,0x3,0x2,0xfc,0xff,0,0,0xff,0xff,0x1,0xe,0,0,0xe0,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x1f,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3,0xfc,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff };
//BmpW=872,BmpH=48
//TempArraySize = (BmpW * BmpH) / 8 = 5232
//FinalArraySize + {filler, if Size is not divisible by 4} = 5232

const int upperBaseX[] = {
	0, 40, 73, 109,144,176,204,243,278,291,
	//  A,  B,  C,  D,  E,  F,  G,  H,  I,  J,
	319, 355,385,424,458,498,529,569,598,633,
	//  K,  L,  M,  N,  O,  P,  Q,  R,  S,   T,
	665, 677,731,778,808,839, 872
	//   U,  V,  W,  X,  Y,   Z
};

unsigned char* NormalPrint(unsigned char *img, int w, int h,int xbegin);
unsigned char* TiltedPrint(unsigned char *img, int w, int h, int xbegin);

int main()
{
	FILE *f;
	int w = 52;
	int h = 52;
	
	int filesize = 54 + 3 * w * h;  //w is your image width, h is image height, both int
	

	/*for (int i = 0; i<w; i++)
	{
		for (int j = 0; j<h; j++)
		{
			int x = i; int y = (h - 1) - j;
			int r = red[i][j] * 255;
			int g = green[i][j] * 255;
			int b = blue[i][j] * 255;
			if (r > 255) r = 255;
			if (g > 255) g = 255;
			if (b > 255) b = 255;
			img[(x + y*w) * 3 + 2] = (unsigned char)(r);
			img[(x + y*w) * 3 + 1] = (unsigned char)(g);
			img[(x + y*w) * 3 + 0] = (unsigned char)(b);
		}
	}*/
	//to get binary from hex
	/*for (int i = 0; i < 8; ++i) {
		send((mychar >> i) & 1);
	}*/
	unsigned char *img = NULL;
	img = TiltedPrint(img, w, h, upperBaseX[1]);

	unsigned char bmpfileheader[14] = { 'B','M', 0,0,0,0, 0,0, 0,0, 54,0,0,0 };
	unsigned char bmpinfoheader[40] = { 40,0,0,0, 0,0,0,0, 0,0,0,0, 1,0, 24,0 };
	unsigned char bmppad[3] = { 0,0,0 };

	bmpfileheader[2] = (unsigned char)(filesize);
	bmpfileheader[3] = (unsigned char)(filesize >> 8);
	bmpfileheader[4] = (unsigned char)(filesize >> 16);
	bmpfileheader[5] = (unsigned char)(filesize >> 24);

	bmpinfoheader[4] = (unsigned char)(w);
	bmpinfoheader[5] = (unsigned char)(w >> 8);
	bmpinfoheader[6] = (unsigned char)(w >> 16);
	bmpinfoheader[7] = (unsigned char)(w >> 24);
	bmpinfoheader[8] = (unsigned char)(h);
	bmpinfoheader[9] = (unsigned char)(h >> 8);
	bmpinfoheader[10] = (unsigned char)(h >> 16);
	bmpinfoheader[11] = (unsigned char)(h >> 24);

	fopen_s(&f, "img.bmp", "w");
	fwrite(bmpfileheader, 1, 14, f);
	fwrite(bmpinfoheader, 1, 40, f);
	for (int i = 0; i<h; i++)
	{
		fwrite(img + (w*(h - i - 1) * 3), 3, w, f);
		fwrite(bmppad, 1, (4 - (w * 3) % 4) % 4, f);
	}
	fclose(f);


    return 0;
}

unsigned char* NormalPrint(unsigned char *img, int w, int h, int xbegin)
{
	
	if (img)
		free(img);
	img = (unsigned char *)malloc(3 * w * h);
	memset(img, 0, sizeof(img));
	unsigned char bl = 0x00;
	unsigned char wh = 0xff;

	int nextline = 0;
	for (int i = 0; i<w; i++)//w
	{

		for (int j = 0; j<h; j++)//h
		{
			int x = i; int y = (h - 1) - j;

			//look up algo
			int bmp_byte = bmp_lut[j / 8 + nextline + xbegin/8];
			int p = (bmp_byte >> (j % 8)) & 1;

			int pixel;
			if (p == 0)
			{
				pixel = bl;
			}
			else
			{
				pixel = wh;
			}

			img[(x + y*w) * 3 + 2] = pixel;
			img[(x + y*w) * 3 + 1] = pixel;
			img[(x + y*w) * 3 + 0] = pixel;
		}
		nextline += 109;//872 pixel width / 8 bits = 109 bytes for total 26 letters A-Z widths
	}
	return img;
}

unsigned char* TiltedPrint(unsigned char *img, int w, int h, int xbegin)
{

	if (img)
		free(img);
	img = (unsigned char *)malloc(3 * w * h);
	memset(img, 0, sizeof(img));
	unsigned char bl = 0x00;
	unsigned char wh = 0xff;

	int nextline = 109;//872 pixel width / 8 bits = 109 bytes for total 26 letters A-Z widths
	for (int i = 0; i<w; i++)//w
	{
		
		for (int j = 0; j<h; j++)//h
		{			
			int x = i; int y = (h - 1) - j;

			//look up algo
			//int bmp_byte = bmp_lut[j * nextline + i/8 + xbegin/8];
			//int p = (bmp_byte >> (i % 8)) & 1;

			int bmp_byte = bmp_lut[(h-j) * nextline + i / 8 + xbegin / 8];
			int p = (bmp_byte >> (i % 8)) & 1;


			int pixel;
			if (p == 0)
			{
				pixel = bl;
			}
			else
			{
				pixel = wh;
			}

			img[(x + y*w) * 3 + 2] = pixel;
			img[(x + y*w) * 3 + 1] = pixel;
			img[(x + y*w) * 3 + 0] = pixel;

		}
		
	}
	return img;
}
