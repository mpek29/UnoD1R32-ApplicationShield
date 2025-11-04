#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define RED_LED 16
#define GREEN_LED 13
#define BLUE_LED 12

#define MAIN1

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

void app_main(void)
{

    /* Configure the peripheral according to the LED type */
    configure_led();

    while(1){
    
#ifdef MAIN1

        /* === LED MODULE FUNCTIONALITY TESTS === */

        /* Full off (0%) */
        leds (0);
        //vTaskDelay(500 / portTICK_PERIOD_MS);

        /* Full on (100%) */
        leds (1);
        vTaskDelay(500 / portTICK_PERIOD_MS);

        /* Test each color individually */
        red_led (1);
        green_led (0);
        blue_led (0);
        vTaskDelay(500 / portTICK_PERIOD_MS);

        red_led (0);
        green_led (1);
        blue_led (0);
        vTaskDelay(500 / portTICK_PERIOD_MS);

        red_led (0);
        green_led (0);
        blue_led (1);
        vTaskDelay(500 / portTICK_PERIOD_MS);
#endif

    }
}
