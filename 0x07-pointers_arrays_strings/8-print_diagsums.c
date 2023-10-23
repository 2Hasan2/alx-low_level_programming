#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i];
a += size;
}
a -= size;
for (i = 0; i < size; i++)
{
sum2 += a[i];
a -= size;
}
putchar(sum1 + '0');
putchar(',');
putchar(' ');
putchar(sum2 + '0');
putchar('\n');
}
