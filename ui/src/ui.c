// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: UVCamera

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Button3;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Button4;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Container2;
lv_obj_t * ui_Slider1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Slider3;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Button6;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label8;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_1510464439[1] = {&ui_img_27510393};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
