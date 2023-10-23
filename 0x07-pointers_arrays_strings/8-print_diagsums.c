#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size) {
int sum_primary = 0;
int sum_secondary = 0;
for (int i = 0; i < size; i++) {
sum_primary += a[i * size + i];
sum_secondary += a[i * size + (size - 1 - i)];
}
putchar(sum_primary);
putchar(sum_secondary);
}
