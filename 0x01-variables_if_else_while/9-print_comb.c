#include <stdio.h>

/**
 * main - print all numbers from 0 to 9 with commas and spaces
 * Return: 0
 * Hasan Ragab
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
