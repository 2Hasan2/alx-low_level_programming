#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: A pointer to a string
 * Return: void
 */

void print_rev(char *s)
{
int i = 0;
int len = strlen(s);
while (i < len)
{
_putchar(s[len - i - 1]);
i++;
}
_putchar('\n');
}
