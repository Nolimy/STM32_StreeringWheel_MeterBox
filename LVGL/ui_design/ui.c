// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void ui_event_Screen1(lv_event_t * e);
lv_obj_t * ui_Screen1;
void ui_event_Screen1_Bar1(lv_event_t * e);
lv_obj_t * ui_Screen1_Bar1;
lv_obj_t * ui_Screen1_Image1;
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Screen2_Label3;
lv_obj_t * ui_Screen2_Label1;
lv_obj_t * ui_Screen2_Label2;
lv_obj_t * ui_Screen2_Label4;
lv_obj_t * ui_Screen2_Label5;
lv_obj_t * ui_Screen2_Label6;
lv_obj_t * ui_Screen2_Bar1;
lv_obj_t * ui_Screen2_Label7;
lv_obj_t * ui_Screen2_Label8;
lv_obj_t * ui_Screen2_Label9;
lv_obj_t * ui_Screen2_Label10;
lv_obj_t * ui_Screen2_Label11;
lv_obj_t * ui_Screen2_Label12;
lv_obj_t * ui_Screen2_Label13;
lv_obj_t * ui_Screen2_Label14;
lv_obj_t * ui_Screen2_Label15;
lv_obj_t * ui_speedMeter;
///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        _ui_bar_set_property(ui_Screen1_Bar1, _UI_BAR_PROPERTY_VALUE_WITH_ANIM, 100);
    }
}

static void set_value(void * indic, int32_t v)
{
    lv_meter_set_indicator_end_value(ui_speedMeter, indic, v);
}


void ui_event_Screen1_Bar1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        _ui_bar_increment(ui_Screen1_Bar1, 20, LV_ANIM_ON);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Bar1 = lv_bar_create(ui_Screen1);
    lv_obj_set_width(ui_Screen1_Bar1, 254);
    lv_obj_set_height(ui_Screen1_Bar1, 15);
    lv_obj_set_x(ui_Screen1_Bar1, -3);
    lv_obj_set_y(ui_Screen1_Bar1, 40);
    lv_obj_set_align(ui_Screen1_Bar1, LV_ALIGN_CENTER);
    lv_obj_set_style_anim_time(ui_Screen1_Bar1, 4000, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Image1 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Screen1_Image1, &ui_img_splashmini_png);
    lv_obj_set_width(ui_Screen1_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Image1, 0);
    lv_obj_set_y(ui_Screen1_Image1, -37);
    lv_obj_set_align(ui_Screen1_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Screen1_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Screen1_Bar1, ui_event_Screen1_Bar1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);

}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_add_state(ui_Screen2, LV_STATE_CHECKED | LV_STATE_FOCUSED);       /// States
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label3 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label3, -9);
    lv_obj_set_y(ui_Screen2_Label3, 110);
    lv_obj_set_align(ui_Screen2_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label3, "LingYunRacingTeam");
    lv_label_set_recolor(ui_Screen2_Label3, "true");
    lv_obj_set_style_text_color(ui_Screen2_Label3, lv_color_hex(0x41A0FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label3, &ui_font_FastOne, LV_PART_MAIN | LV_STATE_DEFAULT);

		ui_speedMeter = lv_meter_create(ui_Screen2);
		//lv_obj_center(ui_speedMeter);
	
		/*Remove the circle from the middle*/
    lv_obj_remove_style(ui_speedMeter, NULL, LV_PART_INDICATOR);
		lv_obj_remove_style(ui_speedMeter, NULL, LV_PART_MAIN);
		
    lv_obj_set_x(ui_speedMeter, 15);
    lv_obj_set_y(ui_speedMeter, 40);
		lv_obj_set_size(ui_speedMeter, 200, 200);
		
		 
		
		 /*Add a scale first*/
    lv_meter_scale_t * scale = lv_meter_add_scale(ui_speedMeter);
    lv_meter_set_scale_ticks(ui_speedMeter, scale, 60, 0, 0, lv_color_hex(0x000000));//set the minor tick
    lv_meter_set_scale_major_ticks(ui_speedMeter, scale, 1, 3, 20, lv_color_hex(0x41A0FF), -100);
    lv_meter_set_scale_range(ui_speedMeter, scale, 0, 120, 270, 90);
		
		lv_meter_indicator_t * indic1 = lv_meter_add_arc(ui_speedMeter, scale, 20, lv_color_hex(0x41A0FF), 0);
		
		/*Create an animation to set the value*/
    lv_anim_t a;
    lv_anim_init(&a);
    lv_anim_set_exec_cb(&a, set_value);
    lv_anim_set_values(&a, 0, 120);
    lv_anim_set_repeat_delay(&a, 500);
    lv_anim_set_playback_delay(&a, 100);
    lv_anim_set_repeat_count(&a, LV_ANIM_REPEAT_INFINITE);

    lv_anim_set_time(&a, 2000);
    lv_anim_set_playback_time(&a, 500);
    lv_anim_set_var(&a, indic1);
    lv_anim_start(&a);
		
		
    ui_Screen2_Label1 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label1, 72);
    lv_obj_set_y(ui_Screen2_Label1, -107);
    lv_obj_set_align(ui_Screen2_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label1, "0000");
    lv_obj_set_style_text_color(ui_Screen2_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Screen2_Label1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Screen2_Label1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label1, &ui_font_bigNumber40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label2 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label2, 173);
    lv_obj_set_y(ui_Screen2_Label2, -95);
    lv_obj_set_align(ui_Screen2_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label2, "RPM");
    lv_obj_set_style_bg_color(ui_Screen2_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label4 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label4, 29);
    lv_obj_set_y(ui_Screen2_Label4, -10);
    lv_obj_set_align(ui_Screen2_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label4, "R");
    lv_obj_set_style_text_color(ui_Screen2_Label4, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label4, &ui_font_PlayFairSmall, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label5 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label5, 83);
    lv_obj_set_y(ui_Screen2_Label5, -40);
    lv_obj_set_align(ui_Screen2_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label5, "N");
    lv_obj_set_style_text_color(ui_Screen2_Label5, lv_color_hex(0x4195F4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label5, &ui_font_PlayFairBig, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label6 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label6, 136);
    lv_obj_set_y(ui_Screen2_Label6, -9);
    lv_obj_set_align(ui_Screen2_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label6, "D");
    lv_obj_set_style_text_color(ui_Screen2_Label6, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label6, &ui_font_PlayFairSmall, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Bar1 = lv_bar_create(ui_Screen2);
    lv_bar_set_value(ui_Screen2_Bar1, 25, LV_ANIM_OFF);
    lv_obj_set_width(ui_Screen2_Bar1, 16);
    lv_obj_set_height(ui_Screen2_Bar1, 167);
    lv_obj_set_x(ui_Screen2_Bar1, 214);
    lv_obj_set_y(ui_Screen2_Bar1, -20);
    lv_obj_set_align(ui_Screen2_Bar1, LV_ALIGN_CENTER);

    ui_Screen2_Label7 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label7, 214);
    lv_obj_set_y(ui_Screen2_Label7, 84);
    lv_obj_set_align(ui_Screen2_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label7, "");
    lv_obj_set_style_text_color(ui_Screen2_Label7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label7, &ui_font_icon_bettery, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label8 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label8, 84);
    lv_obj_set_y(ui_Screen2_Label8, 58);
    lv_obj_set_align(ui_Screen2_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label8, "");
    lv_obj_set_style_text_color(ui_Screen2_Label8, lv_color_hex(0x6464FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label8, &ui_font_icon_bettery, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label9 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label9, 139);
    lv_obj_set_y(ui_Screen2_Label9, 72);
    lv_obj_set_align(ui_Screen2_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label9, "");
    lv_obj_set_style_text_color(ui_Screen2_Label9, lv_color_hex(0x80FF80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label9, &ui_font_icon_bettery, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label10 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label10, 28);
    lv_obj_set_y(ui_Screen2_Label10, 74);
    lv_obj_set_align(ui_Screen2_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label10, "");
    lv_obj_set_style_text_color(ui_Screen2_Label10, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label10, &ui_font_icon_bettery, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label11 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label11, 83);
    lv_obj_set_y(ui_Screen2_Label11, 20);
    lv_obj_set_align(ui_Screen2_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label11, "000");
    lv_obj_set_style_text_color(ui_Screen2_Label11, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label11, &ui_font_bigNumber_25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label12 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label12, 4);
    lv_obj_set_y(ui_Screen2_Label12, 32);
    lv_obj_set_align(ui_Screen2_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label12, "00");
    lv_obj_set_style_text_color(ui_Screen2_Label12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label12, &ui_font_bigNumber_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label13 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label13, 160);
    lv_obj_set_y(ui_Screen2_Label13, 32);
    lv_obj_set_align(ui_Screen2_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label13, "00");
    lv_obj_set_style_text_color(ui_Screen2_Label13, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label13, &ui_font_bigNumber_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label14 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label14, -123);
    lv_obj_set_y(ui_Screen2_Label14, -21);
    lv_obj_set_align(ui_Screen2_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label14, "000");
    lv_obj_set_style_text_color(ui_Screen2_Label14, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label14, &ui_font_bigNumber_25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label15 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Screen2_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label15, -124);
    lv_obj_set_y(ui_Screen2_Label15, 8);
    lv_obj_set_align(ui_Screen2_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label15, "KMH");
    lv_obj_set_style_text_color(ui_Screen2_Label15, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Screen2_Label15, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    lv_disp_load_scr(ui_Screen2);
}
