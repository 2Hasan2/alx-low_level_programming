#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: test number
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (primeME(2, n));
}
/**
 * primeME - checks if a number is prime
 * @x: test number
 * @n: number to check
 * Return: 1 if @n is prime, 0 otherwise
 */
int primeME(int x, int n)
{
if (x == n)
return (1);
else if (n % x == 0)
return (0);
return (primeME(x + 1, n));
}
