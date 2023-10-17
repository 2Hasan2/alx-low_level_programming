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
while (len > i)
{
swap_char(s + len - 1, s + i);
i++;
len--;
}
}
