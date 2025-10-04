#include <stdio.h>
#include "RGB.h"

void Driver_init(void)
{
    Rgb_init();
}

void app_main(void)
{
    Driver_init();

    RGB_Task();

    while (1)
    {
        // raise the task priority of LVGL and/or reduce the handler period can improve the performance
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}