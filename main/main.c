#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "leds.h"

#define MAIN1

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
