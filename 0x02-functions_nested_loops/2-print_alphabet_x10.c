#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the english alphabet from a-z
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int x;
	int y=0;

	for (; y < 10; y++)
	{

		for (x = 'a'; x <='z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}

