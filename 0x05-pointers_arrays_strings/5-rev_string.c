#include "main.h"
/**
 * rev_string - reverses a string;
 * @s: A pointer to a string
 * Return: void
 */

void rev_string(char *s)
{
int i = 0;
int len = strlen(s);
char tmp;
while (i < len / 2)
{
tmp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = tmp;
i++;
}
}
