#include <stdio.h>

/**
 * main - print out the alphabet in reverse
 * Return: 0
 * Hasan Ragab
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
