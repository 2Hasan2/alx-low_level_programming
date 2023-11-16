#include <stdio.h>

void __attribute__((constructor)) pre_main(void);

/**
 * pre_main - Function to be executed before main.
 * It prints the specified message.
 */
void pre_main(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
