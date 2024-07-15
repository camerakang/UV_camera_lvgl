#ifndef __DISPLAY_PARAMETERS__
#define __DISPLAY_PARAMETERS__
#include "lvgl/lvgl.h"
#include "ui/src/ui.h"
typedef struct
{
    int mode;    // 模式
    int count;   // 计数
    int defects; // 缺陷
    float zoom;  // 焦距
    int gain;    // 增益
} DeviceStatus;

typedef struct
{
    int mode;
} DeviceControl;

void camera_display(const void *src);
void slider_event_handler(lv_event_t *event);
void btn_event_handler(lv_event_t *event);
void update_screen();
#endif /*__DISPLAY_PARAMETERS__*/