#include <stdio.h>
#include <zephyr/random/random.h>
#ifdef CONFIG_SAY_HELLO
#include "say_hello.h"
#endif
static const uint32_t sleep_time_ms = 1000;
int main(void)
{
    uint32_t rand_num;
    while(1)
    {
        double float_num;
        rand_num = sys_rand32_get();
        printk("Random Number: %u\n", rand_num);
        float_num = (double)rand_num / (UINT32_MAX + 1.0);
        printk("Float number: %f\n", float_num);
        #ifdef CONFIG_SAY_HELLO
        say_hello();
        #endif
        k_msleep(sleep_time_ms);
    }
}