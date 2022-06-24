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

#ifndef LV_ATTRIBUTE_IMG_LAYERS2
#define LV_ATTRIBUTE_IMG_LAYERS2
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_LAYERS2 uint8_t layers2_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 0*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x30, 0x0f, 0x18, 0xdf, 0xdf, 0xc0, 0x04, 0x00, 
  0x00, 0x80, 0x30, 0x19, 0x98, 0xd8, 0x18, 0xe0, 0x0e, 0x00, 
  0x00, 0x80, 0x30, 0x30, 0xd8, 0xd8, 0x18, 0xe0, 0x1f, 0x00, 
  0x00, 0x80, 0x30, 0x30, 0xcf, 0x9f, 0xd9, 0xc0, 0x04, 0x00, 
  0x00, 0x80, 0x30, 0x3f, 0xc7, 0x18, 0x1f, 0x80, 0x04, 0x00, 
  0x03, 0xe0, 0x30, 0x39, 0xc6, 0x18, 0x1b, 0x80, 0x04, 0x00, 
  0x01, 0xc0, 0x3f, 0xb0, 0xc6, 0x1f, 0xd9, 0xc0, 0x04, 0x00, 
  0x00, 0x80, 0x3f, 0xb0, 0xc6, 0x1f, 0xd8, 0xe0, 0x04, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t layers2 = {
  .header.always_zero = 0,
  .header.w = 78,
  .header.h = 12,
  .data_size = 128,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = layers2_map,
};

