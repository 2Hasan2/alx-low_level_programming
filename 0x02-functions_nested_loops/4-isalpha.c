#include <stdio.h>
#include "main.h"
/**
 * _isalpha -print the sign of a number
 * @num: ASCii value.
 * Return: 1 if char is lower case and 0 if not
 */

int _isalpha(int num)
{
	if ((num >= 'A' && num <= 'Z') || (num >= 'a' && num <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}