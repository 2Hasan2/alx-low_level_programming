#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: A pointer to an int that will be updated
 * @n: The number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i != (n - 1))
printf("%d, ", a[i]);
else
printf("%d", a[i]);
i++;
}
printf("\n");
}
