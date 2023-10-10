#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    long int a = 1, b = 2, next, i;

    printf("%ld, %ld", a, b);

    for (i = 2; i < 50; i++)
    {
        next = a + b;
        printf(", %ld", next);
        a = b;
        b = next;
    }

    printf("\n");

    return (0);
}

