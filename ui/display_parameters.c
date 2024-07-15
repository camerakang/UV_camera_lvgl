
#include "display_parameters.h"
DeviceStatus device_status;

void camera_display(const void *src)
{
    /// TODO: 传入摄像头的画面src
    lv_img_set_src(ui_Image2, src);
}

void slider_event_handler(lv_event_t *event)
{
    lv_obj_t *target = lv_event_get_target(event);

    if (target == ui_Slider1)
    {
        int value = lv_slider_get_value(target);
        /// TODO: ZOOM设置
        printf("Slider1 value: %d\n", value);
    }
    else if (target == ui_Slider3)
    {
        int value = lv_slider_get_value(target);
        /// TODO: GAIN设置
        printf("Slider2 value: %d\n", value);
    }
}

void btn_event_handler(lv_event_t *event)
{
    lv_event_code_t code = lv_event_get_code(event);
    lv_obj_t *btn = lv_event_get_target(event);

    if (code == LV_EVENT_VALUE_CHANGED)
    {
        if (btn == ui_Button2)
        {
            if (lv_obj_has_state(btn, LV_STATE_CHECKED))
            {
                /// TODO: 可见光打开
                printf("Button2 is now checked (pressed)!\n");
            }
            else
            {
                /// TODO: 可见光关闭
                printf("Button2 is now not checked (released)!\n");
            }
        }
        if (btn == ui_Button6)
        {
            if (lv_obj_has_state(btn, LV_STATE_CHECKED))
            {
                /// TODO: 紫外打开
                printf("Button6 is now checked (pressed)!\n");
            }
            else
            {
                /// TODO: 紫外关闭
                printf("Button6 is now not checked (released)!\n");
            }
        }
    }
}

void update_screen()
{
    if (device_status.mode == 1)
    {
        lv_label_set_text(ui_Label1, "模式 | 可见光模式");
    }
    else if (device_status.mode == 2)
    {
        lv_label_set_text(ui_Label1, "模式 | 紫外混合模式");
    }
    else if (device_status.count == 3)
    {
        lv_label_set_text(ui_Label1, "模式 | 混合模式");
    }

    {
        char text_buffer[64]; // 确保这个buffer足够大以容纳整个字符串
        sprintf(text_buffer, "计数 | %d/M", device_status.count);
        lv_label_set_text(ui_Label3, text_buffer);
    }

    if (device_status.defects == 1)
    {
        lv_label_set_text(ui_Label1, "缺陷 | 正常");
    }
    else if (device_status.defects == 2)
    {
        lv_label_set_text(ui_Label1, "缺陷 | 危险");
    }
    { // 更新zoom数值
        char text_buffer[64];
        sprintf(text_buffer, " %dx", device_status.zoom);
        lv_label_set_text(ui_Label2, text_buffer);
    }

    { // 更新增益数值
        char text_buffer[64];
        sprintf(text_buffer, " %dx", device_status.gain);
        lv_label_set_text(ui_Label6, text_buffer);
    }
}