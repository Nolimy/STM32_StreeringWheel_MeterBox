/*******************************************************************************
 * Size: 35 px
 * Bpp: 1
 * Opts: --bpp 1 --size 35 --font C:\Users\zhaip\Documents\SquareLine\assets\big-numbers.ttf -o C:\Users\zhaip\Documents\SquareLine\assets\ui_font_bigNumber40.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_BIGNUMBER40
#define UI_FONT_BIGNUMBER40 1
#endif

#if UI_FONT_BIGNUMBER40

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0030 "0" */
    0x7f, 0xff, 0xd7, 0xff, 0xfb, 0x7f, 0xfd, 0xf7,
    0xff, 0x7f, 0x7f, 0xdf, 0xf0, 0x7, 0xfe, 0x0,
    0xff, 0xc0, 0x1f, 0xf8, 0x3, 0xff, 0x0, 0x7f,
    0xe0, 0xf, 0xfc, 0x1, 0xff, 0x80, 0x3f, 0xf0,
    0x7, 0xfe, 0x0, 0xfb, 0x80, 0xe, 0x20, 0x0,
    0x80, 0x0, 0x0, 0x80, 0x2, 0x38, 0x0, 0xef,
    0x80, 0x3f, 0xf0, 0x7, 0xfe, 0x0, 0xff, 0xc0,
    0x1f, 0xf8, 0x3, 0xff, 0x0, 0x7f, 0xe0, 0xf,
    0xfc, 0x1, 0xff, 0x80, 0x3f, 0xf0, 0x7, 0xfd,
    0xff, 0x7f, 0x7f, 0xf7, 0xdf, 0xff, 0x77, 0xff,
    0xf9, 0xff, 0xff, 0x0,

    /* U+0031 "1" */
    0x8, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xee, 0x20, 0x8, 0xef, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xef, 0x38, 0xc2,

    /* U+0032 "2" */
    0x7f, 0xff, 0xc7, 0xff, 0xf8, 0x7f, 0xfd, 0x87,
    0xff, 0x70, 0x7f, 0xde, 0x0, 0x7, 0xc0, 0x0,
    0xf8, 0x0, 0x1f, 0x0, 0x3, 0xe0, 0x0, 0x7c,
    0x0, 0xf, 0x80, 0x1, 0xf0, 0x0, 0x3e, 0x0,
    0x7, 0xc0, 0x0, 0xf8, 0x3f, 0xee, 0xf, 0xfe,
    0x83, 0xff, 0xe0, 0xbf, 0xf8, 0x3b, 0xfe, 0xf,
    0x80, 0x1, 0xf0, 0x0, 0x3e, 0x0, 0x7, 0xc0,
    0x0, 0xf8, 0x0, 0x1f, 0x0, 0x3, 0xe0, 0x0,
    0x7c, 0x0, 0xf, 0x80, 0x1, 0xf0, 0x0, 0x3d,
    0xff, 0x7, 0x7f, 0xf0, 0xdf, 0xff, 0x17, 0xff,
    0xf1, 0xff, 0xff, 0x0,

    /* U+0033 "3" */
    0xff, 0xff, 0x3f, 0xff, 0x4f, 0xff, 0x63, 0xff,
    0x70, 0xff, 0x78, 0x0, 0x7c, 0x0, 0x3e, 0x0,
    0x1f, 0x0, 0xf, 0x80, 0x7, 0xc0, 0x3, 0xe0,
    0x1, 0xf0, 0x0, 0xf8, 0x0, 0x7c, 0x0, 0x3e,
    0x1f, 0xee, 0x1f, 0xfa, 0x1f, 0xfe, 0x7, 0xfe,
    0x81, 0xfe, 0xe0, 0x0, 0xf8, 0x0, 0x7c, 0x0,
    0x3e, 0x0, 0x1f, 0x0, 0xf, 0x80, 0x7, 0xc0,
    0x3, 0xe0, 0x1, 0xf0, 0x0, 0xf8, 0x0, 0x7c,
    0x3f, 0xde, 0x3f, 0xf7, 0x3f, 0xfd, 0xbf, 0xff,
    0x7f, 0xff, 0xc0,

    /* U+0034 "4" */
    0x80, 0x0, 0x38, 0x0, 0xf, 0x80, 0x3, 0xf8,
    0x0, 0xff, 0x80, 0x3f, 0xf0, 0x7, 0xfe, 0x0,
    0xff, 0xc0, 0x1f, 0xf8, 0x3, 0xff, 0x0, 0x7f,
    0xe0, 0xf, 0xfc, 0x1, 0xff, 0x80, 0x3f, 0xf0,
    0x7, 0xfe, 0x0, 0xfb, 0xbf, 0xee, 0x2f, 0xfe,
    0x83, 0xff, 0xe0, 0x3f, 0xfa, 0x3, 0xfe, 0xe0,
    0x0, 0x3e, 0x0, 0x7, 0xc0, 0x0, 0xf8, 0x0,
    0x1f, 0x0, 0x3, 0xe0, 0x0, 0x7c, 0x0, 0xf,
    0x80, 0x1, 0xf0, 0x0, 0x3e, 0x0, 0x7, 0xc0,
    0x0, 0xf8, 0x0, 0xf, 0x0, 0x0, 0xe0, 0x0,
    0xc, 0x0, 0x0, 0x80,

    /* U+0035 "5" */
    0x7f, 0xff, 0xd7, 0xff, 0xf3, 0x7f, 0xfc, 0x77,
    0xff, 0xf, 0x7f, 0xc1, 0xf0, 0x0, 0x3e, 0x0,
    0x7, 0xc0, 0x0, 0xf8, 0x0, 0x1f, 0x0, 0x3,
    0xe0, 0x0, 0x7c, 0x0, 0xf, 0x80, 0x1, 0xf0,
    0x0, 0x3e, 0x0, 0x3, 0xbf, 0xe0, 0x2f, 0xfe,
    0x3, 0xff, 0xe0, 0x3f, 0xfa, 0x3, 0xfe, 0xe0,
    0x0, 0x3e, 0x0, 0x7, 0xc0, 0x0, 0xf8, 0x0,
    0x1f, 0x0, 0x3, 0xe0, 0x0, 0x7c, 0x0, 0xf,
    0x80, 0x1, 0xf0, 0x0, 0x3e, 0x0, 0x7, 0xc1,
    0xff, 0x78, 0x7f, 0xf7, 0x1f, 0xff, 0x67, 0xff,
    0xf9, 0xff, 0xff, 0x0,

    /* U+0036 "6" */
    0x7f, 0xff, 0xd7, 0xff, 0xf3, 0x7f, 0xfc, 0x77,
    0xff, 0xf, 0x7f, 0xc1, 0xf0, 0x0, 0x3e, 0x0,
    0x7, 0xc0, 0x0, 0xf8, 0x0, 0x1f, 0x0, 0x3,
    0xe0, 0x0, 0x7c, 0x0, 0xf, 0x80, 0x1, 0xf0,
    0x0, 0x3e, 0x0, 0x3, 0xbf, 0xe0, 0x2f, 0xfe,
    0x3, 0xff, 0xe0, 0xbf, 0xfa, 0x3b, 0xfe, 0xef,
    0x80, 0x3f, 0xf0, 0x7, 0xfe, 0x0, 0xff, 0xc0,
    0x1f, 0xf8, 0x3, 0xff, 0x0, 0x7f, 0xe0, 0xf,
    0xfc, 0x1, 0xff, 0x80, 0x3f, 0xf0, 0x7, 0xfd,
    0xff, 0x7f, 0x7f, 0xf7, 0xdf, 0xff, 0x77, 0xff,
    0xf9, 0xff, 0xff, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0x3f, 0xff, 0x4f, 0xff, 0x63, 0xff,
    0x70, 0xff, 0x78, 0x0, 0x7c, 0x0, 0x3e, 0x0,
    0x1f, 0x0, 0xf, 0x80, 0x7, 0xc0, 0x3, 0xe0,
    0x1, 0xf0, 0x0, 0xf8, 0x0, 0x7c, 0x0, 0x3e,
    0x0, 0xf, 0x0, 0x3, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x60, 0x0, 0x78, 0x0, 0x7c, 0x0,
    0x3e, 0x0, 0x1f, 0x0, 0xf, 0x80, 0x7, 0xc0,
    0x3, 0xe0, 0x1, 0xf0, 0x0, 0xf8, 0x0, 0x7c,
    0x0, 0x3e, 0x0, 0xf, 0x0, 0x3, 0x80, 0x0,
    0xc0, 0x0, 0x20,

    /* U+0038 "8" */
    0x7f, 0xff, 0xd7, 0xff, 0xfb, 0x7f, 0xfd, 0xf7,
    0xff, 0x7f, 0x7f, 0xdf, 0xf0, 0x7, 0xfe, 0x0,
    0xff, 0xc0, 0x1f, 0xf8, 0x3, 0xff, 0x0, 0x7f,
    0xe0, 0xf, 0xfc, 0x1, 0xff, 0x80, 0x3f, 0xf0,
    0x7, 0xfe, 0x0, 0xfb, 0xbf, 0xee, 0x2f, 0xfe,
    0x83, 0xff, 0xe0, 0xbf, 0xfa, 0x3b, 0xfe, 0xef,
    0x80, 0x3f, 0xf0, 0x7, 0xfe, 0x0, 0xff, 0xc0,
    0x1f, 0xf8, 0x3, 0xff, 0x0, 0x7f, 0xe0, 0xf,
    0xfc, 0x1, 0xff, 0x80, 0x3f, 0xf0, 0x7, 0xfd,
    0xff, 0x7f, 0x7f, 0xf7, 0xdf, 0xff, 0x77, 0xff,
    0xf9, 0xff, 0xff, 0x0,

    /* U+0039 "9" */
    0x7f, 0xff, 0xd7, 0xff, 0xfb, 0x7f, 0xfd, 0xf7,
    0xff, 0x7f, 0x7f, 0xdf, 0xf0, 0x7, 0xfe, 0x0,
    0xff, 0xc0, 0x1f, 0xf8, 0x3, 0xff, 0x0, 0x7f,
    0xe0, 0xf, 0xfc, 0x1, 0xff, 0x80, 0x3f, 0xf0,
    0x7, 0xfe, 0x0, 0xfb, 0xbf, 0xee, 0x2f, 0xfe,
    0x83, 0xff, 0xe0, 0x3f, 0xfa, 0x3, 0xfe, 0xe0,
    0x0, 0x3e, 0x0, 0x7, 0xc0, 0x0, 0xf8, 0x0,
    0x1f, 0x0, 0x3, 0xe0, 0x0, 0x7c, 0x0, 0xf,
    0x80, 0x1, 0xf0, 0x0, 0x3e, 0x0, 0x7, 0xc1,
    0xff, 0x78, 0x7f, 0xf7, 0x1f, 0xff, 0x67, 0xff,
    0xf9, 0xff, 0xff, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 560, .box_w = 19, .box_h = 35, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 560, .box_w = 5, .box_h = 35, .ofs_x = 15, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 560, .box_w = 19, .box_h = 35, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 560, .box_w = 17, .box_h = 35, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 560, .box_w = 19, .box_h = 35, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 560, .box_w = 19, .box_h = 35, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 560, .box_w = 19, .box_h = 35, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 560, .box_w = 17, .box_h = 35, .ofs_x = 9, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 560, .box_w = 19, .box_h = 35, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 560, .box_w = 19, .box_h = 35, .ofs_x = 8, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_bigNumber40 = {
#else
lv_font_t ui_font_bigNumber40 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 35,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_BIGNUMBER40*/

