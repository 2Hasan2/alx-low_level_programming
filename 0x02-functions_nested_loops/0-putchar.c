#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char putChar[] = "_putchar";
	int i;
	for (i = 0; i <= 7; i++)
	{
		putchar(putChar[i]);
	}
	putchar('\n');
	return (0);
}