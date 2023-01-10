// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

///////////////////// VARIABLES ////////////////////
void ui_event_startup(lv_event_t * e);
lv_obj_t * ui_startup;
lv_obj_t * ui_startupBar;
lv_obj_t * ui_startupLogo;
lv_obj_t * ui_home;
lv_obj_t * ui_logoLable;
lv_obj_t * ui_rpmNum;
lv_obj_t * ui_rpmUnit;
lv_obj_t * ui_rGearLable;
lv_obj_t * ui_nGearLable;
lv_obj_t * ui_dGearLable;
lv_obj_t * ui_socValue;
lv_obj_t * ui_socIcon;
lv_obj_t * ui_speedMode;
lv_obj_t * ui_ecoMode;
lv_obj_t * ui_batAlarm;
lv_obj_t * ui_;
lv_obj_t * ui_Screen2_Label12;
lv_obj_t * ui_Screen2_Label13;
lv_obj_t * ui_speedNum;
lv_obj_t * ui_speedUnitLable;
lv_obj_t * ui_speedMeter;

uint32_t BAR_LOAD_OVER;
uint32_t speed;
uint8_t barFlag = 1;
///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void set_value(void * bar, int32_t v)
{
    lv_bar_set_value(bar, v, LV_ANIM_OFF);
}
static void meter_set_value(void * indicator, int32_t v)
{
	lv_meter_set_indicator_end_value(ui_speedMeter, indicator, v);
}

void ui_event_startup(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == BAR_LOAD_OVER) {
        _ui_screen_change(ui_home, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0);
    }
}

void sendEventCode()
{
	if(lv_bar_get_value(ui_startupBar) == 100)
	{
		barFlag = 0;
		lv_event_send(ui_startup, BAR_LOAD_OVER, NULL);
	}
}


///////////////////// SCREENS ////////////////////
void ui_startup_screen_init(void)
{
    ui_startup = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_startup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_startup, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_startup, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_startupBar = lv_bar_create(ui_startup);
    lv_obj_set_width(ui_startupBar, 254);
    lv_obj_set_height(ui_startupBar, 15);
    lv_obj_set_x(ui_startupBar, -3);
    lv_obj_set_y(ui_startupBar, 40);
    lv_obj_set_align(ui_startupBar, LV_ALIGN_CENTER);
    //lv_obj_set_style_anim_time(ui_startupBar, 4000, LV_PART_MAIN | LV_STATE_DEFAULT);
	
		lv_anim_t a;
    lv_anim_init(&a);
    lv_anim_set_var(&a, ui_startupBar);
    lv_anim_set_values(&a, 0, 100);
    lv_anim_set_exec_cb(&a, set_value);
		lv_anim_set_time(&a, 4000);
		lv_anim_start(&a);
		//lv_anim_set_ready_cb(&a, sendEventCode);

    ui_startupLogo = lv_img_create(ui_startup);
    lv_img_set_src(ui_startupLogo, &ui_img_splashmini_png);
    lv_obj_set_width(ui_startupLogo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_startupLogo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_startupLogo, 0);
    lv_obj_set_y(ui_startupLogo, -37);
    lv_obj_set_align(ui_startupLogo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_startupLogo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_startupLogo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

		BAR_LOAD_OVER = lv_event_register_id();
		
    lv_obj_add_event_cb(ui_startup, ui_event_startup, LV_EVENT_ALL, NULL);

}
void ui_home_screen_init(void)
{
    ui_home = lv_obj_create(NULL);
    lv_obj_add_state(ui_home, LV_STATE_CHECKED | LV_STATE_FOCUSED);       /// States
    lv_obj_clear_flag(ui_home, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_home, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_home, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

		ui_speedMeter = lv_meter_create(ui_home);
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
    lv_meter_set_scale_major_ticks(ui_speedMeter, scale, 1, 3, 20, lv_color_hex(0x1772b4), -100);
    lv_meter_set_scale_range(ui_speedMeter, scale, 0, 120, 270, 90);
		lv_meter_indicator_t * indic1 = lv_meter_add_arc(ui_speedMeter, scale, 20, lv_color_hex(0x1772b4), 0);
		/*Create an animation to set the value*/
    lv_anim_t a;
    lv_anim_init(&a);
    lv_anim_set_exec_cb(&a, meter_set_value);
    lv_anim_set_values(&a, 0, 100);
    //lv_anim_set_repeat_delay(&a, 500);
    //lv_anim_set_playback_delay(&a, 100);
    //lv_anim_set_repeat_count(&a, LV_ANIM_REPEAT_INFINITE);

    lv_anim_set_time(&a, 0);
    //lv_anim_set_playback_time(&a, 500);
    lv_anim_set_var(&a, indic1);
    lv_anim_start(&a);
		
		
		
    ui_logoLable = lv_label_create(ui_home);
    lv_obj_set_width(ui_logoLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_logoLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_logoLable, -9);
    lv_obj_set_y(ui_logoLable, 110);
    lv_obj_set_align(ui_logoLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_logoLable, "LingYunRacingTeam");
    lv_label_set_recolor(ui_logoLable, "true");
    lv_obj_set_style_text_color(ui_logoLable, lv_color_hex(0x41A0FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_logoLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_logoLable, &ui_font_FastOne, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_rpmNum = lv_label_create(ui_home);
    lv_obj_set_width(ui_rpmNum, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_rpmNum, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_rpmNum, 72);
    lv_obj_set_y(ui_rpmNum, -107);
    lv_obj_set_align(ui_rpmNum, LV_ALIGN_CENTER);
    lv_label_set_text(ui_rpmNum, "0000");
    lv_obj_set_style_text_color(ui_rpmNum, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_rpmNum, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_rpmNum, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_rpmNum, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_rpmNum, &ui_font_bigNumber40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_rpmUnit = lv_label_create(ui_home);
    lv_obj_set_width(ui_rpmUnit, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_rpmUnit, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_rpmUnit, 173);
    lv_obj_set_y(ui_rpmUnit, -95);
    lv_obj_set_align(ui_rpmUnit, LV_ALIGN_CENTER);
    lv_label_set_text(ui_rpmUnit, "RPM");
    lv_obj_set_style_bg_color(ui_rpmUnit, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_rpmUnit, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_rGearLable = lv_label_create(ui_home);
    lv_obj_set_width(ui_rGearLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_rGearLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_rGearLable, 29);
    lv_obj_set_y(ui_rGearLable, -10);
    lv_obj_set_align(ui_rGearLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_rGearLable, "R");
    lv_obj_set_style_text_color(ui_rGearLable, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_rGearLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_rGearLable, &ui_font_PlayFairSmall, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_nGearLable = lv_label_create(ui_home);
    lv_obj_set_width(ui_nGearLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_nGearLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_nGearLable, 83);
    lv_obj_set_y(ui_nGearLable, -40);
    lv_obj_set_align(ui_nGearLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_nGearLable, "N");
    lv_obj_set_style_text_color(ui_nGearLable, lv_color_hex(0x4195F4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_nGearLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_nGearLable, &ui_font_PlayFairBig, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dGearLable = lv_label_create(ui_home);
    lv_obj_set_width(ui_dGearLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_dGearLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_dGearLable, 136);
    lv_obj_set_y(ui_dGearLable, -9);
    lv_obj_set_align(ui_dGearLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_dGearLable, "D");
    lv_obj_set_style_text_color(ui_dGearLable, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_dGearLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_dGearLable, &ui_font_PlayFairSmall, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_socValue = lv_bar_create(ui_home);
    lv_bar_set_value(ui_socValue, 25, LV_ANIM_OFF);
    lv_obj_set_width(ui_socValue, 16);
    lv_obj_set_height(ui_socValue, 167);
    lv_obj_set_x(ui_socValue, 214);
    lv_obj_set_y(ui_socValue, -20);
    lv_obj_set_align(ui_socValue, LV_ALIGN_CENTER);

    ui_socIcon = lv_label_create(ui_home);
    lv_obj_set_width(ui_socIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_socIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_socIcon, 214);
    lv_obj_set_y(ui_socIcon, 84);
    lv_obj_set_align(ui_socIcon, LV_ALIGN_CENTER);
    lv_label_set_text(ui_socIcon, "");
    lv_obj_set_style_text_color(ui_socIcon, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_socIcon, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_socIcon, &ui_font_icon_bettery, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_speedMode = lv_label_create(ui_home);
    lv_obj_set_width(ui_speedMode, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_speedMode, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_speedMode, 84);
    lv_obj_set_y(ui_speedMode, 58);
    lv_obj_set_align(ui_speedMode, LV_ALIGN_CENTER);
    lv_label_set_text(ui_speedMode, "");
    lv_obj_set_style_text_color(ui_speedMode, lv_color_hex(0x6464FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_speedMode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_speedMode, &ui_font_icon_bettery, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ecoMode = lv_label_create(ui_home);
    lv_obj_set_width(ui_ecoMode, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ecoMode, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ecoMode, 139);
    lv_obj_set_y(ui_ecoMode, 72);
    lv_obj_set_align(ui_ecoMode, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ecoMode, "");
    lv_obj_set_style_text_color(ui_ecoMode, lv_color_hex(0x80FF80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ecoMode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ecoMode, &ui_font_icon_bettery, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_batAlarm = lv_label_create(ui_home);
    lv_obj_set_width(ui_batAlarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_batAlarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_batAlarm, 28);
    lv_obj_set_y(ui_batAlarm, 74);
    lv_obj_set_align(ui_batAlarm, LV_ALIGN_CENTER);
    lv_label_set_text(ui_batAlarm, "");
    lv_obj_set_style_text_color(ui_batAlarm, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_batAlarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_batAlarm, &ui_font_icon_bettery, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ = lv_label_create(ui_home);
    lv_obj_set_width(ui_, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_, 83);
    lv_obj_set_y(ui_, 20);
    lv_obj_set_align(ui_, LV_ALIGN_CENTER);
    lv_label_set_text(ui_, "000");
    lv_obj_set_style_text_color(ui_, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_, &ui_font_bigNumber_25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label12 = lv_label_create(ui_home);
    lv_obj_set_width(ui_Screen2_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label12, 4);
    lv_obj_set_y(ui_Screen2_Label12, 32);
    lv_obj_set_align(ui_Screen2_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label12, "00");
    lv_obj_set_style_text_color(ui_Screen2_Label12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label12, &ui_font_bigNumber_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen2_Label13 = lv_label_create(ui_home);
    lv_obj_set_width(ui_Screen2_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen2_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen2_Label13, 160);
    lv_obj_set_y(ui_Screen2_Label13, 32);
    lv_obj_set_align(ui_Screen2_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Screen2_Label13, "00");
    lv_obj_set_style_text_color(ui_Screen2_Label13, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen2_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Screen2_Label13, &ui_font_bigNumber_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_speedNum = lv_label_create(ui_home);
    lv_obj_set_width(ui_speedNum, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_speedNum, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_speedNum, -123);
    lv_obj_set_y(ui_speedNum, -21);
    lv_obj_set_align(ui_speedNum, LV_ALIGN_CENTER);
    lv_label_set_text(ui_speedNum, "000");
    lv_obj_set_style_text_color(ui_speedNum, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_speedNum, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_speedNum, &ui_font_bigNumber_25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_speedUnitLable = lv_label_create(ui_home);
    lv_obj_set_width(ui_speedUnitLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_speedUnitLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_speedUnitLable, -124);
    lv_obj_set_y(ui_speedUnitLable, 8);
    lv_obj_set_align(ui_speedUnitLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_speedUnitLable, "KMH");
    lv_obj_set_style_text_color(ui_speedUnitLable, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_speedUnitLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_speedUnitLable, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_speedUnitLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_startup_screen_init();
    ui_home_screen_init();
    lv_disp_load_scr(ui_startup);
}
