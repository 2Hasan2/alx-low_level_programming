#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: A pointer to a string
 * Return: void
 */

void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: A pointer to a string
 * Return: void
 */

void puts_half(char *str)
{
int i = 0, len = 0, n;
while (str[i++])
len++;
if ((len % 2) == 0)
n = len / 2;
else
n = (len + 1) / 2;
for (i = n; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}
