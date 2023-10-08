#include <stdio.h>

/**
 * main - print out the numbers from 0 to 9 using putchar
 * Return: 0
 * Hasan Ragab
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
