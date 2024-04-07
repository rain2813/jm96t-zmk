/*
 *
 * Copyright (c) 2021 Darryl deHaan
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_ZENLOGO
#define LV_ATTRIBUTE_IMG_ZENLOGO
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_ZENLOGO uint8_t
    zenlogo_map[] = {
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0xe3, 0xe3, 0x9e,
        0x3e, 0x02, 0x72, 0xe0, 0x00, 0x00, 0x06, 0x36, 0x36, 0x33, 0x63, 0x02, 0x8b, 0x10, 0x00,
        0x00, 0x04, 0x14, 0x14, 0x21, 0x41, 0x02, 0x82, 0x10, 0x00, 0x00, 0x04, 0x04, 0x14, 0x21,
        0x7f, 0x7a, 0x72, 0x10, 0x00, 0x00, 0x04, 0x04, 0x14, 0x21, 0x40, 0x02, 0x0a, 0x10, 0x00,
        0x00, 0x04, 0x14, 0x14, 0x21, 0x41, 0x02, 0x0a, 0x10, 0x00, 0x00, 0x06, 0x36, 0x34, 0x21,
        0x63, 0x02, 0x8a, 0x10, 0x00, 0x00, 0x03, 0xe3, 0xe4, 0x21, 0x3e, 0x02, 0x72, 0x10, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x03, 0xfc,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xf1,
        0xf8, 0x00, 0x60, 0x0f, 0xc0, 0x00, 0x00, 0x0f, 0xff, 0xfb, 0xff, 0xe0, 0xf8, 0x1f, 0x80,
        0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xfc, 0x1f, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xc1, 0xfc, 0x1f, 0x00, 0x7f, 0xc0, 0x1f, 0xff, 0xff, 0xe0, 0x01, 0xfc, 0x3e, 0x00,
        0x40, 0x1f, 0xff, 0xe0, 0xff, 0xc0, 0x07, 0xfc, 0xfc, 0x00, 0xdf, 0xff, 0x80, 0x01, 0xff,
        0xc0, 0x0f, 0xdc, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x8f, 0x1f, 0x9f, 0xf8, 0x00,
        0x00, 0x00, 0x00, 0x1f, 0xef, 0xff, 0x1f, 0x9f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x8f,
        0xff, 0x3f, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x1f, 0xfe, 0x3f, 0x0f, 0xf0, 0x00,
        0x00, 0x00, 0x03, 0xf8, 0x1f, 0x80, 0x7e, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x3e,
        0x00, 0x7e, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x3c, 0x00, 0x7e, 0x0f, 0xc0, 0x00,
        0x00, 0x00, 0x1f, 0xf8, 0x3c, 0x00, 0x78, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xbc,
        0x00, 0x78, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xfc, 0x00, 0xf8, 0x0f, 0xc0, 0x00,
        0x00, 0x00, 0x1f, 0xff, 0xfc, 0x0f, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff,
        0xff, 0xf8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x0f, 0xff, 0xa0, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00,
};

const lv_img_dsc_t zenlogo = {
    .header.always_zero = 0,
    .header.w = 80,
    .header.h = 38,
    .data_size = 388,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = zenlogo_map,
};
