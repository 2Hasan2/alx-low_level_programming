#include "main.h"
/**
 * adding - Calculation methoud
 * @i: incremental
 * @temp: temproray
 * @n1: pointer for the first 1
 * @n2: pointer for the first 2
 * @n1Len: length of n1
 * @n2Len: length of n2
 * @size_r: size of buffer
 * @r: pointer for the buffer
 * Return: the buffer pointer
 */
char *adding(int i, int temp, char *n1, char *n2,
			 int n1Len, int n2Len, int size_r, char *r)
{
	for (i = i - 1; i >= 0 || temp != 0; i--)
	{

		if (n1Len >= 0)
		{

			temp += (n1[n1Len] - '0');
			n1Len--;
		}
		if (n2Len >= 0)
		{

			temp += (n2[n2Len] - '0');
			n2Len--;
		}

		r[i] = temp % 10 + '0';

		temp /= 10;
		if (i == 0 && temp)
		{
			int j = 0;

			while (r[j] != '\0')
				j++;
			if (j + 2 > size_r)
				return (0);
			while (j >= 0)
			{
				r[j + 1] = r[j];
				j--;
			}
			i++;
		}
	}
	return (r);
}

/**
 * infinite_add - Calculates the sum of two numbers
 * @n1: pointer for the first number
 * @n2: pointer for the second number
 * @r: pointer for the bufer
 * @size_r: size of the bufer
 * Return: the string pinter
 * Ashraf Atef
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1Len = 0;
	int n2Len = 0;
	int temp = 0;
	int i = 0;

	while ((n1[n1Len] >= '0' && n1[n1Len] <= '9') ||
		   (n2[n2Len] >= '0' && n2[n2Len] <= '9'))
	{
		if (n1[n1Len] >= '0' && n1[n1Len] <= '9')
			n1Len++;
		if (n2[n2Len] >= '0' && n2[n2Len] <= '9')
			n2Len++;
	}

	if (n1Len > size_r - 1 || n2Len > size_r - 1)
	{
		return (0);
	}
	if (n1Len > n2Len)
	{
		i = n1Len;
	}
	else
	{
		i = n1Len;
	}
	if (n1Len)
		n1Len--;
	if (n2Len)
		n2Len--;

	r[i] = '\0';

	return (adding(i, temp, n1, n2, n1Len, n2Len, size_r, r));
}
