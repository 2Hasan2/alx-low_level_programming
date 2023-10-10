#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
    int minute_of_day;

    for (minute_of_day = 0; minute_of_day < 24 * 60; minute_of_day++)
    {
        int hour = minute_of_day / 60;
        int minute = minute_of_day % 60;

        _putchar((hour / 10) + '0');
        _putchar((hour % 10) + '0');
        _putchar(':');
        _putchar((minute / 10) + '0');
        _putchar((minute % 10) + '0');
        _putchar('\n');
    }
}

