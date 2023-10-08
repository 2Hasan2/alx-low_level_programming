#include <stdio.h>

/**
 * main - print out the numbers from 0 to 9 with commas and spaces
 * Return: 0
 * Hasan Ragab
 */
int main(void)
{
	int num;
	int num2;

	for (num = 48; num < 58; num++)
	{
		for (num2 = num + 1; num2 < 58; num2++)
		{
			putchar(num);
			putchar(num2);
			if (num == '8' && num2 == '9')
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
