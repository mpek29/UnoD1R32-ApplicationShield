#include "driver/gpio.h"
#include "leds.h"
#include "esp_log.h"

void red_led(int brightness)
{
    /* Set the GPIO level according to the state (LOW or HIGH)*/
    gpio_set_level(GPIO_RED_LED, 1-brightness);
}

void green_led(int brightness)
{
    /* Set the GPIO level according to the state (LOW or HIGH)*/
    gpio_set_level(GPIO_GREEN_LED, 1-brightness);
}

void blue_led(int brightness)
{
    /* Set the GPIO level according to the state (LOW or HIGH)*/
    gpio_set_level(GPIO_BLUE_LED, 1-brightness);
}

void leds (int brightness)
{
  red_led(brightness);
  green_led(brightness);
  blue_led(brightness);
}

void configure_led(void)
{
    gpio_reset_pin(GPIO_RED_LED);
    gpio_reset_pin(GPIO_GREEN_LED);
    gpio_reset_pin(GPIO_BLUE_LED);

    /* Set the GPIO as a push/pull output */
    gpio_set_direction(GPIO_RED_LED, GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_GREEN_LED, GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_BLUE_LED, GPIO_MODE_OUTPUT);
}
