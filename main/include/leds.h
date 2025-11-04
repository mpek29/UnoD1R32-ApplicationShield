#ifndef LEDS_H
#define LEDS_H

#define GPIO_RED_LED 16
#define GPIO_GREEN_LED 13
#define GPIO_BLUE_LED 12

void red_led(int brightness);

void green_led(int brightness);

void blue_led(int brightness);

void leds (int brightness);

void configure_led(void);

#endif // LEDS_H