#include <stdio.h>
#include "main.h"
/**
 * _abs - return absolute number of the input
 * @num: Given number.
 * Return: always 0 (success)
 */

int _abs(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}
	return (num);
}