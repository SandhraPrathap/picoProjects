#include <pico/stdlib.h>
void main()
{

    const LED = 25;
    gpio_init(LED);
    gpio_set_dir(LED, GPIO_OUT);
    while (true)
    {
        gpio_put(LED, 1);
        sleep_ms(500);
        gpio_put(LED, 0);
        sleep_ms(500);
    }
}