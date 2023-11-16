#include <stdio.h>

/**
 * pre_main - Function to be executed before main.
 * It prints the specified message.
 */
void __attribute__((constructor)) pre_main(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
 * main - The main function.
 * It prints a message.
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
