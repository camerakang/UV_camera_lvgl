#include "lv_drivers/sdl/sdl.h"
#include "lvgl/lvgl.h"
#include "lvgl/demos/lv_demos.h"
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <sys/time.h>
#include "ui/display_parameters.h"
#define DISP_BUF_SIZE (1920 * 1080)

int main(void)
{
    /*LittlevGL init*/
    lv_init();

    /*Linux frame buffer device init*/
#if USE_SDL
    sdl_init();
#else
    fbdev_init();
    evdev_init();
#endif

    /*A small buffer for LittlevGL to draw the screen's content*/
    static lv_color_t buf1[DISP_BUF_SIZE];
    static lv_color_t buf2[DISP_BUF_SIZE];

    /*Initialize a descriptor for the buffer*/
    static lv_disp_draw_buf_t disp_buf;
    lv_disp_draw_buf_init(&disp_buf, buf1, buf2, DISP_BUF_SIZE * 2);

    /*Initialize and register a display driver*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.draw_buf = &disp_buf;
#if USE_SDL
    disp_drv.flush_cb = sdl_display_flush; /*Set a flush callback to draw to the display*/
#else
    disp_drv.flush_cb = fbdev_flush; /*Set a flush callback to draw to the display*/
#endif
    disp_drv.hor_res = 1920;
    disp_drv.ver_res = 1080;
    lv_disp_drv_register(&disp_drv);

    static lv_indev_drv_t indev_drv_1;
    lv_indev_drv_init(&indev_drv_1); /*Basic initialization*/
    indev_drv_1.type = LV_INDEV_TYPE_POINTER;

    /*This function will be called periodically (by the library) to get the mouse position and state*/
#if USE_SDL
    indev_drv_1.read_cb = sdl_mouse_read;
#else
    indev_drv.read_cb = evdev_read;
#endif
    lv_indev_t *mouse_indev = lv_indev_drv_register(&indev_drv_1);

    /*Set a cursor for the mouse*/
    // LV_IMG_DECLARE(mouse_cursor_icon)
    // lv_obj_t * cursor_obj = lv_img_create(lv_scr_act()); /*Create an image object for the cursor */
    // lv_img_set_src(cursor_obj, &mouse_cursor_icon);           /*Set the image source*/
    // lv_indev_set_cursor(mouse_indev, cursor_obj);             /*Connect the image  object to the driver*/

    /*Create a Demo*/
    ui_init();
    // 为滑块添加事件回调
    lv_obj_add_event_cb(ui_Slider1, slider_event_handler, LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_add_event_cb(ui_Slider3, slider_event_handler, LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_add_event_cb(ui_Button2, btn_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button6, btn_event_handler, LV_EVENT_ALL, NULL);
    /*Handle LitlevGL tasks (tickless mode)*/
    while (1)
    {
        update_screen();
        lv_timer_handler();
        usleep(5000);
    }

    return 0;
}

/*Set in lv_conf.h as `LV_TICK_CUSTOM_SYS_TIME_EXPR`*/
uint32_t custom_tick_get(void)
{
    static uint64_t start_ms = 0;
    if (start_ms == 0)
    {
        struct timeval tv_start;
        gettimeofday(&tv_start, NULL);
        start_ms = (tv_start.tv_sec * 1000000 + tv_start.tv_usec) / 1000;
    }

    struct timeval tv_now;
    gettimeofday(&tv_now, NULL);
    uint64_t now_ms;
    now_ms = (tv_now.tv_sec * 1000000 + tv_now.tv_usec) / 1000;

    uint32_t time_ms = now_ms - start_ms;
    return time_ms;
}