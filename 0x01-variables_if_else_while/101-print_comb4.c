#include <stdio.h>

/**
 * main - print all compination of three numbers from 0 to 9 sparated by ","
 * Return: 0
 * Hasan Ragab
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = 48; num < 58; num++)
	{
		for (num2 = num + 1; num2 < 58; num2++)
		{
			for (num3 = num2 + 1; num3 < 58; num3++)
			{
				putchar(num);
				putchar(num2);
				putchar(num3);
				if (num == '7' && num2 == '8' && num3 == '9')
				{
				continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
