#include "main.h"
/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
int i, j;
i = 0;
if (size <= 0)
printf("\n");
else
{
while (i < size)
{
printf("%08x: ", i);
j = 0;
while (j < 10)
{
if (j % 2 == 0 && j != 0)
printf(" ");
if (i + j > size - 1)
printf("  ");
else
printf("%02x", *(b + i + j));
j++;
}
printf(" ");
j = 0;
while (j < 10)
{
if (i + j > size - 1)
break;
if (*(b + i + j) >= 32 && *(b + i + j) <= 126)
printf("%c", *(b + i + j));
else
printf(".");
j++;
}
printf("\n");
i += 10;
}
}
}
