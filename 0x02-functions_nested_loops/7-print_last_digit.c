#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
  * @num: Given number.
 * Return: the last digit of the number
 */

int print_last_digit(int num)
{
	int last_num;

	if (num < 0)
	{
		last_num = (num % 10) * -1;
	}

	last_num = num % 10;
	_putchar(last_num + '0');
	return (last_num);
}

