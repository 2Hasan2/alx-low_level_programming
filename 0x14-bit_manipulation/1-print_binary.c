#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
    int i, flag = 0;
    unsigned long int k;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    for (i = 63; i >= 0; i--)
    {
        k = n >> i;

        if (k & 1)
        {
            _putchar('1');
            flag = 1;
        }
        else if (flag == 1)
            _putchar('0');
    }
}
