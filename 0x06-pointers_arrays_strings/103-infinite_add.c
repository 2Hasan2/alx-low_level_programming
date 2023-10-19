#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of buffer
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, n, sum, carry;
i = 0;
while (n1[i])
{
i++;
}
j = 0;
while (n2[j])
{
j++;
}
if (i + 2 > size_r || j + 2 > size_r)
{
return (0);
}
carry = 0;
for (k = i - 1, l = j - 1, m = 0; k >= 0 || l >= 0; k--, l--, m++)
{
sum = carry;
if (k >= 0)
{
sum += n1[k] - '0';
}
if (l >= 0)
{
sum += n2[l] - '0';
}
carry = sum / 10;
r[m] = sum % 10 + '0';
}
if (carry > 0)
{
r[m++] = carry + '0';
}
r[m] = '\0';
for (k = 0, n = m - 1; k < n; k++, n--)
{
sum = r[k];
r[k] = r[n];
r[n] = sum;
}
return (r);
}
