#include <stdio.h>

/**
 * main - print out all possible combinations of two two-digit numbers
 * Return: 0
 * Hasan Ragab
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
			if (!(num1 == 98 && num2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
