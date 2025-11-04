#ifndef LEDS_H
#define LEDS_H

#define RED_LED 16
#define GREEN_LED 13
#define BLUE_LED 12

static void red_led(int brightness);

static void green_led(int brightness);

static void blue_led(int brightness);

static void leds (int brightness);

static void configure_led(void);

#endif // LEDS_H
