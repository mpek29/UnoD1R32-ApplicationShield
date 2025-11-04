#include "leds.h"
#include "esp_log.h"

static void red_led(int brightness)
{
    /* Set the GPIO level according to the state (LOW or HIGH)*/
    gpio_set_level(RED_LED, 1-brightness);
}

static void green_led(int brightness)
{
    /* Set the GPIO level according to the state (LOW or HIGH)*/
    gpio_set_level(GREEN_LED, 1-brightness);
}

static void blue_led(int brightness)
{
    /* Set the GPIO level according to the state (LOW or HIGH)*/
    gpio_set_level(BLUE_LED, 1-brightness);
}

static void leds (int brightness)
{
  red_led(brightness);
  green_led(brightness);
  blue_led(brightness);
}

static void configure_led(void)
{
    gpio_reset_pin(RED_LED);
    gpio_reset_pin(GREEN_LED);
    gpio_reset_pin(BLUE_LED);

    /* Set the GPIO as a push/pull output */
    gpio_set_direction(RED_LED, GPIO_MODE_OUTPUT);
    gpio_set_direction(GREEN_LED, GPIO_MODE_OUTPUT);
    gpio_set_direction(BLUE_LED, GPIO_MODE_OUTPUT);
}
