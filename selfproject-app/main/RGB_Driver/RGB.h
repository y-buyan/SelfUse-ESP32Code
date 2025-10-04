#pragma once


#include "driver/gpio.h"
#include "led_strip.h"

#define RGB_GPIO_PIN 38 

void Rgb_init(void);
void Rgb_set_color(uint8_t red_val, uint8_t green_val, uint8_t blue_val);
void RGB_Task(void);

