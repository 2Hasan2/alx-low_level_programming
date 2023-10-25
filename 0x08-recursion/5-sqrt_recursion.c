#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: test number
 * Return: the square root of @n
 */
/**
 * sqrtME - returns the natural square root of a number
 * @n: test number
 * @x: number to find the square root of
 * Return: the square root of @n
 */
int sqrtME(int n, int x)
{
if (n > x / 2)
return (-1);
else if (n * n == x)
return (n);
return (sqrtME(n + 1, x));
}
int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
return (n);
return (sqrtME(0, n));
}
