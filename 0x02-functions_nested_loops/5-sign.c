#include "main.h"
/**
 * print_sign - check if the number is postive, 0 or negative
 * @num: ASCii value.
 * and create a new line 10 times
 * Return: 1 if char is lower case and 0 if not
 */

int print_sign(int num)
{
	switch (num)
	{
	case 0:
		_putchar('0');
		return (0);
	default:
		if (num > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (num < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('-');
			return ('/');
		}
	}
}
