// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

void ui_event_Screen1(lv_event_t * e);
extern lv_obj_t * ui_Screen1;
void ui_event_Screen1_Bar1(lv_event_t * e);
extern lv_obj_t * ui_Screen1_Bar1;
extern lv_obj_t * ui_Screen1_Image1;
extern lv_obj_t * ui_Screen2;
extern lv_obj_t * ui_Screen2_Label3;
extern lv_obj_t * ui_speedMeter;
extern lv_obj_t * ui_Screen2_Label1;
extern lv_obj_t * ui_Screen2_Label2;
extern lv_obj_t * ui_Screen2_Label4;
extern lv_obj_t * ui_Screen2_Label5;
extern lv_obj_t * ui_Screen2_Label6;
extern lv_obj_t * ui_Screen2_Bar1;
extern lv_obj_t * ui_Screen2_Label7;
extern lv_obj_t * ui_Screen2_Label8;
extern lv_obj_t * ui_Screen2_Label9;
extern lv_obj_t * ui_Screen2_Label10;
extern lv_obj_t * ui_Screen2_Label11;
extern lv_obj_t * ui_Screen2_Label12;
extern lv_obj_t * ui_Screen2_Label13;


LV_IMG_DECLARE(ui_img_splashmini_png);    // assets\splashmini.png


LV_FONT_DECLARE(ui_font_bigNumber40);
LV_FONT_DECLARE(ui_font_FastOne);
LV_FONT_DECLARE(ui_font_PlayFairBig);
LV_FONT_DECLARE(ui_font_PlayFairSmall);
LV_FONT_DECLARE(ui_font_icon_bettery);
LV_FONT_DECLARE(ui_font_bigNumber_25);
LV_FONT_DECLARE(ui_font_bigNumber_18);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
