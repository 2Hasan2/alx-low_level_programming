#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer converted from string
 */

int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	while (*(s + i))
	{
		if (*(s + i) == '-')
			sign *= -1;

		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			while (*(s + i) >= 48 && *(s + i) <= 57)
			{
				num = num * 10 + sign * (*(s + i) - '0');
				i++;
			}

			break;
		}

		i++;
	}

	return (num);
}
