#include <stdio.h>
#include <zephyr/random/random.h>
#include "say_hello.h"
static const uint32_t sleep_time_ms = 1000;
int main(void)
{
    uint32_t rand_num;
    while(1)
    {
        rand_num = sys_rand32_get();
        printk("Random Number: %u\n", rand_num);
        say_hello();
        k_msleep(sleep_time_ms);
    }
}