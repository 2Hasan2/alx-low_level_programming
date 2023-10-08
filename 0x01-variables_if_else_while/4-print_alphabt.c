#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print out the alphabet except q and e
 * Return: 0
 * Hasan Ragab
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter < 123; letter++)
	{
	if (letter == 'q' || letter == 'e')
		continue;
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
