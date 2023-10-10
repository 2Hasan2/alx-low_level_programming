#include <stdio.h>
#include "main.h"
/**
 * _islower - check lowercase character
 * @num: ASCii value.
 * Return: 1 if char is lower case, 0 otherwise.
 */

int _islower(int num)
{
	if (num > 96 && num < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

