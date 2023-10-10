#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @nam: The number to extract the last digit from
 * Return: The value of the last digit.
 */

int print_last_digit(int num)
{
	int last_number;

	if (num < 0)
	{
		last_number = (num % 10) * -1;
	}
	else
	{
		last_number = num % 10;
	}

	_putchar(last_number + '0');
	return (last_number);
}

